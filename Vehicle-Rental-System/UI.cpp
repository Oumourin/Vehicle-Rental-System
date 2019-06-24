#include "UI.h"

extern RentalForm rentalForm;

void printHeader()
{
	printf("������        ���֤��              ���ƺ�      ����\n");
}

void welcomeUI()
{
	printf("====================================================================\n");
	printf("=====                    �������޹���ϵͳ                      =====\n");
	printf("=====                       Copyright2019                      =====\n");
	printf("=====                   XXX XXX XXX                   =====\n");
	printf("=====                   XXX XXX XXX                   =====\n");
	printf("=====                     AllRightsReserved                    =====\n");
	printf("=====                     �����������ϵͳ                     =====\n");
	printf("====================================================================\n");
}

void menuUI()
{
	printf("====================================================================\n");
	printf("=====                      ϵ  ͳ  ��  ��                      =====\n");
	printf("                                                                                             \n");
	printf("=====                      0���˳�ϵͳ                         =====\n");
	printf("=====                      1����Ϣ¼��                         =====\n");
	printf("=====                      2����Ϣ��ʾ                         =====\n");
	printf("=====                      3����ѯϵͳ                         =====\n");
	printf("=====                      4����Ϣ�޸�                         =====\n");
	printf("=====                      5����Ϣɾ��                         =====\n");
	printf("=====                      6���������                         =====\n");
	printf("=====                      7��ͳ��ϵͳ                         =====\n");
	printf("=====                      8����������                         =====\n");
	printf("=====                      9���黹����                         =====\n");
	printf("                                                                                             \n");
	printf("====================================================================\n");
}

void menuChoice()
{
	printf("����Ҫѡ��Ĺ��ܺţ�");
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
		cout << "����������������룡" << endl;
		break;
	}
}
