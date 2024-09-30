#include <iostream>
#include <string>

using namespace std;

class Color{
    int r;
    int g;
    int b;

    Color(int R, int G, int B){r=R;g=G;b=B;}

    void print(){
        cout<<"R: "<<r;
        cout<<"G: "<<g;
        cout<<"B: "<<b;
    }
};

int main(){
    
    
    return 0;
}