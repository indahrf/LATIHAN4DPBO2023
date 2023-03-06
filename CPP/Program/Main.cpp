#include "Header.hh"

int main()
{
    Course course("Desain Pemrograman Berorientasi Objek");
    Dosen dosen("32118275", "Muhammad", 'L', "Universitas Pendidikan Indonesia", "muhammad@upi.edu", "07072001", "FPMIPA", "S2", "Pemrograman");
    Mahasiswa mahasiswa("32112910", "Indah", 'P', "Universitas Pendidikan Indonesia", "indah@upi.edu", "2103507", "FPMIPA");
    Prodi prodi("Ilmu Komputer", "9018", course, dosen, mahasiswa);

    cout << "===Daftar Program Studi===" << '\n';
    cout << "1. " << prodi.getNama_prodi() << ": " << prodi.getKode() <<'\n';
    cout << "   Mata Kuliah:" << '\n';
    cout << "   - " << prodi.getCourse().getNama_matakuliah() <<'\n';
    cout << "   Dosen:" << '\n';
    cout << "   - " << prodi.getDosen().getName() <<'\n';
    cout << "   Mahasiswa:" << '\n';
    cout << "   - " << prodi.getMahasiswa().getName() <<"\n\n";


    cout << "===Daftar Dosen===" << '\n';
    cout << "1. " << dosen.getName() <<'\n';
    cout << "   Gender        : " << dosen.getGender() << '\n';
    cout << "   NIK           : " << dosen.getNik() <<'\n';
    cout << "   NIP           : " << dosen.getNip() << '\n';
    cout << "   E-mail         : " << dosen.getEmail_edu() << '\n';
    cout << "   Pendidikan    : " << dosen.getPend_terakhir() << '\n';
    cout << "   Keahlian      : " << dosen.getKeahlian() << "\n";
    cout << "Universitas   : " << dosen.getAsal_universitas() << '\n';
    cout << "Fakultas      : " << dosen.getFakultas() << "\n\n";
    
    cout << "===Daftar Mahasiswa===" << '\n';
    cout << "1. " << mahasiswa.getName() <<'\n';
    cout << "   Gender        : " << mahasiswa.getGender() << '\n';
    cout << "   NIK           : " << mahasiswa.getNik() <<'\n';
    cout << "   NIM           : " << mahasiswa.getNim() << '\n';
    cout << "   E-mail         : " << mahasiswa.getEmail_edu() << "\n";
    cout << "   Universitas   : " << mahasiswa.getAsal_universitas() << '\n';
    cout << "   Fakultas      : " << mahasiswa.getFakultas() << '\n';

}