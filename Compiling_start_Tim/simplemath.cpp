#include <iostream>
#include "simplemath.h"

void sayHello()
{
    std::cout << "Hello world!" << std::endl;
}

int multiply(int a, int b)
{
    int c = a * b;
    return c;
}

int sumOfNumbersFromOneTo(int o)
{
    int i, sum = 0;

    for (i = 1; i <= o; i++)
    {
        sum = sum + i;
    }

    return sum;
}