#include<bits/stdc++.h>
using namespace std;

int main()
{
    double base,exp,result=1,i;
    cout<<"Enter a base : ";
    cin>>base;
    cout<<"Enter a Exponent : ";
    cin>>exp;

    for(i=1;i<=exp;i++)
    {
        result=result*base;
    }
    cout<<base<<" power "<<exp<<" = "<<result<<endl;

}
