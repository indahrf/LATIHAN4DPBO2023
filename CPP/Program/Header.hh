#include <iostream>
#include <string>

using namespace std;
class Course
{
    private:
        string nama_matakuliah;

    public:
        Course();
        Course(string nama_matakuliah);

        string getNama_matakuliah();
        void setNama_matakuliah(string nama_matakuliah);

        ~Course();
};

class Human
{
    private:
        string nik;
        string name;
        char gender;

    public:
        Human();
        Human(string nik, string name, char gender);
        
        string getNik();
        void setNik(string nik);
        string getName();
        void setName(string name);
        char getGender();
        void setGender(char gender);

        ~Human();
};

class Civitas : public Human
{
    private:
        string asal_universitas;
        string email_edu;

    public: 
        Civitas();
        Civitas(string nik, string name, char gender);
        Civitas(string nik, string name, char gender, string asal_universitas, string email_edu);

        string getAsal_universitas();
        void setAsal_universitas(string asal_universitas);
        string getEmail_edu();
        void setEmail_edu(string email_edu);

        ~Civitas();
};

class Dosen : public Civitas
{
    private:
        string nip;
        string fakultas;
        string pend_terakhir;
        string keahlian;

    public: 
        Dosen();
        Dosen(string nik, string name, char gender, string asal_universitas, string email_edu);
        Dosen(string nik, string name, char gender, string asal_universitas, string email_edu, string nip, string fakultas, string pend_terakhir, string keahlian);

        string getNip();
        void setNip(string nip);
        string getFakultas();
        void setFakultas(string fakultas);
        string getPend_terakhir();
        void setPend_terakhir(string pend_terakhir);
        string getKeahlian();
        void setKeahlian(string keahlian);

        ~Dosen();
};

class Mahasiswa : public Civitas
{
    private:
        string nim;
        string fakultas;

    public: 
        Mahasiswa();
        Mahasiswa(string nik, string name, char gender, string asal_universitas, string email_edu);
        Mahasiswa(string nik, string name, char gender, string asal_universitas, string email_edu, string nim, string fakultas);

        string getNim();
        void setNim(string nim);
        string getFakultas();
        void setFakultas(string fakultas);

        ~Mahasiswa();
};

class Prodi
{
    private:
        string nama_prodi;
        string kode;
        Course course;
        Mahasiswa mahasiswa;
        Dosen dosen;

    public:
        Prodi();
        Prodi(string nama_prodi, string kode, Course course, Dosen dosen, Mahasiswa Mahasiswa);

    string getNama_prodi();
    void setNama_prodi(string nama_prodi);
    string getKode();
    void setKode(string Kode);
    Course getCourse();
    void setCourse(Course course);
    Dosen getDosen();
    void setDosen(Dosen dosen);
    Mahasiswa getMahasiswa();
    void setMahasiswa(Mahasiswa mahasiswa);


    ~Prodi();
};
