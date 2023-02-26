#include "SivitasAkademik.cpp"

// deklarasi kelas Mahasiswa child dari kelas Sivitas Akademik
class Mahasiswa : public SivitasAkademik
{
    // atribut2 privat milik kelas Mahasiswa
private:
    int nim;
    string prodi;
    string fakultas;
    // method2 public milik kelas Mahasiswa
public:
    // constructor kosong
    Mahasiswa()
    {
    }

    // constructor dengan parameter seluruh atribut kelas dan super kelas dari Mahasiswa
    Mahasiswa(int nik, string nama, string jenis_kelamin, string asal_universitas, string email_edu, int nim, string prodi, string fakultas)
        // constructor super dari kelas parent Sivitas Akademik
        : SivitasAkademik(nik, nama, jenis_kelamin, asal_universitas, email_edu)
    {

        this->nim = nim;
        this->prodi = prodi;
        this->fakultas = fakultas;
    }

    // setter nim
    void setNim(int nim)
    {
        this->nim = nim;
    }

    // setter prodi
    void setProdi(string prodi)
    {
        this->prodi = prodi;
    }

    // setter fakultas
    void setFakultas(string fakultas)
    {
        this->fakultas = fakultas;
    }

    // getter nim
    int getNim()
    {
        return this->nim;
    }

    // getter prodi
    string getProdi()
    {
        return this->prodi;
    }

    // getter fakultas
    string getFakultas()
    {
        return this->fakultas;
    }

    // destructor
    ~Mahasiswa()
    {
    }
};
