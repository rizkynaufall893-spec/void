#include <iostream>
using namespace std;
string nama;
string S;
string kelas;
void sapa(){
    cout<<"Masukkan nama ";
    cin>>nama;
}
void sekolah(){
    cout<<"Masukkan sekolah ";
    cin>>S;
}
void tampilan(){
    cout<<"Masukkan kelas ";
    cin>>kelas;
}
int main() {
    sapa();
    sekolah();
    tampilan();
    return 0;
    }
