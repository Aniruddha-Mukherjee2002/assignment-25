#include<iostream>
using namespace std;
class Circle
{
public:
    circle_area(int r){
    cout<<"Area of circle is : "<<3.14*r*r<<endl;
    }
};
int main(){
int radius;
cout<<"Enter radius: "<<endl;
cin>>radius;
Circle c1;
c1.circle_area(radius);
return 0;
}
