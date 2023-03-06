


# Saya Indah Resti Fauzi NIM 2103507 mengerjakan soal Latihan 4 dalam mata kuliah Desain dan Pemrograman Berorientasi Objek 
# untuk keberkahanNya maka saya tidak melakukan kecurangan seperti yang telah dispesifikasikan. Aamiin.

#Import file
from Mahasiswa import Mahasiswa
from Dosen import Dosen
from Prodi import Prodi
from Course import Course


# Deklarasi linked list library
Mahasiswas =[]
Dosens = []
Courses = []
Prodis = []

Courses.append(Course("Desain dan Pemrograman Berorientasi Objek"))
Courses.append(Course("Analisis dan Desain Algoritma"))
Dosens.append(Dosen("32118275", "Muhammad", 'L', "Universitas Pendidikan Indonesia", "muhammad@upi.edu", "07072001", "FPMIPA", "S2", "Pemrograman"))
Mahasiswas.append(Mahasiswa("32112910", "Indah", 'P', "Universitas Pendidikan Indonesia", "indah@upi.edu", "2103507", "FPMIPA"))
Dosens.append(Dosen("321112571", "Sandi", 'L', "Universitas Pendidikan Indonesia", "sandi@upi.edu", "17920190", "FPMIPA", "S3", "Riset"))
Mahasiswas.append(Mahasiswa("32112911", "Resti", 'P', "Universitas Pendidikan Indonesia", "resti@upi.edu", "2103517", "FPMIPA"))
Prodis.append(Prodi("Ilmu Komputer", "2212", Courses, Dosens, Mahasiswas))

i = int(0)

print()
print("===Daftar Program Studi===")
for Prodi in Prodis:
    print(str(i + 1) + ".", Prodi.get_nama_prodi(), ": ", Prodi.get_kode())
    k = int(0)
    print("   Mata kuliah:")
    for j in Courses:
        print("   - ", Prodi.get_course()[k].get_nama_matakuliah())
        k += 1

    k = 0
    print("   Dosen:")
    for j in Dosens:
        print("   - ",Prodi.get_dosen()[k].get_nama())
        k += 1

    print("   Mahasiswa:")
    k = 0
    for j in Mahasiswas:
        print("   - ", Prodi.get_mahasiswa()[k].get_nama())
        k += 1

    i+=1

i = 0
print()
print()
print("===Daftar Dosen===")
for Dosen in Dosens:
    print(str(i + 1) + ".", Dosen.get_nama())
    print("   Gender        : ", Dosen.get_jenis())
    print("   NIK           : ", Dosen.get_nik())
    print("   NIP           : ", Dosen.get_nip())
    print("   E-mail        : ", Dosen.get_email())
    print("   Pendidikan    : ", Dosen.get_pend_terakhir())
    print("   Keahlian      : ", Dosen.get_keahlian())
    print("   Universitas   : ", Dosen.get_univ())
    print("   Fakultas      : ", Dosen.get_fakultas())
    
    i+=1

i = 0
# Menampilkan data list Mahasiswa
print()
print()
print("===Daftar Mahasiswa===")
for Mahasiswa in Mahasiswas:
    # panggil private attributs dengan get
    print(str(i + 1) + ".", Mahasiswa.get_nama())
    print("   Gender        : ",  Mahasiswa.get_jenis())
    print("   NIK           : ",  Mahasiswa.get_nik())
    print("   NIM           : ",  Mahasiswa.get_nim())
    print("   E-mail        : ",  Mahasiswa.get_email())
    print("   Universitas   : ",  Mahasiswa.get_univ())
    print("   Fakultas      : ",  Mahasiswa.get_fakultas())
    i += 1  
