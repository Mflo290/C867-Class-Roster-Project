#include <iostream>
#include <string>
using namespace std;
#include"student.h" 



void Student::SetStudentID(string studentID) {
	this->numID = studentID;
}
void Student::SetFirstName(string studentFirstName) {
	this->firstName = studentFirstName;
}
void Student::SetLastName(string studentLastName) {
	this->lastName = studentLastName;
}
void Student::SetEmailAddress(string emailAddress) {
	this->email = emailAddress;
}
void Student::SetStudentAge(int studentAge) {
	this->age = studentAge;
}

void Student::SetDays(int Days[]) {
	this->days[0] = Days[0];
	this->days[1] = Days[1];
	this->days[2] = Days[2];

}
void Student::SetDegreeProgram(DegreeProgram degreeProgram) {
	this->degree = degreeProgram;
}

void Student::Print() 
{
	string degree[] = { "SECURITY", "NETWORK", "SOFTWARE" };
	cout << this->GetStudentID() << "\tFirst Name: " << this->GetFirstName() << "\tLast Name: " << this->GetLastName() << "\tAge: " << GetStudentAge() << "\tdaysInCourse: {" << this->GetDays()[0] << ", " << this->GetDays()[1] << ", " << this->GetDays()[2] << "} Degree Program: " << degree[this->GetDegreeProgram()] << endl;
}



string Student::GetStudentID() {
	return this->numID;
}
string Student::GetFirstName() {
	return this->firstName;
}
string Student::GetLastName() {
	return this->lastName;
}
string Student::GetEmailAddress() {
	return this->email;
}
int Student::GetStudentAge() {
	return this->age;
}
int* Student::GetDays() {
	return this->days;
}

DegreeProgram Student::GetDegreeProgram() {
	return degree;
}

Student::Student()
{
}

Student::Student(string studentID, string studentFirstName, string studentLastName, string emailAddress, int studentAge, int Days[], DegreeProgram degreeProgram)
{
	this->numID = studentID;
	this->firstName = studentFirstName;
	this->lastName = studentLastName;
	this->email = emailAddress;
	this->age = studentAge;
	this->days[0] = Days[0];
	this->days[1] = Days[1];
	this->days[2] = Days[2];
	this->degree = degreeProgram;
}

Student::~Student()
{
}



