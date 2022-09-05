#include<iostream>
using namespace std;
class area_calculator
{   public:
    void square_area(int x){
    cout<<"Area of square is: "<<x*x<<endl;
    }
    void rect_area(int x,int y){
    cout<<"Area of rectangle is : "<<x*y<<endl;
    }
    void circle_area(int x){
    cout<<"Area of circle is : "<<3.14*x*x<<endl;
    }
};
int main(){
int l,b,r,s;
area_calculator a1;
cout<<"Enter side of square: ";
cin>>s;
a1.square_area(s);
cout<<"Enter length and width : ";
cin>>l>>b;
a1.rect_area(l,b);
cout<<"Enter radius: ";
cin>>r;
a1.circle_area(r);
return 0;
}
