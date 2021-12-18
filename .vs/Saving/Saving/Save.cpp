#include "save.h"

Saving s;
void IncomeMoney(double income) {

	s.Income = s.Income + income;
	s.myqueue.push(income);
	s.backup.push(income);
	TotalMoney();
	cout << "Gained " << income << " New amount " << s.Total << endl;
	s.Income = 0.0;
}
void TotalMoney() {
	s.Total = s.Total + s.Income;
}
void SpendMoney(double sending) {
	if (s.Total > sending) {
		s.Expediture = sending;
		s.Total = s.Total - s.Expediture;
		s.myqueue1.push(s.Expediture);
		s.backup2.push(s.Expediture);
		cout << "spend " << s.Expediture << " New balance " << s.Total << endl;
	}
}
void OpenBook() {
	double line2 = 0.0;
	if (s.myqueue.empty()) { s.myqueue = s.backup; }
	while (!s.myqueue.empty()) {
		cout << s.myqueue.front() << endl;
		double line = s.myqueue.front();
		line2 = line2 + line;
		s.myqueue.pop();
	}
	cout << "Total Income " << line2 << endl;
}
void OpenBook2() {
	double line2 = 0.0;
	if (s.myqueue.empty()) { s.myqueue1 = s.backup2; }
	while (!s.myqueue1.empty()) {
		cout << s.myqueue1.front() << endl;
		double line = s.myqueue1.front();
		line2 = line2 + line;
		s.myqueue1.pop();
	}
	cout << "Total Expediture " << line2 << endl;
}
void OpeningSaving() {
	int ops = 0; double inc = 0.0; int exits = 0; int out = 0;
	do {
		system("cls");
		cout << " 1. Save Money\n 2. Spend Money\n 3. Check Incomes\n 4. Check Spends\n 5 Exit\n 6. Total in Book" << endl;
		cout << "Enter number: "; cin >> ops;
		switch (ops) {
		case 1: cout << "Amount: "; cin >> inc; IncomeMoney(inc); break;
		case 2:cout << "Amount: "; cin >> inc; SpendMoney(inc); break;
		case 3:cout << " History of Incoming Money to your book- "; OpenBook(); break;
		case 4:cout << "History of Spendings Money of your book- "; OpenBook2(); break;
		case 5:cout << "are sure you want to exit" << endl; cout << "Enter 2 to exit"; cin >> exits; if (exits == 2) { out = 3; }
			  else { out = 1; }break;
		case 6:cout << "Total Amount in Book " << s.Total << endl; break;
		}
		system("pause>0");
	} while (out < 3);
}