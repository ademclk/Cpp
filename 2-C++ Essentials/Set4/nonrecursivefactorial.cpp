#include <cstdio>

int factorial(int x);


int main(){

	printf("Factorial of 6 = %d\n ", factorial(6));
	
	return 0;
}

int factorial(int x) {

	int sum = 1;

	for (int i = 1; i <= x; i++) {
		sum *= i;
	}

	return sum;
}
