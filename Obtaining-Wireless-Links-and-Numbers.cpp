#include<iostream>
#include<string>
using namespace std;

class Person{
	string name;
	int age;
	int gender;
public:
	void setPerson(string name, int age, int gender)
	{
		this->name = name;
		this->age = age;
		this->gender = gender;
	}
	void display()
	{
		cout << "�̸� : " << name << endl;
		cout << "���� : " << age << endl;
		if (gender == 1){
			cout << "���� : ����" << endl;
		}
		else{
			cout << "���� : ����" << endl;
		}
	}
};
class Employee : public Person
{
	int number;
	int salary;
public:

	Employee(string name ,int age, int gender,int number, int salary)
	{
		setPerson(name, age, gender);
		this->number = number;
		this->salary = salary;
	}
	void display()
	{
		Person::display();
		cout << "�й� : " << number << endl;
		cout << "���� : " << salary << endl;
	}
};
int main()
{
	Employee e("��ö��", 26, 1, 2010001, 2800);
	e.display();

	return 0;
}