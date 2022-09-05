#include<iostream>
using namespace std;
class rev
{
public:
    void reverse_num(int x){
    int mod;
    cout<<"After reverse the number is : ";
    while(1)
    {    if(x==0)
         {
             cout<<"0";
             break;
         }
        mod=x%10;
        cout<<mod;
        x=x/10;
    }
    }
};
int main(){
int num;
cout<<"Enter a whole and positive number :";
cin>>num;
rev r1;
r1.reverse_num(num);
cout<<endl;
return 0;
}
