
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

void calculate_the_maximum(int n, int k) {
    int max_and = 0;
    int max_or = 0;
    int max_xor = 0;

    // Iterate through all possible pairs (a, b) such that 1 <= a < b <= n
    for (int i = 1; i <= n; i++) {
        for (int j = i + 1; j <= n; j++) {
            
            // Check Bitwise AND
            int and_val = i & j;
            if (and_val > max_and && and_val < k) {
                max_and = and_val;
            }

            // Check Bitwise OR
            int or_val = i | j;
            if (or_val > max_or && or_val < k) {
                max_or = or_val;
            }

            // Check Bitwise XOR
            int xor_val = i ^ j;
            if (xor_val > max_xor && xor_val < k) {
                max_xor = xor_val;
            }
        }
    }

    // Print the maximum values on separate lines
    printf("%d\n", max_and);
    printf("%d\n", max_or);
    printf("%d\n", max_xor);
}

int main() {
    int n, k;
  
    scanf("%d %d", &n, &k);
    calculate_the_maximum(n, k);
 
    return 0;
}
