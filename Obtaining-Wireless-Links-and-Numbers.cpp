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
		cout << "이름 : " << name << endl;
		cout << "나이 : " << age << endl;
		if (gender == 1){
			cout << "성별 : 남자" << endl;
		}
		else{
			cout << "성별 : 여자" << endl;
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
		cout << "학번 : " << number << endl;
		cout << "월급 : " << salary << endl;
	}
};
int main()
{
	Employee e("김철수", 26, 1, 2010001, 2800);
	e.display();

	return 0;
}