#include <stdio.h>
#include <stdlib.h>
int fib(int n){
    if (n<=1){
            return n;
    } else  {
        return fib(n-1) + fib(n-2);
    }

}

int main()
{
    int num, i;

    printf("Enter no.of terms\n");
    scanf("%d",&num);
    for (i=0; i<num; i++){
            printf("%d",fib(i));
    }


    return 0;
}
