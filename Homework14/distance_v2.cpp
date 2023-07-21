//
//  distance_v2.cpp
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
double distance(double x, double y, double z, double t, double * s);
double distance(double x, double y, double z);
double distance(double x, double y);
double distance(double x);

int main()
{
    double x, y, z, t, s;
    char ch;
    cout<<"Enter coordinate values in order (x, y, z, t): ";
    cin>>x;
    ch = cin.get();
    switch(ch)
    {
        case '\n':
            cout<<"From origin, d = "<<distance(x)<<endl;
            return 0;
        default:
            cin>>y;
            ch = cin.get();
            switch(ch)
            {
                case '\n':
                    cout<<"From origin, d = "<<distance(x, y)<<endl;
                    return 0;
                default:
                    cin>>z;
                    ch = cin.get();
                    switch(ch)
                    {
                        case '\n':
                            cout<<"From origin, d = "<<distance(x, y, z)<<endl;
                            return 0;
                        default:
                            cin>>t;
                            cout<<"From origin, d = "<<distance(x, y, z, t, &s)<<", s = "<<s<<endl;
                            return 0;
                    }
            }
    }
}
double distance(double x, double y, double z, double t, double * s)
{
    *s = (sqrt(pow(x,2)+pow(y, 2)+pow(z, 2)))/t;
    return sqrt(pow(x,2)+pow(y, 2)+pow(z, 2));
}
double distance(double x, double y, double z)
{
    return sqrt(pow(x,2)+pow(y, 2)+pow(z, 2));
}
double distance(double x, double y)
{
    return sqrt(pow(x,2)+pow(y, 2));
}
double distance(double x)
{
    return sqrt(pow(x, 2));
}
