#include<bits/stdc++.h>
using namespace std;

int main()
{
    int num,count=0;
    cout<<"Enter a Interger Number : ";
    cin>>num;

    while(num!=0){
        num=num/10;
        ++count;
    }
    cout<<"Number Of Digit = "<<count<<endl;

}
