# Experiment - 1 

## Aim - 
To write simple C++ programs that demonstrate basic operations such as 
printing a message, calculating the sum and average of numbers, determining if a number is odd or even, and checking if a year is a leap year.

## Theory - 
These programs introduce fundamental concepts in C++ programming:
Hello World: Demonstrates the basic structure of a C++ program and how to output text to the console.
Sum, Average, Odd-Even: Shows how to perform arithmetic operations, use conditional statements, and calculate the sum and average of numbers.
Leap Year: Explains how to use conditional logic to determine if a given year is a leap year.

## Code - 
### 1. 
``` #include <iostream>
using namespace std;
int main()
{
    cout<<"Hello World!"<<endl;
    return 0;
}
```

### 2.
```
#include <iostream>
using namespace std;
int main()
{
    int A,B;
    cout<<"Enter the value of A and B: "<<endl;
    cin>>A;
    cin>>B;
    int sum = A + B;
    cout<<"The sum is: "<<sum<<endl;

    int avg = (A+B)/2;
    cout<<"The average of A and B is: "<<avg<<endl;

    if (A%2==0)
    {
        cout<<("A is even")<<endl;
    }
    else
    {
        cout<<("A is odd")<<endl;

    }
    return 0;
}
```
### 3.
```
#include <iostream>
using namespace std;
int main()
{
    int year;
    cout<<"Enter the year: "<<endl;
    cin>>year;
    if(year%4==0 && (year%100 != 0 || year%400 == 0))
    {
        cout<<("This is a leap year")<<endl;
    }
    else
    {
        cout<<("This is not a leap year");
    }
    return 0;
}
```
## Explanation - 
Hello World: The program includes the necessary header files and uses the standard output stream to print "Hello World" to the console.
Sum, Average, Odd-Even: These programs take input from the user, perform arithmetic calculations to find the sum and average, and use conditional statements to check if a number is odd or even.
Leap Year: This program uses conditional statements to check the divisibility rules that define a leap year.




