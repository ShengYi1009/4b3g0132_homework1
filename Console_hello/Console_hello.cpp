// Console_hello.cpp : 此檔案包含 'main' 函式。程式會於該處開始執行及結束執行。
//

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
        std::cout << "結果: " << result << std::endl;
        std::cout << "是否繼續(y/n): ";
        std::cin >> ch;
        if (ch != 'y') break;
    }
}
