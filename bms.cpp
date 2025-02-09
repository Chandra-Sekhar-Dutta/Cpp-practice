#include<iostream>
#include<fstream>
#include<cctype>
#include<iomanip>
using namespace std;
 
// CLASS USED IN PROJECT
 
class account
{
	int Account_No;
	char Account_Holder_Name[50];
	char type;
	int Deposit_Amount;
public:
	void Open_account();	//function to get data from user
	void Display_account() const;	//function to show data on screen
	void dep(int);	//function to accept amount and add to balance amount
	void Withdraw(int);	
};         //class ends here
 
 
void account::Display_account() const
{
	cout<<"\nAccount No. : "<<Account_No;
	cout<<"\nAccount Holder Name : ";
	cout<<Account_Holder_Name;
	cout<<"\nType of Account : "<<type;
	cout<<"\nBalance amount : "<<Deposit_Amount;
}
void account::Open_account()
{
	cout<<"\nPlease! Enter The account No. :";
	cin>>Account_No;
	cout<<"\nPlease! Enter The Name of The account Holder : ";
	cin.ignore();
	cin.getline(Account_Holder_Name,50);
	cout<<"\nPlease! Enter Type of The account (C/S) : ";
	cin>>type;
	type=toupper(type);
	cout<<"\nPlease! Enter The Initial amount(>=440 for Saving and >=1000 for current ) : ";
	cin>>Deposit_Amount;
	cout<<"\n\nAccount Created..";
}
 
 
 
	
void account::dep(int x)
{
	Deposit_Amount+=x;
}
	
void account::Withdraw(int x)
{
	Deposit_Amount-=x;
}
	

 
int main()
{
	char ch;
	int num;

	do
	{
		system("cls");
		cout<<"\n\n\t\tMAIN MENU";
		cout<<"\n\t\t01. NEW ACCOUNT";
		cout<<"\n\t\t02. Deposit_Amount AMOUNT";
		cout<<"\n\t\t03. WITHWithdraw AMOUNT";
		cout<<"\n\t\t04. BALANCE ENQUIRY";
		cout<<"\n\t\t05. EXIT";
		cout<<"\n\t\tSelect Your Option (1-5) ";
		cin>>ch;
		system("cls");
		switch(ch)
		{
		case '1':
			write_account();
			break;
		case '2':
			cout<<"\n\t\tPlease! Enter The account No. : "; cin>>num;
			Deposit_Amount_withWithdraw(num, 1);
			break;
		case '3':
			cout<<"\n\t\tPlease! Enter The account No. : "; cin>>num;
			Deposit_Amount_withWithdraw(num, 2);
			break;
		case '4': 
			cout<<"\n\t\tPlease! Enter The account No. : "; cin>>num;
			display_sp(num);
			break;
		 case '5':
			cout<<"\n\t\tThanks for using bank managemnt system";
			break;
		 default :cout<<"\a";
		}
		cin.ignore();
		cin.get();
	}while(ch!='8');
	return 0;
}
//function to write in file
 
void write_account()
{
	account ac;
	ofstream outFile;
	outFile.open("account.dat",ios::binary|ios::app);
	ac.Open_account();
	outFile.write(reinterpret_cast<char *> (&ac), sizeof(account));
	outFile.close();
}
 
//function to read specific record from file
 
void display_sp(int n)
{
	account ac;
	bool flag=false;
	ifstream inFile;
	inFile.open("account.dat",ios::binary);
	if(!inFile)
	{
		cout<<"File could not be open !! Press any Key...";
		return;
	}
	cout<<"\nBALANCE DETAILS\n";
 
    	while(inFile.read(reinterpret_cast<char *> (&ac), sizeof(account)))
	{
		if(ac.Return_Account_Number()==n)
		{
			ac.Display_account();
			flag=true;
		}
	}
	inFile.close();
	if(flag==false)
		cout<<"\nAccount number does not exist";
}
 
void Deposit_Amount_withWithdraw(int n, int option)
{
	int Amount;
	bool found=false;
	account ac;
	fstream File;
	File.open("account.dat", ios::binary|ios::in|ios::out);
	if(!File)
	{
		cout<<"File could not be open !! Press any Key...";
		return;
	}
	while(!File.eof() && found==false)
	{
		File.read(reinterpret_cast<char *> (&ac), sizeof(account));
		if(ac.Return_Account_Number()==n)
		{
			ac.Display_account();
			if(option==1)
			{
				cout<<"\n\t\tTO Deposit_AmountE AMOUNT ";
				cout<<"\nPlease! Enter The amount to be Deposit_Amounted";
				cin>>Amount;
				ac.dep(Amount);
			}
			if(option==2)
			{
				cout<<"\n\t\tTO WITHWithdraw AMOUNT ";
				cout<<"\nPlease! Enter The amount to be withWithdraw";
				cin>>Amount;
				int bal=ac.Return_Deposit_Amount()-Amount;
				if((bal<440 && ac.Return_type()=='S') || (bal<1000 && ac.Return_type()=='C'))
					cout<<"Insufficience balance";
				else
					ac.Withdraw(Amount);
			}
			int pos=(-1)*static_cast<int>(sizeof(ac));
			File.seekp(pos,ios::cur);
			File.write(reinterpret_cast<char *> (&ac), sizeof(account));
			cout<<"\n\t\t Record Updated";
			found=true;
	       }
         }
	File.close();
	if(found==false)
		cout<<"\n Record Not Found ";
}
 

