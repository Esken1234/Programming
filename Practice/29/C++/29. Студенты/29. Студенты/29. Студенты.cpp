#include <iostream>
#include <cstdlib>
#include <vector>
#include <time.h>

using namespace std;

int main()
{
	int r = 0;
	int r1 = 0;
	struct Student {
		std::string name;
		int group;
		int mathematics;
		int physics;
		int history;
		int programming;
	};

	/*Student AkihikoK = { "Akihiko K", 1, 4, 2, 3, 5 };
	Student PerssonМ = { "Persson М", 2, 3, 2, 2, 4 };
	Student KojimaH = { "Kojima H", 1, 5, 5, 5, 5 };
	Student CarmackJ = { "Carmack J", 2, 4, 4, 4, 4 };
	Student NewellG = { "Newell G", 1, 4, 5, 3, 5 };*/

	Student AkihikoK;
	Student PerssonМ;
	Student KojimaH;
	Student CarmackJ;
	Student NewellG;

	AkihikoK.name = "Akihiko K";
	AkihikoK.group = 1;
	AkihikoK.mathematics = 4;
	AkihikoK.physics = 2;
	AkihikoK.history = 3;
	AkihikoK.programming = 5;
	
	PerssonМ.name = "Persson М";
	PerssonМ.group = 2;
	PerssonМ.mathematics = 3;
	PerssonМ.physics = 2;
	PerssonМ.history = 2;
	PerssonМ.programming = 4;

	KojimaH.name = "Kojima H";
	KojimaH.group = 1;
	KojimaH.mathematics = 5;
	KojimaH.physics = 5;
	KojimaH.history = 5;
	KojimaH.programming = 5;

	CarmackJ.name = "Carmack J";
	CarmackJ.group = 2;
	CarmackJ.mathematics = 4;
	CarmackJ.physics = 4;
	CarmackJ.history = 4;
	CarmackJ.programming = 4;

	NewellG.name = "Newell G";
	NewellG.group = 1;
	NewellG.mathematics = 4;
	NewellG.physics = 5;
	NewellG.history = 3;
	NewellG.programming = 5;


	vector<Student> Students;
	vector<Student> badStudents;
	Students.push_back(AkihikoK);
	Students.push_back(PerssonМ);
	Students.push_back(KojimaH);
	Students.push_back(CarmackJ);
	Students.push_back(NewellG);

	for (int i = 0; i < 5; i++) {
		r = 0;
		if (Students[i].mathematics == 2) {
			r = 1;
		}
		else if (Students[i].physics == 2) {
			r = 1;
		}
		else if (Students[i].history == 2) {
			r = 1;
		}
		else if (Students[i].programming == 2) {
			r = 1;
		}
		if (r == 1) {
			badStudents.push_back(Students[i]);
			r1 = 1;
		}
	}
	if (r1 == 1) {
		cout << "Not found";
	}



	system("pause");
	return 0;
}