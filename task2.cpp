#include <iostream>

using namespace std;

class Fruit {
private:
	string name;
	string color;
public:
	bool isPerson{ 0 };
	string personName{ "" };
	Fruit(string name, string color) : name(name), color(color) { }

	string getName() {
		if (!isPerson) {
			return this->name;
		}
		else {
			string result = this->personName + " " + this->name;
			return result;
		}
	}

	string getColor() {
		return this->color;
	}
};

class Apple : public Fruit {
public:
	Apple(string color) : Fruit("apple", color) { }
};

class Banana : public Fruit{
public:
	Banana() : Fruit("banana", "yellow") { }
};

class GrannySmith : public Apple {
public:
	GrannySmith() : Apple("green") {
		this->personName = "Granny Smith";
		this->isPerson = 1;
	}
};

int main()
{
	Apple a("red");
	Banana b;
	GrannySmith c;

	std::cout << "My " << a.getName() << " is " << a.getColor() << ".\n";
	std::cout << "My " << b.getName() << " is " << b.getColor() << ".\n";
	std::cout << "My " << c.getName() << " is " << c.getColor() << ".\n"; 
	return 0;
}
