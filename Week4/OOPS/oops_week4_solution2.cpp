#include<iostream>
using namespace std;

class Outer{
    public:
    void display(){
        cout<<"Method of Outer class"<<endl;
    }

    class Inner{
        public:
       void display(){
        cout<<"Method of inner class"<<endl;
       }
    };
};

int main(){
    Outer object1;
    object1.display();

    Outer::Inner object2;
    object2.display();
    
    return 0;
}
