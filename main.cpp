#include "GamblingGame.h"
#include "Player.h"
#include <iostream>
#include <string>
using namespace std;


int main() {
	gamblinggame game;
	Player player[2];
	cout << "ù��° ���� �̸�>>";
	player[0].Name();
	cout << "�ι�° ���� �̸�>>";
	player[1].Name();
	game.gamestart(player[0].getName(), player[1].getName());

}