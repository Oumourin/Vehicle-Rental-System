#include "UI.h"

extern RentalForm rentalForm;

void printHeader()
{
	printf("订单号        身份证号              车牌号      费用\n");
}

void welcomeUI()
{
	printf("====================================================================\n");
	printf("=====                    车辆租赁管理系统                      =====\n");
	printf("=====                       Copyright2019                      =====\n");
	printf("=====                   XXX XXX XXX                   =====\n");
	printf("=====                   XXX XXX XXX                   =====\n");
	printf("=====                     AllRightsReserved                    =====\n");
	printf("=====                     按任意键进入系统                     =====\n");
	printf("====================================================================\n");
}

void menuUI()
{
	printf("====================================================================\n");
	printf("=====                      系  统  菜  单                      =====\n");
	printf("                                                                                             \n");
	printf("=====                      0、退出系统                         =====\n");
	printf("=====                      1、信息录入                         =====\n");
	printf("=====                      2、信息显示                         =====\n");
	printf("=====                      3、查询系统                         =====\n");
	printf("=====                      4、信息修改                         =====\n");
	printf("=====                      5、信息删除                         =====\n");
	printf("=====                      6、添加数据                         =====\n");
	printf("=====                      7、统计系统                         =====\n");
	printf("=====                      8、重置数据                         =====\n");
	printf("=====                      9、归还车辆                         =====\n");
	printf("                                                                                             \n");
	printf("====================================================================\n");
}

void menuChoice()
{
	printf("输入要选择的功能号：");
	int getInput;
	scanf("%d", &getInput);
	getchar();
	switch (getInput)
	{
	case 0:
		exit(0);
	case 1:
		addVehicleToForm();
		getchar();
		break;
	case 2:
		printHeader();
		toString();
		break;
	case 3:
		findRentalRecordById();
		getchar();
		break;
	case 4:
		modifyImformation(modifyRentalRocord());
		getchar();
		break;
	case 5:
		deleteRentalRecord(modifyRentalRocord());
		break;
	case 6:
		addVehicleToForm();
		getchar();
		break;
	case 7:
		statisticalTotalIncome();
		statisticalTotalIncomeByPlateNumber();
		break;
	case 8:
		initArray();
		break;
	case 9:
		returnVehicke();
		getchar();
		break;
	default:
		cout << "输入错误，请重新输入！" << endl;
		break;
	}
}
