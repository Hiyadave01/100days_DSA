#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n, target;

    // Input number of elements
    printf("Enter number of elements: ");
    scanf("%d", &n);

    // Dynamic memory allocation
    int *nums = (int*)malloc(n * sizeof(int));
    if(nums == NULL)
    {
        printf("Memory allocation failed\n");
        return 1;
    }

    // Input array elements
    printf("Enter %d elements:\n", n);
    for(int i = 0; i < n; i++)
    {
        scanf("%d", nums + i);   // pointer input (same as &nums[i])
    }

    // Input target
    printf("Enter target value: ");
    scanf("%d", &target);

    // Two Sum Logic (Brute Force)
    for(int i = 0; i < n; i++)
    {
        for(int j = i + 1; j < n; j++)
        {
            if(*(nums + i) + *(nums + j) == target)
            {
                printf("Indices: %d %d\n", i, j);
                free(nums);
                return 0;
            }
        }
    }

    printf("No pair found\n");

    free(nums);
    return 0;
}
