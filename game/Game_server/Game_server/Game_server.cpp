#include <iostream>
#include <string>
#include <vector>
#pragma comment(lib, "ws2_32.lib")
#include <winsock2.h>
#pragma warning(disable: 4996)

using namespace std;




int main(int argc, char* argv[]) {

	
	double R = 100;
	double r = R / 5;

	double COORDS[37][2] = { {399.9999999999999, 43.58983848622461} ,{349.9999999999999, 130.19237886466846},{449.99999999999994, 130.19237886466846},{500.0, 216.79491924311228},{399.99999999999994, 216.7949192431123},{299.9999999999999, 216.7949192431123},{200.0, 390.0},{250.00000000000003, 476.6025403784439},{300.00000000000006, 563.2050807568878},{200.00000000000006, 563.2050807568878},{150.00000000000003, 476.6025403784439},{100.00000000000006, 563.2050807568878},{700.0, 563.2050807568877},{650.0, 476.60254037844385},{600.0, 390.0},{550.0, 476.60254037844385},{500.0, 563.2050807568877},{600.0, 563.2050807568877},{349.99999999999994, 303.39745962155615},{450.0, 303.39745962155615},{500.0, 390.0},{450.0, 476.60254037844385},{350.0, 476.6025403784439},{300.0, 390.0},{400.0, 390.0},{399.99999999999994, 736.4101615137756},{350.0, 649.8076211353317},{450.0, 649.8076211353317},{400.0, 563.2050807568878},{550.0, 303.39745962155615},{650.0, 303.39745962155615},{700.0, 216.7949192431123},{600.0, 216.7949192431123},{249.99999999999994, 303.39745962155615},{149.99999999999994, 303.39745962155615},{99.99999999999989, 216.7949192431123},{199.9999999999999, 216.7949192431123} };
	std::vector<std::vector<double>> COORDS_fishek;
	int g = 0;
	while (g < 18) {
		COORDS_fishek.push_back({ COORDS[g][0] + (r / 2), COORDS[g][1] + (r / 2) });
		g = g + 1;
	}




	//WSAStartup
	WSAData wsaData;
	WORD DLLVersion = MAKEWORD(2, 1);
	if (WSAStartup(DLLVersion, &wsaData
	) != 0) {
		std::cout << "Error" << std::endl;
		exit(1);
	}

	SOCKADDR_IN addr;
	int sizeofaddr = sizeof(addr);
	addr.sin_addr.s_addr = inet_addr("127.0.0.1");
	addr.sin_port = htons(1111);
	addr.sin_family = AF_INET;


	SOCKET sListen = socket(AF_INET, SOCK_STREAM, NULL);
	bind(sListen, (SOCKADDR*)&addr, sizeof(addr));
	listen(sListen, SOMAXCONN);

	SOCKET newConnection;
	for (int i = 1; i > 0; i++) {
		newConnection = accept(sListen, (SOCKADDR*)&addr, &sizeofaddr);

		if (newConnection == 0) {
			std::cout << "Error #2\n";
		}
		else {
			std::cout << "Client Connected!\n";
			char a1_1[256];
			char a1_2[256];
			char q1[256];
			char position1[256];
			char msg[256] = "again ";
			

			recv(newConnection, a1_1, sizeof(a1_1), NULL);
			double a_1 = atof(a1_1);
			//cout << a_1<<'\n';
			Sleep(100);

			recv(newConnection, a1_2, sizeof(a1_2), NULL);
			double a_2 = atof(a1_2);
			//cout << a_2 << '\n';
			Sleep(100);

			recv(newConnection, q1, sizeof(q1), NULL);
			int q = atof(q1);
			//cout << q << '\n';
			Sleep(100);
			
			recv(newConnection, position1, sizeof(position1), NULL);
			int position = atof(position1);
			//cout << position<<'\n';
			Sleep(100);



			double y = ((pow(((pow((COORDS_fishek[q][0] - (a_1)), 2) + pow((COORDS_fishek[q][1] - (a_2)), 2))), 0.5)) - r);


			if (y <= R) {
				//cout << "y<=R" << y<<'\n';
				if (y > (2 * r)) {
					//cout << "y>2*r";
					int w = 0;
					while (w < 37) {
						//cout << "w";
						if ((((COORDS[w][0] + r / 2) < a_1 + r) && ((COORDS[w][1] + (r / 2)) < (a_2 + r))) && (((COORDS[w][0] + r / 2) > a_1 - r) && ((COORDS[w][1] + (r / 2)) > (a_2 - r)))) {
							int h = 0;
							while (h < 18) {
								if ((COORDS_fishek[h][0] == COORDS[w][0] + (r / 2)) and (COORDS_fishek[h][1] == COORDS[w][1] + (r / 2))) {
									
									//cout << 5;
									send(newConnection, msg, sizeof(msg), NULL);
									break;
								}
								else if ((h == 17) && (!((COORDS_fishek[h][0] == COORDS[w][0] + (r / 2)) && (COORDS_fishek[h][1] == COORDS[w][1] + (r / 2))))) {
									
									//cout << 6;
									char mssg[256];
									std::sprintf(mssg, "%d", w);
									char ch[256] = " ";
									strcat(mssg, ch);
									//cout <<"mssg"<< mssg<<"\n";

									COORDS_fishek[q][0] = (COORDS[w][0] + (r / 2));
									COORDS_fishek[q][1] = (COORDS[w][1] + (r / 2));

									send(newConnection, mssg, sizeof(mssg), NULL);
									closesocket(newConnection);
									break;
								}
								h = h + 1;
							}
							break;
						}
						else {
							w = w + 1;
						}
					}
				}
			}
			else {
				send(newConnection, msg, sizeof(msg), NULL);
			}
		}
		closesocket(newConnection);

	}
	closesocket(newConnection);


	system("pause");
	return 0;
}