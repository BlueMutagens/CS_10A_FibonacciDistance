//
//  main.cpp
//  Homework14
//
//  Created by Sean Belingheri on 12/8/22.
//
#include <stdio.h>
#include <iostream>
#include <iomanip>
#include <cmath>
#include <cstdlib>
#include <ctime>
using namespace std;

int fibonacci(int n_term);

int main()
{
    int x, num;
    cout<<"Enter term index: ";
    cin>>x;
    num = fibonacci(x);
    cout<<"Fibonacci term "<<x<<" is "<<num<<endl;
    return 0;
}

int fibonacci(int n_term)
{
    static int fibnum = 0, fibnum1 = 1, counter = n_term;
    if(counter != 0)
    {
        fibnum += fibnum1;
        fibnum1 = fibnum - fibnum1;

        counter--;
        return fibonacci(counter);
    }
    else
        return fibnum;
}
