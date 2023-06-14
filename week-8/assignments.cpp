#include <iostream>
#include <array>
using namespace std;

void ch_1()
{

    // For Output
    array<int, 11> nums = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    for (int i = 0; i < nums.size(); i++)
    {
        cout << nums[i] << "\n";
    }

    // While Output

    cout << "<======================>\n";

    short while_nums = 0;
    while (while_nums < 11)
    {
        cout << while_nums << "\n";
        while_nums++;
    }

    // Do While Output
    cout << "<======================>\n";
    short do_while_num = 0;
    do
    {
        if (do_while_num >= 11)
        {
            break;
        }

        cout << do_while_num << "\n";
        do_while_num++;
    } while (true);
};

void ch_2()
{
    short index = 2;
    for (;;) // <= Do Not Edit This Line
    {
        if (index > 8)
        {
            break;
        }
        cout << index << "\n"; // From 2 To 10
        index++;
    }

    // Output
    // 2 3 4 5 6 7 8
};

void ch_3()
{
    int input_1;
    int input_2;
    cout << "please write two numbers to extract range between them\n";
    cout << "first number ";
    cin >> input_1;
    cout << "\n";
    cout << "last number ";
    cin >> input_2;
    cout << "\n";
    int smallest = input_1 > input_2 ? input_2 : input_1;
    int largest = input_1 < input_2 ? input_2 : input_1;

    do
    {
        if (smallest == largest)
        {
            break;
        }
        smallest++;
        if (smallest % 2 == 0)
        {
            continue;
        }
        cout << smallest << ", ";

    } while (smallest != largest - 1);
    cout << "\n";

    /*
      Test Case 1
      Number One: 1
      Number Two: 9
      Output: 3, 5, 7

      Test Case 2
      Number One: 2
      Number Two: 15
      Output: 3, 5, 7, 9, 11, 13

      Test Case 3
      Number One: 8
      Number Two: 2
      Output: 3, 5, 7
    */
};

void ch_4()
{

    int index = 0;
    while (index <= 18)
    {
        if (index > 8 && index < 14)
        {
            index += 2;
            continue;
        }
        cout << index << "\n";
        index += 2;
    }
    cout << "<======================>\n";
    cout << "with for loop \n";
    cout << "<======================>\n";
    for (int i = 0; i < 19; i += 2)
    {
        if (i > 8 && i < 14)
        {
            continue;
        }
        cout << i << "\n";
    }
};

void ch_5()
{
    int index = 0;
    while (index <= 27)
    {
        cout << index << "\n";
        index += 3;
    }
    cout << "<======================>\n";
    cout << "with for loop \n";
    cout << "<======================>\n";
    for (int i = 0; i < 28; i += 3)
    {
        cout << i << "\n";
    }
};
// ch_6 && ch_7 are the same concept

void ch_8()
{

    int index = 2;
    int how_many_loop = 6;
    while (how_many_loop > 1)
    {
        index = (index * 2) + 2;
        cout << index << "\n";
        how_many_loop -= 1;
    }

    cout << "<======================>\n";
    cout << "with for loop \n";
    cout << "<======================>\n";

    how_many_loop = 6;
    int number = 2;
    for (int i = 1; how_many_loop > i; i++)
    {
        number = (number * 2) + 2;
        cout << number << "\n";
    }
    // Output Needed
    // 2 6 14 30 62 126
}

int main()
{

    cout << "======================\n";
    ch_1();
    cout << "======================\n";
    ch_2();
    cout << "======================\n";
    ch_3();
    cout << "======================\n";
    ch_4();
    cout << "======================\n";
    ch_5();
    cout << "======================\n";
    ch_8();
    cout << "======================\n";
    return 0;
}