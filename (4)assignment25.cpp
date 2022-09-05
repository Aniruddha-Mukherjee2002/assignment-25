#include<iostream>
using namespace std;
class max_num
{
public:
    void largest_num(int x,int y,int z){
    if(x>y)
        if(x>z)
        cout<<"largest number is :"<<x;
     if(y>z)
        cout<<"largest number is :"<<y;
    else
        cout<<"largest number is :"<<z;
    }
};
int main(){
int num1,num2,num3;
cout<<"Enter first number: ";
cin>>num1;
cout<<"Enter second number: ";
cin>>num2;
cout<<"Enter third number: ";
cin>>num3;
max_num m1;
m1.largest_num(num1,num2,num3);
return 0;
}
