#include <iostream>
// pass by reference
void swap(int& a, int& b) noexcept
{
    const int temp = a;
    a = b;
    b = temp;
}

// pass by pointer
void swap(int* a, int* b) noexcept
{
    const int temp = *a;
    *a = *b;
    *b = temp;
}



int main()
{
    /*std::cout << "Hello, World!" << std::endl;

    double price = 42.1;
    std::cout << sizeof(price) << std::endl;
    double* p_price = &price;
    std::cout << *p_price << std::endl;
    *p_price += 1;
    std::cout<< p_price << std::endl;
    std::cout << (p_price + 1 ) << std::endl;

    double price2 = 42.1;
    double* p_price2 = &price2;
    std::cout << p_price2 << std::endl;
    std::cout << (p_price2 + 1) << std::endl; */

    int num = 5;
    int num2 = 10;
    std::cout << "num: " << num << " num2: " << num2 << std::endl;
    swap(num, num2);
    std::cout << "num: " << num << " num2: " << num2 << std::endl;




    return 0;
}
