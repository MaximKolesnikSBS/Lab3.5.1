/*
	Автор: Максим Колесник
	Группа: СБС-001-О-01
	Задание№: 3: 5)
	Цель: Написать программу для вычисления определителя матрицы размерами 3 на 3.
*/

#include<iostream>
#include<time.h>
#include<stdlib.h>
using namespace std;
int main(){
	srand(time(NULL));
	int matrix[3][3];
	for (int i = 0; i < 3; i++){
		for (int j = 0; j < 3; j++){
			matrix[i][j] = rand() % 10;
			cout << matrix[i][j] << " ";
		}
		cout << endl;
	}
	int det;
	int a, b, c;
	a = matrix[0][0] * ((matrix[1][1] * matrix[2][2]) - (matrix[1][2] * matrix[2][1]));
	b = matrix[0][1] * ((matrix[1][0] * matrix[2][2]) - (matrix[1][2] * matrix[2][0]));
	c = matrix[0][2] * ((matrix[1][0] * matrix[2][1]) - (matrix[1][1] * matrix[2][0]));
	det = a - b + c;
	cout << "Determinant of a matrix = " << det << endl;
	return 0;
}