#include <stdio.h>
#include <stdlib.h>

int main()
{
    int height;
    int width;
    printf("Enter height\n");
    scanf("%d",&height);
    printf("Enter width\n");
    scanf("%d",&width);
    printf("Perimeter:%d\n", 2*height + 2*width);
    printf("Area:%d\n", height*width);

    return 0;
}
