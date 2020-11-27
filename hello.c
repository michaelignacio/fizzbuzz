#include <stdio.h>
#include <math.h>
#include <stdbool.h>

bool solve(x, y) {
	float result = x / y;
	int i = (int)floor(result);
	int z = i * y;

	if (x == z) {
		return true;
	}

	return false;
}

int main() {
	int i = 1;

	while (i <= 100) {
		if (solve(i,3) && solve(i,5)) {
			// divide i by 3 and 5 and if both quotients are an exact number (integer), it is divisible by both 3 and 5
			// if it is a float, then it is not divisible by 3 and 5
			printf("FizzBuzz\n");
		// } else if (i%3 == 0) {
		} else if (solve(i, 3)) {
			// divide i by 3 and if the quotient is an exact number (integer), it is divisible by 3
			// if it is a float, then it is not divisible by 3
			printf("Fizz\n");
		} else if (solve(i, 5)) {
			// divide i by 5 and if the quotient is an exact number (integer), it is divisible by 5
			// if it is a float, then it is not divisible by 5
			printf("Buzz\n");
		} else {
			printf("%d\n", i);
		}
		i++;
	}

	return 0;
}
