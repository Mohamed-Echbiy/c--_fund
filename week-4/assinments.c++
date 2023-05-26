#include <iostream>

void ch_1()
{
    std::cout << "---------challenge_1---------\n";
    int num = 3;
    std::cout << num + num << "\n";                                 // 6
    std::cout << num * num - num << "\n";                           // 6
    std::cout << (++num /*4*/ + ++num /*5*/) - --num /*4*/ << "\n"; // 6
    std::cout << (num % num + --num /*3*/) + num << "\n";
    std::cout << (num - num) + (num + num) << "\n";                       // 6
    std::cout << (num + num) * (num / num) << "\n";                       // 6
    std::cout << (++num /*4*/ * num /*4*/) % (++num /*5*/ + num) << "\n"; // 6
};

void ch_2()
{
    std::cout << ((10 * 20) * (15 / 3) - (190 + 10)) % 400 << "\n"; // 0
}

int main()
{
    ch_1();
    ch_2();
    return 0;
};