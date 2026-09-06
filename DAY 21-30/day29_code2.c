// Question 58
// Find the maximum and minimum element in an array.

#include <stdio.h>

int main(){
    int i,largest = 0,smallest ;

    int arr[5]= {10,45,3,57,27};

    for (i=0;i<5;i++)
    {
        if(arr[i]>largest)
        largest=arr[i];

        if(arr[i]<smallest)
        smallest=arr[i];
    }

    printf("Largest Array = %d\n", largest);
    printf("Smallest Array = %d\n", smallest);


    return 0;
}