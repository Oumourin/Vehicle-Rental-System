#pragma once

#include"Vehicle.h"

#ifndef VEHICLE_RENTAL_SYSTEM_RENTALFORM_H
#define VEHICLE_RENTAL_SYSTEM_RENTALFORM_H

struct RentalForm
{
	Vehicle vehicles[100];
	int arraySize;

	RentalForm();
};

void addVehicleToForm();

void addVehicleToForm(Vehicle vehicle);

void toString();

// ������������Ҫ�������ֶ����붨�۵ģ���Ŀû˵��ô��������
// C����ʱ��̫ɵ���ˣ��ֶ�������һ����
// ����һ������������ʵ�ֻ���
void returnVehicke();

void modifyImformation(int Point);

#endif // !VEHICLE_RENTAL_SYSTEM_RENTALFORM_H
