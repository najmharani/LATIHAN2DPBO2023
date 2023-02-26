<?php
require("SivitasAkademik.php");

// deklarasi kelas Mahasiswa yang merupakan child dari Sivitas Akademik
class Mahasiswa extends SivitasAkademik
{
    // atribut2 milik kelas Mahasiswa
    private $nim;
    private $prodi;
    private $fakultas;

    // method2 milik kelas Mahasiswa

    // constructor
    public function __construct($nik, $nama, $jenis_kelamin, $asal_universitas, $email_edu, $nim, $prodi, $fakultas)
    {
        // constructor super untuk kelas Sivitas Akademik
        parent::__construct($nik, $nama, $jenis_kelamin, $asal_universitas, $email_edu);
        $this->nim = $nim;
        $this->prodi = $prodi;
        $this->fakultas = $fakultas;
    }

    // setter nim
    public function setNim($nim)
    {
        $this->nim = $nim;
    }

    // getter prodi
    public function setProdi($prodi)
    {
        $this->prodi = $prodi;
    }

    // setter fakultas
    public function setFakultas($fakultas)
    {
        $this->fakultas = $fakultas;
    }

    // getter nim
    public function getNim()
    {
        return $this->nim;
    }

    // getter prodi
    public function getProdi()
    {
        return $this->prodi;
    }

    // getter fakultas
    public function getFakultas()
    {
        return $this->fakultas;
    }


}

?>