#include<iostream>
#include<cmath>
using namespace std;
bool soNgto(int a){
    if(a == 1) {
        return false;
    } else if(a == 2) {
    return true;
    } else {
for(int i =2;i <=sqrt(a);i++){
    if(a % i == 0){
        return false;
    }
}
}
 return true;
    }
int main(){
    int a;
    cin >> a;
    if(soNgto(a) == true) {cout << "yes";}
    else cout << "no";
}
