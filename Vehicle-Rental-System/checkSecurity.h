#pragma once

#include"RentalForm.h"
#include<ctype.h>


// ��������Ƿ����
bool checkOverflow();

// ��鶩�����Ƿ�Ϊ10λ
bool checkOrderNumber(string orderNumber);

// ������֤�ų���
bool checkIdentifyNumber(string identifyNumber);

// ������֤���Ƿ��зǷ��ַ�
bool isAllNumber(string inputString);

// ��鳵�Ƴ���
bool checkVehiclePlateNumberLength(string vehiclePlateNumber);

//  ��鳵�ƺϷ���
bool isVehiclePlateNumber(string vehiclePlateNumber);