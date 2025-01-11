#include <stdio.h>

int main() {
    int N, S, C, H, L, T;

    // Read input values
    scanf("%d %d %d %d %d %d", &N, &S, &C, &H, &L, &T);

    // Check if N is greater than L
    if (N > L) {
        // Adjust N
        N = N - L;

        // Calculate H
        H = S * C;

        // Check for division by zero
        if (T != 0) {
            T = H / T;  // Update T
        } else {
            printf("Error: T cannot be zero.\n");
            return 1; // Exit with error code
        }

        // Final condition check
        if (N > T) {
            printf("Padhai karenge\n"); // We will study
        }
    } else {
        printf("Goa Jaayenge\n"); // We will go to Goa
    }

    return 0; // Successful termination
}
