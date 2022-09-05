#include<iostream>
using namespace std;
class Time
{
private:
    int hour,minute,second;
public:
    void set_time(int x, int y,int z){
    hour=x;
    minute=y;
    second=z;
    }
    void get_time(){
    cout<<hour<<" hr "<<minute<<" min "<<second<<" sec";
    }
};
int main(){
int x,y,z;
cout<<"Enter hour: ";
cin>>x;
cout<<"Enter minute: ";
cin>>y;
cout<<"Enter second: ";
cin>>z;
Time t1;
t1.set_time(x,y,z);
t1.get_time();
return 0;
}
