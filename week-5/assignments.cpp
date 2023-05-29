#include <iostream>
using namespace std;

void ch_1()
{

    int age = 40;
    int points = 800;
    float rate = 8.5f;

    // Your Condition Here
    if (age > 18 && points > 500 && rate > 5)
        cout << "Yes Age > 18 & Points > 500 & Rate > 5\n";
    // Output Needed If All Conditions Is True
};

void ch_2()
{

    // Test Case 1
    int age = 18;
    int points = 450;
    if (age > 18)
        cout << "your age is Ok\n";
    else
        cout << "your age not Ok!\n";
    if (points > 500)
        cout << "you pass\n";
    else
        cout << "you nedd more points >500\n";
};
void ch_3()
{
    int num;
    cout << "Please Type A Number Between 0 And 150\n";
    cin >> num;

    if (num < 10)
        cout << "00" << num << "\n";
    else if (num >= 10 && num < 100)
        cout << "0" << num << "\n";
    else
        cout << num << "\n";
    // If Number Smaller Than 10 "Example 5" Output Will Be => 005
    // If Number Larger Than 10 And Smaller Than 100 "Example 59" Output Will Be => 059
    // If Number Larger Than 100 "Example 115" Output Will Be => 115
};

void ch_4()
{
    int num1 = 8;
    int num2 = 3;
    int num3 = 8;
    int num4 = 34;

    // Do Not Edit Any Condition

    // Condition 1
    if (num1 > num2)
        cout << "Condition 1 Is True\n";
    else
        cout << "Condition 1 Is False\n";

    // Condition 2
    if (num1 > num2 && num1 < num4)
        cout << "Condition 2 Is True\n";
    else
        cout << "Condition 2 Is False\n";

    // Condition 3
    if (num1 > num2 && num1 == num3)
        cout << "Condition 3 Is True\n";
    else
        cout << "Condition 3 Is False\n";

    // Condition 4
    if (num1 + num2 < num4)
        cout << "Condition 4 Is True\n";
    else
        cout << "Condition 4 Is False\n";

    // Condition 5
    if (num1 + num3 < num4)
        cout << "Condition 5 Is True\n";
    else
        cout << "Condition 5 Is False\n";

    // Condition 6
    if (num1 + num2 + num3 < num4)
        cout << "Condition 6 Is True\n";
    else
        cout << "Condition 6 Is False\n";

    // Condition 7
    if (num4 - (num1 + num3) + num2 == 21)
        cout << "Condition 7 Is True\n";
    else
        cout << "Condition 7 Is False\n";

    // Output Needed
    // "Condition 1 Is True"
    // "Condition 2 Is True"
    // "Condition 3 Is True"
    // "Condition 4 Is True"
    // "Condition 5 Is True"
    // "Condition 6 Is True"
    // "Condition 7 Is True"
};

void ch_5()
{
    int by = 82; // by => Birth Year
    int s = 500; // s => Salary
                 // if (by > 80)
                 // {
                 //     if (s < 600)
                 //         cout << "Ok\n";
                 //     else
                 //         cout << "High\n";
                 // }
                 // else
                 // {
                 //     cout << "Not Ok\n";
                 // }
    cout << ((by > 80) ? ((s < 600) ? "Ok\n" : "High\n") : "Not Ok\n");
};
void ch_6()
{
    short age = 40;
    int points = 100;

    if (age > 18 && points > 50)
    {
        cout << "Age Data Is 4 Bytes\n";
        cout << "Age Is Ok\n";
        cout << "Points Is Ok\n";
    }

    // // Output Needed
    // "Age Data Is 4 Bytes"
    // "Age Is Ok"
    // "Points Is Ok"
};

void ch_7()
{
    int result = 0;
    int num1, num2, num3, num4;
    cout << "Please Type 4 Number In A Row\n";
    cout << "Please after each number please press enter for to enter next number\n";
    cout << "Only Even Numbers Smaller Than 20 Will Be Counted\n";
    cin >> num1 >> num2 >> num3 >> num4;

    if (num1 % 2 == 0 && num1 < 20)
        result += num1;
    if (num2 % 2 == 0 && num2 < 20)
        result += num2;
    if (num3 % 2 == 0 && num3 < 20)
        result += num3;
    if (num4 % 2 == 0 && num4 < 20)
        result += num4;
    cout << result << "\n";
    /*
      Test Case 1
      Numbers => 15, 16, 22, 8
      Result => 24

      "Explain"
      Starting Result Is 0
      [Number 1] 15 => Not Even Number
      [Number 2] 16 => Smaller Than 20 And Even Number
      0 + 16 = 16
      [Number 3] 22 => Not Smaller Than 20
      [Number 4] 8  => Smaller Than 20 And Even Number
      16 + 8 = 24

      =================================

      Test Case 2
      Numbers => 100, 11, 12, 18
      Result => 24

      "Explain"
      Starting Result Is 0
      [Number 1] 100 => Not Smaller Than 20
      [Number 2] 11  => Not Even Number
      [Number 3] 12  => Smaller Than 20 And Even Number
      0 + 12 = 12
      [Number 4] 18  => Smaller Than 20 And Even Number
      12 + 18 = 30
    */
};

int main()
{
    ch_1();
    cout << "---------------------\n";
    ch_2();
    cout << "---------------------\n";
    ch_3();
    cout << "---------------------\n";
    ch_4();
    cout << "---------------------\n";
    ch_5();
    cout << "---------------------\n";
    ch_6();
    cout << "---------------------\n";
    ch_7();
    cout << "---------------------\n";
    return 0;
};