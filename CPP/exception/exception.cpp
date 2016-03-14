#include <iostream>
#include <exception>
__thread Status *pStatus;
class Status {
public:
    Status() : m_NormatFlag(true), m_ExceptionType(Exception::ERROR_UNKNOWN) {}
    
    ~Status()

    void setStatus(Exception::ErrorCode ecode) {
        if (m_NormatFlag) {
            m_NormatFlag = false;
            m_ExceptionType = ecode;
        } else {
            std::cout << "new ErrorCode is" << ErrorCode << std::endl;
        }
    }
    
private:
    bool m_NormatFlag;
    Exception::ErrorCode m_ExceptionType;        
}
class Wrapper {
public:
    Wrapper() {
        pStatus = &m_curStatus;
    }

     ~Wrapper() {
        if (!m_curStatus.isNormal()) {
            throw long;
        }
        throw double;
    }

private:
    Status m_curStatus;
}

void funcException1() {
    int i = 1;
    throw i;
}
int main(int argc, char *argv[])
{
    try {
        try {
            funcException1();
        } catch (int) {
            std::cout << "funcException" << std::endl;
        }
        long j = 2;
        throw j;
    } catch (long) {
        std::cout << "funcException2"  << std::endl;
    }
    return 0;
}


