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