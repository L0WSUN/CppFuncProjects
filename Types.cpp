//
//#include <iostream>
//using namespace std;
//
//
//int main()
//{
//	int celoe = INT32_MAX;
//	int celoe2 = INT32_MIN;
//	cout << celoe << " " << celoe2;
//
//	long long longov = LLONG_MAX;
//	long long longov2 = LLONG_MIN;
//	cout << longov << " " << longov2;
//
//	short shorty = SHRT_MAX;
//	short shorty2 = SHRT_MIN;
//	cout << shorty << " " << shorty2;
//
//	unsigned int insignintt = UINT32_MAX;
//	unsigned short shrt = USHRT_MAX;
//
//	float flo = FLT_MAX;
//	float flo2 = FLT_MIN;
//	double doub = DBL_MAX;
//	double doub2 = DBL_MIN;
//	char chr = CHAR_MAX;
//	char chr2 = CHAR_MIN;
//	bool bl = 0;
//	bool bl2 = 1;
//	cout << "type\t\t|byte\t|min\t\t\t|max\n";
//	cout << "int\t\t|" << sizeof(celoe) << "\t|" << celoe2 << "\t\t|" << celoe << "\n";
//	cout << "long\t\t|"<< sizeof(longov) << "\t|" << longov2 << "\t|" << longov << "\n";
//	cout << "short\t\t|" << sizeof(shorty) << "\t|" << shorty2 << "\t\t\t|" << shorty << "\n";
//	cout << "unsigned int\t|" << sizeof(insignintt) << "\t|" << insignintt << "\t\t|" << insignintt << "\n";
//	cout << "unsigned short\t|" << sizeof(shrt) << "\t|" << shrt << "\t\t\t|" << shrt << "\n";
//	cout << "float\t\t|" << sizeof(flo) << "\t|" << flo2 << "\t\t|" << flo << "\n";
//	cout << "double\t\t|" << sizeof(doub) << "\t|" << doub2 << "\t\t|" << doub << "\n";
//	cout << "char\t\t|" << sizeof(chr) << "\t|" << chr2 << "\t\t\t|" << chr << "\n";
//	cout << "bool\t\t|" << sizeof(bl) << "\t|" << bl2 << "\t\t\t|" << bl << "\n";
//
//
//
//}
//
//
//

#include <iostream>
using namespace std;
/*
ПЛОХОЙ КАЛЬКУЛЯТОР
*/
int main()
{
	int a,b,c;
	cout << "input a: ";
	cin >> a;
	cout << "input b: ";
	cin >> b;
	
	cout << a << "+" << b << "=" << a + b << endl;
	cout << a << "-" << b << "=" << a - b << endl;
	cout << a << "*" << b << "=" << a * b << endl;
	cout << a << "/" << b << "=" << float(a / b) << endl;

}

