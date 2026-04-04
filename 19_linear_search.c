#include <stdio.h>

int main() {
    int limit; // reading limit
    printf("Enter the limit : ");
    scanf("%d", &limit);

    int arr[limit]; // creating array

    // reading array element
    for (int i = 0; i < limit; i++) {
        printf("Enter element : ");
        scanf("%d", &arr[i]);
    }

    // read element to search
    int search_num, found=0;
    printf("Enter the element to be searched : ");
    scanf("%d", &search_num);

    // search through array
    for (int i = 0; i < limit; i++) {
        if (arr[i] == search_num) {
            printf("Element found at index %d\n", i);
			found = 1;
        }
    }

    // when no match founded
	if (found == 0) printf("Element not found");
    return 0;
}