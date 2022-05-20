/*
ДЗ 6

Тема: перегрузка функций

ВАРИАНТЫ ЗАДАНИЙ

Реализовать программу-калькулятор, работающий с различными типами данных



*/

#include <iostream>

double sum(int       a, int       b) { return a + b; }
double sum(float     a, float     b) { return a + b; }
double sum(double    a, double    b) { return a + b; }
double sum(long      a, long      b) { return a + b; }
double sum(long long a, long long b) { return a + b; }

double sum(std::string a, std::string b) {
	double ans = 0.;
	for (int i = 0, s = a.size(); i < s; i++) {
		ans += (int)a[i];
	}
	for (int i = 0, s = b.size(); i < s; i++) {
		ans -= (int)b[i];
	}
	return ans;
}

double diff(int       a, int       b) { return a - b; }
double diff(float     a, float     b) { return a - b; }
double diff(double    a, double    b) { return a - b; }
double diff(long      a, long      b) { return a - b; }
double diff(long long a, long long b) { return a - b; }

double diff(std::string a, std::string b) {
	double ans = 0.;
	for (int i = 0, s = a.size(); i < s; i++) {
		ans -= (int)a[i];
	}
	for (int i = 0, s = b.size(); i < s; i++) {
		ans += (int)b[i];
	}
	return ans;
}

double mult(int       a, int       b) { return a * b; }
double mult(float     a, float     b) { return a * b; }
double mult(double    a, double    b) { return a * b; }
double mult(long      a, long      b) { return a * b; }
double mult(long long a, long long b) { return a * b; }

double mult(std::string a, std::string b) {
	double ans = 1.;
	for (int i = 0, s = a.size(); i < s; i++) {
		ans *= (int)a[i];
	}
	for (int i = 0, s = b.size(); i < s; i++) {
		if ((int)b[i])
			ans /= (int)b[i];
	}
	return ans;
}

//double div(int       a, int       b) { return a / b; }
double div(float     a, float     b) { return a / b; }
double div(double    a, double    b) { return a / b; }
//double div(long      a, long      b) { return double(a / b); }
//double div(long long a, long long b) { return double(a) / double(b); }

double div(std::string a, std::string b) {
	double ans = 1.;
	for (int i = 0, s = b.size(); i < s; i++) {
		ans *= (int)b[i];
	}
	for (int i = 0, s = a.size(); i < s; i++) {
		if ((int)a[i])
			ans /= (int)a[i];
	}
	return ans;
}

int main(){
	std::cout << mult(std::string("absdada"), std::string("bab21sasda")) << std::endl;
	std::cout << div(std::string("adqweba"), std::string("baaaab")) << std::endl;
}