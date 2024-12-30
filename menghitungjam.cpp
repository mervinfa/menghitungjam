//judul:menghitung jam
#include <iostream>
using namespace std;
//kamus
struct waktu
{
   int jam,menit,detik;
};
struct perjalanan 
{
    waktu waktudatang;
    waktu waktusampai;
};
void selisihwaktu( waktu waktudatang, waktu waktusampai)
{
    int totaldetikdatang = waktudatang.jam*3600 + waktudatang.menit*60 + waktudatang.detik;
    int totaldetiksampai = waktusampai.jam*3600 + waktusampai.menit*60 + waktusampai.detik;
    int lamaperjalanan = totaldetiksampai-totaldetikdatang;
    cout << lamaperjalanan << endl;
    int jam = lamaperjalanan / 3600;
    int menit = (lamaperjalanan % 3600)/60;
    int detik = lamaperjalanan % 60;
    cout <<"Lama Perjalanan : "<< jam <<" jam "<< menit<<" menit " << detik<< " detik " << endl;

}
//diskripsi
int main()
{
int totalwaktu;
    cout << "berapa kali ingin menghitung jam : ";
    cin >> totalwaktu;

   perjalanan perjalananarray[totalwaktu];

   for(int i = 0; i<totalwaktu;i++)
   {
    //waktu datang
    cout << "MASUKKAN WAKTU DATANG  "<<endl;
    cout << "masukkan waktu datang jam : " ;
    cin >> perjalananarray[i].waktudatang.jam;
    cout << "masukkan waktu datang menit : " ;
    cin >> perjalananarray[i].waktudatang.menit;
    cout << "masukkan waktu datang detik : " ;
    cin >> perjalananarray[i].waktudatang.detik;

    // waktu sampai
    cout << "MASUKKAN WAKTU SAMPAI  " << endl;
    cout << "masukkan waktu sampai jam : " ;
    cin >> perjalananarray[i].waktusampai.jam;
    cout << "masukkan waktu sampai menit : " ;
    cin >> perjalananarray[i].waktusampai.menit; 
    cout << "masukkan waktu sampai detik : " ;
    cin >> perjalananarray[i].waktusampai.detik;
    //hasil selisih waktu
    selisihwaktu(perjalananarray[i].waktudatang, perjalananarray[i].waktusampai);
   }





}