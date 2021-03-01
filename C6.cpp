#include<iostream>
using namespace  std;
int main(){
     int n;
     cin >> n;
     int m =n;
     int i =1;

     while(m !=0){
    for(int j =i;j<=n;j++){
        cout << j << ' ';
    }
    for(int k =1;k<=i-1;k++){
        cout << k << ' ';
    }
     cout << endl;
     m--;
     i++;
}
}
