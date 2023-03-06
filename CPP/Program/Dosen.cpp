#include "Header.hh"
//DOSEN
Dosen::Dosen() : Civitas()
{

}

Dosen::Dosen(string nik, string name, char gender, string asal_universitas, string email_edu) : 
    Civitas(nik, name, gender, asal_universitas, email_edu)
{

}

Dosen::Dosen(string nik, string name, char gender, string asal_universitas, string email_edu, string nip, string fakultas, string pend_terakhir, string keahlian) :
    Civitas(nik, name, gender, asal_universitas, email_edu)
{
    this->nip = nip;
    this->fakultas = fakultas;
    this->pend_terakhir = pend_terakhir;
    this->keahlian = keahlian;
}

string Dosen::getNip()
{
    return nip;
}

void Dosen ::setNip(string nip)
{
    this->nip = nip;
}
 
string Dosen::getFakultas()
{
    return fakultas;
}

void Dosen ::setFakultas(string fakultas)
{
    this->fakultas = fakultas;
}

string Dosen::getPend_terakhir()
{
    return pend_terakhir;
}

void Dosen ::setPend_terakhir(string pend_terakhir)
{
    this->pend_terakhir = pend_terakhir;
}

string Dosen::getKeahlian()
{
    return keahlian;
}

void Dosen ::setKeahlian(string keahlian)
{
    this->keahlian = keahlian;
}

Dosen::~Dosen()
{

}
