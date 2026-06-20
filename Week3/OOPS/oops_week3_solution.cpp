#include<iostream>
#include<cstdlib>
#include<ctime>
using namespace std;

class Compartment{
    public:
    virtual string notice()=0;
};

class FirstClass : public Compartment{
    public:
    string notice() override{
        cout<<"First class compartment"<<endl;
    }
};

class Ladies: public Compartment{
    public:
    string notice() override{
        cout<<"Ladies Compartment"<<endl;
    }
};

class General: public Compartment{
    public:
    string notice() override{
        cout<<"General Compartment"<<endl;
    }
};

class Luggage: public Compartment{
    public:
    string notice() override{
        cout<<"Luggage Compartment"<<endl;
    }
};

class TestCompartment{
    public:

    void test(){
        Compartment* c[10];

        for(int i=0; i<10; i++){
            int r = rand()%4 + 1;

            switch(r){
              case 1:
               c[i] = new FirstClass();
               break;  

               case 2:
               c[i] = new Ladies();
               break; 

               case 3:
               c[i] = new General();
               break; 

               case 4:
               c[i] = new Luggage();
               break; 
            }
        }

        for(int i=0; i<10; i++){
            cout<<"Compartment"<<i+1<<": ";
            c[i]->notice();
            delete c[i];
        }
    }
};

int main(){

   TestCompartment t;
   t.test();

    return 0;
}