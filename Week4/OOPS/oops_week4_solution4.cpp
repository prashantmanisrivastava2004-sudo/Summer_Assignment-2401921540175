#include<iostream>
using namespace std;

class Box{
    protected:
    double length, breadth;

    public:
    Box(double l, double b){
        length = l;
        breadth = b;
    }
    double area(){
      return length*breadth;
    }
};

class Box3D : public Box{
    private:
    double height;

    public:
    Box3D(double l, double b, double h): Box(l,b){
        height = h;
    }
    double volume(){
        return length*breadth*height;
    }
};

int main(){
      Box b(12,4);
      cout<<"Area of Box is = "<<b.area()<<endl;

      Box3D b1(10,4,3);
      cout<<"Area of 3D Box is = "<<b1.area()<<endl;
      cout<<"Volume of 3D Box ix = "<<b1.volume()<<endl;

    return 0;
}