#include<iostream>

using namespace std;

const int LIMIT = 5;

int arr[LIMIT];
float sum;
float average;

int main(){
    arr[0] = 3;
    arr[1] = 8;
    arr[2] = 12;
    arr[3] = 4;
    arr[4] = 6;

    sum = arr[0] + arr[1] + arr[2] + arr[3] + arr[4];
    
    cout << "Sum of integers: " << sum << endl;
    cout << "Average of " << LIMIT << " integers: " << sum / LIMIT << endl;
    return 0;
}