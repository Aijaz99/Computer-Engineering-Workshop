#include <stdio.h>
#include <stdlib.h>

int main()
{
    int height;

    printf("Enter height:\n");
    scanf("%d",&height);
    if (height<150){
        printf("Person is DWARF");
    } else if (height==150){
        printf("Person is AVERAGE");
    } else if (height>=150){
        printf("Person is TALL");
    }


    return 0;
}
