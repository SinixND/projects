#include <string>

class Specialisation {
private:
    string mName;
    string mSigWeapon;
    string mSigSkill;

public:
    string  setmName(set arg){
        string mName = arg;
    }

    string  setmSigWeapon(set arg){
        string mSigWeapon = arg;
    }

    string  setmSigSkill(set arg){
        string mSigSkill = arg;
    }
};

vector<Specialisation> vSpecialisations;
vector<Specialisation> getSpecialisations() {
	vSpecialisations.push_back(Specialisation());
	ifstream fin("specialisation.csv", ios::in);
	if (!fin) {
		cerr << "Cant open " << endl;
	}
	int i = 0;
	while (fin >> vSpecialisations[i].mName >> vSpecialisations[i].mSigWeapon >> vSpecialisations[i].mSigSkill) {
		vSpecialisations.push_back(Specialisation());
		//increase row/node-iterator
		i += 1;
	}
	fin.close();
	vSpecialisations.pop_back();
	return vSpecialisations;
}

