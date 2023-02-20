class Human {

    private int nik;
    private String nama;
    private String jenis_kelamin;

    Human() {
    }

    Human(int nik, String nama, String jenis_kelamin) {
        this.nik = nik;
        this.nama = nama;
        this.jenis_kelamin = jenis_kelamin;
    }

    public void setNama(String nama) {
        this.nama = nama;
    }

    public void setNik(int nik) {
        this.nik = nik;
    }

    public void setJenisKelamin(String jenis_kelamin) {
        this.jenis_kelamin = jenis_kelamin;
    }

    public int getNik() {
        return this.nik;
    }

    public String getNama() {
        return this.nama;
    }

    public String getJenisKelamin() {
        return this.jenis_kelamin;
    }
}
