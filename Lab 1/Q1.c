#include <stdio.h>
#include <stdlib.h>

int main()
{
    int emp_id;
    int hrs;
    float amount;
    printf("Enter employee id\n");
    scanf("%d",&emp_id);
    printf("Enter hrs worked in a month\n");
    scanf("%d",&hrs);
    printf("Enter pay per hour\n");
    scanf("%f",&amount);
    printf("Employee id:%d\n",emp_id);
    printf("Employee salary:%.2f\n", hrs*amount);
    return 0;
}
