# membuat kelas human
class Human:
    # atribut privat kelas Human
    __nik = 0
    __nama = ""
    __jenkel = ""

    # konstruktor dengan parameter
    def __init__(self, nik, nama, jenkel):
        #set nilainya
        self.__nik = nik
        self.__nama = nama
        self.__jenkel = jenkel
    
    # tetapkan nik
    def setNik(self, nik):
        self.__nik = nik
    
    # get nik
    def getNik(self):
        return self.__nik
    
    # tetapkan nama
    def setNama(self, nama):
        self.__nama = nama

    # get nama
    def getNama(self):
        return self.__nama
    
    # tetapkan jenkel
    def setJenkel(self, jenkel):
        self.__jenkel = jenkel
    
    # get jenkel
    def getJenkel(self):
        return self.__jenkel