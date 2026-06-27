#include<iostream>
using namespace std;

class Point{
    private:
    int x,y;

    public:
    Point(){
        x=0;
        y=0;
    }
    Point(int x, int y){
        this->x = x;
        this->y = y;
    }

    void setX(int x){
        this->x =x;
    }
    void setY(int y){
        this->y =y;
    }

    void setXY(int x, int y){
        this->x = x;
        this->y = y;
    }

    void display(){
        cout<<"X = "<<x<<", Y = "<<y<<endl;
    }
};

int main(){
    Point p1;
    p1.display();

    Point p2(1,2);
    p2.display();

    p2.setXY(12,13);
    p2.display();
    
    return 0;

}