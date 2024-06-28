#include<bits/stdc++.h>
#include<conio.h>
using namespace std;

int main(){

    int n,sum=0,i;
    cout<<"Enter a Number of student : ";
    cin>>n;
    int students[n];

    for(i=0;i<n;i++){
            cout<<"Enter a marks for student "<<i+1<<": ";
            cin>>students[i];
            sum=sum+students[i];
    }
    cout<<"Total marks = "<<sum<<endl;
    cout<<"Average = "<<sum/n<<endl;

    int  max = students[0];
    int min = students[0];
    for(i=1; i<n; i++){
        if(max<students[i]){

        max=students[i];
        }
    }
    for(i=1; i<n; i++){
        if(min>students[i]){

            min=students[i];
        }
    }
    cout<<"Maxium Number is = "<<max<<endl;
    cout<<"Minimum Number is = "<<min<<endl;
}
