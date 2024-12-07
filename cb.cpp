#include <iostream> 
#include <conio.h> // biar tidak mengeskip perintah selanjutnya
using namespace std;

int main (){
    char member;// apakah member y/n dan char harus 1 // tipe data yg ngaruh eror apa ga. 
    int diskon, dismember, totalbelanja;// tipe data yg ngaruh di terminal emnentukan eror apa ga. kalimatnya ga boleh beda harus sama bhkan kapitalnya 
    cout<< "PROGRAM HITUNG TOTAL BELANJA TOKO BU SUSI" << endl;// judul
    cout<< "Masukan total belanja pelanggan: Rp";// dalam".."" cout disebut pernyataan /dalam program ini pernyataan digunakan untuk perintah buat user/pengguna
    cin>> totalbelanja; // jika ingin pengguna yang memasukkan nilai di terminal, gunakn cin<<...
    cout<< " Apakah pelanggan adalah member? (y/n)";// perintah buat pengguna 
    cin>> member;

    if ( totalbelanja < 100000 ) { //if harusnya dalamnya ada kurungnya yg menyatakan syarat kondisi
        diskon =  0*totalbelanja;
        if( member == 'y') {
        dismember== 5.0/100* totalbelanja;
        cout<< "Total Belanja Pelanggan : Rp" << totalbelanja << endl;
        cout<< " diskon :" <<diskon << endl;
        cout<< "dismember :" <<dismember << endl;
        cout<< "Total Setelah Diskon : Rp" << totalbelanja-diskon-dismember << endl;// totbel dikurangi diskon dikurangi diskon memeber 
        }else{// pernyataan salah
        cout<<"Total Belanja Pelanggan : Rp" << totalbelanja-diskon << endl;
    
        }

    }
    else if (totalbelanja >= 100000 && totalbelanja <= 199999 ) {// ngasih pilihan kondisi lagi
    diskon = 5.0/100.0 * totalbelanja;
    if( member = 'y'){
    dismember = 5.0/100.0*totalbelanja;
    cout<< "Total Belanja Pelanggan : Rp" << totalbelanja << endl;
    cout<< "diskon :" <<diskon<< endl;
    cout<< "dismeber :" << dismember << endl;
    cout<< "Total Belanja Pelanggan Setelah Diskon : Rp" << totalbelanja-diskon-dismember << endl;
    }else{// harus ada depan belakang ada kurung kurawal yg kebalik 
    cout<<" Total Belanja Pelanggan : Rp" << totalbelanja-diskon << endl;
         }
    
    }
    else if ( totalbelanja >= 200000 && totalbelanja <= 299000 ) {
        diskon = 10.0/100.0 * totalbelanja;
        if (member = 'y') {
        dismember = 5.0/100.0 *totalbelanja;
        cout<< "Total Belanja Pelanggan : Rp" << totalbelanja<< endl;
        cout<< "diskon :" <<diskon<< endl;
         cout<< "dismeber :" << dismember<<endl;
         cout<< "Total Belanja Pelanggan Setelah Diskon : Rp" << totalbelanja-diskon-dismember<<endl;
    }else{// harus ada depan belakang ada kurung kurawal yg kebalik 
    cout<<" Total Belanja Pelanggan : Rp" << totalbelanja-diskon << endl;
        }
    }
    else if ( totalbelanja >= 300000 && totalbelanja <= 399999 ) {
        diskon = 15.0/100.0* totalbelanja;
        if ( member = 'y') {
        dismember = 5.0/100.0* totalbelanja;
        cout <<"Total Belanja Pelanggan : Rp" << totalbelanja<< endl;
        cout <<" diskon : " << diskon<< endl;
        cout <<"dismember :" << dismember << endl;
        cout << "Total Belanja Pelanggan Setelah Diskon : Rp" << totalbelanja-diskon-dismember<< endl;
    }else{ 
        cout<< " Total Belanja Pelanggan : Rp" << totalbelanja-diskon << endl;
        }
    }
    else if ( totalbelanja >= 400000) {
        diskon = 20.0/100.0 * totalbelanja;
        if ( member = 'y' ) {
            dismember = 5.0/100.0* totalbelanja;
            cout<< " Total Belanja Pelanggan : Rp" << totalbelanja << endl;
            cout << "diskon : " << diskon << endl;
            cout << " dismember :" << dismember<<endl;
            cout << " Total Belanja Pelanggan Setelah Diskon : Rp" << totalbelanja-diskon-dismember << endl;
        }else{
            cout<<" Total Belanja Pelanggan : Rp" << totalbelanja-diskon<< endl;
        }
        }else{
            cout<< " Total Belanja Pelanggan : Rp" <<totalbelanja << endl;
    }


 cout << "Terimakasih telah belanja di toko kami.." << endl;
 cin.ignore();// berfungsi agar tidak mengeskip perintah selanjutnya
   
   
    }
 

   

