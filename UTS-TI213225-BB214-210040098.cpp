

#include <iostream>
using namespace std;

void listLatihan() //menggunakan method void
{
    cout<<"================================="<<endl;
    cout<<"         LIST TUGAS              "<<endl;
    cout<<"---------------------------------"<<endl;
    cout<<"     1) SEWA KAMAR HOTEL         "<<endl;
    cout<<"================================="<<endl;

}
int main() //return value method
{
    listLatihan(); // menaruh method void
    cout<<endl;

int pilihan; // mendeklarasikan tipe data
    char ulang;
    string nama;


    cout<<"NAMA : ";
    getline(cin,nama);
    system("cls");

    int harga,bayar;
    int hari;


    do{ //perulangan
    cout<<" SELAMAT DATANG"<<" Mr/Ms "<<nama<<" "<<"DI HOTEL BINTANG JATUH "<<endl<<endl; //memanggil input nama
    cout<<" BERIKUT MERUPAKAN LIST KAMAR DAN HARGA "<<endl;


    cout<<"|-----------------------------------------|"<<endl;
    cout<<"|     NO KAMAR   |         HARGA          |"<<endl;
    cout<<"|-----------------------------------------|"<<endl;
    cout<<"|        001     |       Rp.500.000       |"<<endl;
    cout<<"|        002     |       Rp.750.000       |"<<endl;
    cout<<"|        003     |       Rp.1.000.000     |"<<endl;
    cout<<"|-----------------------------------------|"<<endl<<endl;

    cout<<" PILIH KAMAR NO BERAPA ? ";
    cin>>pilihan;
    system("cls");

    switch(pilihan) // menggunakan switch case
    {
    case 001 :
        cout<<"     ANDA MEMILIH KAMAR NO 001 "<<endl;
        cout<<" -------------------------------- "<<endl;
        cout<<"|    HARGA |     Rp.500.000      |"<<endl;
        cout<<"|        > 2 hari Rp.400.000     | "<<endl;
        cout<<" -------------------------------- "<<endl;

        cout<<"BERAPA HARI ANDA INGIN MENYEWA ? ";
        cin>>hari;
        if(hari>2)  //if >2 ahri mendapatkan pototngan harga
        {
            cout<<" SEWA = "<<hari<<" hari"<<endl;
            harga=400000;
            cout<<"HARGA = Rp.400.000  / Hari"<<endl;
        }
        else
        {
            cout<<" SEWA = "<<hari<<" hari"<<endl;
            harga=500000;
            cout<<"HARGA = Rp.500.000  / Hari"<<endl;
        }

        bayar=hari*harga;

        cout<<endl<<endl;

        cout<<"TOTAL YANG HARUS DI BAYAR  Rp."<<bayar<<endl;
        break;

    case 002 :
        cout<<"     ANDA MEMILIH KAMAR NO 002 "<<endl;
        cout<<" -------------------------------- "<<endl;
        cout<<"|    HARGA |     Rp.750.000      |"<<endl;
        cout<<"|        > 2 hari Rp.600.000     | "<<endl;
        cout<<" -------------------------------- "<<endl;

        cout<<"BERAPA HARI ANDA INGIN MENYEWA ? ";
        cin>>hari;
        if(hari>2)//if >2 ahri mendapatkan pototngan harga
        {
            cout<<" SEWA = "<<hari<<" hari"<<endl;
            harga=600000;
            cout<<"HARGA = Rp.600.000  / Hari"<<endl;
        }
        else
        {
            cout<<" SEWA = "<<hari<<" hari"<<endl;
            harga=750000;
            cout<<"HARGA = Rp.750.000  / Hari"<<endl;
        }

        bayar=hari*harga;

        cout<<endl<<endl;

        cout<<"TOTAL YANG HARUS DI BAYAR  Rp."<<bayar<<endl;
        break;

    case 003 :
        cout<<"     ANDA MEMILIH KAMAR NO 003 "<<endl;
        cout<<" -------------------------------- "<<endl;
        cout<<"|    HARGA |     Rp.1.000.000      |"<<endl;
        cout<<"|        > 2 hari Rp.800.000     | "<<endl;
        cout<<" -------------------------------- "<<endl;

        cout<<"BERAPA HARI ANDA INGIN MENYEWA ? ";
        cin>>hari;
       if(hari>2)//if >2 ahri mendapatkan pototngan harga
        {
            cout<<" SEWA = "<<hari<<" hari"<<endl;
            harga=800000;
            cout<<"HARGA = Rp.800.000  / Hari"<<endl;
        }
        else
        {
            cout<<" SEWA = "<<hari<<" hari"<<endl;
            harga=500000;
            cout<<"HARGA = Rp.1.000.000  / Hari"<<endl;
        }
        bayar=hari*harga;

        cout<<endl<<endl;

        cout<<"TOTAL YANG HARUS DI BAYAR  Rp."<<bayar<<endl;
        break;

    default:
        cout<<"!SALAH INPUT!"<<endl;

    }
    cout<<endl;
    cout<<"INGIN KE MENU AWAL  ?[y/t] ";
    cin>>ulang;
    cout<<endl;
    system("cls");
    }
while( ulang!='t');

cout<<" TERIMA KASIH ";
     return 0;
}



