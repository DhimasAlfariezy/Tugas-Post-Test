#include<iostream>
#include<iomanip>
#include<string>

using namespace std;

struct KTP {
	string nik;
	string nama;
	string tempat_tanggal_lahir;
	string jenis_kelamin;
	string golongan_darah;
	string alamat;
	string rt_rw;
	string kel_desa;
	string kecamatan;
	string agama;
	string status_kawin;
	string pekerjaan;
	string kewarganegaraan;
	string berlaku_hingga;
};

void inputktp (KTP &ktp) {
	cout << "masukkan nik : ";
	getline(cin, ktp.nik);
	cout << "masukkan nama : ";
	getline(cin, ktp.nama);
	cout << "masukkan tempat tanggal lahir : ";
	getline(cin, ktp.tempat_tanggal_lahir);
	cout << "masukkan jenis kelamin : ";
	getline(cin, ktp.jenis_kelamin);
	cout << "masukkan golongan darah : ";
	getline(cin, ktp.golongan_darah);
	cout << "masukkan alamat : ";
	getline(cin, ktp.alamat);
	cout << "masukkan rt/rw : ";
	getline(cin, ktp.rt_rw);
	cout << "masukkan kel/desa : ";
	getline(cin, ktp.kel_desa);
	cout << "masukkan kecamatan : ";
	getline(cin, ktp.kecamatan);
	cout << "masukkan agama : ";
	getline(cin, ktp.agama);
	cout << "masukkan status kawin : ";
	getline(cin, ktp.status_kawin);
	cout << "masukkan pekerjaan : ";
	getline(cin, ktp.pekerjaan);
	cout << "masukkan kewarganegaraan : ";
	getline(cin, ktp.kewarganegaraan);
	cout << "masukkan berlaku hingga : ";
	getline(cin, ktp.berlaku_hingga);
}

void displayktp (const KTP &ktp) {
	cout << "\n================ Simulasi KTP ================\n";
	cout << left << setw(20) << "NIK" << ": " << ktp.nik << endl;
	cout << left << setw(20) << "Nama" << ": " << ktp.nama << endl;
	cout << left << setw(20) << "Tempat/Tgl Lahir" << ": " << ktp.tempat_tanggal_lahir << endl;
	cout << left << setw(20) << "Jenis Kelamin" << ": " << ktp.jenis_kelamin << " Gol Darah : " << ktp.golongan_darah << endl;
	cout << left << setw(20) << "Alamat" << ": " << ktp.alamat << endl;
	cout << left << setw(20) << "RT/RW" << ": " << ktp.rt_rw << endl;
	cout << left << setw(20) << "Kel/Desa" << ": " << ktp.kel_desa << endl;
	cout << left << setw(20) << "Kecamatan" << ": " << ktp.kecamatan << endl;
	cout << left << setw(20) << "Agama" << ": " << ktp.agama << endl;
	cout << left << setw(20) << "Status Perkawinan" << ": " << ktp.status_kawin << endl;
	cout << left << setw(20) << "Pekerjaan" << ": " << ktp.pekerjaan << endl;
	cout << left << setw(20) << "Kewarganegaraan" << ": " << ktp.kewarganegaraan << endl;
	cout << left << setw(20) << "BERLAKU HINGGA" << ": " << ktp.berlaku_hingga << endl;
	cout << "\n==============================================\n";
}

int main(){
	KTP ktp;
	
	cout << "Input Data KTP\n";
	inputktp(ktp);
	
	displayktp(ktp);
}
