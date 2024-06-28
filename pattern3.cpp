#include<bits/stdc++.h>
using namespace std;

int main()
{
    int n,row,col;
    char ch=64;
    cout<<"Enter N : ";
    cin>>n;
    for(row=1;row<=n;row++)
    {
        for(col=1;col<=row;col++){
            cout<<"%C "<<col+ch;
        }
        cout<<endl;
    }

}

