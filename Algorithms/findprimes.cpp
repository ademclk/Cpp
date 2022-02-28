#include <iostream>
#include <cstdio>

using namespace std;

int primeArray[100];
int array1[100] = { 2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25 };


void findPrimes(int array1[]) {
    int k = 0;

    for (int i = 0; i < 24; i++) {
        if (array1[i] == 0 || array1[i]== 1) {      // This line checks for the 0s which was replaced by 24th block of code.
            continue;
        }
        else {
            if ((array1[i] % array1[i]) == 0) {
                primeArray[k] = array1[i];
                k++;
            }
            for (int j = i+1; j < 24 ; j++){        // This block will eliminate the multiplies of array1 i of the whole list.
                if ((array1[j] % array1[i]) == 0 ){
                        array1[j] = 0;              // Instead of removing an item from the list we replace multiplies by 0.
                    }
                else{
                        continue;
                    }
                }
            }
        }
    }



int main() {
    int k = 0;
    printf("Given array: ");
    while (array1[k] != 0) {
        printf("%d ", array1[k]);
        k++;
    }
    printf("\n");

    findPrimes(array1);

    int i = 0;
    printf("Array after the algorithm: ");
    while (primeArray[i] != 0){
        printf("%d ", primeArray[i]);
        i++;
    }

    return 0;
}