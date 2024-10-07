#include "GamblingGame.h"
#include "Player.h"
#include <iostream>
#include <string>
using namespace std;

gamblinggame::gamblinggame() {
	cout << "***** �׺� ������ �����մϴ�. *****" << endl;
	for (int i = 0; i < 3; i++) {
		rnum[i] = i;
	}
}
gamblinggame::~gamblinggame() {
}
void gamblinggame::randnum() {
	for (int i = 0; i < 3; i++) {
		rnum[i] = rand() % 3;
	};
}
bool gamblinggame::endgame(string p) {
	if (rnum[0] == rnum[1] && rnum[2] == rnum[0]) {
		cout << "\t" << p << "�� �¸�!!" << endl;
		return true;
	}
	else {
		cout << "\t" << "�ƽ�����!" << endl;
		return false;
	}

}

void gamblinggame::gamestart(string p1,string p2) {
	cin.ignore();
	while (true) {
		char a;
		cout << p1 << "<Enter>";
		cin.get(a);
		randnum();
		for (int i = 0; i < 3; i++) {
			cout << "\t" << rnum[i];
		}
		if (endgame(p1))
			break;



		cout << p2 << "<Enter>";
		cin.get(a);
		randnum();
		for (int i = 0; i < 3; i++) {
			cout << "\t" << rnum[i];
		}
		if (endgame(p2))
			break;

	}

}