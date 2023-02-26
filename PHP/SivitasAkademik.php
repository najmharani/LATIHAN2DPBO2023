<?php
require("Human.php");

// Deklarasi kelas Sivitas Akademik yang merupakan child dari Human
class SivitasAkademik extends Human
{
    // atribut2 private milik Sivitas Akademik
    private $asal_universitas;
    private $email_edu;

    // method2 public milik Sivitas Akademik

    // constructor
    public function __construct($nik, $nama, $jenis_kelamin, $asal_universitas, $email_edu)
    {
        // constructor super untuk kelas Human
        parent::__construct($nik, $nama, $jenis_kelamin);
        $this->asal_universitas = $asal_universitas;
        $this->email_edu = $email_edu;
    }

    // setter asal universitas
    public function setAsalUniversitas($asal_universitas)
    {
        $this->asal_universitas = $asal_universitas;
    }

    // setter email edu
    public function setEmailEdu($email_edu)
    {
        $this->email_edu = $email_edu;
    }

    // getter asal universitas
    public function getAsalUniversitas()
    {
        return $this->asal_universitas;
    }

    // getter email edu
    public function getEmailEdu()
    {
        return $this->email_edu;
    }

}

?>