#include<iostream>
using namespace std;

class complex{
    int real;
    int img;
  public:
    complex(int real=0,int img=0){
        this->real=real;
        this->img=img;
    }  
    int getreal(){
        return real;
    }
    int getimg(){
        return img;
    }
    complex add(complex x){
        complex temp;
        temp.real=real+x.real;
        temp.img=img+x.img;
        return temp;
    }
};

int main(){
    complex c1(3,5),c2(8,8),c3;
    c3=c1.add(c2);
    cout<<c3.getreal()<<" + i"<<c3.getimg();
    return 0;
}