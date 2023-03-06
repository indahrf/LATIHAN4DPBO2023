class Course:
    __nama_matakuliah = ""

    def __init__(self, nama_matakuliah = ""):
        # Set attributes pada class mahasiswa
        self.__nama_matakuliah = nama_matakuliah

    # Getter dan Setter

    # Getter dan setter untuk nama mahasiswa
    def get_nama_matakuliah(self):
        return self.__nama_matakuliah
    def set_nama_matakuliah(self, nama_matakuliah):
        self.__nama_matakuliah = nama_matakuliah