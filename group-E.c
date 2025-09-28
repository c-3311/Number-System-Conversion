#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Function to convert decimal to binary
void decToBinary(int n) {
    if (n == 0) {
        printf("0");
        return;
    }
    int binary[32], i = 0;
    while (n > 0) {
        binary[i++] = n % 2;
        n = n / 2;
    }
    for (int j = i - 1; j >= 0; j--)
        printf("%d", binary[j]);
}

// Function to convert decimal to octal
void decToOctal(int n) {
    printf("%o", n);
}

// Function to convert decimal to hexadecimal
void decToHex(int n) {
    printf("%X", n);
}

// Function to convert binary to decimal
int binaryToDec(char *bin) {
    return (int)strtol(bin, NULL, 2);
}

// Function to convert octal to decimal
int octalToDec(char *oct) {
    return (int)strtol(oct, NULL, 8);
}

// Function to convert hexadecimal to decimal
int hexToDec(char *hex) {
    return (int)strtol(hex, NULL, 16);
}

// Conversion helpers via decimal
void binaryToOctal(char *bin) {
    int dec = binaryToDec(bin);
    decToOctal(dec);
}

void binaryToHex(char *bin) {
    int dec = binaryToDec(bin);
    decToHex(dec);
}

void octalToBinary(char *oct) {
    int dec = octalToDec(oct);
    decToBinary(dec);
}

void octalToHex(char *oct) {
    int dec = octalToDec(oct);
    decToHex(dec);
}

void hexToBinary(char *hex) {
    int dec = hexToDec(hex);
    decToBinary(dec);
}

void hexToOctal(char *hex) {
    int dec = hexToDec(hex);
    decToOctal(dec);
}

// Main Program
int main() {
    int choice, num;
    char input[50];

    while (1) {
        printf("\n--- Number System Conversion ---\n");
        printf("1. Decimal to Binary\n");
        printf("2. Decimal to Octal\n");
        printf("3. Decimal to Hexadecimal\n");
        printf("4. Binary to Decimal\n");
        printf("5. Octal to Decimal\n");
        printf("6. Hexadecimal to Decimal\n");
        printf("7. Binary to Octal\n");
        printf("8. Binary to Hexadecimal\n");
        printf("9. Octal to Binary\n");
        printf("10. Octal to Hexadecimal\n");
        printf("11. Hexadecimal to Binary\n");
        printf("12. Hexadecimal to Octal\n");
        printf("13. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter decimal number: ");
                scanf("%d", &num);
                printf("Binary: ");
                decToBinary(num);
                printf("\n");
                break;

            case 2:
                printf("Enter decimal number: ");
                scanf("%d", &num);
                printf("Octal: ");
                decToOctal(num);
                printf("\n");
                break;

            case 3:
                printf("Enter decimal number: ");
                scanf("%d", &num);
                printf("Hexadecimal: ");
                decToHex(num);
                printf("\n");
                break;

            case 4:
                printf("Enter binary number: ");
                scanf("%s", input);
                printf("Decimal: %d\n", binaryToDec(input));
                break;

            case 5:
                printf("Enter octal number: ");
                scanf("%s", input);
                printf("Decimal: %d\n", octalToDec(input));
                break;

            case 6:
                printf("Enter hexadecimal number: ");
                scanf("%s", input);
                printf("Decimal: %d\n", hexToDec(input));
                break;

            case 7:
                printf("Enter binary number: ");
                scanf("%s", input);
                printf("Octal: ");
                binaryToOctal(input);
                printf("\n");
                break;

            case 8:
                printf("Enter binary number: ");
                scanf("%s", input);
                printf("Hexadecimal: ");
                binaryToHex(input);
                printf("\n");
                break;

            case 9:
                printf("Enter octal number: ");
                scanf("%s", input);
                printf("Binary: ");
                octalToBinary(input);
                printf("\n");
                break;

            case 10:
                printf("Enter octal number: ");
                scanf("%s", input);
                printf("Hexadecimal: ");
                octalToHex(input);
                printf("\n");
                break;

            case 11:
                printf("Enter hexadecimal number: ");
                scanf("%s", input);
                printf("Binary: ");
                hexToBinary(input);
                printf("\n");
                break;

            case 12:
                printf("Enter hexadecimal number: ");
                scanf("%s", input);
                printf("Octal: ");
                hexToOctal(input);
                printf("\n");
                break;

            case 13:
                printf("Exiting...\n");
                exit(0);

            default:
                printf("Invalid choice! Try again.\n");
        }
    }

    return 0;
}