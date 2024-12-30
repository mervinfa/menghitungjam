#include <iostream>
using namespace std;

// Struktur untuk menyimpan waktu
struct waktu {
   int jam;
   int menit;
   int detik;
};

// Struktur untuk menyimpan informasi perjalanan
struct perjalanan {
    waktu waktudatang;
    waktu waktusampai;
};

// Fungsi untuk menghitung selisih waktu perjalanan
void selisihwaktu(waktu waktudatang, waktu waktusampai) {
    int totaldetikdatang = waktudatang.jam * 3600 + waktudatang.menit * 60 + waktudatang.detik;
    int totaldetiksampai = waktusampai.jam * 3600 + waktusampai.menit * 60 + waktusampai.detik;
    
    int lamaperjalanan = totaldetiksampai - totaldetikdatang;
    
    int jam = lamaperjalanan / 3600;
    int menit = (lamaperjalanan % 3600) / 60;
    int detik = lamaperjalanan % 60;
    
    cout << "Lama perjalanan: " << jam << " jam " << menit << " menit " << detik << " detik" << endl;
}

// Fungsi utama
int main() {
    int totalwaktu;
    cout << "Berapa kali ingin menghitung jam: ";
    cin >> totalwaktu;

    perjalanan perjalananarray[totalwaktu];
    
    for (int i = 0; i < totalwaktu; i++) {
        cout << "Masukkan waktu datang (jam menit detik): ";
        cin >> perjalananarray[i].waktudatang.jam >> perjalananarray[i].waktudatang.menit >> perjalananarray[i].waktudatang.detik;
        
        cout << "Masukkan waktu sampai (jam menit detik): ";
        cin >> perjalananarray[i].waktusampai.jam >> perjalananarray[i].waktusampai.menit >> perjalananarray[i].waktusampai.detik;
        
        selisihwaktu(perjalananarray[i].waktudatang, perjalananarray[i].waktusampai);
    }

    return 0;
}

