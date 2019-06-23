#pragma once

#include"RentalForm.h"

//  统计总收入
void statisticalTotalIncome();

// 统计最高收入的车辆
void statisticalTotalIncomeByPlateNumber();

int getPoint(string licensePlateNumber[100], string _licensePlateNumber);

int getMaxIncome(double incomeArray[100]);