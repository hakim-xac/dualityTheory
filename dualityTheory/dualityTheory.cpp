#include <iostream>
#include "Solution.h"


int main(int argc, char** argv)
{
    std::setlocale(LC_ALL, "");

    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    KHAS::Solution solution{ "Решение задачи линейного программирования, теория двойственности" };

    solution.start();



    system("pause");
}