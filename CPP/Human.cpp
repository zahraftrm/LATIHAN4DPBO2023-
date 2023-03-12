// library
#include <string>
#ifndef Human_H
#define Human_H

using namespace std;

// membuat kelas Human
class Human{
    // atribut yang diperlukan
    private:
        string nik;
        
    public:
        string nama;
        string jenkel;
    
    public:
        // konstruktor kosong
        Human() {
        }

        // konstruktor dengan parameter
        Human(string nik, string nama, string jenkel) {
            // set nilainya
            this->nik = nik;
            this->nama = nama;
            this->jenkel = jenkel;
        }

        // tetapkan nama
        void setNama(string nama) {
            this->nama = nama;
        }

        // get nama
        string getNama() {
            return this->nama;
        }

         // tetapkan nik
        void setNik(string nik) {
            this->nik = nik;
        }

        // get nik
        string getNik() {
            return this->nik;
        }

         // tetapkan jenkel
        void setJenkel(string jenkel) {
            this->jenkel = jenkel;
        }

        // get jenkel
        string getJenkel() {
            return this->jenkel;
        }
        
        // deconstruct
        ~Human() {
        }
};

#endif