// library
#include <string>
#include "Mahasiswa.cpp"
#include "Dosen.cpp"

using namespace std;

// membuat kelas Course
class Course{
    // atribut yang diperlukan
    private:
        string nama_matkul;
        Mahasiswa mahasiswa;
        Dosen dosen;

    public:
        // konstruktor kosong
        Course() {
        }

        // konstruktor dengan parameter
        Course(string nama_matkul, Mahasiswa mahasiswa, Dosen dosen) {
            // set nilainya
            this->nama_matkul = nama_matkul;
        }

        // tetapkan nama_matkul
        void setNama_Matkul(string nama_matkul) {
            this->nama_matkul = nama_matkul;
        }

        // get nama_matkul
        string getNama_Matkul() {
            return this->nama_matkul;
        }
        
        // tetapkan mahasiswa
        void setMahasiswa(Mahasiswa mahasiswa) {
            this->mahasiswa = mahasiswa;
        }

        // get mahasiswa
        Mahasiswa getMahasiswa() {
            return this->mahasiswa;
        }
        // tetapkan dosen
        void setDosen(Dosen dosen) {
            this->dosen = dosen;
        }

        // get nama_matkul
        Dosen getDosen() {
            return this->dosen;
        }

        // deconstruct
        ~Course() {
        }
};