#include <iostream>
using namespace std;

// int main()
// {
//     // Write Your Code Here
//     const int age = 22;
//     const int period = 5;
//     // Do Not Edit The Next 2 Lines
//     cout << "My Age Is: " << age << "\n";
//     cout << period << " Years Ago My Age Was: " << age - period << "\n";

//     // Add The Third Line Below
//     cout << period << " After: " << period << " My Age will be: " << age + period << "\n";

//     return 0;
// }

/*
int main()
{
    // Write Your One Line Code Here
    int a, b, c;
    // Do Not Edit Below
    a = 10, b = 20, c = 70;
    cout << "Sum Of All Number Is: " << a + b + c;
    return 0;
}
*/

/*
  name        [ Valid | Good Practice ]
  NAME        [ Valid | Bad Practice ]
  1name       [ not Valid ] => start with number
  __name      [ not Valid ] => start with underscore
  name@name   [ not Valid] => includes a symbole
  name10name  [ valid | bad practice ] => lack clarity what the varaible for
  name!name   [ not Valid] => includes a symbole
  first_NAME  [ valid | bad Practice ] => clear understanding of what the varaible for but the structure of the varaible does not follow best practice of naming conventions.
  ////
  first_name  [ valid | best Practice ] => clear follow kabab naming conventions
  firstName   [ valid | best Practice ] => clear & follow the camel case namin style
  first name  [ not valid  ] => space
  fn          [ valid | best Practice ] => fn = function
  public      [ not valid ] => used by the language
  Public      [ valid | bad pratice ] => unclear and start with capitle letter .
*/

//

// قم بالتعديلات اللازم لإصلاح ال Code ليعمل ويخرج لك النتيجة وهي رقم 40
/*
int main()
{
    // Edit Here To Fix The Error
    int current_year;
    int birth_year;

    // Do Not Edit Here
    current_year = 2022;
    birth_year = 1982;
    int age_in_years = current_year - birth_year;
    cout << age_in_years;
    return 0;
}
*/

//

// قم بإضافة سطر برمجي يجعل البرنامج يخرج لك الرقم 300
// يجب عدم إضافة أي رقم نهائيا في السطر المكتوب

/*int main()
{
    // Do Not Edit Below
    int a, b, c = 100;

    // Add Your Code Here
    a = 100, b = 100, c = 100;
    // Do Not Edit Below
    cout
        << a + b + c << "\n"; // 300
    return 0;
}*/

// قم بكتابة السطر الخاص بطباعة النتيجة لتطبع النتيجة 300
// يجب عليك إستعمال جميع المتغيرات في سطر طباعة النتيجة
// إستخدم العملية الحسابية المناسبة لتخرج لك النتيجة 300

/*
int main()
{
    // Do Not Edit Below
    int a = 210, b = -50, c = -40;

    // Write Your cout Code Here
    cout << -b + -c + a;
    return 0;
}
*/
// لديك ال Code التالي ونحتاج لتغيير سطر واحد فقط مكان الآخر حتى تطبق المطلوب وهو رقم 100

/*
int num = 50;

int read()
{
    int num = 100;
    cout << num;
    return 0;
}

int play()
{
    int num = 200;
    read();
    return 0;
}

int main()
{
    play();
    return 0;
}
*/

// نريد عمل متغير يقبل المدخلات من المستخدم في السطر الأول
// بعدها نقوم بطباعة حاصل ضرب الرقم في نفسه
// شاهد المثال والنتيجة لتفهم الفكرة

// int main()
// {
//     // Write Your Code Here
//     int num;
//     // Num 10
//     cout << "please write a number: ";
//     cin >> num;
//     cout << "\n"
//          << num << " x " << num << " = " << num * num << "\n";
//     // Needed Output 100 [10 * 10]
//     return 0;
// }
//

// نريد عمل متغيريين عبارة عن المدخلات من المستخدم
// المستخدم يقوم بإدخال رقم وبعده رقم آخر
// المطلوب ايجاد حاصل ضرب الرقمين في بعضهم
// شاهد المثال لترى النتيجة المطلوبة

int main()
{
    // Write Your Code Here
    int a, b;
    cout << "please write first number: ";
    cin >> a;
    cout << "\nplease write seconde number: ";
    cin >> b;
    cout << "\nresult of " << a << " x " << b << " is: " << a * b << "\n";
    // Number One => 10
    // Number Two => 100
    // Needed Output 1000 [10 * 100]
    return 0;
}