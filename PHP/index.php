<?php

require("Mahasiswa.php");

// list mahasiswa
$mhs = [];

// input data mahasiswa secara hardcode ke dalam list
$mhs[] = new Mahasiswa(1111, "Najma", "Perempuan", "UPI", "najma@upi.edu", 2102843, "Ilkom", "FPMIPA");
$mhs[] = new Mahasiswa(2222, "Zahra", "Perempuan", "UPI", "zahra@upi.edu", 2155832, "Matematika", "FPMIPA");
$mhs[] = new Mahasiswa(3333, "Rifat", "Laki-Laki", "Telkom", "rifat@telkom.edu", 2122888, "RPL", "FTI");
$mhs[] = new Mahasiswa(4444, "Faiz", "Laki-Laki", "ITB", "faiz@itb.edu", 2134567, "Informatika", "STEI");

echo "<h3>Daftar Data Mahasiswa</h3>";

// menampilkan head dari tabel
$i = 1;
echo "<table border='1'>";
echo "<tr>";
echo "<th>";
echo "No";
echo "</th>";
echo "<th>";
echo "NIK";
echo "</th>";
echo "<th>";
echo "NIM";
echo "</th>";
echo "<th>";
echo "Nama";
echo "</th>";
echo "<th>";
echo "Jenis Kelamin";
echo "</th>";
echo "<th>";
echo "Asal Universitas";
echo "</th>";
echo "<th>";
echo "Email Edu";
echo "</th>";
echo "<th>";
echo "Fakultas";
echo "</th>";
echo "<th>";
echo "Prodi";
echo "</th>";
echo "</tr>";

// perulangan menampilkan data mahasiswa
foreach ($mhs as $individu) {
    echo "<tr>";
    echo "<td>";
    echo $i . ". ";
    echo "</td>";
    echo "<td>";
    echo $individu->getNik();
    echo "</td>";
    echo "<td>";
    echo $individu->getNim();
    echo "</td>";
    echo "<td>";
    echo $individu->getNama();
    echo "</td>";
    echo "<td>";
    echo $individu->getJenisKelamin();
    echo "</td>";
    echo "<td>";
    echo $individu->getAsalUniversitas();
    echo "</td>";
    echo "<td>";
    echo $individu->getEmailEdu();
    echo "</td>";
    echo "<td>";
    echo $individu->getFakultas();
    echo "</td>";
    echo "<td>";
    echo $individu->getProdi();
    echo "</td>";
    echo "</tr>";
    $i++;
}
echo "</table>";

?>