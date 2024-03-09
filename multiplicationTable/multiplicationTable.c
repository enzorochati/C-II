#include <stdio.h>

// Function to display the title of the multiplication table
void opening(int m){
	printf("Multiplication Table of %d\n\n", m);
}

int main() {
	int multiplier = 2;

	// Display the title of the multiplication table
	opening(multiplier);

	// Display the multiplication table for the given multiplier
	for(int i = 1; i <= 10; i++){
		printf("%d x %d = %d\n", multiplier, i, multiplier * i);
	}
}
