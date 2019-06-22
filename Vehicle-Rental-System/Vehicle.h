#pragma once

#include<string>
#include<iostream>

using namespace std;

#ifndef VEHICLE_RENTAL_SYSTEM_VEHICLE_H
#define VEHICLE_RENTAL_SYSTEM_VEHICLE_H

struct Vehicle
{
	// 订单号
	string orderNumber;
	// 身份证号
	string identifyNumber;
	// 车牌号
	string licensePlateNumber;
	// 租金
	double vehicleRent;

	// 创建一个订单
	Vehicle(string _orderNumber, string _identifyNumber, string _licensePlateNumber); 
	//  供数组初始化用
	Vehicle();
};

void toString(Vehicle vehicle);

#endif // !VEHICLE_RENTAL_SYSTEM_VEHICLE_H

