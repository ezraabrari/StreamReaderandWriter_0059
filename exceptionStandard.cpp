#include <iostream>
#include <exception>
// untuk obyek exception yang akan digunakan
#include <array>
// untuk obyek array yang akan digunakan

using namespace std;

int main () {
    cout << "awal program" << endl; // penanda 1:....
    try {
        array<int, 3>data = {8, 4, 2};
        // pesan array interger 3 element
        cout <<data.at(5)<<endl;
    }
    catch (exception& e) {
        // penangkap menggunakan obyek exception
        cout << e.what() << endl;
        /*akan dieksekusi karna array data hanya memilki 3 elemen*/
    }
    cout << "baris Program yang terakhir" << endl;
    /*Penanda 2: bahwa program berjalan tanpa henti meskipun terjadi kesalahan*/

    return 0;

}