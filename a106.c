
#include <stdio.h>

typedef struct {
    char item_name[50];
    int quantity;
    float price;
    float amount;
} Item;

void readItem(Item *item) {
    printf("Enter item name: ");
    scanf("%s", item->item_name);
    
    printf("Enter quantity: ");
    scanf("%d", &item->quantity);
    
    printf("Enter price: ");
    scanf("%f", &item->price);
    
    item->amount = item->quantity * item->price;
}

void printItem(const Item *item) {
    printf("\nItem Name: %s\n", item->item_name);
    printf("Quantity: %d\n", item->quantity);
    printf("Price: %.2f\n", item->price);
    printf("Amount: %.2f\n", item->amount);
}

int main() {
    Item item;
    
    readItem(&item);
    printItem(&item);

    return 0;
}
