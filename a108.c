#include<stdio.h>
void copy_string(char *dest, char *src);
int compare_strings(char *str1, char *str2);
void concat_strings(char *dest, char *src1, char *src2);
void reverse_string(char *str);
int main(void){
    char src[] = "Hello, World!";
    char dest[20];
    copy_string(dest, src);
    printf("Copied string: %s\n", dest);
    char str1[] = "Hello, World!";
    char str2[] = "Hello, World!";
    if (compare_strings(str1, str2)) {
        printf("Strings are equal\n");
    } else {
        printf("Strings are not equal\n");
    }
    char src1[] = "Hello, ";
    char src2[] = "World!";
    char dest2[20];
    concat_strings(dest2, src1, src2);
    printf("Concatenated string: %s\n", dest);
    char str3[] = "Hello, World!";
    reverse_string(str3);
    printf("Reversed string: %s\n", str2);
    return 0;
    
}
//function of copying the string

void copy_string(char *dest, char *src) {
    int i = 0;
    while (src[i] != '\0') {
        dest[i] = src[i];
        i++;
    }
    dest[i] = '\0';
}
// functionof comaring the string

int compare_strings(char *str1, char *str2) {
    int i = 0;
    while (str1[i] != '\0' && str2[i] != '\0') {
        if (str1[i] != str2[i]) {
            return 0; // strings are not equal
        }
        i++;
    }
    if (str1[i] == '\0' && str2[i] == '\0') {
        return 1; // strings are equal
    } else {
        return 0; // strings are not equal
    }
}

// function of Concatenate two strings

void concat_strings(char *dest, char *src1, char *src2) {
    int i = 0;
    while (src1[i] != '\0') {
        dest[i] = src1[i];
        i++;
    }
    int j = 0;
    while (src2[j] != '\0') {
        dest[i + j] = src2[j];
        j++;
    }
    dest[i + j] = '\0';
}
// function for Reverse a given string

void reverse_string(char *str) {
    int i = 0;
    int j = 0;
    while (str[i] != '\0') {
        i++;
    }
    i--;
    while (i >= 0) {
        str[j] = str[i];
        i--;
        j++;
    }
    str[j] = '\0';
}



