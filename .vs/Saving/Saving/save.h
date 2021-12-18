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
	queue<double> backup;
	queue<double> backup2;

};
void IncomeMoney(double income);
void TotalMoney();
void SpendMoney(double sending);
void OpenBook();
void OpenBook2();
void OpeningSaving();

