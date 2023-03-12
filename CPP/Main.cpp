// library
#include <iostream>
#include "Mahasiswa.cpp"
#include "Dosen.cpp"
#include "Prodi.cpp"

int main() {
    // welcome!
    cout << "\n===== Selamat Datang di Database Mahasiswa UPI =====" << endl;

    // membuat array of objects untuk kelas Human
    Human iniHuman[4];

    // input data hardcode
    iniHuman[0] = Human("1800456712330987","Zahra Fitria", "P");
    iniHuman[1] = Human("1800456710030900", "Lili Rosalini", "P");
    iniHuman[2] = Human("1800458715030160", "Eli Nur Hayat", "P");

    // keluarkan output
    cout << "\n== Data Manusia ==";

    for(int i = 0; i < 3; i++) {
        cout << "\n# Data Ke-" << i+1 << endl;
        cout << "NIK       : " << iniHuman[i].getNik() << "\nNama      : " << iniHuman[i].getNama() << "\nJenis K.  : " << iniHuman[i].getJenkel() << endl;
    }

    // membuat array of objects untuk kelas Sivitas Akademik
    SivitasAkademik iniSivitas[4];

    // input data hardcode
    iniSivitas[0] = SivitasAkademik("UPI", "zahrafitriia@upi.edu");
    iniSivitas[1] = SivitasAkademik("UPI", "liliirozaa@upi.edu");
    iniSivitas[2] = SivitasAkademik("UPI", "elinur100@upi.edu");

    // keluarkan output
    cout << "\n== Data Sivitas Akademik ==";

    for(int i = 0; i < 3; i++) {
        cout << "\n# Data Ke-" << i+1 << endl;
        cout << "Univ. Asal  : " << iniSivitas[i].getAsal_Universitas() << "    ||    Email      : " << iniSivitas[i].getEmail_Edu() << endl;
    }

    // membuat array of objects untuk kelas Mahasiswa
    Mahasiswa iniMahasiswa[4];

    // input data hardcode
    iniMahasiswa[0] = Mahasiswa(2102545,"Zahra Fitria", "P", "FPMIPA");
    iniMahasiswa[1] = Mahasiswa(2102000,"Lili Rosalini", "P", "FPMIPA");
    iniMahasiswa[2] = Mahasiswa(2102650,"Eli Nur Hayat", "P", "FPMIPA");
    // keluarkan output
    cout << "\n== Data Mahasiswa ==";

    for(int i = 0; i < 3; i++) {
        cout << "\n# Data Ke-" << i+1 << endl;
        cout << "NIM       : " << iniMahasiswa[i].getNim() << "\nNama      : " << iniMahasiswa[i].getNama() << "\nJenis K.  : " << iniMahasiswa[i].getJenkel() << "\nFakultas  : " << iniMahasiswa[i].getFakultas() << endl;
    }

    // membuat array of objects untuk kelas Dosen
    Dosen iniDosen[4];

    // input data hardcode
    iniDosen[0] = Dosen(11002233,"Helena", "P", "FPMIPA", "S2", "DPBO");
    iniDosen[1] = Dosen(11002244,"Selena", "P", "FPMIPA", "S2", "ML");
    iniDosen[2] = Dosen(11002255,"Rudi", "L", "FPMIPA", "S2", "AI");

    // keluarkan output
    cout << "\n== Data Dosen ==";

    for(int i = 0; i < 3; i++) {
        cout << "\n# Data Ke-" << i+1 << endl;
        cout << "NIP       : " << iniDosen[i].getNip() << "\nNama      : " << iniDosen[i].getNama() << "\nJenis K.  : " << iniDosen[i].getJenkel() << "\nFakultas  : " << iniDosen[i].getFakultas() << "\nPend. Terakhir  : " << iniDosen[i].getPend_Terakhir() << "\nKeahlian : " << iniDosen[i].getKeahlian()<< endl;
    }

    // membuat array of objects untuk kelas Course
    Course iniCourse[4];
    iniCourse[0] = Course("Desain Pemrograman Berorientasi Objek", iniMahasiswa[0], iniDosen[0]);
    iniCourse[1] = Course("Machine Learning", iniMahasiswa[1], iniDosen[1]);
    iniCourse[2] = Course("Artificial Intelligence", iniMahasiswa[2], iniDosen[2]);
    
    // masukkan ke dalam array of objects untuk kelas Prodi
    Prodi iniProdi[4];
    iniProdi[0] = Prodi("Ilmu Komputer", "IK210", iniCourse[0]);
    iniProdi[1] = Prodi("Ilmu Komputer", "IK210", iniCourse[1]);
    iniProdi[2] = Prodi("Ilmu Komputer", "IK210", iniCourse[2]);

    // keluarkan output
    cout << "\n== Data Prodi ==";

    for(int i = 0; i < 3; i++) {
        cout << "\n# Data Ke-" << i+1 << endl;
        cout << "Nama Prodi	: " << iniProdi[i].getNama_Prodi() << "\nKode Prodi	: " << iniProdi[i].getKode() << "\nJurusan		: " << iniProdi[i].getCourse().getNama_Matkul() << endl;
    }

    return 0;
}