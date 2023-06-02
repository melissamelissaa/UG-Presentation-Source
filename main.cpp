#include <iostream>

using namespace std;

class Base
{
public:
    string name;

    Base(string _name)
    {
        name = _name;
    }

    virtual void print()
    {
        cout << "Printing from Base class.." << endl;
    }
};

class University : public Base
{
public:
    static int foundedAt;

    University(string _name) : Base(_name)
    {
        name = _name;
    }

    static void printInfo()
    {
        cout << "The president of The University Of Georgia is Giuli Alasania" << endl;
    }

    void print() override
    {
        cout << "Printing from University class.." << endl;
    }
};

int University::foundedAt = 2004;

class Student : public Base
{
public:
    int age;
    static float payingInYear;

    Student(string _name, int _age) : Base(_name)
    {
        name = _name;
        age = _age;
    }

    void print() override
    {
        cout << "Printing from Student class.." << endl;
    }

    static void printInfo()
    {
        cout << "Got in university by unified national examinations" << endl;
    }

    void yearlyPayment()
    {
        cout << "This student pays " << Student::payingInYear << " in a year" << endl;
    }

    void yearlyPayment(float amount)
    {
        cout << "This student pays " << amount << " in a year" << endl;
    }

    void yearlyPayment(float amountInYear, float amountInMonth)
    {
        cout << "This student pays " << amountInYear << " in a year or " << amountInMonth << " for 10 months" << endl;
    }
};

float Student::payingInYear = 3500.00;

class Course : public Base
{
    string lecturer;

    Course(string _name, string _lecturer) : Base(_name)
    {
        name = _name;
        lecturer = _lecturer;
    }

    void print() override
    {
        cout << "Printing from Course class.." << endl;
    }
};

class InformaticsStudent : public Student
{
public:
    string faculty = "Informatics";

    InformaticsStudent(string _name, int _age) : Student(_name, _age)
    {
        name = _name;
        age = _age;
    }

    void print() override
    {
        cout << "Printing from InformaticsStudent class.." << endl;
    }
};

class LawStudent : public Student
{
public:
    string faculty = "Law";

    LawStudent(string _name, int _age) : Student(_name, _age)
    {
        name = _name;
        age = _age;
    }

    void print() override
    {
        cout << "Printing from LawStudent class.." << endl;
    }
};

class PsychologyStudent : public Student
{
public:
    string faculty = "Psychology";

    PsychologyStudent(string _name, int _age) : Student(_name, _age)
    {
        name = _name;
        age = _age;
    }

    void print() override
    {
        cout << "Printing from PsychologyStudent class.." << endl;
    }
};

int main()
{
    
    InformaticsStudent informaticsStudent1("Nini", 18);
    LawStudent lawStudent1("Mariam", 21);
    PsychologyStudent psychologyStudent1("Tina", 19);

    // Example of polymorphism
    Student informaticsStudent2 = informaticsStudent1;
    Student arrOfStudents[] = { informaticsStudent1, lawStudent1, psychologyStudent1 };

    return 0;
}