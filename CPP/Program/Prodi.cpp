#include "Header.hh"

Prodi :: Prodi()
{
    nama_prodi = "";
    kode = "";
}

Prodi :: Prodi(string nama_prodi, string kode, Course course, Dosen dosen, Mahasiswa mahasiswa)
{
    this->nama_prodi = nama_prodi;
    this->kode = kode;
    this->course = course;
    this->dosen = dosen;
    this->mahasiswa = mahasiswa;
}

string Prodi::getNama_prodi()
{
    return nama_prodi;
}

void Prodi ::setNama_prodi(string nama_prodi)
{
    this->nama_prodi = nama_prodi;
}

string Prodi::getKode()
{
    return kode;
}

void Prodi ::setKode(string kode)
{
    this->kode = kode;
}

Course Prodi::getCourse()
{
    return course;
}

void Prodi ::setCourse(Course course)
{
    this->course = course;
}

Dosen Prodi::getDosen()
{
    return dosen;
}

void Prodi ::setDosen(Dosen dosen)
{
    this->dosen = dosen;
}

Mahasiswa Prodi::getMahasiswa()
{
    return mahasiswa;
}

void Prodi ::setMahasiswa(Mahasiswa mahasiswa)
{
    this->mahasiswa = mahasiswa;
}

Prodi::~Prodi()
{

}