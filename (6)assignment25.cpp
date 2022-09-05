#include<iostream>
using namespace std;
class square
{  int counter=0;
public:
    int square_cal(int num){
    cout<<"Square of the number is : "<<num*num<<endl;
    counter++;

    return counter;
    }

};

int main(){
int num,counter=0;
cout<<"Enter a number : ";
cin>>num;
square s1,s2;
counter=counter+s1.square_cal(num);
counter=counter+s2.square_cal(num);
cout<<counter<<" time(s)called this function"<<endl;
return 0;
}
