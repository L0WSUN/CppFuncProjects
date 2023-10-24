#include <iostream>
using namespace std;                                                           
//int main()
//{
//    setlocale(LC_ALL, "");
//    int a;
//    a = 1;
//    while (a <= 10) {
//        cout << a << "";
//        a += 1;
//    }
//
//}   

int main() {
	int a, b;
	cout << "дите";
	cin >> a >> b;
	if (a > b) swap(a, b);
	while (b >= a) {
		cout << b << "";
		b-=1;
		
	}


}
//
//int main() {
//	int a, b;
//	b = 0;
//	cout << "vvod";
//	cin >> a;
//	while (a != 0) {
//		cin >> a;
//		b+=a;
//		if (a == 0) cout << b;
//	}
//	
//
//
//
//}
