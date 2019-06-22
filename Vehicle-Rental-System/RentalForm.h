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

// 还车方法，主要是用来手动输入定价的，题目没说怎么产生定金
// C折腾时间太傻逼了，手动输入摸一个鱼
// 接受一个订单号输入实现还车
void returnVehicke();

void modifyImformation(int Point);

#endif // !VEHICLE_RENTAL_SYSTEM_RENTALFORM_H
