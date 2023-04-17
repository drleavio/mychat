#include<iostream>
using namespace std;

int maxi(int x,int y){
    return x>y?x:y;
}
int main(){
    int (*fp)(int,int);
    fp=maxi;
   cout<<(*fp)(10,5);
}