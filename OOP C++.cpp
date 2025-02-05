#include <iostream>
#include <string>
#include <sstream>
#include <cmath>
#include <stack>

using namespace std;

// Задание 1
class Student {
private:
    string name;
    int age;
    string groupNumber;
public:
    Student() {};
    Student(string name, int age, string groupNumber) : name(name), age(age), groupNumber(groupNumber) {};
    
    string getName() const { return name; }
    void setName(string& name) { this->name = name; }

    int getAge() const { return age; }
    void setAge(int age) { this->age = age; }

    string getGroupNumber() const { return groupNumber; }
    void setGroupNumber(string& groupNumber) { this->groupNumber = groupNumber; }
};

class Aspirant : public Student {
private:
    string workTopic;
public:
    string getWorkTopic() const { return workTopic; }
    void setWorkTopic(string& name) { this->workTopic = workTopic; }
};

// Задание 2

class Passport {
private:
    string name;
    string dateOfBirth;
    string series;
    string number;
    string issued;
    string gender;
    string registrationForm;
    bool army;
    bool merry;
public:
    string getName() const { return name; }
    void setName(string& name) { this->name = name; }

    string getDateOfBirth() const { return dateOfBirth; }
    void setDateOfBirth(string& dateOfBirth) { this->dateOfBirth = dateOfBirth; }

    string getSeries() const { return series; }
    void setSeries(string& series) { this->series = series; }

    string getNumber() const { return number; }
    void setNumber(string& number) { this->number = number; }

    string getIssued() const { return issued; }
    void setIssued(string& issued) { this->issued = issued; }

    string getGender() const { return gender; }
    void setGender(string& gender) { this->gender = gender; }

    string getRegistrationForm() const { return registrationForm; }
    void setRegistrationForm(string& registrationForm) { this->registrationForm = registrationForm; }

    const bool getArmy() const { return army; }
    void setArmy(bool army) { this->army = army; }

    const bool getMerry() const { return merry; }
    void setMerry(bool merry) { this->merry = merry; }
};

class ForeignPassport : public Student {
private:
    string foreignNumber;
    string visa;
public:
    string getForeignNumber() const { return foreignNumber; }
    void setForeignNumber(string& foreignNumber) { this->foreignNumber = foreignNumber; }

    string getVisa() const { return visa; }
    void setVisa(string& visa) { this->visa = visa; }
};

int main() {
    setlocale(LC_ALL, "RU");
    cout << "Задание 1\n";
    
    return 0;
}