#include <iostream>
#include <string>

using namespace std;

class Pekerjaan{
    private :
        string nama_pekerjaan;
        double gaji;
    public :
        Pekerjaan(string nama, double gaji){
            nama_pekerjaan = nama;
            this -> gaji = gaji;
        }

        void setNamaKerjaan(string namaKerja){
            this -> nama_pekerjaan = namaKerja;
        }
        void setGaji(double gaji){
            this -> gaji = gaji;
        }

        string getNamaKerja(){
            return nama_pekerjaan;
        }
        double getGaji(){
            return gaji;
        }
    

};

int main(){
    Pekerjaan job1("Guru", 100000);
    cout << job1.getNamaKerja() << endl;
    cout << job1.getGaji() << endl;

    Pekerjaan job2("PSK", 200);
    cout << job2.getNamaKerja() << endl;
    cout << job2.getGaji() << endl;

    Pekerjaan job3("WIRAUSAHAWAN", 20);
    cout << job3.getNamaKerja() << endl;
    cout << job3.getGaji() << endl;

    return 0;
}
