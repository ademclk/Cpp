#include <iostream>
using namespace std;

void printNumbers()
{
    int n = 1;
label:
    cout << n << " ";
    n++;
    if (n <= 10)
        goto label;
}

int main(){

    int i = 10;
    
    if (i == 10){
        if (i<15)
        {
            cout << "i is smaller than 15\n";
        }
        if (i<12){
            cout << "i is smaller than 12\n";
        }
        else {
            cout << "i is greater than 15";
        }        
    }

    int i = 20;
  
    if (i == 10)
        cout<<"i is 10";
    else if (i == 15)
        cout<<"i is 15";
    else if (i == 20)
        cout<<"i is 20";
    else
        cout<<"i is built different";
     
    printNumbers();
    
    return 0;
}