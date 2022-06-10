#include <iostream>
#include <string>
#include <iomanip>
 
using namespace std;

class Pegawai{
	public:
		void Input();
		void Proses();
		void Output();
	
	private:
		string Data[10][10];
		int baris, kolom, i, j; 
}; 

void Pegawai::Input(){
	cout << "==========================" << endl;
	cout << "||      Data Pegawai     ||" << endl;
	cout << "==========================" << endl;
	cout << endl;
	cout << "Input Data Karyawan" << endl;
	cout << "Jumlah Data baris : ";
	cin >> baris; 
	cout << "Jumlah Data kolom : ";
	cin >> kolom;
	cout << endl;
}

void Pegawai::Proses(){
	cout << "==========================" << endl;
	for(i = 0; i < baris ; i++){
    	for(j = 0; j < kolom; j++){
    		cout << "Data ["<<i+1<<"]["<<j+1<<"] = ";
    		cin >> Data[i][j];
    	}
    	cout << endl;
    	cout << "==========================" << endl;
  	}
}
	
void Pegawai::Output(){
	cout << "===========================================================================" << endl;
	cout << "|| Jenis Karyawan  || Nama        || Alamat         || Jenis Kelamin       " << endl;
	cout << "===========================================================================" << endl;
	for(i = 0; i < baris ; i++){
		for(j = 0; j < kolom; j++){
    	cout << setw(3) <<"|| "<<Data[i][j] << "       ";
		}
    cout << endl;
	}
	
	cout << "\nMasukkan Baris : ";
	cin >> baris;
	cout << "\n======================================" << endl;
	cout << "||         HASIL PENCARIAN           ||" << endl;
  	cout << "======================================" << endl;
  	cout << "--------------------------------------" << endl;
  	cout << "|| Jenis Karyawan  || Nama     || Alamat     || Jenis Kelamin       " << endl;
  	cout << "--------------------------------------" << endl;
  	for (int i=0; i<4; i++){
    	cout << "\t" << Data[baris][i] << "\t";
	}	
}


int main(){
	Pegawai x;
	x.Input();
	x.Proses();
	x.Output();  
	return 0;
}