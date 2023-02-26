#include <list>
#include <iostream>
#include "Mahasiswa.cpp"

int main()
{
    // list untuk semua mahasiswa
    list<Mahasiswa> mhs;

    // meminta input jumlah mahasiswa
    int jumlah;
    cout << "Masukkan jumlah mahasiswa : ";
    cin >> jumlah;

    int nik, nim;
    string nama, jenis_kelamin, asal_universitas, email_edu, prodi, fakultas;

    // meminta input mahasiswa sebanyak jumlah
    for (int i = 1; i <= jumlah; i++)
    {

        cout << endl;
        cout << "Masukkan data mahasiswa ke-" << i << endl;
        cout << endl;

        cout << "Nama : ";
        cin >> nama;
        cout << "NIK : ";
        cin >> nik;
        cout << "Jenis Kelamin : ";
        cin >> jenis_kelamin;
        cout << "Asal Universitas : ";
        cin >> asal_universitas;
        cout << "Email Edu : ";
        cin >> email_edu;
        cout << "NIM : ";
        cin >> nim;
        cout << "Fakultas : ";
        cin >> fakultas;
        cout << "Prodi : ";
        cin >> prodi;

        // instansiasi objek mahasiswa dan memasukkannya ke dalam list
        mhs.push_back(Mahasiswa(nik, nama, jenis_kelamin, asal_universitas, email_edu, nim, prodi, fakultas));
    }

    // menampilkan list mahasiswa
    cout << "|---------------------------------" << endl;
    cout << "| Data Mahasiswa" << endl;
    cout << "|---------------------------------" << endl;
    int i = 0;
    for (Mahasiswa individu : mhs)
    {
        cout << "| " << ++i << " |" << endl;
        cout << "| Nama : " << individu.getNama() << endl;
        cout << "| NIK : " << individu.getNik() << endl;
        cout << "| Jenis Kelamin : " << individu.getJenisKelamin() << endl;
        cout << "| Asal Universitas : " << individu.getAsalUniversitas() << endl;
        cout << "| Email Edu : " << individu.getEmailEdu() << endl;
        cout << "| NIM : " << individu.getNim() << endl;
        cout << "| Prodi : " << individu.getProdi() << endl;
        cout << "| Fakultas : " << individu.getFakultas() << endl;
        cout << "|---------------------------------" << endl;
    }

    return 0;
}