// library
#include "Human.cpp"
#ifndef SivitasAkademik_H
#define SivitasAkademik_H

// membuat kelas SivitasAkademik yang merupakan turunan dari kelas Human
class SivitasAkademik: public Human {
    // atribut yang diperlukan
    private:
        string asal_universitas;
        string email_edu;
    
    public:
        // konstruktor kosong
        SivitasAkademik() {
        }

        // konstruktor dengan parameter
        SivitasAkademik(string asal_universitas, string email_edu) {
            // set nilainya
            this->asal_universitas = asal_universitas;
            this->email_edu = email_edu;
        }

        // tetapkan asal_universitas
        void setAsal_Universitas(string asal_universitas) {
            this->asal_universitas = asal_universitas;
        }

        // get asal_universitas
        string getAsal_Universitas() {
            return this->asal_universitas;
        }

         // tetapkan email_edu
        void setEmail_Edu(string email_edu) {
            this->email_edu = email_edu;
        }

        // get email_edu
        string getEmail_Edu() {
            return this->email_edu;
        }

        // deconstruct
        ~SivitasAkademik() {
        }
};

#endif