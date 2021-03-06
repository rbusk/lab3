/* Mary Connolly and Ryan Busk
 * interface file for BankAccount, a base class
 */

#ifndef BANKACCOUNT_H
#define BANKACCOUNT_H

#include <iostream>
#include <string>
using namespace std;

class BankAccount {

	public:
		BankAccount(const string &, const string &, double, double); //nondefault constructor
		double calculateInterest(); //returns monthly interest
		double getBalance(); //returns balance
		void setBalance(double);

	private:

		string name; //owner's name
		string accNum; //account number
		double rate; //interest rate
		double balance; //account's balance
};
#endif
