#pragma once
#include <iostream>
#include <vector>
#include <string>
#include <iomanip>

using namespace std;

class Inventory
{
	Inventory* parent;
	const string name;
public:
	Inventory(string name);

	virtual void View() = 0;
	virtual void AddInventory(Inventory* inventory) = 0;
	virtual void RemoveInventory(Inventory* inventory) = 0;

	void SetParent(Inventory* _parent);
	Inventory* GetParent();
	string GetName();
	int GetLevel();
protected:
	int GetSize();
};

class Item : public Inventory
{
public:
	Item(string name);

	void View() override;
	void AddInventory(Inventory* inventory) {};
	void RemoveInventory(Inventory* inventory) {};
};

class Bag : public Inventory
{
	vector<Inventory*> inventoryList;
public:
	Bag(string name);
	~Bag();

	void View() override;
	void AddInventory(Inventory* inventory) override;
	void RemoveInventory(Inventory* inventory) override;
};