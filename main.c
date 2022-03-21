#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, *arr , *arr2, i;
    scanf("%d", &num);
    arr = (int*) malloc(num * sizeof(int));
    for(i = 0; i < num; i++) 
    {
        scanf("%d", arr + i);
    }
//Way 1
    arr2 = (int*) malloc(num * sizeof(int));
    for(i = 0; i < num; i++)
    {
       arr2[i] = * (arr + ((num-1)-i));
    }
    arr = arr2;
//-------------------------------
    for(i = 0; i < num; i++)
        printf("%d ", *(arr + i));
    free(arr);
    free(arr2);
    return 0;
}
