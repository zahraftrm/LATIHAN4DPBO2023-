# membuat kelas Course
class Course:
    # atribut privat kelas Course
    __nama_matakuliah = ""

    # konstruktor dengan parameter
    def __init__(self, nama_matakuliah = ""):
        #set nilainya
        self.__nama_matakuliah = nama_matakuliah
    
    # tetapkan nama_matakuliah
    def setNama_Matakuliah(self, nama_matakuliah):
        self.__nama_matakuliah = nama_matakuliah
    
    # get nama_matakuliah
    def getNama_Matakuliah(self):
        return self.__nama_matakuliah