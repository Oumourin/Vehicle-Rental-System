#pragma once

#include<string>
#include<iostream>

using namespace std;

#ifndef VEHICLE_RENTAL_SYSTEM_VEHICLE_H
#define VEHICLE_RENTAL_SYSTEM_VEHICLE_H

struct Vehicle
{
	// ������
	string orderNumber;
	// ���֤��
	string identifyNumber;
	// ���ƺ�
	string licensePlateNumber;
	// ���
	double vehicleRent;

	// ����һ������
	Vehicle(string _orderNumber, string _identifyNumber, string _licensePlateNumber); 
	//  �������ʼ����
	Vehicle();
	// ��������������
	Vehicle(string _orderNumber, string _identifyNumber, string _licensePlateNumber, double _vehicleRent);
};

void toString(Vehicle vehicle);


#endif // !VEHICLE_RENTAL_SYSTEM_VEHICLE_H

