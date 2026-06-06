#include<iostream>
using namespace std;

class LibraryUser{
    public:
    virtual void register_Account() =0;
    virtual void request_Book() =0;
};

//if the user is a kidUser.
class KidUser: public LibraryUser{
    public:
    int age;
    string bookType;

    void register_Account() override{
        if(age < 12){
            cout<<"You have succesfully registered under a kid Account"<<endl;
        } else{
            cout<<"Sorry, Age must be less than 12 to register as a kid"<<endl;
        }
    }

       void request_Book() override{
        if(bookType == "kids"){
            cout<<"Book issued succesfully, please return the book within 10 days"<<endl;
        } else{
            cout<<"Oops,you are allowed to take only kids books"<<endl;
        }
    }
};

    //if the user is AdultUser.
    class AdultUser: public LibraryUser{
        public:
        int age;
        string bookType;

        void register_Account() override{
        if(age > 12){
            cout<<"You have succesfully registered under a Adult Account"<<endl;
        } else{
            cout<<"Sorry, Age must be greater than 12 to register as a Adult"<<endl;
        }
    }

     void request_Book() override{
        if(bookType == "Fiction"){
            cout<<"Book issued succesfully, please return the book within 7 days"<<endl;
        } else{
            cout<<"Oops,you are allowed to take only Adult Fiction books"<<endl;
        }
    }

 };



int main(){
       KidUser k1;
       cout<<"kid user Test Case 1: "<<endl;
       k1.age = 10;
       k1.register_Account();

       k1.bookType = "kids";
       k1.request_Book();

    
       cout<<"kid user Test Case 2: "<<endl;
       k1.age = 18;
       k1.register_Account();

       k1.bookType = "Fiction";
       k1.request_Book();

       AdultUser A1;
       cout<<"Adult user Test Case 1: "<<endl;
       A1.age = 5;
       A1.register_Account();

       A1.bookType = "kids";
       A1.request_Book();

       
       cout<<"Adult user Test Case 2: "<<endl;
       A1.age = 23;
       A1.register_Account();

       A1.bookType = "Fiction";
       A1.request_Book();

    return 0;
}