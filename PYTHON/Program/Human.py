#HUMAN
class Human:
    __nama = ""
    __nik = ""
    __jenis_kelamin = ""

    def __init__(self, nik = "", nama = "", jenis_kelamin =""):
        # Set attributes pada class mahasiswa
        self.__nama = nama
        self.__nik = nik
        self.__jenis_kelamin = jenis_kelamin

    # Getter dan Setter

    # Getter dan setter untuk nama mahasiswa
    def get_nama(self):
        return self.__nama
    def set_nama(self, nama):
        self.__nama = nama

    # Getter dan setter untuk nik mahasiswa
    def get_nik(self):
        return self.__nik
    def set_nik(self, nik):
        self.__nik = nik
        
    # Getter dan setter untuk nama mahasiswa
    def get_jenis(self):
        return self.__jenis_kelamin
    def set_jenis(self, jenis_kelamin):
        self.__jenis_kelamin = jenis_kelamin