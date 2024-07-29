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

