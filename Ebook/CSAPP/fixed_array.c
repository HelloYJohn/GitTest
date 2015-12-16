int main(void)
{
    int a[5];
    int i, sum;
    for(i = 0; i < 5; i++) {
        a[i] = i * 3;
    }
    for(i = 0; i < 5; i++) {
        sum += a[i];
    } 
    return sum;
}
