#include<iostream>
#include<iomanip> //For using setw(), setprecision(), ...
using namespace std;

double prevBalance, interest_rate, payment;

int main(){	
	cout << "Enter initial loan: ";
	cin >> prevBalance;
	cout << "Enter interest rate per year (%): ";
	cin >> interest_rate;
	cout << "Enter amount you can pay per year: ";
	cin >> payment;

	//use 'setw' to set width of table and 'left' to set left-alignment
	//you can change input argument of 'setw()' to see the effect
	//Try to change from 'left' to 'right' and see the effect
	cout << setw(13) << left << "EndOfYear#"; 
	cout << setw(13) << left << "PrevBalance"; 
	cout << setw(13) << left << "Interest"; 
	cout << setw(13) << left << "Total";
	cout << setw(13) << left << "Payment";
	cout << setw(13) << left << "NewBalance";
	cout << "\n";
	

	//use 'fixed' and 'setprecision' to fix the number of decimal digits for displaying
	//you can change input argument of 'setprecision()' to see the effect
	cout << fixed << setprecision(2);
	
		for (int year = 1; prevBalance > 0; year++ ){
		double interest = prevBalance * (interest_rate/100);
		double total = prevBalance + interest;
		if (total <= payment) payment = total;
        double newBalance = total - payment;

	    cout << setw(13) << left << year; 
	    cout << setw(13) << left << prevBalance;
	    cout << setw(13) << left << interest;
	    cout << setw(13) << left << total;
	    cout << setw(13) << left << payment;
	    cout << setw(13) << left << newBalance;
	    cout << "\n";	
	
        prevBalance = newBalance;
		}
	return 0;
}
