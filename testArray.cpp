#include <iostream>
#include <string.h>
#include <assert.h>
#include <stdio.h>
#include <math.h>
#include <stdlib.h>

typedef struct FmtInfo
{
    int fmtLen; // foramt长度
    int intLen; // 整数部分长度
    int decLen; // 小数部分长度
    int bPointLen; // 小数点前的长度
    bool integerFlag; // 整数标志
    int commaArray[70];
    int commaSize;
} FmtInfo;

void fmtInfoInit(FmtInfo &fmtInfo, int formatLen) {
    fmtInfo.fmtLen = formatLen;
    fmtInfo.intLen = 0;
    fmtInfo.decLen = 0;
    fmtInfo.bPointLen = 0;
    fmtInfo.integerFlag = true;
    memset(fmtInfo.commaArray, 0, sizeof(fmtInfo.commaArray));
    fmtInfo.commaSize = 0;
}

void fmtInfoDeal(const char *format, FmtInfo &fmtInfo) {
    int i;
    int j = 0;
    for (i = 0; i < fmtInfo.fmtLen; i++) {
        if ('.' == format[i]) {
            fmtInfo.integerFlag = false;
            continue;
        }
        if (fmtInfo.integerFlag) {
            if ('9' == format[i]) {
                fmtInfo.intLen++;
            }
            if (',' == format[i]) {
                fmtInfo.commaArray[j++] = i;
                fmtInfo.commaSize++;
            }
            fmtInfo.bPointLen++;
        } else {
            fmtInfo.decLen++;
        }
    }
}

void exceptionDeal(const char *format, int formatLen) {
    if (formatLen > 64) {
        perror("error 63");
        exit(0);
    }
    if (format[0] == ',') {
        perror("error format comma");
        exit(0);
    }

    int pointPos = -1;
    for (int i = 0; i < formatLen; i++) {
        if (format[i] != '9' && format[i] != '.' && format[i] != ',') {
            perror("error format period");
            exit(0);
        }
        if (format[i] == '.') {
            if (pointPos == -1) {
                pointPos = i;
            } else {
                perror("error format period");
                exit(0);
            }
        }
        if (format[i] == ',') {
            if (i > pointPos && pointPos != -1) {
                perror("error format comma");
                exit(0);
            }

        }

    }
}

void formatCopy(FmtInfo &fmtInfo, int numIntLen, char *numStr, char *dst) {
    int i, j, k; //index of dst format numStr
    int numBPointLen = 1;
    int commaNum = 0;
    bool minusFlag = (*numStr == '-' ? 1 : 0);
    if (numIntLen == -1) {
        numIntLen = 1;
        if (fmtInfo.integerFlag) {
            minusFlag = false;
        } else {
            minusFlag = true;
        }

    }
       // 整数部分和点copy
    if (fmtInfo.intLen == 0) {  // . .99 ''
        if (minusFlag) {
            dst[0] = '-';
        } else {
            dst[0] = ' ';
        }
        if (!fmtInfo.integerFlag) {
            dst[1] = '.';
        }
        if (numIntLen == 0) {
            numBPointLen++;
        }
    } else { // 99. 99 99.99  9,9. 99, 9,9.99
        if (numIntLen == 0) {
            numBPointLen++;
            for (i = 0; i < fmtInfo.bPointLen; i++) {
                dst[i] = ' ';
            }
            if (minusFlag) {
                dst[fmtInfo.bPointLen] = '-';
            } else {
                dst[fmtInfo.bPointLen] = ' ';
            }
            if (!fmtInfo.integerFlag) { // 99. 99.99 9,9. 9,9.99
                dst[fmtInfo.bPointLen+1] = '.';
            }
        } else {
            numBPointLen += numIntLen;
            if (!fmtInfo.integerFlag) { // 99. 99.99 9,9. 9,9.99
                dst[fmtInfo.bPointLen+1] = '.';
            }
            for (j = 0; j < fmtInfo.commaSize ; j++) { // comma deal
                dst[fmtInfo.commaArray[j]+1] = ',';
            }
            j = fmtInfo.commaSize - 1;
            k = numBPointLen - 1;
            for (i = fmtInfo.bPointLen; i >= 0; i--) {
                if (fmtInfo.commaSize == 0) { // 99. 99.99 99
                    if (k > 0) {
                        dst[i] = numStr[k--];
                    } else {
                        dst[i] = ' ';
                    }
                } else { // 9,9 9,9. 9,9.99
                    if (k > 0) {
                        if(i != (fmtInfo.commaArray[j]+1)) {
                            dst[i] = numStr[k--];
                        } else {
                            if (j > 0) {
                                j--;
                            }
                        }
                    } else {
                        dst[i] = ' ';
                    }
                }
            }
            if (minusFlag) {
                dst[fmtInfo.bPointLen-fmtInfo.commaSize-numIntLen] = '-';
            } else {
                dst[fmtInfo.bPointLen-fmtInfo.commaSize-numIntLen] = ' ';
            }
        }
    }
    // 小数部分copy
    i = fmtInfo.bPointLen + 2;
    k = numBPointLen + 1;
    for (j=0; j < fmtInfo.decLen; j++) {
        dst[i++] = numStr[k++];
    }
}

int getNumIntLen(double number, int decLen) {
    double decTmp = pow(10, decLen);
    double fabsTmp = fabs(round(number*decTmp)/decTmp);
    double logTmp = log10(fabsTmp);
    std::cout << "numIntLen = " << logTmp+1 << std::endl;
    return logTmp + 1;
}

void precisionDeal(char *numStr, FmtInfo &fmtInfo) {
// 精度处理
    int count = 0, i = 1;
    bool startFlag = true;
    for (; numStr[i] != 0 && count < 15; i++) {
        if (startFlag && numStr[i] != '0' && numStr[i] != '.') {
            startFlag = false;
        }
        if (!startFlag && numStr[i] != '.') {
            count++;
        }
    }
    for (; numStr[i] != 0; i++) {
        if (numStr[i] != '.') {
            numStr[i] = '0';
        }
    }
    std::cout << "precisionDeal numStr = " << numStr << std::endl;
}

void doubleTypeDeal(char *numStr, FmtInfo &fmtInfo, double number) {
    if (fmtInfo.integerFlag) {
        sprintf(numStr, "%+.0lf", number);
    } else {
        sprintf(numStr, "%+.*lf", fmtInfo.decLen, number);
    }
    precisionDeal(numStr, fmtInfo);
}

int main(int argc, char *argv[])
{
    exceptionDeal(argv[2], strlen(argv[2]));
    FmtInfo fmtInfo;
    fmtInfoInit(fmtInfo, strlen(argv[2]));
    fmtInfoDeal(argv[2], fmtInfo);
    std::cout << "fmtLen = " << fmtInfo.fmtLen << std::endl;
    std::cout << "intLen = " << fmtInfo.intLen << std::endl;
    std::cout << "decLen = " << fmtInfo.decLen << std::endl;
    std::cout << "bPointLen = " << fmtInfo.bPointLen << std::endl;
    std::cout << "integerFlag = " << fmtInfo.integerFlag << std::endl;
    std::cout << "commaSize = " << fmtInfo.commaSize << std::endl;
    for (int i = 0; i < fmtInfo.commaSize; i++) {
        std::cout << "commaArray[" << i << "] = " << fmtInfo.commaArray[i] << std::endl;
    }
    int numIntLen = 0;
    bool minusFlag = true;
    int i = 0;
    char numStr[70] = {0};
    char dstStr[70] = {0};
    double number;
    sscanf(argv[1], "%lf", &number);
    std::cout << "number " << number << std::endl;
    doubleTypeDeal(numStr, fmtInfo, number);
    numIntLen = getNumIntLen(number, fmtInfo.decLen);
    formatCopy(fmtInfo, numIntLen, numStr, dstStr);
    std::cout << "formatStr = " << "123456789012345678901234567890" << std::endl;
    std::cout << "formatStr = " << argv[2] << std::endl;
    std::cout << "dstStr = " << "123456789012345678901234567890" << std::endl;
    std::cout << "dstStr = " << dstStr << std::endl;
    return 0;
}

