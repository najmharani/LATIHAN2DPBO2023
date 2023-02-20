import java.util.ArrayList;

public class Main {
    public static void main(String[] args) {

        // list untuk semua mahasiswa
        ArrayList<Mahasiswa> mhs = new ArrayList<Mahasiswa>();

        Mahasiswa najma = new Mahasiswa(1111, "Najma", "Perempuan", "UPI", "najma@upi.edu", 2102843, "Ilkom", "FPMIPA");
        mhs.add(najma);
        Mahasiswa zahra = new Mahasiswa(2222, "Zahra", "Perempuan", "UPI", "zahra@upi.edu", 2155832, "Matematika",
                "FPMIPA");
        mhs.add(zahra);
        Mahasiswa rifat = new Mahasiswa(3333, "Rifat", "Laki-Laki", "Telkom", "rifat@telkom.edu", 2122888, "RPL",
                "FTI");
        mhs.add(rifat);
        Mahasiswa faiz = new Mahasiswa(4444, "Faiz", "Laki-Laki", "ITB", "faiz@itb.edu", 2134567, "Informatika",
                "STEI");
        mhs.add(faiz);

        // print mahasiswa

        int i = 0;

        System.out.println("Daftar Mahasiswa\n");

        for (Mahasiswa individu : mhs) {
            System.out.print(++i + ". ");
            System.out.println("Nama : " + individu.getNama());
            System.out.println("NIK : " + individu.getNik());
            System.out.println("Jenis Kelamin : " + individu.getJenisKelamin());
            System.out.println("Asal Universitas : " + individu.getAsalUniversitas());
            System.out.println("Email Edu : " + individu.getEmailEdu());
            System.out.println("NIM : " + individu.getNim());
            System.out.println("Prodi : " + individu.getProdi());
            System.out.println("Fakultas : " + individu.getFakultas());
            System.out.println();
        }
    }
}
