using namespace std;

#include <iostream>

int main()
{
	setlocale(LC_ALL, "Russian");
	int N, i, l;
	double m;
	cout << "Введите количество точек: ";
	cin >> N;
	int* A = new int[N];
	int* B = new int[N];
	m = 0;
	cout << "Введите координаты точек: " << endl;
	for (i = 0; i < N; i++) {
		cin >> A[i] >> B[i];
		if ((A[i] < 0) & (B[i] > 0) & sqrt(pow(A[i], 2) + pow(B[i], 2)) > m) {
			m = sqrt(pow(A[i], 2) + pow(B[i], 2));
			l = i;
		};
	};
	if (m != 0) {
		cout << "Координаты точки: (" << A[l] << ", "<< B[l] << ")";
	}
	else {
		cout << "Координаты точки: (0, 0)";
	};
}