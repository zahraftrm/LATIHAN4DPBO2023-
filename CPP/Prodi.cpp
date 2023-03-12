// library
#include <string>
#include "Course.cpp"

using namespace std;

// membuat kelas Prodi
class Prodi{
    // atribut yang diperlukan
    private:
        string nama_prodi;
        string kode;
        Course course;
    
    public:
        // konstruktor kosong
        Prodi() {
        }

        // konstruktor dengan parameter
        Prodi(string nama_prodi, string kode, Course course) {
            // set nilainya
            this->nama_prodi = nama_prodi;
            this->kode = kode;
            this->course = course;
        }

        // tetapkan kode
        void setKode(string kode) {
            this->kode = kode;
        }

        // get kode
        string getKode() {
            return this->kode;
        }

         // tetapkan nama_prodi
        void setNama_Prodi(string nama_prodi) {
            this->nama_prodi = nama_prodi;
        }

        // get nama_prodi
        string getNama_Prodi() {
            return this->nama_prodi;
        }

         // tetapkan course
        void setCourse(Course course) {
            this->course = course;
        }

        // get course
        Course getCourse() {
            return this->course;
        }
        
        // deconstruct
        ~Prodi() {
        }
};