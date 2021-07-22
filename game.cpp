#include <iostream>
#include <cstdlib>
#include <curses.h>

using namespace std;

#define WIDTH 50
#define HEIGHT 25
#define sq(x) x*x

void board(int player_x, int player_y) {
	for (int i = 0; i < HEIGHT; i++) {
		cout << "\t#";

		for (int j = 0; j < WIDTH - 2; j++) {
			if (i == 0 || i == HEIGHT - 1) {
				cout << '#';
			}
			else if (i == player_y && j == player_x) {
				cout << '0';
			}
			else {
				cout << ' ';
			}
		}

		cout << "#\n";
	}	
}

int main() {
	int x = 24, y = 12;

	while (true) {
		board(x, y);
		x++;
		cout << "\033[0;0H";
	}

	return 0;	
}
