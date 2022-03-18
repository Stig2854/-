#include "Sourse.cpp"

class Film
{
public:
	Film all[11];
	int sizeof_all = 0;
	const int maxof_all = 10;
	void add()
	{
		cout << "Value : ";
		string name, reg, actor;
		int year, budjet, cash;

		cin >> name >> reg >> actor >> year >> budjet >> cash;

		all[sizeof_all].setName(name);
		all[sizeof_all].setReg(reg);
		all[sizeof_all].setActor(actor);
		all[sizeof_all].setYear(year);
		all[sizeof_all].setBudjet(budjet);
		all[sizeof_all].setCash(cash);
		sizeof_all++;
    }
	void show()
	{
		cout << endl;
		for (int i = 0; i < sizeof_all; i++)
		{
			cout << all[i].getName() << " " << all[i].getReg() << " " << all[i].getActor() << " " << all[i].getYear() << " "
				<< all[i].getBudjet() << " " << all[i].getCash() << endl;
		}
	}
	void show_index(int x)
	{
		cout << all[x].getName() << " " << all[x].getReg() << " " << all[x].getActor() << " " << all[x].getYear() << " "
			<< all[x].getBudjet() << " " << all[x].getCash() << endl;
	}

	void deleter(int x)
	{
		for (int i = x; i < sizeof_all; i++)
		{
			all[i] = all[i + 1];
		}
		sizeof_all--;
	}
	void change(int x)
	{
		string value;
		int elem;
		cout << "Value and 0-5 elem :";
		cin >> value >> elem;
		switch (elem)
		{
		case 0:
			all[x].setName(value);
		    break;
		case 1:
			all[x].setReg(value);
			break;
		case 2:
			all[x].setActor(value);
			break;
		case 3:
			all[x].setYear(stoi(value));
			break;
		case 4:
			all[x].setBudjet(stoi(value));
			break;
		case 5:
			all[x].setCash(stoi(value));
			break;

		}
    }

	void max_price()
	{
		int max = all[0].getPrice(), index = 0;
        for (int i = 0; i < sizeof_all-1; i++)
		{
			if (max <= all[i + 1].getPrice())
			{
				max = all[i + 1].getPrice();
				index = i + 1;
			}
		}
		cout << "\n" << "Max_price in " << index << endl;
	}
	void sorter()
	{
		for (int i = 0; i < sizeof_all; i++)
		{
			for (int j = 0; j < sizeof_all - 1; j++)
			{
				Film temp;
				if ((int)all[j].getName()[0] >= (int)all[j + 1].getName()[0])

				{
					temp = all[j + 1];
					all[j + 1] = all[j];
					all[j] = temp;
				}
			}
		}
    }
};