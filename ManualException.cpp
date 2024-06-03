#include <iostream>
using namespace std;

int main() {
    try {
        cout << "Selamat belajar di prodi TI UMY " << endl;
        //Throw 0.5; // melemparkan sebuah integer maka
        cout << "pernyataan tidak akan dieksekusi" << endl;
    }

    catch (int a) {
        // blok ini akan dieksekusi
        cout << "pengecualian akan dieksekusi" << endl;
    }
}