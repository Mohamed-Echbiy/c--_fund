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

void ch_3()
{
    // Do Not Edit
    int num = 3;

    /*
      Write Code Here
      Do Not Use num = 6 :)
    */

    num += 3;

    // Do Not Edit
    std::cout
        << num << "\n"; // 6
};

void ch_4()
{
    std::cout << (int(10.5) * 5) + (int(40.5) + int(10.1)) << "\n"; // 100
};

void ch_5()
{
    // Assign The Values
    char a = 100;
    char b = 90;
    char c = 10;

    // Do Not Edit
    std::cout << b * c + a << "\n"; // 1000
};

void ch_6()
{
    using namespace std;
    /*
  We Need To Use This Operators In Solutions
  - &&
  - >=
  - <=
  - >
  - <
  - ==
  - !
  - ||
*/

    int a = 10;
    int b = 25;
    int c = 15;

    cout << (a < b) << "\n";           // True
    cout << (c > a) << "\n";           // True
    cout << (a + c == b) << "\n";      // True
    cout << !(c < a) << "\n";          // True
    cout << !(c > b) << "\n";          // True
    cout << (b > a && b > c) << "\n";  // True
    cout << !(a >= b) << "\n";         // True
    cout << !(a > b && b < a) << "\n"; // True
};
int main()
{
    ch_1();
    std::cout << "----------------------------\n";
    ch_2();
    std::cout << "----------------------------\n";
    ch_3();
    std::cout << "----------------------------\n";
    ch_4();
    std::cout << "----------------------------\n";
    ch_5();
    std::cout << "----------------------------\n";
    ch_6();
    std::cout << "-------------------------\n";
    int a = 10;
    int b = 20;

    std::cout << a + b * a + (b + a) * (a * a) << "\n"; // I am to lazy to start calculating the idea is to use ()

    // Hint For Help
    return 0;
};

// 20 +30 = 50
// b* a =200 ; a*a =100