# library
from Human import Human

# membuat kelas sivitas akademik yang merupakan turunan kelas Human
class SivitasAkademik(Human):
    # atribut privat kelas SivitasAkademik
    __asal_universitas = ""
    __email_edu = ""

    # konstruktor dengan parameter
    def __init__(self, nik, nama, jenkel, asal_universitas, email_edu):
        super().__init__(nik, nama, jenkel)
        #set nilainya
        self.__asal_universitas = asal_universitas
        self.__email_edu = email_edu
    
    # tetapkan asal_universitas
    def setAsal_Universitas(self, asal_universitas):
        self.__asal_universitas = asal_universitas
    
    # get asal_universitas
    def getAsal_Universitas(self):
        return self.__asal_universitas
    
    # tetapkan email_edu
    def setEmail_Edu(self, email_edu):
        self.__email_edu = email_edu

    # get email_edu
    def getEmail_Edu(self):
        return self.__email_edu