#pragma once
#include<string>
#include<iostream>
#include<queue>

using namespace std;

struct Saving {
	double Total;
	double Income;
	double Expediture;
	queue<double> myqueue;
	queue<double> myqueue1;
};
void IncomeMoney(double income);
void TotalMoney();
void SpendMoney(double sending);
void OpenBook();
void OpenBook2();
void OpeningSaving();

