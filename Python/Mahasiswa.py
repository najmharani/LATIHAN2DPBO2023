# import kelas Sivitas Akademik
from SivitasAkademik import SivitasAkademik

# deklarasi kelas Mahasiswa yang merupakan child dari kelas Sivitas Akademik
class Mahasiswa(SivitasAkademik):

    # atribut2 privat milik kelas Mahasiswa
    __nim = 0
    __prodi = ""
    __fakultas = ""

    # constructor
    def __init__(
        self,
        nik=0,
        nama="",
        jenis_kelamin="",
        asal_universitas="",
        email_edu="",
        nim=0,
        prodi="",
        fakultas="",
    ):
        # constructor super untuk kelas Sivitas Akademik
        super().__init__(nik, nama, jenis_kelamin, asal_universitas, email_edu)
        self.__nim = nim
        self.__prodi = prodi
        self.__fakultas = fakultas

    # setter nim
    def setNim(self, nim):
        self.__nim = nim

    # setter prodi
    def setProdi(self, prodi):
        self.__prodi = prodi

    # setter fakultas
    def setFakultas(self, fakultas):
        self.__fakultas = fakultas

    # getter nim
    def getNim(self):
        return self.__nim

    # getter prodi
    def getProdi(self):
        return self.__prodi

    # getter fakultas
    def getFakultas(self):
        return self.__fakultas
