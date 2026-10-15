#include <stdio.h>
#include <stdlib.h> // Required for abs()

void update(int *a, int *b) {
    // Store the original value of *a temporarily before updating it
    int temp = *a;
    
    // Set *a to their sum
    *a = temp + *b;
    
    // Set *b to their absolute difference
    *b = abs(temp - *b);
}

int main() {
    int a, b;
    scanf("%d %d", &a, &b);
    update(&a, &b);
    printf("%d\n%d", a, b);

    return 0;
}
