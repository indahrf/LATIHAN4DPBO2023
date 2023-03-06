from Course import Course
from Dosen import Dosen
from Mahasiswa import Mahasiswa

class Prodi:
    __nama_prodi = ""
    __kode = ""
    __course = Course()
    __mahasiswa = Mahasiswa()
    __dosen = Dosen()

    def __init__(self, nama_prodi = "", kode = "", course = Course(), dosen = Dosen(), mahasiswa = Mahasiswa()):
        # Set attributes pada class mahasiswa
        self.__nama_prodi = nama_prodi
        self.__kode = kode
        self.__course = course
        self.__dosen = dosen
        self.__mahasiswa = mahasiswa

    # Getter dan Setter

    # Getter dan setter untuk nama mahasiswa
    def get_nama_prodi(self):
        return self.__nama_prodi
    def set_nama_prodi(self, nama_prodi):
        self.__nama_prodi = nama_prodi

    def get_kode(self):
        return self.__kode
    def set_kode(self, kode):
        self.__kode = kode

    def get_course(self):
        return self.__course
    def set_course(self, course):
        self.__course = course

    def get_dosen(self):
            return self.__dosen
    def set_dosen(self, dosen):
        self.__dosen = dosen
    
    def get_mahasiswa(self):
            return self.__mahasiswa
    def set_course(self, mahasiswa):
        self.__mahasiswa = mahasiswa