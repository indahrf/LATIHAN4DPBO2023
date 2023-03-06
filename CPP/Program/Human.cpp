#include "Header.hh"

//HUMAN
Human :: Human()
{
    nik = "";
    name = "";
    gender = '-';
}

Human :: Human(string nik, string name, char gender)
{
    this->nik = nik;
    this->name = name;
    this->gender = gender;
}

string Human::getNik()
{
    return nik;
}

void Human ::setNik(string nik)
{
    this->nik = nik;
}

string Human::getName()
{
    return name;
}

void Human ::setName(string name)
{
    this->name = name;
}

char Human::getGender()
{
    return gender;
}

void Human ::setGender(char gender)
{
    this->gender = gender;
}

Human::~Human()
{

}