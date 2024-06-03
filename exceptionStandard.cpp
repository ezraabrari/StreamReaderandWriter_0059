#include <iostream>
#include <exception>
// untuk obyek exception yang akan digunakan
#include <array>
// untuk obyek array yang akan digunakan

using namespace std;

int main () {
    cout << "awal program" << endl; // penanda 1:
    try {
        array<int, 3>data = {8, 4, 2};
        // pesan array interger 3 element
        cout <<data.at(5)<<endl;
    }
}