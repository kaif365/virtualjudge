#include<iostream>
using namespace std;

int main(){
    int a,b;
    cin>>a>>b;
    for(int i=a;i<=b;i++){
        bool x = false;
        for(int j=2;j<i;j++){
            if(i%j == 0){
                x = true;
            }
        }
        if(x==false)cout<<i<<endl;
    }

//    while (true) {}


    return 0;
}
