#include "Data.h"
#include"DataGraph.h"
#include"DataTable.h"

void main()
{
	Data* data = new Data;
	DataTable* DT = new DataTable;
	DataGraph* DG = new DataGraph;

	cout << "[갱신 1]" << endl;

	//구독개체를 추가한다.
	data->AddObserver(DT);
	data->setData(6, 2, 3);
	//변경된 상태를 적용해서 알려준다.
	data->NotifyObserver();

	cout << "\n[갱신 2]" << endl;
	//구독개체를 추가한다.
	data->AddObserver(DG);
	data->setData(10, 12, 7);
	//변경된 상태를 적용해서 알려준다.
	data->NotifyObserver();

	delete data;
	delete DT;
	delete DG;
}