#include<bits/stdc++.h>
using namespace std;

int main()
{
   while(1){

     int randomnumber,guessNumber;

    cout<<"Enter a number between 1 to 5 :";
    cin>>guessNumber;
    randomnumber=rand()%5+1;
    if(randomnumber==guessNumber){
        cout<<"You have won "<<endl<<endl;
    }


    else{
        cout<<"You have lost,Try again"<<endl;
        cout<<"Your Guess Number was "<<guessNumber<<endl<<endl;
    }
   }
    return 0;
}
