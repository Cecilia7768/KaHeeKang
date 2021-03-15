#include "Inventory.h"


Inventory::Inventory(string name) : name(name)
{
	parent = NULL;
}

void Inventory::SetParent(Inventory * _parent)
{
	parent = _parent;
}

Inventory * Inventory::GetParent()
{
	return parent;
}

string Inventory::GetName()
{
	return name;
}

int Inventory::GetLevel()
{
	int level = 0;

	Inventory* inventory = GetParent();

	while (inventory != NULL)
	{
		level++;
		inventory = inventory->GetParent();
	}

	return level;
}

int Inventory::GetSize()
{
	return name.size() + GetLevel() * 2;
}

Item::Item(string name) : Inventory(name)
{
}

void Item::View()
{
	cout << setiosflags(ios::right) << setw(GetSize());
	cout << setfill(' ') << GetName().c_str() << " - Item" << endl;
}

Bag::Bag(string name) : Inventory(name)
{
}

Bag::~Bag()
{
	inventoryList.clear();
}

void Bag::View()
{
	cout << setiosflags(ios::right) << setw(GetSize());
	cout << setfill(' ') << GetName().c_str() << " - Bag" << endl;

	vector<Inventory*>::iterator begin = inventoryList.begin();
	vector<Inventory*>::iterator end = inventoryList.end();

	while (begin != end)
	{
		(*begin)->View();

		begin++;
	}
}

void Bag::AddInventory(Inventory* inventory)
{

	inventory->SetParent(this);	inventoryList.push_back(inventory);
}

void Bag::RemoveInventory(Inventory* inventory)
{
	vector<Inventory*>::iterator remove = find(inventoryList.begin(), inventoryList.end(), inventory);

	if (remove != inventoryList.end())
	{
		inventoryList.erase(remove);
	}
}
