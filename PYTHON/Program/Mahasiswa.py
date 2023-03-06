from Civitas import Civitas
# from prodi import Prodi

#MAHASISWA
class Mahasiswa (Civitas):
    
    # Attributes dari class mahasiswa
    __nim = ""
    __fakultas = ""
    # Constructors
    # methods dari class mahasiswa
    def __init__(self, nik = "", nama = "", jenis_kelamin ="", asal_universitas = "", email_edu = "", nim = "" , fakultas = ""):
        super().__init__(nik, nama, jenis_kelamin, asal_universitas, email_edu)
        # Set attributes pada class mahasiswa
        self.__nim = nim
        self.__fakultas = fakultas

    # Getter dan Setter

# Getter dan setter untuk nim mahasiswa
    def get_nim(self):
        return self.__nim
    def set_nim(self, nim):
        self.__nim = nim
        
    # Getter dan setter untuk fakultas mahasiswa
    def get_fakultas(self):
        return self.__fakultas
    def set_fakultas(self, fakultas):
        self.__fakultas = fakultas