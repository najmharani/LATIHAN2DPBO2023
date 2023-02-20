// deklarasi kelas mahasiswa
public class Mahasiswa extends SivitasAkademik {

    // atribut-atribut private pada kelas :
    private int nim;
    private String prodi;
    private String fakultas;

    // constructor kosong
    public Mahasiswa() {
    }

    // constructor dengan parameter
    public Mahasiswa(int nik, String nama, String jenis_kelamin, String asal_universitas, String email_edu, int nim,
            String prodi, String fakultas) {
        setNik(nik);
        setNama(nama);
        setJenisKelamin(jenis_kelamin);
        setAsalUniversitas(asal_universitas);
        setEmailEdu(email_edu);
        this.nim = nim;
        this.prodi = prodi;
        this.fakultas = fakultas;
    }

    // setter nim
    public void setNim(int nim) {
        this.nim = nim;
    }

    // setter prodi
    public void setProdi(String prodi) {
        this.prodi = prodi;
    }

    // setter fakultas
    public void setFakultas(String fakultas) {
        this.fakultas = fakultas;
    }

    // getter nim
    public int getNim() {
        return nim;
    }

    // getter prodi
    public String getProdi() {
        return prodi;
    }

    // getter fakultas
    public String getFakultas() {
        return fakultas;
    }
}