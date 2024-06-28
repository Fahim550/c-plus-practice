#include<bits/stdc++.h>
using namespace std;

class student
{
    public :
        int  id;
        double gpa;

        void display(){
        cout<<id<<"  "<<gpa<<endl;
        }
        void setvalue(int x,double y){
            id=x;
            gpa=y;
        }
};
int main(){
    student Alim,Fahim;

    Alim.setvalue(101,3.95);
    Alim.display();

    Fahim.setvalue(102,4.00);
    Fahim.display();

}
