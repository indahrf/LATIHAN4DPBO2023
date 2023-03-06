#include "Header.hh"
//MAHASISWA
Mahasiswa::Mahasiswa() : Civitas()
{

}

Mahasiswa::Mahasiswa(string nik, string name, char gender, string asal_universitas, string email_edu) : 
    Civitas(nik, name, gender, asal_universitas, email_edu)
{

}

Mahasiswa::Mahasiswa(string nik, string name, char gender, string asal_universitas, string email_edu, string nim, string fakultas) :
    Civitas(nik, name, gender, asal_universitas, email_edu)
{
    this->nim = nim;
    this->fakultas = fakultas;
}

string Mahasiswa::getNim()
{
    return nim;
}

void Mahasiswa ::setNim(string nim)
{
    this->nim = nim;
}
 
string Mahasiswa::getFakultas()
{
    return fakultas;
}

void Mahasiswa ::setFakultas(string fakultas)
{
    this->fakultas = fakultas;
}

Mahasiswa::~Mahasiswa()
{

}