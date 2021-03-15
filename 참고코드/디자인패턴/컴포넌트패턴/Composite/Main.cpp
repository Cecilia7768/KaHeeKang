#include "Inventory.h"

void main()
{
	Inventory* inventory = new Bag("Main Bag");

	Inventory* item1 = new Item("검");
	Inventory* item2 = new Item("활");
	Inventory* item3 = new Item("지팡이");

	Inventory* bag1 = new Bag("주문서 가방");
	Inventory* item4 = new Item("파이어볼");
	Inventory* item5 = new Item("썬더볼트");

	Inventory* bag2 = new Bag("화살 가방");
	Inventory* item6 = new Item("불 화살");
	Inventory* item7 = new Item("독 화살");

	Inventory* item8 = new Item("돈");

	inventory->AddInventory(item1);
	inventory->AddInventory(item2);
	inventory->AddInventory(item3);

	bag1->AddInventory(item4);
	bag1->AddInventory(item5);
	inventory->AddInventory(bag1);

	bag2->AddInventory(item6);
	bag2->AddInventory(item7);
	inventory->AddInventory(bag2);

	inventory->AddInventory(item8);

	inventory->View();

	delete inventory;
}