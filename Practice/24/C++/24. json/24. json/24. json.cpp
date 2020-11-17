#include <iostream>
#include <fstream>
#include <json.hpp>
using json = nlohmann::json;
using namespace std;

int main()
{
    setlocale(LC_ALL, "Russian");
    std::ifstream in_file("nlohmann/in.json");
    if (in_file.is_open()) {
        json j;
        in_file >> j;
        int q = 1;
        int w = 0;
        json j2 = json::array();

        for (int i = 1; i < j[i]["id"]; i += 1) {
            if (j[i]["userId"] == q) {
                if (j[i]["completed"] == true) {
                    w = w + 1;
                }
                j2.push_back(w);
                cout << j2[i - 1] << "\n\n";

            }
            else { q = q + 1; }
        }
    }
    else { cout << "\nНе удалось открыть файл\n"; }
}