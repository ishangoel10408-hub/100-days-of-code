// Q60: Count positive, negative, and zero elements in an array.

#include <stdio.h>

int main(){
    int i, positive=0, negative=0, zeroes=0 ;

    int arr[10]={34,-7,0,63,-76,-23,45,0,-9,18};

    for(i=0;i<10;i++)
    {
        if(arr[i]>0)
        positive++;

        else if(arr[i]<0)
        negative++;

        else
        zeroes++;
    }

    printf("Positive Numbers = %d\n", positive);
    printf("Negative Numbers = %d\n", negative);
    printf("Zeroes = %d\n", zeroes);
    return 0;
}
