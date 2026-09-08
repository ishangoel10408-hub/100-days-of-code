// Q59: Count even and odd numbers in an array.

#include <stdio.h>

int main(){
    int i,even=0,odd=0;

    int arr[10]={34,23,5,63,76,23,45,22,69,44};

    for(i=0;i<10;i++)
    {
        if(arr[i]%2==0)
        even++;

        else
        odd++;
    }

    printf("Even Numbers = %d\n", even);
    printf("Odd Numbers = %d\n", odd);
    return 0;
}