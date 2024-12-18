#include <iostream>
#include <string.h>
#include <stdlib.h>
using namespace std;
class Student {
int roll;
char name[15];
char address[25];
char class_name[12];
char dob[12];
char licno[15];
char blood_gr[3];
char mobile_no[12];
public:

Student() {
roll = 0;
strcpy(name, "");
strcpy(address, "");
strcpy(class_name, "");
strcpy(dob, "");
strcpy(licno, "");
strcpy(blood_gr, "");
strcpy(mobile_no, "");
}

Student(int roll, const char* name, const char* address, const char* class_name, const char* dob, const char* licno, const char* blood_gr, const char* mobile_no) {
this->roll = roll;
strcpy(this->name, name);
strcpy(this->address, address);
strcpy(this->class_name, class_name);
strcpy(this->dob, dob);
strcpy(this->licno, licno);
strcpy(this->blood_gr, blood_gr);
strcpy(this->mobile_no, mobile_no);
}

void accept() {
cout << "\nEnter roll number: ";
cin >> roll;
cout << "Enter name: ";
cin.ignore();
cin.getline(name, 15);
cout << "Enter address: ";
cin.getline(address, 25);
cout << "Enter class name: ";
cin.getline(class_name, 12);
cout << "Enter DOB (dd/mm/yyyy): ";
cin.getline(dob, 12);
cout << "Enter license number: ";
cin.getline(licno, 15);
cout << "Enter blood group: ";
cin.getline(blood_gr, 3);
cout << "Enter mobile number: ";
cin.getline(mobile_no, 12);
}

void display() const {
cout << "\nRoll: " << roll;
cout << "\nName: " << name;
cout << "\nAddress: " << address;
cout << "\nClass: " << class_name;
cout << "\nDOB: " << dob;
cout << "\nLicense No: " << licno;
cout << "\nBlood Group: " << blood_gr;
cout << "\nMobile No: " << mobile_no << endl;
}
};
int main() {
int ch, n;
Student students[20]; 
while (true) {
cout << "\nMenu\n1. Accept Student Details\n2. Display All Students\n3. Exit\nEnter Choice: ";
cin >> ch;
switch (ch) {
case 1:
cout << "Enter number of students: ";
cin >> n;
for (int i = 0; i < n; i++) {
cout << "\nEntering details for Student " << (i + 1) << ":\n";
students[i].accept();
}
break;
case 2:
for (int i = 0; i < n; i++) {
cout << "\nDisplaying details of Student " << (i + 1) << ":\n";
students[i].display();
}
break;
case 3:
exit(0);
default:
cout << "\nInvalid choice. Please try again.";
}
}
return 0;
}
