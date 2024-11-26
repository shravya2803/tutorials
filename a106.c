#include <stdio.h>

// Define the structure
typedef struct {
    char item_name[20];
    int quantity;
    float price;
    float amount;
} Item;

// Function to read item details and calculate amount
void read_item(Item *item) {
    printf("Enter item name: ");
    scanf("%s", item->item_name);
    printf("Enter quantity: ");
    scanf("%d", &item->quantity);
    printf("Enter price: ");
    scanf("%f", &item->price);
    item->amount = item->quantity * item->price;
    printf("Amount: %.2f\n", item->amount);
}

int main() {
    Item item;
    read_item(&item);
    return 0;
}
