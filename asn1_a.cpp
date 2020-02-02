#include <stdio.h>
#include <stdlib.h>
//name: Jia Wang #: 251041197

unsigned long fibo(unsigned long int n)
{
    if(n <= 1)
        return n;
    else
        return fibo(n-1) + fibo(n-2);
}
int main()
{

    unsigned long  n = 10;
    unsigned long  fiboNum;
    for(int i = 0; i<=10; i++) {
        fiboNum=fibo(i*5);
        printf(" F(%lu*5) result is %lu\n", i, fiboNum);
    }
    return 0;
}