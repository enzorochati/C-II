#include <stdio.h>

// Function to increment the value pointed to by the pointer
void calculate(int* c2) {
    // Print the value and memory address of the integer before the increment
    printf("calculate %d %p\n", *c2, (void*)c2);
    
    // Increment the value pointed to by the pointer
    (*c2)++;
    
    // Print the value and memory address of the integer after the increment
    printf("calculate %d %p\n", *c2, (void*)c2);
}

int main() {
    // Declare and initialize an integer variable 'c' to 10
    int c = 10;

    // Print the value and memory address of 'c' before calling the function
    printf("main %d %p\n", c, (void*)&c);
    
    // Call the function 'calculate' passing the address of 'c' as argument
    calculate(&c);
    
    // Print the value and memory address of 'c' after calling the function
    printf("main %d %p\n", c, (void*)&c);
    
    return 0;
}
