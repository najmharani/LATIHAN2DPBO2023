<?php

// Deklarasi kelas Human
class Human
{
    // atribut2 private milik kelas Human
    private $nik;
    private $nama;
    private $jenis_kelamin;

    // method2 public milik kelas Human

    // constructor
    public function __construct($nik, $nama, $jenis_kelamin)
    {
        $this->nik = $nik;
        $this->nama = $nama;
        $this->jenis_kelamin = $jenis_kelamin;
    }

    // setter NIK
    public function setNik($nik)
    {
        $this->nik = $nik;
    }

    // setter nama
    public function setNama($nama)
    {
        $this->nama = $nama;
    }

    // setter jenis kelamin
    public function setJenisKelamin($jenis_kelamin)
    {
        $this->jenis_kelamin = $jenis_kelamin;
    }

    // getter nik
    public function getNik()
    {
        return $this->nik;
    }

    // getter nama
    public function getNama()
    {
        return $this->nama;
    }

    // getter jenis kelamin
    public function getJenisKelamin()
    {
        return $this->jenis_kelamin;
    }

}

?>