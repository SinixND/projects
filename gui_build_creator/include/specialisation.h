
class Specialisation {
public:
	int Nr;
	//type of node, either "I" for "Internal" or "R" for "Reservoir"
	string Type;
};

vector<Specialisation> vSpecialisations;
vector<Specialisation> getSpecialisations() {
	vSpecialisations.push_back(Specialisation());
	ifstream fin("Data_Knoten.txt", ios::in);
	if (!fin) {
		cerr << "Cant open " << endl;
	}
	int i = 0;
	//fill container row by row
	while (fin >> vSpecialisations[i].Nr >> vSpecialisations[i].Type) {
		vSpecialisations.push_back(Specialisation());
		//increase row/node-iterator
		i += 1;
	}
	fin.close();
	vSpecialisations.pop_back();
	return vSpecialisations;
}

