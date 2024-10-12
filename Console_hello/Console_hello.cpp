// 4B3G0132 徐勝益 四則運算 程式作業。

#include <iostream>
#include"Calculator.h"

int main()
{
    double x, y, result;
    char oper;

    Calculator c;
    while (true)
    {
        char ch;
        std::cout << "請輸入運算子: ";
        std::cin >> x >> oper >> y;
        result = c.Calculate(x, oper, y);
        std::cout << "= " << result << std::endl;
        std::cout << "是否繼續(y/n): ";
        std::cin >> ch;
        if (ch != 'y') break;
    }
}
