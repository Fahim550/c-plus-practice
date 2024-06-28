#include<bits/stdc++.h>
using namespace std;

int main()
{
    int num,temp,rem,sum=0;
    cout<<"Enter a Number : ";
    cin>>num;

    temp=num;
    while(temp!=0){
        rem=temp%10;  //10|123|12
        sum=sum+rem;     //10
        temp=temp/10;    //---
                         // 23
                         // 20
                         //----
                         //  3
    }
    cout<<"sum of digit = "<<sum<<endl;



}
