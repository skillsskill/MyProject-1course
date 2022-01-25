#include <iostream>

using namespace std;

int main()
{
	int N;
	cout << "vibor zadachi:";
	cin >> N;
	if (N == 1)  //. С начала суток прошло N секунд (N — целое).
	{//Найти количество секунд, прошедших с начала последней минуты.
		int n, s;
		cout << "vvedite kolichestvo sekynd:";
		cin >> n;
		s = n % 60;
		cout << "kolvo sekynd s posledney minuti" << s;
	}
	else //Дни недели пронумерованы следующим образом: 0 — воскресенье, 1 — понедельник, 2 — вторник, . . . , 6 — суббота.
		if (N == 2)  //Дано целое число K, лежащее в диапазоне 1–365. Определить номер дня недели для K-го дня года, если известно,
		{            //что в этом году 1 января было понедельником.
			int k1, k2;
			cout << "vvedite den':";
			cin >> k1;
			if (k1 < 1 or k1 >365)
			{
				cout << "vne diapozona 1-365";
				return 0;
			}
			k2 = k1 % 7;
			cout << "den' nedeli:" << k2;
		}
		else  //Дни недели пронумерованы следующим образом : 1 — понедельник, 2 — вторник, . . ., 6 — суббота, 7 — воскресенье.
			if (N == 3) //Дано целое число K, лежащее в диапазоне 1–365, и целое число N, лежащее в диапазоне 1–7.
			{ //Определить номер дня недели для K - го дня года, если известно, что в этом году 1 января было днем недели с номером N
	int k, n, s;
	cout << "vvedite den':";
	cin >> k;
	cout << "perviy den' nedeli:";
	cin >> n;
		if (k < 1 or k >365 or n < 1 or n > 7)
				{
					cout << "vne diapozona 1-365 ili 1-7";
					return 0;
				}
				s = (k + n) % 7;
				cout << "den' nedeli:" << s - 1;
			}  //Даны целые положительные числа A, B, C. 
			else  //На прямоугольнике размера A × B размещено максимально возможное количество квадратов со стороной C (без наложений). 
				if (N == 4)  //Найти количество квадратов, размещенных на прямоугольнике, а также площадь незанятой части прямоугольника. 
				{
					int a, b, c, k, m, x1, x2, x3, x4;
					cout << "A:";
					cin >> a;
					cout << "B:";
					cin >> b;
					cout << "C:";
					cin >> c;
					k = a * b;
					m = c * c;
					x1 = a / c;
					x2 = b / c;
					x3 = x1 * x2; //kolvo kvadratov
					x4 = k - (x3 * m); //nezanyataya
					cout << "kolichestvo kvadratov:" << x3 << endl;
					cout << "nezanyataya oblast':" << x4;
				}//Дан номер некоторого года (целое положительное число).
				else  //Определить соответствующий ему номер столетия,
				if (N == 5) 
				{
					int g, x;
					cout << "god:";
					cin >> g;
					if (g < 0)
					{
							cout << "chislo do nashey eru";
							return 0;
						}	
						x = (100 + g) / 100;
						cout << "nomer stoletiya:" << x;
					}
}