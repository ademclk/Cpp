// This is a code to find prime numbers between 0-100

#include <iostream>
#include <cstdio>

int main(){
	bool isPrime = false;

	for (int number = 2; number < 100; ++number){
		
		isPrime = true;
		
		for (int factor = 2; factor < number; ++factor)	{
			if (number %factor == 0){
				isPrime = false;
				break;
			}
		}

		if (isPrime){
			printf("%d ", number);
		}


	}






}
