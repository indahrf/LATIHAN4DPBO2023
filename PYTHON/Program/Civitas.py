#CIVITAS
from Human import Human
class Civitas(Human):
    __asal_universitas = ""
    __email_edu = ""
    def __init__(self, nik = "", nama = "", jenis_kelamin ="", asal_universitas = "", email_edu = ""):
        super().__init__(nik, nama, jenis_kelamin)
        # Set attributes pada class mahasiswa
        self.__nama = nama
        self.__nik = nik
        self.__asal_universitas = asal_universitas
        self.__jenis_kelamin = jenis_kelamin
        self.__email_edu = email_edu


    # Getter dan Setter

    # Getter dan setter untuk nama mahasiswa
    def get_univ(self):
        return self.__asal_universitas
    def set_univ(self, asal_universitas):
        self.__asal_universitas = asal_universitas
        
    # Getter dan setter untuk nama mahasiswa
    def get_email(self):
        return self.__email_edu
    def set_email(self, email_edu):
        self.__email_edu = email_edu
