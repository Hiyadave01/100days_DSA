// Problem : Implement linear search to find key k in an array. Count and display the number of comparisons performed.
#include <stdio.h>
int main()
{
    int n, key, found = -1, comparisons = 0;
    printf("Enter no of elements:\n");
    scanf("%d", &n);
    int A[n];
    printf("Enter the elements:");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &A[i]);
    }
    printf("Enter the key to be searched :");
    scanf("%d", &key);

    for (int i = 0; i < n; i++)
    {
        comparisons++;
        if (A[i] == key)
        {
            found = i;
            break;
        }
    }
    if (found != -1)
    {
        printf("The key is found at %d\n", found + 1);
    }
    else
    {
        printf("The key is not found in the array\n");
    }
    printf("The no of comparisons are %d\n", comparisons);
    return 0;
}
