#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num, *arr /*, arr2*/, i;
    scanf("%d", &num);
    arr = (int*) malloc(num * sizeof(int));
    for(i = 0; i < num; i++) {
        scanf("%d", arr + i);
    }


    /* Write the logic to reverse the array. */
//Way 1
//    arr2 = (int*) malloc(num * sizeof(int));
//    for(i = 0; i < num; i++)
//    {
//        arr2[i] = * (arr + ((num-1)-i));
//    }
//    arr = arr2;
//-------------------------------
//Way 2
    int temp = 0;
    int size = (int) (num/2);
    //printf("Output\n");
    for(i = 0; i < size; i++)
    {
         temp = *(arr + i);
         arr[i] = * (arr + ((num-1)-i));
         arr[(num-1)-i] = temp;
    }
//-------------------------------
    for(i = 0; i < num; i++)
        printf("%d ", *(arr + i));
    free(arr);
    return 0;
}
