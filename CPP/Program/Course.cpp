#include "Header.hh"

Course::Course()
{
    nama_matakuliah = "";
}

Course::Course(string nama_matakuliah)
{
    this->nama_matakuliah = nama_matakuliah;
}

string Course::getNama_matakuliah()
{
    return nama_matakuliah;
}

void Course ::setNama_matakuliah(string nama_matakuliah)
{
    this->nama_matakuliah = nama_matakuliah;
}

Course::~Course()
{

}