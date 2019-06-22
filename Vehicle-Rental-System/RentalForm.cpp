#include "RentalForm.h"
#include"checkSecurity.h"
#include"UI.h"

RentalForm rentalForm;

RentalForm::RentalForm()
{
	arraySize = 0;
}

void addVehicleToForm()
{
	if (!checkOverflow())
	{
		cout << "订单列表已满！无法添加" << endl;
		return;
	}
	printf("请根据提示输入相关信息：\n");
	string orderNumber, identifyNum, licensePlateNumber;
	//  这玩意应该是自动生成才符合常见情况
	cout << "请输入订单号:";
	cin >> orderNumber;
	// 逻辑有点蠢，实际情况应该考虑中间允许退出
	while (!checkOrderNumber(orderNumber))
	{
		cout << "输入错误！请重新输入：";
		cin >> orderNumber;
	}
	cout << "请输入证件号：";
	cin >> identifyNum;
	while (!checkIdentifyNumber(identifyNum))
	{
		cout << "输入错误！请重新输入：";
		cin >> identifyNum;
	}
	cout << "请输入车牌号：";
	cin >> licensePlateNumber;
	// 中文字符没办法做检查，直接取消掉这个检查
	//while (!(checkVehiclePlateNumberLength(licensePlateNumber)&&isVehiclePlateNumber(licensePlateNumber)))
	//{
	//	cout << "输入错误！请重新输入：";
	//	cin >> licensePlateNumber;
	//}
	addVehicleToForm(Vehicle(orderNumber, identifyNum, licensePlateNumber));
	cout << "添加成功！信息如下：" << endl;
	printHeader();
	toString(rentalForm.vehicles[(rentalForm.arraySize-1)]);
}

void addVehicleToForm(Vehicle vehicle)
{
	rentalForm.vehicles[rentalForm.arraySize] = vehicle;
	rentalForm.arraySize++;
}

void toString()
{
	for (int i = 0; i < rentalForm.arraySize; i++)
	{
		toString(rentalForm.vehicles[i]);
	}
}

void returnVehicke()
{
	cout << "输入要登记归还的订单号：" << endl;
	string getOrderNumber;
	cin >> getOrderNumber;
	// 标记是否找到订单
	bool getFlag = false;
	for (int i = 0; i < rentalForm.arraySize; i++)
	{
		if (getOrderNumber == rentalForm.vehicles[i].orderNumber)
		{
			cout << "请输入车辆租金：";
			double getRent;
			cin >> getRent;
			rentalForm.vehicles[i].vehicleRent = getRent;
			cout << "还车成功！" << endl;
			getFlag = true;
			break;
		}
	}
	if (!getFlag)
	{
		cout << "未找到该订单！" << endl;
	}
}