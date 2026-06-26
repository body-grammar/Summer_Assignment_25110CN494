#include <stdio.h>

int main() {
    // Write a program to create a menu-driven array operations system

    int choice;
    int arr[100];
    int n = 0;

    do {

        printf("\nARRAY OPERATION SYSTEM\n");
        printf("Options: \n");
        printf("1. Create Array\n");
        printf("2. Display Array\n");
        printf("3. Insert Element\n");
        printf("4. Delete Element\n");
        printf("5. Search Element\n");
        printf("6. Update Element\n");
        printf("7. Find Maximum\n");
        printf("8. Find Minimum\n");
        printf("9. Find Sum\n");
        printf("10. Find Average\n");
        printf("11. Sort Array\n");
        printf("12. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Enter the number of elements in the array: ");
            scanf("%d", &n);

            printf("Enter the elements of the array: \n");
            for(int i = 0; i < n; i++) {
                scanf("%d", &arr[i]);
            }

            printf("Array created!\n");
            break;

        case 2:
            printf("The array: \n");
            for(int i = 0; i < n; i++) {
                printf("%d\t", arr[i]);
            }

            break;

        case 3:
            int sea, pos;

            printf("Enter the element to be inserted: ");
            scanf("%d", &sea);

            printf("Enter the position at which the element needs to be inserted: ");
            scanf("%d", &pos);

            int ind = pos - 1;

            if(pos < 1 || pos > n+1) {
                printf("Invalid position\n");
            } else {
                for(int i = n; i > ind; i--) {
                    arr[i] = arr[i-1];
                }

                arr[ind] = sea;

                n++;

                printf("Element inserted!\n");
            }

            break;

        case 4:
            printf("Enter the position of the element to delete: ");
            scanf("%d", &pos);

            ind = pos - 1;

            if (pos < 1 || pos > n) {
                printf("Invalid position\n");
            } else {
                // Shift elements to the left
                for (int i = ind; i < n - 1; i++) {
                    arr[i] = arr[i + 1];
                }

                n--;

                printf("Element deleted successfully!\n");
            }
            break;

        case 5:
            int element;
            int found = 0;

            printf("Enter the element to search: ");
            scanf("%d", &element);

            for (int i = 0; i < n; i++) {
                if (arr[i] == element) {
                    printf("Element found at position %d (index %d)\n", i + 1, i);
                    found = 1;
                    break;
                }
            }

            if (!found) {
                printf("Element not found.\n");
            }
            break;

        case 6:
            int newElement;

            printf("Enter the position of the element to update: ");
            scanf("%d", &pos);

            if (pos < 1 || pos > n) {
                printf("Invalid position\n");
            } else {
                printf("Enter the new element: ");
                scanf("%d", &newElement);

                arr[pos - 1] = newElement;

                printf("Element updated successfully!\n");
            }
            break;

        case 7:
            int max = arr[0];

            for(int i = 0; i < n; i++) {
                if(arr[i] > max) {
                    max = arr[i];
                }
            }

            printf("The maximum value in the array is: %d", max);

            break;

        case 8: 
            int min = arr[0];

            for(int i = 0; i < n; i++) {
                if(arr[i] < min) {
                    min = arr[i];
                }
            }

            printf("The minimum value in the array is: %d", min);
            break;

        case 9: 
            int sum = 0; 

            for(int i = 0; i < n; i++) {
                sum += arr[i];
            }

            printf("The sum of the elements of the array is %d\n", sum);
            break;

        case 10:
            float ave;
            sum = 0;

            for(int i = 0; i < n; i++) {
                sum += arr[i];
            }

            ave = (float)sum/n;

            printf("The average of the elements of the array is %f\n", ave);
            break;

        case 11: 
            for(int i = 0; i < n-1; i++) {
                for(int j = 0; j < n-1-i; j++) {
                    if(arr[j] > arr[j+1]) {
                        int temp = arr[j];
                        arr[j] = arr[j+1];
                        arr[j+1] = temp;
                    }
                }
            }

            printf("Array sorted!\n");
            break;

        case 12:
            printf("Exiting...\n");
            break;

        default:
            printf("Invalid choice!\n");
            break;

        }
         
    } while (choice != 12);

    return 0;
}