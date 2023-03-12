// library
#include "SivitasAkademik.cpp"
#ifndef Dosen_H
#define Dosen_H

// membuat kelas Dosen yang merupakan turunan dari kelas SivitasAkademik
class Dosen: public SivitasAkademik {
    // atribut yang diperlukan
    private:
        int nip;
        string fakultas;
        string pend_terakhir;
        string keahlian;
    
    public:
        // konstruktor kosong
        Dosen() {
        }

        // konstruktor dengan parameter
        Dosen(int nip, string nama, string jenkel, string fakultas, string pend_terakhir, string keahlian) {
            // set nilainya
            this->nip = nip; 
            this->nama = nama;
            this->jenkel = jenkel;
            this->fakultas = fakultas;
            this->pend_terakhir = pend_terakhir;
            this->keahlian = keahlian;
        }

        // tetapkan nip
        void setNip(int nip) {
            this->nip = nip;
        }

        // get nip
        int getNip() {
            return this->nip;
        }

        // tetapkan fakultas
        void setFakultas(string fakultas) {
            this->fakultas = fakultas;
        }
        
        // get fakultas
        string getFakultas() {
            return this->fakultas;
        }

        // tetapkan pend_terakhir
        void setPend_Terakhir(string pend_terakhir) {
            this->pend_terakhir = pend_terakhir;
        }
        
        // get pend_terakhir
        string getPend_Terakhir() {
            return this->pend_terakhir;
        }
        
        // tetapkan keahlian
        void setKeahlian(string keahlian) {
            this->keahlian = keahlian;
        }
        
        // get keahlian
        string getKeahlian() {
            return this->keahlian;
        }

        // deconstruct
        ~Dosen() {
        }
};

#endif