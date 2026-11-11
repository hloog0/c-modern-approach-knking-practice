#include <stdio.h>

#define MAX_NUMS 10
// write a program that asks user a series of integers
// store in an array then sorts the integers by calling
// selection sort
// selection_sort() must search array for largest element then move it to last position
// must call itself recursively to sort the first n-1 elements of the array

// assumes valid inputs

void selection_sort(int n, int nums[n]);

int main(void) {
    int nums[MAX_NUMS] = {0};
    int index = 0;

    printf("Enter %d integers individually.\n", MAX_NUMS);

    while (index < MAX_NUMS) {
        printf("Enter: ");
        scanf("%d", &nums[index]);
        index++;
    }
    
    printf("You entered the series: [%d", nums[0]);
    for (int i = 1; i < MAX_NUMS; i++) {
        printf(", %d", nums[i]);
    }
    printf("]\n");

    selection_sort(MAX_NUMS, nums);

    printf("Your sorted array is: [%d", nums[0]);
    for (int i = 1; i < MAX_NUMS; i++) {
        printf(", %d", nums[i]);
    }
    printf("]\n");

    return 0;
}

void selection_sort(int n, int nums[n]) {
    if (n <= 1) {
        return;
    }

    int highest = nums[0], highest_index = 0, last_num = nums[n-1];
    
    // find highest in array
    for (int i = 1; i < n; i++) {
        if (nums[i] > highest) {
            highest = nums[i];
            highest_index = i;
        }
    }

    // swap highest with last index
    nums[n-1] = highest;
    nums[highest_index] = last_num;

    selection_sort(n - 1, nums);
}