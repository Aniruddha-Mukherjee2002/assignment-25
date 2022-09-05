#include<iostream>
using namespace std;
class fact
{
public:
    int calculate_factorial(int x){
    int fact=1;
    for(int i=1;i<=x;i++){
    fact=fact*i;

}
return fact;
    }
};
int main(){
int num,result;
cout<<"Enter a number to calculate factorial : ";
cin>>num;
fact f1;
result=f1.calculate_factorial(num);
cout<<"factorial is : "<<result<<endl;
return 0;
}
