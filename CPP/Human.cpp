#include <string>

using namespace std;

// deklarasi kelas Human
class Human
{
    // atribut2 private milik class human
private:
    int nik;
    string nama;
    string jenis_kelamin;

    // public method milik class human
public:
    // constructor kosong
    Human()
    {
    }

    // constructor dengan parameter seluruh atribut human
    Human(int nik, string nama, string jenis_kelamin)
    {
        this->nik = nik;
        this->nama = nama;
        this->jenis_kelamin = jenis_kelamin;
    }

    // setter NIK
    void setNik(int nik)
    {
        this->nik = nik;
    }

    // setter nama
    void setNama(string nama)
    {
        this->nama = nama;
    }

    // setter jenis kelamin
    void setJenisKelamin(string jenis_kelamin)
    {
        this->jenis_kelamin = jenis_kelamin;
    }

    // getter NIK
    int getNik()
    {
        return this->nik;
    }

    // getter nama
    string getNama()
    {
        return this->nama;
    }

    // getter jenis kelamin
    string getJenisKelamin()
    {
        return this->jenis_kelamin;
    }

    // destructor
    ~Human()
    {
    }
};
