# <h1 align="center">Laporan Praktikum Modul 1 - Codeblocks IDE & Pengenalan Bahas C++ (Bagian Pertama)</h1>
<p align="center">Gilang Haryo Yudianto - 109082500021</p>

## Dasar Teori 

### A. Struktur Dasar dan Tipe Data pada Bahasa C++<br/>

Bahasa C++ merupakan bahasa pemrograman hasil pengembangan dari bahasa C. Setiap program C++ selalu memiliki fungsi utama bernama main() yang menjadi titik awal eksekusi program, serta dapat memiliki fungsi-fungsi lain yang dideklarasikan secara terpisah. 

#### 1. Identifier merupakan aturan penamaan untuk variabel, konstanta, maupun fungsi agar dapat dibedakan satu sama lain.

#### 2. Tipe data dasar terdiri atas bilangan bulat, bilangan real presisi tunggal maupun ganda, karakter, dan tipe tak bertipe (void).

#### 3. Variabel dapat diberi nilai awal (inisialisasi) pada saat dideklarasikan, sedangkan konstanta menyimpan nilai yang sifatnya tetap selama program berjalan.

### B. Operator, Struktur Kondisional, dan Perulangan<br/>

Operator digunakan untuk melakukan suatu operasi atau manipulasi terhadap data, mulai dari operator aritmatika, operator pengerjaan, operator logika, hingga operator kondisional[1]. Selain operator, program juga membutuhkan struktur kondisional seperti if, if-else, dan switch untuk mengambil keputusan berdasarkan suatu kondisi bernilai benar atau salah[2]. Untuk pekerjaan yang berulang, C++ menyediakan struktur perulangan for, while, dan do-while yang masing-masing memiliki kondisi berhenti agar proses eksekusi tidak berjalan tanpa batas.

#### 1. Operator aritmatika digunakan untuk operasi perhitungan seperti penjumlahan, pengurangan, perkalian, pembagian, dan sisa bagi.

#### 2. Struktur kondisional (if, if-else, switch) digunakan untuk menentukan alur program berdasarkan suatu kondisi tertentu.

#### 3. Struktur perulangan (for, while, do-while) digunakan untuk mengeksekusi sekumpulan pernyataan secara berulang selama kondisi masih terpenuhi.

## Guided 

### 1. Program Hello World & Input Output Dasar

```C++
#include <iostream>
using namespace std;

int main(){
    cout << "saya lagi belajar bahasa c++ nih!!!" << endl;
    return 0;
}

```
Menggunakan perintah cout untuk menampilkan "saya lagi belajar bahasa c++ nih!!!" di c++.

### 2. Menerima Input dan menampilkannya

```C++
#include <iostream>
using namespace std;

int main(){
    int inp;
    cin >> inp;
    cout << "nilai =" << inp;
    return 0;
}
```
program dasar untuk menerima iniput dari user dan menampilkannya ke layar

### 3. Aritmatika dasar

```C++
#include <iostream>
using namespace std;

int main() {
    int W, X, Y; float Z;
    X = 7; Y = 3; W = 1;
    Z =(float) (X+Y) / (Y+W);
    cout<< "Nilai X = "<< Z << endl;
    return 0;
}
```
menghitung hasil pembagian dari operasi aritmatika sederhana dan menampilkannya ke layar

## Unguided 

### 1. Buatlah program yang menerima input-an dua buah bilangan betipe float, kemudian memberikan output-an hasil penjumlahan, pengurangan, perkalian, dan pembagian dari dua bilangan tersebut.

```C++
#include <iostream>
using namespace std;

int main() {
    float bil1, bil2;

    cout << "bilangan pertama: ";
    cin >> bil1;
    cout << "bilangan kedua: ";
    cin >> bil2;

    cout << "penjumlahan : " << bil1 + bil2 << endl;
    cout << "pengurangan : " << bil1 - bil2 << endl;
    cout << "perkalian   : " << bil1 * bil2 << endl;
    
    if (bil2 != 0) {
        cout << "pembagian   : " << bil1 / bil2 << endl;
    } else {
        cout << "pembagian   : tidak terdefinisi" << endl;
    }

    return 0;
}
```
### Output Unguided 1 :

##### Output 1
![Screenshot Output Unguided 1_1](https://github.com/DhimazHafizh/2311102151_Muhammad-Dhimas-Hafizh-Fathurrahman/blob/main/Pertemuan1_Modul1/Output-Unguided1-1.png)

Program ini menerima dua input bertipe float dan menampilkan hasil penjumlahan, pengurangan, perkalian, dan pembagian.

### 2. Buatlah sebuah program yang menerima masukan angka dan mengeluarkan output nilai angka tersebut dalam bentuk tulisan. Angka yang akan di-input-kan user adalah bilangan bulat positif mulai dari 0 s.d 100.

```C++
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
```
### Output Unguided 2 :

##### Output 1
![Screenshot Output Unguided 2_1](https://github.com/Cupa0ng/C-_Basic/blob/main/Output_2/Outputangkakehuruf.png)

Program ini menerima input angka bulat positif dari 0-100 dan mengubahnya menjadi teks

### 3. (isi dengan soal unguided 3)

```C++
#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "input: ";
    cin >> n;
    
    cout << "output:" << endl;
    for (int i = n; i >= 0; i--) {
        for (int s = 0; s < n - i; s++) {
            cout << "  "; 
        }
        
        for (int j = i; j >= 1; j--) {
            cout << j << " ";
        }
        
        cout << "*";
        
        for (int j = 1; j <= i; j++) {
            cout << " " << j;
        }
        
        cout << endl;
    }

    return 0;
}
```
### Output Unguided 3 :

##### Output 1
![Screenshot Output Unguided 3_1](https://github.com/Cupa0ng/C-_Basic/blob/main/Output_3/Outputmirror.png)


Program ini membuat pola cermin menurun yang di tengahnya dibatasi oleh simbol bintang "*"

## Kesimpulan
dari modul ini pemahaman saya mengenai penggunaan variabel, tipe data presisi numerik, pengondisian logika, fungsi modular, hingga manipulasi perulangan bertingkat sangat krusial sebagai fondasi utama dalam membangun program C++ yang efisien dan terstruktur.

## Referensi
[1] Triase. (2020). Diktat Edisi Revisi : STRUKTUR DATA. Medan: UNIVERSTAS ISLAM NEGERI SUMATERA UTARA MEDAN. 
<br>[2] Indahyati, Uce., Rahmawati Yunianita. (2020). "BUKU AJAR ALGORITMA DAN PEMROGRAMAN DALAM BAHASA C++". Sidoarjo: Umsida Press. Diakses pada 10 Maret 2024 melalui https://doi.org/10.21070/2020/978-623-6833-67-4.
<br>...
