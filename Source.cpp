#include<iostream>
using namespace std;
class passport
{
private:
	string fullname;
	string passport_number;
	string nationality;
	string gender;
	string DOB;
	string country_of_issuance;
	string date_of_issuance;
	string date_of_expiry;
	string citizenship_number;
	string passport_type;
public:
	passport()
	{
		citizenship_number = " * ****-*******-*";
	}
	passport(string first, string second)
	{
		fullname = first + " " + second;
	}
	passport(string pn, string G, string nat)
	{
		passport_number = pn;
		gender = G;
		nationality = nat;
	}
	void setname(string n)
	{
		fullname = n;
	}
	void setpassport_number(string pi)
	{
		passport_number = pi;
	}
	void setnationality(string nt)
	{
		nationality = nt;
	}
	void setgender(string g)
	{
		gender = g;
	}
	void setDOB(string DB)
	{
		DOB = DB;
	}
	void setCOI(string COI)
	{
		country_of_issuance = COI;
	}
	void setDOI(string DOI)
	{
		date_of_issuance = DOI;
	}
	void setDOE(string DOE)
	{
		date_of_expiry = DOE;
	}
	void setCitizenship(string CN)
	{
		citizenship_number = CN;
	}
	void setPT(string PT)
	{
		passport_type = PT;
	}
	string getname() { return fullname; }
	string getpassport_number() { return passport_number; }
	string getnationality() { return nationality; }
	string getgender() { return gender; }
	string getDOB() { return DOB; }
	string getCOI() { return country_of_issuance; }
	string getDOI() { return date_of_issuance; }
	string getDOE() { return date_of_expiry; }
	string getCitizenship() { return citizenship_number; }
	string getPT() { return passport_type; }
	void display() const
	{
		cout << "\t\t\t Passport Details" << endl;
		cout << "Full Name: " << fullname << endl;
		cout << "Passport Number: " << passport_number << endl;
		cout << "Nationality: " << nationality << endl;
		cout << "Gender: " << gender << endl;
		cout << "Date Of Birth: " << DOB << endl;
		cout << "Country of Issuance: " << country_of_issuance << endl;
		cout << "Date of Issuance: " << date_of_issuance << endl;
		cout << "Date of Expiry: " << date_of_expiry << endl;
		cout << "Citizenship Number: " << citizenship_number << endl;
		cout << "Passport Type: " << passport_type << endl;
	}
	~passport()
	{
		cout << "The destructor is called" << endl;
	}
};

int main()
{
	passport obj1;
	obj1 = passport();
	obj1.setname("Anwar Shahab");
	obj1.setpassport_number("AD1792431");
	obj1.setnationality("Pakistan");
	obj1.setgender("M");
	obj1.setDOB("11 APR 1976");
	obj1.setCOI("PAK");
	obj1.setDOI("26 NOV 2004");
	obj1.setDOE("25 NOV 2009");
	obj1.setCitizenship("42501-1566243-7");
	obj1.setPT("P");
	passport obj2;
	obj2 = passport("Anwar", "Shahab");
	passport obj3;
	obj3 = passport("AD1792431", "M", "Pakistan");
	obj1.display();
	obj2.display();
	obj3.display();
	return 0;
}