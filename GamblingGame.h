#include <string>
using namespace std;

class gamblinggame {
	int rnum[3];

	public:
		gamblinggame();
		~gamblinggame();
		void gamestart(string p1,string p2);
		void randnum();
		bool endgame(string p);
};
