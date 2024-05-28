#include <iostream>
using namespace std;

class remotelampu {
private:
	string saklarNo[10];
public:
	void setsaklarNo(int i, string value) {
		saklarNo[i] = value;
	}
	string getsaklarNo(int i) {
		return saklarNo[i];
	}
};

int main() {
	remotelampu lampurumah;

	lampurumah.setsaklarNo(0, "Lampu Teras Rumah");
	lampurumah.setsaklarNo(1, "lampu ruang tamu");
	lampurumah.setsaklarNo(2, "lampu kamar tidur");
	lampurumah.setsaklarNo(3, "lampu dapur");

	return 0;
}