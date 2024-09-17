#include <iostream>
using namespace std;

    int main() {
    int nilai;

    cout<<"SELAMAT DATANG, SEMOGA NLAI ANDA BAGUS"<<endl<<endl;

    cout<<"masukan nilai :";
    cin>>nilai;

    if (nilai >=90){
    cout<<"selamat! anda mendapatkan nilai A"<<endl;

   }else if (nilai >=80) {
    cout<<"anda mendapatkan nlai B"<<endl;

    }else if (nilai >=70) {
    cout<<"anda mendapatkan nilai C"<<endl;

    }else if (nilai >60) {
    cout<<"anda mendapatkan nili D"<<endl;

    }else {
    cout<<"MAAF ANDA NGULANG MATKUL"<<endl;
    }
    return 0;
    }


