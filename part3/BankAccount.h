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
		BankAccount();
		BankAccount(const string &, const string &, double, double);
		double calculateInterest(); //returns monthly interest
		double getBalance(); //returns balance
		void setBalance(double);
		void setVariables(const string &, const string &, double, double); // sets variables

	private:

		string name; //owner's name
		string accNum; //account number
		double rate; //interest rate
		double balance;
};
#endif
