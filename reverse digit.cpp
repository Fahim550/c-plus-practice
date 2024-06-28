#include<bits/stdc++.h>
using namespace std;

int main()
{
    int num,temp,rem,sum=0;
    cout<<"Enter a Number : ";
    cin>>num;

    temp=num;
    while(temp!=0){
        rem=temp%10;    //10|121|12       10|12|1       10|1|0
        sum=sum*10+rem;     //10              10           0
        temp=temp/10;       //---             ----        ----
                            // 21              2           1
                            // 20
                            //----
                            //  1
    }
    cout<<"sum of digit = "<<sum<<endl;



}

