// library
#include "SivitasAkademik.cpp"
#ifndef Mahasiswa_H
#define Mahasiswa_H

// membuat kelas mahasiswa yang merupakan turunan dari kelas SivitasAkademik
class Mahasiswa: public SivitasAkademik {
    // atribut yang diperlukan
    private:
        int nim;
        string fakultas;
    
    public:
        // konstruktor kosong
        Mahasiswa() {
        }

        // konstruktor dengan parameter
        Mahasiswa(int nim, string nama, string jenkel, string fakultas) {
            // set nilainya
            this->nim = nim; 
            this->nama = nama;
            this->jenkel = jenkel;
            this->fakultas = fakultas;
        }

         // tetapkan nim
        void setNim(int nim) {
            this->nim = nim;
        }

        // get nim
        int getNim() {
            return this->nim;
        }

         // tetapkan fakultas
        void setFakultas(string fakultas) {
            this->fakultas = fakultas;
        }
        
        // get fakultas
        string getFakultas() {
            return this->fakultas;
        }
        
        // deconstruct
        ~Mahasiswa() {
        }
};

#endif