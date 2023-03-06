# library
from Course import Course

# membuat kelas Prodi 
class Prodi():
    # atribut privat kelas Prodi
    __nama_prodi = ""
    __kode = ""
    __course = Course()

    # konstruktor dengan parameter
    def __init__(self, nama_prodi = "", kode = "", course = Course()):
        #set nilainya
        self.__nama_prodi = nama_prodi
        self.__kode = kode
        self.__course = course
    
    # tetapkan nama_prodi
    def setNama_Prodi(self, nama_prodi):
        self.__nama_prodi = nama_prodi
    
    # get nama_prodi
    def getNama_Prodi(self):
        return self.__nama_prodi
    
    # tetapkan kode
    def setKode(self, kode):
        self.__kode = kode

    # get kode
    def getKode(self):
        return self.__kode
    
    # tetapkan course
    def setCourse(self, course):
        self.__course = course

    # get course
    def getCourse(self):
        return self.__course