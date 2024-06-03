#include <fstream>
#include <iostream>
#include <string>
using namespace std;

int main() {
    string baris;
    string NamaFile;

    cout << "Masukkan Nama File : ";
    cin >> NamaFile;

    // Membuka file dalam mode menulis
    ofstream outfile;
    // Menunjuk ke sebuah nama file
    outfile.open(NamaFile + ".txt", ios::out);

    cout << ">= Menulis File, \'q\' untuk keluar" << endl;
    // Unlimited loop untuk menulis
    while (true) {
        cout << "- ";
        // Mendapatkan setiap karakter dalam satu baris
        getline(cin, baris);
        // loop akan berhenti jika anda memasukkan karakter q
        if (baris == "q") break;
        // Menulis dan memasukkan nilai dari 'baris' ke dalam file
        outfile << baris << endl;
    }
    // selesai dalam menulis sekarang tutup fileny
    outfile.close();

    // membuka  file dalam mode membaca
    ifstream infile;
    // menunjuk ke sebuah file
    infile.open(NamaFile + ".txt", ios::in);

    cout << endl << ">= Membuka dan membaca file " << endl;
    // jika file ada maka
    if (infile.is_open()) {

        // melakukan perulangan setiap bari
        while (getline(infile, baris)) {
            // dan tampilkan disini
            cout << baris << '\n';
        }
        // tutup file tersebut setelah selesai
        infile.close();
    }
}