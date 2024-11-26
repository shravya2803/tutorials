#include <stdio.h>

// Define an array of structures to store color information
typedef struct {
    char name[20];
    char hexCode[8];
} ColorInfo;

ColorInfo colors[] = {
    {"Red", "#FF0000"},
    {"Green", "#00FF00"},
    {"Blue", "#0000FF"},
    {"Yellow", "#FFFF00"},
    {"Purple", "#FF00FF"},
    {"Orange", "#FFA500"}
};

int main() {
    int colorNumber;
    printf("Enter a color number (1-6):\n");
    scanf("%d", &colorNumber);

    // Use a loop to display the color information
    for (int i = 0; i < 6; i++) {
        if (i == colorNumber - 1) {
            printf("%s: %s\n", colors[i].name, colors[i].hexCode);
            break;
        }
    }

    return 0;
}