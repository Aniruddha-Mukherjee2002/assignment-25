#include<iostream>
using namespace std;
class Complex
{
private :
    int real,imaginary;
public:
    void set_real(int x, int y){
    real=x;
    imaginary=y;
    }
    void get_value()
    {
        cout<<real<<" + "<<imaginary<<"i";
    }
};
int main(){
    int a,b;
    cout<<"Enter real part :";
    cin>>a;
    cout<<"Enter imaginary part:";
    cin>>b;
    Complex c1;
    c1.set_real(a,b);
    c1.get_value();
    return 0;
}
