#include <stdio.h>
#include <stdlib.h>

int main()
{
    int arr[10];
    int i=0,x,num,flag=0;
    printf("please enter the numbers:\n");
    do
    {
        scanf("%i",&x);
        arr[i]=x;
        i++;
    }
    while(i<10);
    i=0;
    printf("Array is :");
    while(i<10)
    {
        printf("%i",arr[i]);
        i++;
    }
    printf("Which number you want to search :");
    scanf("%i",&num);
    for(int i=0; i<10; i++)
    {
        if(arr[i]==num)
        {
            flag=1;
            printf("the number in index :%i",i);
            break;
        }

    }
    if(flag==0)
    {
        printf("the number is not found");
    }


    return 0;
}
