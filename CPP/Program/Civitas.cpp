#include "Header.hh"

//CIVITAS
Civitas::Civitas() : Human()
{

}

Civitas::Civitas(string nik, string name, char gender) : Human(nik, name, gender)
{

}

Civitas::Civitas(string nik, string name, char gender, string asal_universitas, string email_edu) :
    Human(nik, name, gender)
{
    this->asal_universitas = asal_universitas;
    this->email_edu = email_edu;
}

string Civitas::getAsal_universitas()
{
    return asal_universitas;
}

void Civitas ::setAsal_universitas(string asal_universitas)
{
    this->asal_universitas = asal_universitas;
}
 
string Civitas::getEmail_edu()
{
    return email_edu;
}

void Civitas ::setEmail_edu(string email_edu)
{
    this->email_edu = email_edu;
}

Civitas::~Civitas()
{

}
