# library
from SivitasAkademik import SivitasAkademik

# membuat kelas dosen yang merupakan turunan kelas SivitasAkademik
class Dosen(SivitasAkademik):
    # atribut privat kelas Dosen
    __nip = 0
    __fakultas = ""
    __pend_terakhir = 0
    __keahlian = ""

    # konstruktor dengan parameter
    def __init__(self, nik, nama, jenkel, asal_universitas, email_edu, nip, fakultas, pend_terakhir, keahlian):
        super().__init__(nik, nama, jenkel, asal_universitas, email_edu)
           #set nilainya
        self.__nip = nip
        self.__fakultas = fakultas
        self.__pend_terakhir = pend_terakhir
        self.__keahlian = keahlian
    
    # tetapkan nip
    def setNip(self, nip):
        self.__nip = nip
    
    # get nip
    def getNip(self):
        return self.__nip
    
    # tetapkan fakultas
    def setFakultas(self, fakultas):
        self.__fakultas = fakultas
    
    # get fakultas
    def getFakultas(self):
        return self.__fakultas
    
    # tetapkan pend_terakhir
    def setPend_Terakhir(self, pend_terakhir):
        self.__pend_terakhir = pend_terakhir
    
    # get pend_terakhir
    def getPend_Terakhir(self):
        return self.__pend_terakhir
    
    # tetapkan keahlian
    def setKeahlian(self, keahlian):
        self.__keahlian = keahlian
    
    # get keahlian
    def getKeahlian(self):
        return self.__keahlian
    
    
    