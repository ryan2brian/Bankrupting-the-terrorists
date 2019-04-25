
#include <iostream>

using namespace std;
//Stating my variables that are going to be through out my program 
void safeViewAccountBalanceTransaction(int accountBallance, int accountBallanceTwo);
void HackViewAccountBalanceTransaction(int& accountBallanceOne, int& accountBallanceTwo);

int main()
{
	//Showing off Starting Values from both bank accounts from FBI and CIA 
	int FBIAccountBalance = 300000000;
	int CIAAccountBalance = 1;
	//Prints out the original amount of money in both accounts 
	cout << "Original values: \n";
	cout << "FBIAccountBalance: " << FBIAccountBalance << "\n";
	cout << "CIAAccountBalance: " << CIAAccountBalance << "\n";
	//Shows what a normal transaction would before the hack would take place 
	cout << "\nCalling NormalTransaction: \n";
	safeViewAccountBalanceTransaction(FBIAccountBalance, CIAAccountBalance);
	cout << "FBIAccountBalance: " << FBIAccountBalance << "\n";
	cout << "CIAAcountBalance: " << CIAAccountBalance << "\n";
	//Showing Hacked Balances, after the CIA hacked to get more money because they are broke 
	cout << "\nCalling HackedTransaction: \n";
	HackViewAccountBalanceTransaction(FBIAccountBalance, CIAAccountBalance);
	cout << "FBIAccountBalance: " << FBIAccountBalance << "\n";
	cout << "CIAAccountBalance: " << CIAAccountBalance << "\n";
	//Pauses Program
	system("pause");

	return 0;
}

//Void means it's going to be retunred then followed by the folowed by the varabile, then the fucntions 
void safeViewAccountBalanceTransaction(int accountBallanceOne, int accountBallanceTwo)
{

	int temp = accountBallanceOne;
	accountBallanceOne = accountBallanceTwo;
	accountBallanceTwo = temp;
}

void HackViewAccountBalanceTransaction(int& accountBalanceOne, int& accountBalanceTwo)
{
	int temp = accountBalanceOne;
	accountBalanceOne = accountBalanceTwo;
	accountBalanceTwo = temp;

}