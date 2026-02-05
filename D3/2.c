#include <stdio.h>

int missingNum(int arr[], int n)
{
    long long expectedSum = (long long)n * (n + 1) / 2;
    long long actualSum = 0;

    for(int i = 0; i < n-1; i++)
    {
        actualSum += arr[i];
    }

    return (int)(expectedSum - actualSum);
}

int main()
{
    int n;

    printf("Enter the range (n): ");
    scanf("%d", &n);

    int arr[n-1];

    printf("Enter %d elements:\n", n-1);
    for(int i = 0; i < n-1; i++)
    {
        scanf("%d", &arr[i]);
    }

    int result = missingNum(arr, n);

    printf("Missing number: %d\n", result);

    return 0;
}
