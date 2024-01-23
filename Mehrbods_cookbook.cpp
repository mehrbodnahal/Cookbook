#include <iostream>
#include <string>

using namespace std;

string user_name;
int password;

void LOGIN()
{
	cout << "LOGIN REQUIRED" << endl;
	cout << "enter username:";
	cin >> user_name;

	cout << "enter password:";
	cin >> password;

	if ((user_name == "Mehrbod" || user_name == "mehrbod" || user_name == "MEHRBOD") && password == 123)
	{
		cout << "select a number for recipe:" << endl;
		cout << "1-Ghormeh Sabzi" << endl;
		cout << "2-Ghemeh Polo" << endl;
		cout << "3-Abgoosht" << endl;
		cout << "4-Sabzi Polo" << endl;
		cout << "5-Pepperoni Pizza" << endl;
		int number;
		cout << "Enter number:";
		cin >> number;

		if (number == 1)
		{
			cout << "Ghormeh Sabzi" << endl;
			cout << "Recipe: "
					"https://littlespicejar.com/ghormeh-sabzi/"
				 << endl;
		}
		else if (number == 2)
		{
			cout << "Gheymeh Polo" << endl;
			cout << "Recipe: "
					"https://persianmama.com/khoresh-gheymeh-beef-and-split-pea-stew/"
				 << endl;
		}
		else if (number == 3)
		{
			cout << "Abgoosht" << endl;
			cout << "Recipe: "
					"https://thecaspianchef.com/2020/04/16/abgoosht-meat-and-potato-stew-with-beans/"
				 << endl;
		}
		else if (number == 4)
		{
			cout << "Sabzi Polo" << endl;
			cout << "Recipe: "
					"https://www.foodandwine.com/recipes/herbed-rice-sabzi-polo"
				 << endl;
		}
		else if (number == 5)
		{
			cout << "Pepperoni Pizza" << endl;
			cout << "Recipe: "
					"https://www.simplyrecipes.com/recipes/homemade_pepperoni_pizza/"
				 << endl;
		}
	}
	else
	{
		cout << "error";
	}
}

int main()
{
	LOGIN();
	return 0;
}
