# import kelas mahasiswa
from Mahasiswa import Mahasiswa

# deklarasi list mahasiswa
mhs = []

# meminta jumlah mahasiswa yang akan di-input datanya
jumlah = int(input("Masukkan jumlah mahasiswa : "))

# meminta inputan data mahasiswa sebanyak jumlah
for i in range(jumlah):
    i += 1
    print()
    print("Masukkan Data Mahasiswa ke-", i)
    print()

    nama = input("Nama : ")
    nik = int(input("NIK : "))
    jenis_kelamin = input("Jenis Kelamin : ")
    asal_universitas = input("Asal Universitas : ")
    email_edu = input("Email Edu : ")
    nim = int(input("NIM : "))
    fakultas = input("Fakultas : ")
    prodi = input("Prodi : ")

    # instansiasi objek mahasiswa dan memasukkannya ke dalam list
    mhs.append(
        Mahasiswa(
            nik,
            nama,
            jenis_kelamin,
            asal_universitas,
            email_edu,
            nim,
            prodi,
            fakultas,
        )
    )

# menampilkan list data mahasiswa

print("|---------------------------------")
print("| DATA MAHASISWA")
print("|---------------------------------")
i = 1
for individu in mhs:
    print("| ", i, " |")
    print("| Nama : ", individu.getNama())
    print("| NIK : ", individu.getNik())
    print("| Jenis Kelamin : ", individu.getJenisKelamin())
    print("| Asal Universitas : ", individu.getAsalUniversitas())
    print("| Email Edu : ", individu.getEmailEdu())
    print("| NIM : ", individu.getNim())
    print("| Prodi : ", individu.getProdi())
    print("| Fakultas : ", individu.getFakultas())
    print("|---------------------------------")
    i += 1
