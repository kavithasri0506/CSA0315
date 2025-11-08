#include<stdio.h>
int main()
{
    int A[100],n, key, flag = 0, pos = -1, i;
    printf("Enter the number of elements: ");
    scanf("%d", &n);

    printf("Enter the array elements:\n");
    for(i = 0; i < n; i++)
        scanf("%d", &A[i]);

    printf("Enter the element to search: ");
    scanf("%d", &key);   

    for(i = 0; i < n; i++)
    {
        if(A[i] == key)
        {
            pos = i + 1;
            flag = 1;
            break;
        }
    }

    if(flag == 1)
        printf("The element %d is at position %d\n", key, pos);
    else
        printf("The element is not in the list\n");

    return 0;
}

