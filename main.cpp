#include <iostream>
#include <string>

using namespace std;

class Color{
    //members
    int r;
    int g;
    int b;
    //constructor w/ setters
    Color(int R, int G, int B){setR(R);setG(G);setB(B);}
    //setters
    void setR(int R){r=R;}
    void setG(int G){g=G;}
    void setB(int B){n=B;}
    //getters
    int getR(){return r;}
    int getG(){return g;}
    int getB(){return b;}
    //print method
    void print(){
        cout<<"R: "<<r<<endl;
        cout<<"G: "<<g<<endl;
        cout<<"B: "<<b<<endl;
    }
};

int main(){
    return 0;
}