#include <iostream>

using namespace std;

int studentsCounter{ 0 };

int numberOfStudents() {
	cout << "Number of students: ";
	return studentsCounter;
}

class Person {
private:
	string name;
	int age{ 0 };
	string sex;
	int weight{ 0 };
public:
	void setName(string name) {
		this->name = name;
	}
	
	void setAge(int age) {
		this->age = age;
	}

	void setSex(string sex) {
		this->sex = sex;
	}

	void setWeight(int weight) {
		this->weight = weight;
	}

	string getName() {
		return this->name;
	}

	int getAge() {
		return this->age;
	}

	string getSex() {
		return this->sex;
	}

	int getWeight() {
		return this->weight;
	}
};

class Student : public Person {
private:
	int yearOfStartStudying{ 2022 };
public:
	Student() {
		studentsCounter += 1;
	}

	void setYearOfStartStudying(int yearOfStartStudying) {
		this->yearOfStartStudying = yearOfStartStudying;
	}

	void increaseYearOfStartStudying() {
		this->yearOfStartStudying += 1;
	}

	int getYearOfStartStudying() {
		return this->yearOfStartStudying;
	}

	void info() {
		cout << this->getName() << endl;
		cout << this->getAge() << endl;
		cout << this->getSex() << endl;
		cout << this->getWeight() << endl;
		cout << this->getYearOfStartStudying() << endl;
	}
};

int main()
{
	Student S032;
	cout << numberOfStudents() << endl;
	S032.setName("Arseniy");
	S032.setAge(22);
	S032.setSex("male");
	S032.setWeight(70);
	S032.setYearOfStartStudying(2021);
	S032.info();
	cout << "_________________________" << endl;
	Student S033;
	cout << numberOfStudents() << endl;
	S033.setName("Yaroslav");
	S033.setAge(23);
	S033.setSex("male");
	S033.setWeight(83);
	S033.setYearOfStartStudying(2020);
	S032.info();
	cout << "_________________________" << endl;
	S033.info();
}
