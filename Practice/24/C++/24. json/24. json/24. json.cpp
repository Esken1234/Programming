#include <iostream>
#include "json.hpp"
#include <fstream>
#include <string>
#include <vector>
#include <iomanip>
#include <string>
using json = nlohmann::json;
using namespace std;

struct abc {
	int userId;
	int task_completed;
};

int main()
{
	setlocale(LC_ALL, "Russian");
	ifstream in_file("nlohmann/in.json");
	json out;
	if (in_file.is_open()) {
		json j;
		in_file >> j;
		int q = 1;
		int w = 0;
		int d = 0;

		for (int i = 0; i < j[i]; i += 1) {

			if (j[i]["userId"] != q) {
				q = q + 1;
				abc p{ q,w };
				out[d]["userId"] = int(p.userId - 1);
				out[d]["task_completed"] = int(p.task_completed);
				d++;
				w = 0;
				if (bool(j[i]["completed"]) == true) w++;
			}
			else {
				if (bool(j[i]["completed"]) == true) w++;
			}
		}
		abc p{ q,w };
		out[d]["userId"] = p.userId;
		out[d]["task_completed"] = p.task_completed;
	}
	else { cout << "\nНе удалось открыть файл\n"; }
	std::ofstream out_file("out.json");
	out_file << out;
}