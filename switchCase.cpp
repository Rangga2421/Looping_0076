#include <iostream>
using namespace std;

//Deklarasi variable global
int kodeJurusan;
string namaJurusan;
string statusKuota;

//prosedur input
void input(){
    cout <<"=== PENDAFTARAN JURUSAN KAMPUS ===" << endl;
    cout << "1. TEKNOLOGI INFOMASI" << endl;
    cout << "2. TEKNIK ELEKTRO" << endl;
    cout << "3. SISTEM INFORMASI" << endl;
    cout << "--------------------------------" << endl;
    cout << "Masukkan kode jurusan (1-3) : ";
    cin >> kodeJurusan;
}

//Prosedur untuk pengecekan kondisi
void pilihanJurusan() {
    switch (kodeJurusan) {
        case 1:
            namaJurusan = "TEKNOLOGI INFORMASI";
            statusKuota = "Tersedia (15 Kursi)";
            break;
        case 2:
            namaJurusan = "TEKNIK ELEKTRO";
            statusKuota = "Kuota Penuh!";
            break;
        case 3:
            namaJurusan = "SISTEM INFORMASI";
            statusKuota = "Tersedia (5 Kursi)";
            break;
        default:
            namaJurusan = "Tidak Diketahui";
            statusKuota = "Error: Kode Tidak Valid!";
    }
}

int main(){

    return 0;
}