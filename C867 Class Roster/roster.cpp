#include <iostream>
#include <string>
using namespace std;
#include"roster.h"


void Roster::add(string studentID, string firstName, string lastName, string emailAddress, int age, int days1, int days2, int days3, DegreeProgram degreeProgram)
{
	
		int days[3] = { days1, days2, days3 };
		classRosterArray[capacity++] = new Student(studentID, firstName, lastName, emailAddress, age, days, degreeProgram);
	
}
void Roster::remove(string studentID) 
{
	for (int i = 0; i < 5; i++)
	{
		if (studentID == classRosterArray[i]->GetStudentID())
		{
			classRosterArray[i] = nullptr;
		}
		else 
		{
			classRosterArray[i]->Print();
		}
	}
}

void Roster::printAll()
{
	for (int i = 0; i < 5; i++)
	{
		classRosterArray[i]->Print();
	}

}

void Roster::printAverageDaysInCourse(string studentID)
{
	for (int i = 0; i < 5; i++)
	{
		if (classRosterArray[i]->GetStudentID() == studentID)
		{
			int* days = classRosterArray[i]->GetDays();
			cout << "Student ID: " << classRosterArray[i]->GetStudentID() << ", averages ";
			cout << (days[0] + days[1] + days[2]) / 3 << " days in a course." << endl;
		}
	}
}

void Roster::printInvalidEmails()
{
	for (int i = 0; i < 5; i++)
	{
		string email = Roster::classRosterArray[i]->GetEmailAddress();
		if ((email.find('@') == string::npos) || (email.find(' ') != string::npos) || (email.find('.') == string::npos)) 
		{
			cout << email << endl;
		}
	}
}

void Roster::printByDegreeProgram(DegreeProgram degreeProgram)
{
	
	for (int i = 0; i < 5; i++)
	{
		if (Roster::classRosterArray[i]->GetDegreeProgram() == degreeProgram) 
		 {
			classRosterArray[i]->Print();
		}
	}
	
		
	
}

void Roster::parse(string data)
{
	size_t rhs = data.find(",");
	string studentID = data.substr(0, rhs);

	size_t lhs = rhs + 1;
	rhs = data.find(",", lhs);
	string firstName = data.substr(lhs, rhs - lhs);

	lhs = rhs + 1;
	rhs = data.find(",", lhs);
	string lastName = data.substr(lhs, rhs - lhs);

	lhs = rhs + 1;
	rhs = data.find(",", lhs);
	string emailAddress = data.substr(lhs, rhs - lhs);

	lhs = rhs + 1;
	rhs = data.find(",", lhs);
	int age = stoi(data.substr(lhs, rhs - lhs));

	lhs = rhs + 1;
	rhs = data.find(",", lhs);
	int days1 = stoi(data.substr(lhs, rhs - lhs));

	lhs = rhs + 1;
	rhs = data.find(",", lhs);
	int days2 = stoi(data.substr(lhs, rhs - lhs));

	lhs = rhs + 1;
	rhs = data.find(",", lhs);
	int days3 = stoi(data.substr(lhs, rhs - lhs));

	lhs = rhs + 1;
	rhs = data.find(",", lhs);
	string strDegree = data.substr(lhs, rhs - lhs);

	DegreeProgram degreeProgram = DegreeProgram::SECURITY;
	if (strDegree == "SECURITY")
	{
		degreeProgram = DegreeProgram::SECURITY;
	}
	else if (strDegree == "NETWORK")
	{
		degreeProgram = DegreeProgram::NETWORK;
	}
	else if (strDegree == "SOFTWARE")
	{
		degreeProgram = DegreeProgram::SOFTWARE;
	}

	add(studentID, firstName, lastName, emailAddress, age, days1, days2, days3, degreeProgram);

}
		


