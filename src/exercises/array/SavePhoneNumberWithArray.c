#include <stdio.h>

int main() {
    int phoneNumber[11], index;
    
    printf("Please input phone number:\n");

    for (index = 0; index < 11; index++) {
        // When you input a phone number with space divide
        scanf("%d", &phoneNumber[index]);
    }

    printf("Phone number is:");

    for (index = 0; index < 11; index++) {
        printf("%d", phoneNumber[index]);
    }

    printf("\n");

    return 0;
}