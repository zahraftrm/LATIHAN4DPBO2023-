# library
from SivitasAkademik import SivitasAkademik

# membuat kelas mahasiswa yang merupakan turunan kelas SivitasAkademik
class Mahasiswa(SivitasAkademik):
    # atribut privat kelas Mahasiswa
    __nim = 0
    __fakultas = ""

    # konstruktor dengan parameter
    def __init__(self, nik, nama, jenkel, asal_universitas, email_edu, nim, fakultas):
        super().__init__(nik, nama, jenkel, asal_universitas, email_edu)
        #set nilainya
        self.__nim = nim
        self.__fakultas = fakultas
    
    # tetapkan nim
    def setNim(self, nim):
        self.__nim = nim
    
    # get nim
    def getNim(self):
        return self.__nim
    
    # tetapkan fakultas
    def setFakultas(self, fakultas):
        self.__fakultas = fakultas
    
    # get fakultas
    def getFakultas(self):
        return self.__fakultas