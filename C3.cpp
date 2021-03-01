#include<iostream>
using namespace std;
int main(){
    int n;
    cin >> n;
    for(int i =n;i>=1;i--){
          for(int k =1; k<=i-1;k++){
            cout << ' ';
          }
        for(int j =i;j <=n;j++){
            cout << "*";
        }
        for(int m =1;m <=5-i;m++){
            cout << "*";
        }
        cout << endl;

    }

}
