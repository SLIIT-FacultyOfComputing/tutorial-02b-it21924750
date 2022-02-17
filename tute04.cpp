/*Exercise 4 - Functions

Write a program to calculate the function called nCr which is defined as

nCr = n!/ r!(n−r)!
Where n! is the factorial of n.

Implement the functions

long Factorial(int no);
long nCr(int n, int r);
Do not modify the main function.*/

#include<iostream>
using namespace std;

long factorial(int no);
long nCr(int n, int r);


int main()
{
    int n,r;
    cout<<"Enter the value for n :- ";
    cin>>n;
    cout<<"Enter the value for r :- ";
    cin>>r;
    cout<< "nCr = ";
    cout<<nCr(n,r);
    cout<<endl;



    return 0;

}

long factorial(int no)
{
    long fac;

    fac = 1;
    for(int r = no;r >= 1;r--)
    {
        fac = fac * r;
    }

    return fac;
}

long nCr(int n, int r)
{
    return factorial(n)/(factorial(r) * (factorial(n-r)));
}
