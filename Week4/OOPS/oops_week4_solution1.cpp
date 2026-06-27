#include<iostream>
using namespace std;

class Test{
    public:
    virtual int square(int n)=0;
};

//derived class.
class Arithematic: public Test{
    public:
    int square(int n){
        return n*n;
    }
};

int main(){
    Arithematic a;
    int num =12;
    cout<<"square of"<<" "<<num<<" "<<"is"<<" "<<a.square(num);
    return 0;
}