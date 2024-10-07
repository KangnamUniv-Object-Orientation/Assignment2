#include "GamblingGame.h"
#include "Player.h"
#include <iostream>
#include <string>
using namespace std;


int main() {
	gamblinggame game;
	Player player[2];
	cout << "첫번째 선수 이름>>";
	player[0].Name();
	cout << "두번째 선수 이름>>";
	player[1].Name();
	game.gamestart(player[0].getName(), player[1].getName());

}