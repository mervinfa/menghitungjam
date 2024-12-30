//judul : volume tabung
//by mervin
#include <iostream>
using namespace std;

//kamus
void tabung (int jarijari, int tinggi)
{
    cout << "volumenya adalah " << 3.14*(jarijari*jarijari)*tinggi << endl;
    cout << "luas selimutnya adalah : " << 2*3.14*jarijari*tinggi << endl;
    cout << "luas atap adalah : " << 2*3.14*jarijari*(jarijari+tinggi) << endl;
}
struct volume
{
   int jarijari,tinggi;
};

int banyaktabung;
//diskripsi
int main ()
{
    cout << "berapa banyak tabung : " ;
    cin >> banyaktabung;
    volume banyak[banyaktabung];

    for (int x=0;x<banyaktabung;x++)
    {
        cout << "masukkan jari jari tabung : ";
        cin >> banyak->jarijari;
        cout << "masukkan tinggi tabung : ";
        cin >> banyak->tinggi;
        tabung(banyak->jarijari,banyak->tinggi);
        

    }





    return 0;
}