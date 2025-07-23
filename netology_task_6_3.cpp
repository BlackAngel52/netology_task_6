#include <iostream>

// рекурсия
/*int fib(int num) {
    if (num <= 1){
        return num;
    }
    else {

        return fib(num - 1) + fib(num - 2);
    }
}
*/

// способ для 80+-ого числа Фибоначчи
long long fib(int num) {

    long long currValue{0};
    long long prevValue{1};
    long long prevPrevValue{1};

    if (num == 0) {
        return 0;
    }
    else if (num <= 2) {
        return 1;
    }
    else {
        for (int i = 2; i < num; ++i) {
            currValue = prevPrevValue + prevValue;
            prevPrevValue = prevValue;
            prevValue = currValue;
        }
        return currValue;
    }
}


int main()
{
    int num{};
    std::cout << "Enter number of Fibbonachi's sequence: " << std::endl;
    std::cin >> num;

    for (int i = 0; i < num; ++i) {
        std::cout << fib(i) << " ";
    }
    
    return 0;
}
