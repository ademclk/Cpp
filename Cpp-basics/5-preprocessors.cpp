#include <iostream>

#define LIMIT 5
#define AREA(l, b) (l * b)

int main()
{
    
    for (int i = 0; i < LIMIT; i++){
        std::cout << i << "\n";
    }
    
    int l1 = 10, l2 = 5, area;

    area = AREA(l1, l2);

    std::cout << "Area of rectangle is: " << area;

    return 0;
}
