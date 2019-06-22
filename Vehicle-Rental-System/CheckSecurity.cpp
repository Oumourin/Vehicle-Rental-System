#include"CheckSecurity.h"

extern RentalForm rentalForm;

bool checkOverflow()
{
	if (rentalForm.arraySize == 100)
	{
		return false;
	}
	else
	{
		return true;
	}
}

bool checkOrderNumber(string orderNumber)
{
	if (orderNumber.length() != 10)
	{
		return false;
	}
	return true;
}

bool checkIdentifyNumber(string identifyNumber)
{
	bool checkFlag = true;
	18 == identifyNumber.length() ?
		isAllNumber(identifyNumber) ?
		checkFlag = true :
		checkFlag = false :
		checkFlag = false;
	return checkFlag;
}

bool isAllNumber(string inputString)
{
	for (int i = 0; i < inputString.length(); i++)
	{
		if (!isdigit(inputString[i]))
		{
			return false;
		}
	}
	return true;
}

bool checkVehiclePlateNumberLength(string vehiclePlateNumber)
{
	if (vehiclePlateNumber.length()==7 || vehiclePlateNumber.length()==8)
	{
		return true;
	}
	return false;
}


// 中英文混合字符做检查比较麻烦，暂时不填坑
bool isVehiclePlateNumber(string vehiclePlateNumber)
{
	//string templateChar = "京津晋冀蒙辽吉黑沪苏浙皖闽赣鲁豫鄂湘粤桂琼渝川贵云藏陕甘青宁新";
	//bool checkFlag = false;
	//for (int i = 0; i < templateChar.length(); i++)
	//{
	//	if (templateChar[i]==vehiclePlateNumber[0])
	//	{
	//		checkFlag = true;
	//	}
	//}
	//if (!checkFlag)
	//{
	//	return false;
	//}
	//if (!isalpha(vehiclePlateNumber[1]))
	//{
	//	return false;
	//}
	//  车牌有后面为非数字情况
	//if (!isAllNumber(vehiclePlateNumber.substr(2)))
	//{
	//	return false;
	//}
	return true;
}
