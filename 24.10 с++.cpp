#include <iostream>
#include <ctime>
using namespace std;                                                           
//int main() {
//	int a=10, b=20,i=0;
//	for (; a <= b;a++,i+=a) {
//		
//	}
//	cout << i;
//}

//int main() {
//	srand(time(NULL));
//	setlocale(LC_ALL, "");
//	int a, b;
//	cout << "vvod";
//	cin >> a >> b;
//	if (a > b) swap(a, b);
//	for (int i = 0; i < 10;i++) {
//		a + rand() % (b + 1 - a);
//		if (rand() < 1) cout << "наименьшее";
//		else if (rand() > 9) cout << "наибольшее";
//	}
//}

//int main() {
//	setlocale(LC_ALL, "");
//	float a,b;
//	cin >> a >> b;
//	for (float i=0.5; a <= b; a+=i) {
//		cout << a << " ";
//	}
//}

//int main() {
//	setlocale(LC_ALL, "");
//	int a, b;
//	cin >> a >> b;
//	if (a > b) swap(a, b);
//	for (; a <= b; b--) {
//		cout << b << " ";
//	}
//}

int main() {
	setlocale(LC_ALL, "");
	system("pause");
	srand(time(NULL));
	int player, computer, shetplayer=0, shetcomputer=0, player1, player11, computer1, computer11;
	while (shetcomputer < 3 || shetplayer < 3) {
		player1 = (1 + rand()) % 6;
		player11 = (1 + rand()) % 6;
		if (player1 == player11) {
			cout << "дубль! Вам выпало " << (player1 + player11) * 2;
			player = (player1 + player11) * 2;
		}
		else if (player1 != player11) {
			cout << "Вам выпало " << player1 + player11;
			player = player1 + player11;
		}
		computer1 = (1 + rand()) % 6;
		computer11 = (1 + rand()) % 6;
		if (computer1 == computer11) {
			cout << " дубль! Компьютеру выпало " << (computer1 + computer11) * 2;
			computer = (computer1 + computer11) * 2;
		}
		else if (computer1 != computer11) {
			cout << " Компьютеру выпало " << computer1 + computer11;
			computer = (computer1 + computer11);
		}
		if (computer == player) {
			cout << " Ничья"<<endl;
			shetcomputer += 0;
			shetplayer += 0;
		}

		else if (computer > player) {
			cout << " Компьютер победил"<<endl;
			shetcomputer += 1;
			
		}
		else if(player > computer) {
			cout << " Вы победили!"<< endl;
			shetplayer += 1;
			
		}


	}
	cout << "счёт: " << shetcomputer << " " << shetcomputer;
}