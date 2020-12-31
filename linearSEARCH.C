#include <stdio.h>
 
void main()
{  
 
   int i,num,find,no_of_com=0,flag= 0;
 
    printf("Enter the number of elements :");
    scanf("%d", &num);
    int array[num];
    printf("Enter the elements one by one :\n");
    for (i = 0; i < num; i++)
    {
        scanf("%d", &array[i]);
    }
 
    printf("Enter the element to be searched :");
    scanf("%d", &find);
    
    for (i = 0; i < num ; i++)
    {
        ++no_of_com;
        if (find== array[i] )
        {   
            flag = 1;
            break;
        }
    }
    if (flag == 1)
       {
        printf("Element is present in the array at position %d \n",i+1);
        printf("There has been %d comparisons done",no_of_com);
       }
    else
        {
            printf("Element is not present in the array\n");
        printf("\n there has been %d comparisons done",no_of_com);
}}
