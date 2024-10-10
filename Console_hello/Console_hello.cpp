// Console_hello.cpp : 此檔案包含 'main' 函式。程式會於該處開始執行及結束執行。
//

#include <iostream>

void printMultiplicationTable(int n) {
    for (int i = 1; i <= n; ++i) {
        for (int j = 1; j <= n; ++j) {
            std::cout << i << "*" << j << "=" << i * j << "\t";
        }
        std::cout << std::endl;
    }
}

int main()
{
    int n = 1;
    std::cout << "請輸入乘法表的大小: ";
    std::cin >> n;

    printMultiplicationTable(n);

    return 0;
}
