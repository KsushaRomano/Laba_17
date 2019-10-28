using namespace std;

#include <iostream>

int main()
{
	setlocale(LC_ALL, "Russian");
	int N, i, j, k, im, jm, km;
	double m;
	cout << "Введите количество точек: ";
	cin >> N;
	int* A = new int[N];
	int* B = new int[N];
	m = 0;
	cout << "Введите координаты точек: " << endl;
	for (i = 0; i < N; i++) {
		cin >> A[i] >> B[i];
	};
	for (i = 0; i < N - 2; i++) {
		for (j = i + 1; j < N - 1; j++) {
			for (k = j + 1; k < N; k++) {
				if ((sqrt(pow((A[i] - A[j]), 2) + pow((B[i] - B[j]), 2)) + sqrt(pow((A[j] - A[k]), 2) + pow((B[j] - B[k]), 2)) + sqrt(pow((A[k] - A[i]), 2) + pow((B[k] - B[i]), 2))) > m)
				{
					m = sqrt(pow((A[i] - A[j]), 2) + pow((B[i] - B[j]), 2)) + sqrt(pow((A[j] - A[k]), 2) + pow((B[j] - B[k]), 2)) + sqrt(pow((A[k] - A[i]), 2) + pow((B[k] - B[i]), 2));
					im = i;
					jm = j;
					km = k;
				};
			};
		};
	};
	cout << "Наибольший периметр у треугольника с вершинами в точках: (" << A[im] << ", " << B[im] << "), (" << A[jm] << ", " << B[jm] << "), (" << A[km] << ", " << B[km] << ")";
}