// Question 57
// Find the sum of array elements.

#include <stdio.h>

int main(){
    int i,  sum=0;
float average;

    int arr[5]= {4,6,8,2,3};

    for(i=0;i<5;i++)
    {
        sum=sum + arr[i];
    }

    average= (float)sum/5.0;

    printf("SUM = %d\n",sum);
    printf("AVERAGE = %.2f", average); 

    return 0;
}