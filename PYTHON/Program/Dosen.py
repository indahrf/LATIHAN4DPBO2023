#DOSEN
from Civitas import Civitas
# from prodi import Prodi
class Dosen (Civitas):
    
    # Attributes dari class dosen
    __nip = ""
    __fakultas = ""
    __pend_terakhir = ""
    __keahlian = ""
    
    # Constructors
    # methods dari class dosen
    def __init__(self, nik = "", nama = "", jenis_kelamin ="", asal_universitas = "", email_edu = "", nip = "" , fakultas = "", pend_terakhir = "", keahlian = ""):
        super().__init__(nik, nama, jenis_kelamin, asal_universitas, email_edu)
        # Set attributes pada class dosen
        self.__fakultas = fakultas
        self.__nip = nip
        self.__pend_terakhir = pend_terakhir
        self.__keahlian = keahlian


    # Getter dan Setter
        
    # Getter dan setter untuk nim mahasiswa
    def get_nip(self):
        return self.__nip
    def set_nip(self, nip):
        self.__nip = nip
        
    # Getter dan setter untuk fakultas mahasiswa
    def get_fakultas(self):
        return self.__fakultas
    def set_fakultas(self, fakultas):
        self.__fakultas = fakultas
        
    # Getter dan setter untuk nik mahasiswa
    def get_pend_terakhir(self):
        return self.__pend_terakhir
    def set_pend_terakhir(self, pend_terakhir):
        self.__pend_terakhir = pend_terakhir
        
    # Getter dan setter untuk nama mahasiswa
    def get_keahlian(self):
        return self.__keahlian
    def set_keahlian(self, keahlian):
        self.__keahlian = keahlian

