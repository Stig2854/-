#include "header.h"


class Film
{
public:
	Film()
	{
		name = reg = actor = "None";
		year = budjet = cash = 0;
    }
	Film(string name, string reg, string actor, int year, int budjet, int cash)
	{
		this->year = year;
		this->budjet = budjet;
		this->cash = cash;

		this->name = name;
		this->reg = reg;
		this->actor = actor;
	}
    void setName(string name)
    {
        this->name = name;
    }
   string getName()
    {
       return name;
    }
    void setReg(string reg)
    {
        this->reg = reg;
    }
    string getReg()
    {
        return reg;
    }
    void setActor(string actor)
    {
        this->actor = actor;
    }
    string getActor()
    {
       return actor;
    }


    void setYear(int year)
    {
        this->year = year;
    }
    int getYear()
    {
       return year;
    }
    void setBudjet(int budjet)
    {
        this->budjet = budjet;
    }
    int getBudjet()
    {
        return budjet;
    }
    void setCash(int cash)
    {
        this->cash = cash;
    }
    int getCash()
    {
        return cash;
    }
    Film(const Film& other)
    {
        name = other.name;
        reg = other.reg;
        actor = other.actor;
        year = other.year;
        budjet = other.budjet;
        cash = other.cash;

    }
private:
    string name, reg, actor;
    int year, budjet, cash;
};