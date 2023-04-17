#include<iostream>
using namespace std;

void display(){
    cout<<"hello";
}
int main(){
    void (*p)();
    p=display;
    (*p)();
    return 0;
}