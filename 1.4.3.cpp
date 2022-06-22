#include <iostream>

int main(void)
{
    int sum = 0, value = 0;
    while (std::cin >> value) //遇到EOF或读取数据错误时返回假
    {
        sum += value;
    }

    std::cout << "sum is : " << sum << std::endl;
}