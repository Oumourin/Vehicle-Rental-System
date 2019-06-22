#include "checkSecurity.h"

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

bool isVehiclePlateNumber(string vehiclePlateNumber)
{
	string templateChar = "¾©½ò½ú¼½ÃÉÁÉ¼ªºÚ»¦ËÕÕãÍîÃö¸ÓÂ³Ô¥¶õÏæÔÁ¹ðÇíÓå´¨¹óÔÆ²ØÉÂ¸ÊÇàÄþÐÂ";
	bool checkFlag = false;
	for (int i = 0; i < templateChar.length(); i++)
	{
		if (templateChar[i]==vehiclePlateNumber[0])
		{
			checkFlag = true;
		}
	}
	if (!checkFlag)
	{
		return false;
	}
	if (!isalpha(vehiclePlateNumber[1]))
	{
		return false;
	}
	//  ³µÅÆÓÐºóÃæÎª·ÇÊý×ÖÇé¿ö
	//if (!isAllNumber(vehiclePlateNumber.substr(2)))
	//{
	//	return false;
	//}
	return true;
}
