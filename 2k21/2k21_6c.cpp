#include <iostream>
#include <string>
using namespace std;

// Base class
class Person {
protected:
    string name;
    int age;

public:
    Person(string n = "", int a = 0) : name(n), age(a) {}
    void showPerson() {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};

// Student class
class Student : virtual public Person {
protected:
    string studentID;

public:
    Student(string n="", int a=0, string id="")
        : Person(n, a), studentID(id) {}
};

// Undergraduate student
class UnderGraduate : public Student {
public:
    UnderGraduate(string n="", int a=0, string id="")
        : Student(n, a, id) {}
};

// Graduate student
class Graduate : public Student {
public:
    Graduate(string n="", int a=0, string id="")
        : Student(n, a, id) {}
};

// Teacher class
class Teacher : virtual public Person {
protected:
    string dept;

public:
    Teacher(string n="", int a=0, string d="")
        : Person(n, a), dept(d) {}
};

// Officer class
class Officer : virtual public Person {
protected:
    string section;

public:
    Officer(string n="", int a=0, string s="")
        : Person(n, a), section(s) {}
};

// Teacher who is also a graduate student
class TeacherGraduate : public Teacher, public Graduate {
public:
    TeacherGraduate(string n, int a, string d, string id)
        : Person(n, a), Teacher(n, a, d), Graduate(n, a, id) {}
};

// Officer who is also a graduate student
class OfficerGraduate : public Officer, public Graduate {
public:
    OfficerGraduate(string n, int a, string s, string id)
        : Person(n, a), Officer(n, a, s), Graduate(n, a, id) {}
};
