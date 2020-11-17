#include <iostream>
#include <fstream>
#include <json.hpp>
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
    std::ifstream in_file("nlohmann/in.json");
    if (in_file.is_open()) {
        json j;
        in_file >> j;
        int q = 1;
        int w = 0;
        json j3 = json::array();

        for (int i = 0; i < j[i]/*["id"]*/; i += 1) {
            if (j[i]["userId"] == q) {
                /*if (j[i]["completed"] == true) {
                    w = w + 1;
                }*/
                w=j[i]["completed"].get<int>() + w;

            }
            else {
                abc p{ q,w };
                nlohmann::json j2{};
                j2["userId"] = p.userId;
                j2["task_completed"] = p.task_completed;
                cout << j2 << endl;
                q = q + 1;
                w = 0;
            }
        }
        abc p{ q,w };
        nlohmann::json j2{};
        j2["userId"] = p.userId;
        j2["task_completed"] = p.task_completed;
        cout << j2 << endl;
    }
    else { cout << "\nНе удалось открыть файл\n"; }
}