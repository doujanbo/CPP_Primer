#include <iostream>

int main(void)
{
    int i = 123;
    int & j = i;
    int & k = j;    //可以申明引用的引用
    int * p = &k;
    int *&r = p;     //r是指针的引用

    std::cout << k << std::endl;
    std::cout << *p << std::endl;
    std::cout << ii << std::endl;
}