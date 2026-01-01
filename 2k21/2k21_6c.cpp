#include <iostream>
#include <string>
using namespace std;

// Base class
class Person {
protected:
    string name;
    int age;

public:
    Person(string n="", int a=0) : name(n), age(a) {}
};

// Student class
class Student : virtual public Person {
protected:
    string studentID;

public:
    Student(string n="", int a=0, string id="")
        : Person(n, a), studentID(id) {}
};

// Teacher class
class Teacher : virtual public Person {
protected:
    string department;

public:
    Teacher(string n="", int a=0, string d="")
        : Person(n, a), department(d) {}
};

// Undergraduate inherits Student + Teacher
class UnderGraduate : public Student, public Teacher {
public:
    UnderGraduate(string n, int a, string id, string dept)
        : Person(n, a),
          Student(n, a, id),
          Teacher(n, a, dept) {}
};

// Graduate inherits Student + Teacher
class Graduate : public Student, public Teacher {
public:
    Graduate(string n, int a, string id, string dept)
        : Person(n, a),
          Student(n, a, id),
          Teacher(n, a, dept) {}
};
