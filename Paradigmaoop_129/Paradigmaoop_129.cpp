#include <iostream>
#include <string>
using namespace std;

class mahasiswa {
private:
	const int id; 
	string nama;
	float nilai;

public:
	mahasiswa(int pid, string pNama, float pNilai) :id(pid), nama(pNama), nilai(pNilai) {

	}
	mahasiswa() {
		cout << "id = " << id << endl;
		cout << "Nama = " << nama << endl;
		cout << "Milai = " << nilai << endl;
		

	}
		
};

int main() {
	mahasiswa mhs(12, "Lia", 90, 5);

	return 0;
}

