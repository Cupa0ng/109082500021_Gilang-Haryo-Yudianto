#include <iostream>
#include <string>
using namespace std;

int main() {
    int angka;
    string satuan[] = {"nol", "satu", "dua", "tiga", "empat", "lima", "enam", "tujuh", "delapan", "sembilan"};
    string belasan[] = {"sepuluh", "sebelas", "dua belas", "tiga belas", "empat belas", "lima belas", 
                        "enam belas", "tujuh belas", "delapan belas", "sembilan belas"};
    string puluhan[] = {"", "", "dua puluh", "tiga puluh", "empat puluh", "lima puluh", 
                        "enam puluh", "tujuh puluh", "delapan puluh", "sembilan puluh"};

    cout << "masukan angka 1-100: ";
    cin >> angka;
    cout << angka << " : ";

    if (angka < 0 || angka > 100) {
        cout << "Angka harus 0-100";
    } 
    else if (angka < 10) {
        cout << satuan[angka];
    } 
    else if (angka >= 10 && angka < 20) {
        cout << belasan[angka - 10];
    } 
    else if (angka == 100) {
        cout << "seratus";
    } 
    else {
        int puluh = angka / 10;
        int sisa = angka % 10;

        cout << puluhan[puluh];
        
        if (sisa != 0) {
            cout << " " << satuan[sisa];
        }
    }
    cout << endl;

    return 0;
}