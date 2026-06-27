#include <stdio.h>

struct Product
{
    int id;
    char name[50];
    int quantity;
    float price;
};

int main() {
    // Write a program to create an inventory management system

    struct Product products[100];
    int count = 0;
    int choice;

    do {

        printf("INVENTORY MANAGEMENT SYSTEM\n");
        printf("Options: \n");
        printf("1. Add products\n");
        printf("2. Display all products\n");
        printf("3. Search Product\n");
        printf("4. Update product\n");
        printf("5. Delete Product\n");
        printf("6. Add Stock\n");
        printf("7. Sell product\n");
        printf("8. Calculate total inventory value\n");
        printf("9. Exit");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Enter the ID of the product: ");
            scanf("%d", &products[count].id);

            printf("Enter the name of the product: ");
            scanf("%s", products[count].name);

            printf("Enter the quantity of the product: ");
            scanf("%d", &products[count].quantity);

            printf("Enter the price of the product: ");
            scanf("%f", &products[count].price);

            count++;
            break;

        case 2:
            for(int i = 0; i < count; i++) {
                printf("\nID: %d", products[i].id);
                printf("\nName: %s", products[i].name);
                printf("\nQuantity: %d", products[i].quantity);
                printf("\nPrice: %f", products[i].price);
            }

            break;

        case 3: 
            int i_d;
            int found = 0;

            printf("Enter the id of the product to be searched: ");
            scanf("%d", &i_d);

            for(int i = 0; i < count; i++) {
                if(products[i].id == i_d) {
                    printf("\nID: %d", products[i].id);
                    printf("\nName: %s", products[i].name);
                    printf("\nQuantity: %d", products[i].quantity);
                    printf("\nPrice: %f", products[i].price);
                    found = 1;
                }
            }

            if(found == 0) {
                printf("Product not found\n");
            }

            break;

        case 4: 
            found = 0;

            printf("Enter Product ID to update: ");
            scanf("%d", &i_d);

            for (int i = 0; i < count; i++) {
                if (products[i].id == i_d) {

                    printf("Enter new product name: ");
                    scanf(" %s", products[i].name);

                    printf("Enter new quantity: ");
                    scanf("%d", &products[i].quantity);

                    printf("Enter new price: ");
                    scanf("%f", &products[i].price);

                    printf("Product updated successfully!\n");
                    found = 1;
                    break;
                }
            }

            if (!found) {
                printf("Product not found!\n");
            }
            break;

        case 5: 
            found = -1;

            printf("Enter Product ID to delete: ");
            scanf("%d", &i_d);

            // Search for the product
            for (int i = 0; i < count; i++) {
                if (products[i].id == i_d) {
                    found = i;
                    break;
                }
            }

            if (found == -1) {
                printf("Product not found!\n");
            } else {
                // Shift remaining products to the left
                for (int i = found; i < count - 1; i++) {
                    products[i] = products[i + 1];
                }

                count--;

                printf("Product deleted successfully!\n");
            }
            break;

        case 6: 
            found = 0;
            int addQty;

            printf("Enter Product ID: ");
            scanf("%d", &i_d);

            for (int i = 0; i < count; i++) {
                if (products[i].id == i_d) {

                    printf("Enter quantity to add: ");
                    scanf("%d", &addQty);

                    products[i].quantity += addQty;

                    printf("Stock updated successfully!\n");
                    printf("Current Quantity: %d\n", products[i].quantity);

                    found = 1;
                    break;
                }
            }

            if (!found) {
                printf("Product not found!\n");
            }
            break;

        case 7:     
            found = 0;
            int sellQty;

            printf("Enter Product ID: ");
            scanf("%d", &i_d);

            for (int i = 0; i < count; i++) {
                if (products[i].id == i_d) {

                    printf("Enter quantity to sell: ");
                    scanf("%d", &sellQty);

                    if (sellQty <= products[i].quantity) {
                        products[i].quantity -= sellQty;

                        printf("Product sold successfully!\n");
                        printf("Remaining Stock: %d\n", products[i].quantity);
                    } else {
                        printf("Insufficient stock!\n");
                    }

                    found = 1;
                    break;
                }
            }

            if (!found) {
                printf("Product not found!\n");
            }
            break;

        case 8: 
            float totalValue = 0;

            for (int i = 0; i < count; i++) {
                totalValue += products[i].quantity * products[i].price;
            }

            printf("Total Inventory Value: %.2f\n", totalValue);
            break;

        case 9: 
            printf("Exiting...\n");
            break;
        
        default:
            break;
        }

    } while (choice != 9);
}