#include <iostream>
using namespace std;

// This code will NOT work perfectly. Just to show different types of loops.

int main(){

    printf("Hello.\n");
    printf("Hello.\n");
    printf("Hello.\n");
    printf("Hello.\n");
    printf("Hello.\n");
    printf("Hello.\n");
    printf("Hello.\n");
    printf("Hello.\n");
    printf("Hello.\n");
    printf("Hello.\n");

    
    for (int i=0 ; i<10; i++){
        printf("Hello.\n");
    }

    int i = 0;
    while(i<10){
        printf("Hello.\n");
        i++;
    }

    int i = 0;
    
    {
        printf("Hello.\n");
        i++;
    } while (i<10);
    
    return 0;
}