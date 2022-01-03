// count elements.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <cstdio>

const char string[] = "This is a null-terminated string.";

int main()
{
    int count = 0;

    for (const char* p = string; *p; p++) {
        if (*p == 0) break;
        count++;
    }

    printf("The number of characters is: %d\n", count);
    return 0;
}
