// Question 65
// Search in a sorted array using binary search.

#include <stdio.h>

int main()
{

    int a[5] = {8,11, 36, 54, 70, 80};
    int n = 5, x, low = 0, high = 4, mid;

    printf("Enter element: ");
    scanf("%d", &x);

    while(low <= high)
    {
        mid = (low + high) / 2;

        if(a[mid] == x)
        {
            printf("Found");
            return 0;
        }

        if(a[mid] < x)
            low = mid + 1;
        else
            high = mid - 1;
    }

    printf("Not found");

    return 0;
}
