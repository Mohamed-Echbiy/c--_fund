#include <iostream>
#include <array>
using namespace std;

void ch_1()
{
    int nums[]{100, 300, 600, 900};
    string awards[]{"iPhone", "iPad", "PC", "Car"};

    // Output Needed
    cout << "Number" << nums[0] << "Award Is:" << awards[0];
    cout << "Number" << nums[1] << " Award Is:" << awards[1];
    cout << "Number" << nums[2] << "Award Is:" << awards[2];
    cout << "Number" << nums[3] << "Award Is:" << awards[3];
};

void ch_2()
{
    // Example 1
    int check = 25;
    int nums[]{40, 20, 30, 70, 100};

    // Ouput
    // "{40} + {70} = 110"
    if (check > nums[0])
        cout << nums[0] + nums[3];
    if (check > nums[1])
        cout << nums[1] + nums[3];
    if (check > nums[2])
        cout << nums[2] + nums[3];
    cout << "->->->->->->\n";

    // Example 2
    nums[0] = 20;
    nums[3] = 30;
    nums[1] = 35;

    if (check > nums[0])
        cout << nums[0] + nums[3];
    if (check > nums[1])
        cout << nums[1] + nums[3];
    if (check > nums[2])
        cout << nums[2] + nums[3];
    cout << "->->->->->->\n";

    // Ouput
    // "{35} + {70} = 105"

    // Example 2
    nums[1] = 25;
    nums[2] = 30;

    if (check > nums[0])
        cout << nums[0] + nums[3];
    if (check > nums[1])
        cout << nums[1] + nums[3];
    if (check > nums[2])
        cout << nums[2] + nums[3];
    cout << "->->->->->->\n";

    // Ouput
    // "{30} + {70} = 100"
    // if only I know something to loop over the numbers
};
void ch_3()
{
    int filling = 10;
    int vals[]{100, 200, 300, 400};

    // Write One Line Of Code Here To Fill Array Value With Number 10
    vals[0] = vals[1] = vals[2] = vals[3] = 10;
    cout << vals[0] << "\n"; // 10
    cout << vals[1] << "\n"; // 10
    cout << vals[2] << "\n"; // 10
    cout << vals[3] << "\n"; // 10
}
void ch_4()
{
    // Example 1
    int vals[]{100, 200, 250, 400, 200};

    if (vals[0] + vals[3] > vals[2])
    {
        cout << "true\n";
    }
    else if (vals[1] + vals[3] > vals[2])
    {
        cout << "true\n";
    }
    else
    {
        cout << "false\n";
    }
    // Needed Output
    // "First Number + Last Number Is Larger Than Middle Number"
    // "100 + 200 = 300"
    // "300 > 250"

    // Example 2
    int vals_a[]{100, 200, 500, 400, 200};

    if (vals_a[0] + vals_a[3] > vals_a[2])
    {
        cout << "true\n";
    }
    else if (vals_a[1] + vals_a[3] > vals_a[2])
    {
        cout << "true\n";
    }
    else
    {
        cout << "false\n";
    }

    // Needed Output
    // "Second Number + Before Last Number Is Larger Than Middle Number"
    // "200 + 400 = 600"
    // "600 > 500"

    // Example 3
    int vals_b[]{100, 200, 600, 400, 200};

    if (vals_b[0] + vals_b[3] > vals_b[2])
    {
        cout << "true\n";
    }
    else if (vals_b[1] + vals_b[3] > vals_b[2])
    {
        cout << "true\n";
    }
    else
    {
        cout << "false\n";
    }

    // Needed Output
    // "Middle Number Is The Largest"
    // "600"
}

void ch_5()
{
    // Example 1
    int vals[] = {100, 200, 600, 200, 100};

    // Output
    // "Array Is Palindrome"

    if (vals[0] == vals[4] && vals[1] == vals[3])
        cout << "Array Is Palindrome\n";
    else
        cout << "Array Is not Palindrome\n";
    // Example 2
    int vals_a[] = {100, 200, 200, 100};

    if (vals_a[0] == vals_a[3] && vals_a[1] == vals_a[2])
        cout << "Array Is Palindrome\n";
    else
        cout << "Array Is not Palindrome\n";
    // Output
    // "Array Is Palindrome"

    // Example 3
    int vals_b[] = {100, 300, 600, 200, 100};

    if (vals_b[0] == vals_b[4] && vals_b[1] == vals_b[3])
        cout << "Array Is Palindrome\n";
    else
        cout << "Array Is not Palindrome\n";

    // Output
    // "Array Is Not Palindrome"
}

void ch_6()
{

    int vals[] = {10, 20, 30};

    // Write Your Code Here

    vals[0] *= 10;
    vals[1] *= 10;
    vals[2] *= 10;

    cout << vals[0] << "\n"; // 100
    cout << vals[1] << "\n"; // 200
    cout << vals[2] << "\n"; // 300
};

void ch_7()
{
    // Create The Array Here

    string names[3][3] = {

        {"Ahmed", "Sayed", "Mahmoud"},
        {"Sameh", "Mahdy", "Gamal"},
        {"Mohamed", "Adel", "Majed"}};

    cout
        << "First Collection Of Names:\n";
    cout << names[0][0] << "\n"; // Ahmed
    cout << names[1][1] << "\n"; // Mahdy
    cout << names[2][2] << "\n"; // Majed

    cout << "Second Collection Of Names:\n";
    cout << names[2][1] << "\n"; // Adel
    cout << names[1][2] << "\n"; // Gamal
    cout << names[0][2] << "\n"; // Mahmoud

    cout << "Third Collection Of Names:\n";
    cout << names[0][1] << "\n"; // Sayed
    cout << names[1][0] << "\n"; // Sameh
    cout << names[2][0] << "\n"; // Mohamed
};

void ch_8()
{

    // Your Code Here
    array<int, 3> nums = {};
    // Do Not Edit
    nums.fill(100);
    cout << nums[0] << "\n"; // 100
    cout << nums[1] << "\n"; // 100
    cout << nums[2] << "\n"; // 100
};
void ch_9()
{
    array<int, 6> nums = {10, 20, 30, 40, 20, 50};

    // Method 1
    cout << sizeof(nums) / 4;
    cout << "->->->->->->\n";
    // Method 2
    cout << nums.size();
    cout << "->->->->->->\n";
    // Method 3
    cout
        << (nums[0] + nums[nums.size() - 1]) / nums[0];
};

void ch_10()
{
    array<int, 6> nums = {10, 20, 30, 40, 20, 50};

    // Method 1
    // "First: 10"
    cout << nums[nums.size() - (sizeof(nums) / 4)] << "\n";
    // "Last: 50"
    cout << nums[(sizeof(nums) / 4) - 1] << "\n";

    // Method 2
    // "First: 10"
    cout << nums[0] << "\n";
    cout << nums[nums.size() - 1] << "\n";
    // "Last: 50"

    // Method 3
    // "First: 10"
    cout << nums.front() << "\n";
    cout << nums.back() << "\n";
    // "Last: 50"
}

void ch_11()
{

    // Do Not Edit The Next 3 Lines
    int index = 1;
    array<int, 3> oldNums = {10, 20, 30};
    array<int, 3> newNums;

    // Write Your Code Here
    newNums[index - index] = oldNums.back();
    newNums[index] = oldNums[index];
    newNums[index + index] = oldNums.front();
    // Do Not Edit The Next 3 Lines
    cout
        << newNums[0] << "\n";  // 30
    cout << newNums[1] << "\n"; // 20
    cout << newNums[2] << "\n"; // 10
}

void ch_12()
{
    // Do Not Edit The Next 6 Lines
    int nums[] = {1, 2, 3, 5};
    int vals[] = {10, 20, 40, 30, 10, 60};
    int i1 = nums[3]; // 20
    int i2 = nums[0]; // 10
    int i3 = nums[1]; // 30
    int i4 = nums[2]; // 40

    // Need To Get Ouput 150
    // You Can Use Plus Operator Only
    cout << i4 + i2 + (i1 + i2 + i3 + i4);

    // Your Code Here
};

void ch_13()
{
    string fName = "Elzero ";
    string mName = "Web ";
    string lName = "School";

    cout << fName + mName + lName << "\n";
    cout << fName.append(mName.append(lName));
    // cout << fName
    // Output Needed
    // Elzero Web School
    //     Elzero Web School
    //         Elzero Web School
};

int main()
{
    cout << "------------------\n";
    ch_1();
    cout << "------------------\n";
    ch_2();
    cout << "------------------\n";
    ch_3();
    cout << "------------------\n";
    ch_4();
    cout << "------------------\n";
    ch_5();
    cout << "------------------\n";
    ch_6();
    cout << "------------------\n";
    ch_7();
    cout << "------------------\n";
    ch_8();
    cout << "------------------\n";
    ch_9();
    cout << "------------------\n";
    ch_10();
    cout << "------------------\n";
    ch_11();
    cout << "------------------\n";
    ch_12();
    cout << "------------------\n";

    return 0;
}