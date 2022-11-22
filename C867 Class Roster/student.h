#pragma once
#include"degree.h"

class Student {
private:
	string numID;
	string firstName;
	string lastName;
	string email;
	int	   age;
	int    days[3]; 
	DegreeProgram degree;
	
public:
	void SetStudentID(string studentID);
	void SetFirstName(string studentFirstName);
	void SetLastName(string studentLastName);
	void SetEmailAddress(string emailAddress);
	void SetStudentAge(int studentAge);
	void SetDays(int Days[]);		//leave empty brackets when receiving
	void SetDegreeProgram(DegreeProgram degreeProgram);
	void Print();
	int daysArray = 3; 

	string GetStudentID();
	string GetFirstName();
	string GetLastName();
	string GetEmailAddress();
	int	   GetStudentAge();
	int*   GetDays();
	DegreeProgram GetDegreeProgram();

	Student();
	Student(string studentID, string studentFirstName, string studentLastName, string emailAddress, int studentAge, int Days[], DegreeProgram degreeProgram);
	~Student(); 
	
};


