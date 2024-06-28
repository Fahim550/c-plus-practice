#include<bits/stdc++.h>
using namespace std;

int main()
        {
            while(1){
            int fact=1,n,i;
            cout<<"Enter a Number:";
            cin>>n;

            for(i=1;i<=n;i++){
                fact=fact*i;

            }
             cout<<fact<<endl;
            return 0;
        }
}
