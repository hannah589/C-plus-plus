#include <iostream>
#include <string>
using namespace std;

void test01()
{
    cout << "3 >= 3: " << (3 >= 3) << endl;
    cout << "3 > 6: " << (3 > 6) << endl;
    cout << "6 > 3: " << (6 > 3) << endl;
}

void test02()
{
    //Equality ==
    cout << "9 == 9: " << (9 == 9) << endl;
    //Inequality/Not equal to !=
    cout << "9 != 9: " << (9 != 9) << endl;
    cout << "3 != 4: " << (3 != 4) << endl;
}

void test03()
{
    string s1 = "ant";
    string s2 = "zebra";
    cout << s1 << "<" << s2 << ": " << (s1 < s2) << endl; //1 sort alphabetically. have to be the same case
}

void test04()
{
    cout << "Enter ingeger 1-6: ";
    int val;
    cin >> val;

    if ((val >= 1) && (val <= 6)) //boundary case: 0,1,6,7 
        cout << "Valid dice roll" << endl;
    else
        cout << "Impossible dice roll" << endl;
}

void test05()
{
    int a = 10;
    cout << "a: " << a << endl; //10
    a += 5;
    cout << "a: " << a << endl; //15
}

void test06()
{
    cout << "Enter username (no space): ";
    string user;
    cin >> user;

    cout << "Enter domain: ";
    string domain;
    cin >> domain;

    string email = "";

    email += user;
    email += "@";
    email += domain;

    cout << endl;
    cout << "Email: " << email << endl;  //johndoe@gmail.com
}

void test07()
{
    int a = 5;
    cout << "a: " << a << endl;
    cout << "++a: " << ++a << endl; //6
}

void test08()
{
    int a = 15;
    int b = 4;

    cout << "Addition: " << (a + b) << endl;
    cout << "Subtraction: " << (a - b) << endl;
    cout << "Multiplication: " << (a * b) << endl;
    cout << "Division: " << (a / b) << endl;
    cout << "Modulus: " << (a % b) << endl;
}

//Wk5: Flow control: conditionals & Loops: if & while loop
//if, if else, else, switch & tenrnary operator

void test09()
{
    int x = 13;

    if (x > 5) {
        std::cout << "x is greater than 5" << std::endl;
    }
    else {
        std::cout << "x is less than 5" << std::endl;
    }
}


// Single statment can remove {}
void test10()
{
    int x;
    cout << "Enter Number: ";
    cin >> x;

    if (x > 5)
        cout << "x is greater than 5" << endl;
    else if (x > 3)
        cout << "x is less than 3" << endl;
    else
        cout << "x is less than 0" << endl;

}

void test11()
{
    int mark;
    cout << "Enter Mark: ";
    cin >> mark;

    if (mark >= 90) {
        cout << "Grade: A" << endl;
    }
    else if (mark >= 80) {
        cout << "Grade: B" << endl;
    }
    else if (mark >= 70) {
        cout << "Grade: C" << endl;
    }
    else if (mark >= 60) {
        cout << "Grade: D" << endl;
    }
    else if (mark >= 50) {
        cout << "Grade: E" << endl;
    }
    else {
        cout << "Grade: F" << endl;
    }
}

//Ternary Operator: Syntax: condition ? true : false;
void test12()
{
    int a = 10, b = 20;
    int min = (a < b) ? a : b;

    cout << "Minimum value: " << min;
}

//Switch (*nts: space after case)
/*
switch (expression) {
    case value1:
        //code block
    break;
    case value2:
        //code block
    break;
    default;
        //code block
}
*/
    
void test13()
{
    cout << "Enter Number(1-4): ";
    int num;
    cin >> num;

    switch (num)
    {
        case 1:
        case 3:
            cout << "odd" << endl;
            break;
        case 2:
        case 4:
            cout << "even" << endl;
            break;

    }
}

//For Loop(intialize; condition; count by){repeat code}
void test14()
{
    for (int i = 1; i <= 5; i++)
    {
        cout << i << endl;
        //1 2 3 4 5
    }

}

//While Loop
/*
    intialize
    while(condition)
    {
        code block
        count by
    }

*/

void test15()
{
    int i = 1;
    while (i <= 6)
    {
        cout << "i: " << i << endl;
        i++;
    }
}

void test16()
{
    string password = "s123";
    string guess = "";

    cout << "Enter password: ";
    cin >> guess;
    
    while (guess != password)
    {
        cout << "Denied" << endl;
        cout << endl;

        cout << "Retry. Enter password : " << endl;
        cin >> guess;
    }
    cout << endl;
    cout << "Access Granted!";
}


void test17() {
    string password = "secret123";
    string guess;

    cout << "Enter password: ";
    cin >> guess;

    if (guess == password) {
        cout << "Access Granted" << endl;
    }
    else {
        cout << "Access Denied" << endl;
    }
}


int main()
{
    test16();
    return 0;
}

