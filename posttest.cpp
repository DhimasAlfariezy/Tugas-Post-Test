#include <iostream>
#include <iomanip>
using namespace std;

int main() {
    const int harga_ayam_goreng = 17000;
    const int harga_ayam_bakar = 21000;
    const double diskon = 0.10; 

    int jumlah_ayam_goreng = 0;
    int jumlah_ayam_bakar = 0;
    int total_harga = 0;
    double total_diskon = 0;
    double harga_setelah_diskon = 0;
    
    cout << "\t\tMenu\n";
    cout << "Masukkan jumlah ayam goreng\t = Rp. 17.000\n";
    cout << "Masukkan jumlah ayam bakar\t = Rp. 21.000\n";

    cout << "\nMasukkan jumlah ayam goreng yang dibeli: ";
    cin >> jumlah_ayam_goreng;

    cout << "Masukkan jumlah ayam bakar yang dibeli: ";
    cin >> jumlah_ayam_bakar;

    total_harga = (jumlah_ayam_goreng * harga_ayam_goreng) + (jumlah_ayam_bakar * harga_ayam_bakar);

    if (total_harga > 45000) {
        total_diskon = total_harga * diskon;
        harga_setelah_diskon = total_harga - total_diskon;
    } else {
        harga_setelah_diskon = total_harga; 
    }

    cout << "\n============================== STRUK PEMBAYARAN ==============================" << endl;
    cout << fixed << setprecision(0); 
    cout << "Menu                        Jumlah      Harga     Total" << endl;
    cout << "--------------------------------------------------------------" << endl;
    cout << "Ayam Goreng                " << jumlah_ayam_goreng << "         Rp " << harga_ayam_goreng << "    Rp " << jumlah_ayam_goreng * harga_ayam_goreng << endl;
    cout << "Ayam Bakar                 " << jumlah_ayam_bakar << "         Rp " << harga_ayam_bakar << "    Rp " << jumlah_ayam_bakar * harga_ayam_bakar << endl;

    cout << "--------------------------------------------------------------" << endl;
    cout << "Total Harga                          Rp " << total_harga << endl;

    if (total_diskon > 0) {
        cout << "Diskon (10%)                         Rp " << total_diskon << endl;
    }

	cout << "Total yang Harus Dibayar             Rp " << harga_setelah_diskon << endl;
    cout << "============================== TERIMA KASIH ==============================" << endl;

    return 0;
}
