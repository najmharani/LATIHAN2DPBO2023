#include "Human.cpp"

// deklarasi kelas Sivitas Akademik child dari kelas Human
class SivitasAkademik : public Human
{
    // atribut2 private milik kelas Sivitas Akademik
private:
    string asal_universitas;
    string email_edu;

    // method2 public milik kelas Sivitas Akademik
public:
    // constructor kosong
    SivitasAkademik()
    {
    }

    // constructor dengan parameter seluruh atribut Sivitas Akademik dan atribut Humahn
    SivitasAkademik(int nik, string nama, string jenis_kelamin, string asal_universitas, string email_edu)
        : Human(nik, nama, jenis_kelamin) // constructor super untuk kelas parent Human
    {
        this->asal_universitas = asal_universitas;
        this->email_edu = email_edu;
    }

    // setter asal universitas
    void setAsalUniversitas(string asal_universitas)
    {
        this->asal_universitas = asal_universitas;
    }

    // setter email edu
    void setEmailEdu(string email_edu)
    {
        this->email_edu = email_edu;
    }

    // getter asal universitas
    string getAsalUniversitas()
    {
        return this->asal_universitas;
    }

    // getter email edu
    string getEmailEdu()
    {
        return this->email_edu;
    }

    // destructor
    ~SivitasAkademik()
    {
    }
};
