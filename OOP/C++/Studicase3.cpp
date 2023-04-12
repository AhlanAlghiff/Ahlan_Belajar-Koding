#include <iostream>
#include <cstring>

using namespace std;

// Deklarasi Struct Mahasiswa
struct Mahasiswa {
    char nama[50];
    int umur;
    char jurusan[50];
};

// Deklarasi Class ManajemenMahasiswa
class ManajemenMahasiswa {
private:
    Mahasiswa dataMahasiswa[100]; // Array untuk menyimpan data mahasiswa
    int jumlahMahasiswa; // Jumlah mahasiswa yang terdaftar

public:
    ManajemenMahasiswa() {
        jumlahMahasiswa = 0;
    }

    // Fungsi untuk menambahkan data mahasiswa
    void tambahMahasiswa(const char* nama, int umur, const char* jurusan) {
        Mahasiswa m;
        strcpy(m.nama, nama);
        m.umur = umur;
        strcpy(m.jurusan, jurusan);

        dataMahasiswa[jumlahMahasiswa] = m;
        jumlahMahasiswa++;
    }

    // Fungsi untuk menampilkan data mahasiswa
    void tampilDataMahasiswa() {
        cout << "Daftar Mahasiswa: " << endl;
        for (int i = 0; i < jumlahMahasiswa; i++) {
            cout << "Nama: " << dataMahasiswa[i].nama << endl;
            cout << "Umur: " << dataMahasiswa[i].umur << " tahun" << endl;
            cout << "Jurusan: " << dataMahasiswa[i].jurusan << endl;
            cout << endl;
        }
    }
};

int main() {
    ManajemenMahasiswa manajemen;

    // Menambahkan data mahasiswa
    manajemen.tambahMahasiswa("John Doe", 20, "Informatika");
    manajemen.tambahMahasiswa("Jane Smith", 22, "Ekonomi");
    manajemen.tambahMahasiswa("Michael Brown", 21, "Hukum");

    // Menampilkan data mahasiswa
    manajemen.tampilDataMahasiswa();

    return 0;
}
