#include<iostream>
using namespace std;
class Rectangle
{
public:
    void area_rect(int x,int y){
    cout<<"area of rectangle is : "<<x*y<<endl;
    }
};
int main(){
int length,width;
cout<<"enter length: ";
cin>>length;
cout<<"enter width: ";
cin>>width;
Rectangle r1;
r1.area_rect(length,width);
return 0;
}
