#include<stdio.h>

int main() {
    int n;
    scanf("%d", &n);  // Get input number
    
    // Loop through each digit of the number
    while (n > 0) {
        int digit = n % 10;  // Extract the last digit

        // Check if the digit is 3 or 9
        if (digit == 3 || digit == 9) {
            printf("yes");
            return 0;  // Exit after finding the lucky digit
        }

        n = n / 10;  // Remove the last digit
    }

    // If no lucky digit is found
    printf("no");
    return 0;
}
