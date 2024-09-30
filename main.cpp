#include <iostream>
#include <string>

using namespace std;

class Color{
    //members
    int r;
    int g;
    int b;
    //setters
    void setR(int R){r=R;}
    void setG(int G){g=G;}
    void setB(int B){b=B;}
    //getters
    int getR(){return r;}
    int getG(){return g;}
    int getB(){return b;}
    //print method
    public:
    //constructor
    Color(int R, int G, int B){setR(R);setG(G);setB(B);}
    void printColor(){
        cout<<"R: "<<r<<endl;
        cout<<"G: "<<g<<endl;
        cout<<"B: "<<b<<endl;
    }
};

int main(){
    Color *C1 = new Color(1,2,3);
    Color *C2 = new Color(1,2,3);
    Color *C3 = new Color(1,2,3);
    Color *C4 = new Color(1,2,3);
    C1->printColor();
    C2->printColor();
    C3->printColor();
    C4->printColor();
    delete C1;
    delete C2;
    delete C3;
    delete C4;
    return 0;
}