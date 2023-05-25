#include <iostream>
#include <limits.h>

// Example
// false // bool => Boolean

//'a'// char => Character
//'9'// char => Character
// 9 // int => Number
// true// bool => Boolean
// 100// int => Number
//-10// int => Number
// 0// int => Number
// false// bool => Boolean
// 10.9// float or double => Number

// double salary = 5000.98;
// int main(){
//     std:: cout <<sizeof(salary) << "\n";
//     std::cout <<  sizeof(salary) * sizeof(salary);
// }

void double_to_float()
{
    std::cout << "----- double to float------\n";
    std::cout << sizeof(10.5f + 5 + 20.5f + 10) << "\n"; // 8
};

void char_to_ascii()
{
    std::cout << "\n-----------character to ascii ------------\n";
    char a = '~';
    char b = '&';
    char c = '%';
    char d = 'A';
    std::cout << "a = " << int(a) << "- b = " << int(b) << "- c = " << int(c) << "- d = " << int(d);
};

void ascii_to_char()
{
    std::cout << "\n-----------ascii to character  ------------\n";
    int a = 69;
    int b = 108;
    int c = 122;
    int d = 101;
    int e = 114;
    int f = 111;
    // Output Needed
    //"Character Of This ASCII Value 69 Is E"
    //"Character Of This ASCII Value 108 Is l"
    //"Character Of This ASCII Value 122 Is z"
    //"Character Of This ASCII Value 101 Is e"
    //"Character Of This ASCII Value 114 Is r"
    //"Character Of This ASCII Value 111 Is o"

    // Output Needed In Last Line
    //"Elzero"
    std::cout << "a = " << char(a) << "- b = " << char(b) << "- c = " << char(c) << "- d = " << char(d) << "- e = " << char(e) << "- f = " << char(f) << "\n";
    std::cout << char(a) << char(b) << char(c) << char(e) << char(d) << char(f);
};

void let_get_ews()
{
    std::cout << "\n----------- return EWS ------------\n";
    int a = 1;
    int b = 13;
    int c = 17;
    int d = 70;

    // Output Needed
    // EWS"
    std::cout << char(d - 1) << char(d + c) << char(d + b);
};

void challenge_8()
{
    std::cout << "\n----------- challenge 8 ------------\n";
    // Edit Anything Except Values
    short int a = 100;
    long long int b = 15001500;
    long double c = 100.54565746;

    // Do Not Edit
    std::cout << sizeof(a) << " Bytes\n"; // 2 Bytes
    std::cout << sizeof(b) << " Bytes\n"; // 8 Bytes
    std::cout << sizeof(c) << " Bytes\n"; // 16 Bytes
};

void challenge_9()
{
    std::cout << "\n----------- challenge 9 ------------\n";
    // Edit Anything Except Values
    unsigned int a = 100;
    signed int b = -100;
    short c = 100;
    double d = 500.55;

    // Do Not Edit
    std::cout << a << "\n"; // 100
    std::cout << b << "\n"; // -100
    std::cout << c << "\n"; // 100
    std::cout << d << "\n"; // 500.55
};

void challenge_10()
{
    std::cout << "\n----------- challenge 10 ------------\n";
    // Add Type Alias Here
    using lli = long long; // answer //
    /* typedef long long lli;*/
    // Do Not Edit
    // template <typename lli , long long >;
    lli num = 150050005;      // This Is Long Long Int
    std::cout << num << "\n"; // 150050005
};

void challenge_11()
{
    std::cout << "\n----------- challenge 11 ------------\n";
    // Do Not Edit Here
    short int a = 100;
    float b = 98.5f;
    double c = 1.7;

    // Edit This Line And Use Type Casting To Get The Output
    std::cout << a + int(b + c) << "\n"; // 200
};

void challenge_12()
{
    std::cout << "\n----------- challenge 12 ------------\n";
    // Do Not Edit Here
    short a = 1000;
    int b = 10000;
    long double c = 5.560000505012;

    // Change ??? To Something Else To Get The Output
    std::cout << sizeof(c) - sizeof(b) << "\n";                             // 12
    std::cout << int(int(c) * sizeof(a)) + int(int(c) * sizeof(a)) << "\n"; // 20
    std::cout << sizeof(c) * sizeof(a) << "\n";                             // 32
    std::cout << int(c) * a << "\n";                                        // 5000
    std::cout << char(sizeof(c) * int(c)) << "\n";                          // P // 80
};

int main()
{
    std::cout << "\n-----------Output max Integers ------------\n";
    // "Maximum Integer Number Is => 2147483647"
    // "Minimum Integer Number Is => -2147483648"
    // "Maximum Short Integer Number Is => 32767"
    // "Minimum Short Integer Number Is => -32768"
    std::cout << INT32_MAX << "\n";
    std::cout << INT32_MIN << "\n";
    std::cout << INT16_MAX << "\n";
    std::cout << INT16_MIN << "\n";
    double_to_float();
    char_to_ascii();
    ascii_to_char();
    let_get_ews();
    challenge_8();
    challenge_9();
    challenge_10();
    challenge_11();
    challenge_12();
}
// Edit Line To Make 8 Become 4
