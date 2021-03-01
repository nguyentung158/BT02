#include<iostream>

#include<time.h>
using namespace std;
int sinhso(){

return rand() %100+1;
}
void doanso(int &so){
    do{
cin  >> so;
if(so <=0 || so >=101){
    cout << "vui long nhap khoang tu 1 den 100 : " << endl;
}}while(so <1 || so >100);
}
void ketqua(int so, int sobm,int &dem){
    dem ++;
    if(so  == sobm){
        cout << "YOU WIN!!"<< endl;
        cout << "Diem cua ban: "<< 100 -dem<< endl;
        cout << "BAN MUON CHOI TIEP CHU ^^: "<< endl;
    } else if(so > sobm){
        cout << "So ban qua lon =))"<< endl;
    } else if(so < sobm){
    cout <<"So ban qua nho =))"<<endl;
    }
}
bool muonchoinuakhong(string &s) {

if(s == "co") return true;
else return false;
}
void lap(){int so;
    srand(time(0));
    int dem =0;
    int sobimat = sinhso();
    do{
        cout << "Doan so cua ban : " << endl;
        doanso(so);
        ketqua(so,sobimat,dem);
    }while(so != sobimat);
    string s;
  cin >> s;
    if (muonchoinuakhong(s) == true){
    lap();
    }else{
     cout << " BYE!!";

    }
}
int main(){

    int so;
    srand(time(0));
    int dem =0;
    int sobimat = sinhso();
    do{
        cout << "Doan so cua ban : " << endl;
        doanso(so);
        ketqua(so,sobimat,dem);
    }while(so != sobimat);
    string s;
  cin >> s;
    if (muonchoinuakhong(s) == true){
    lap();
    }else{
     cout << " BYE!!";
     return 0;
    }
}

