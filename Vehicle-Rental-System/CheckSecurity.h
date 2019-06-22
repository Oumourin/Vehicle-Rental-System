#pragma once

#include"RentalForm.h"
#include<ctype.h>


// 检查数组是否溢出
bool checkOverflow();

// 检查订单号是否为10位
bool checkOrderNumber(string orderNumber);

// 检查身份证号长度
bool checkIdentifyNumber(string identifyNumber);

// 检查身份证号是否有非法字符
bool isAllNumber(string inputString);

// 检查车牌长度
bool checkVehiclePlateNumberLength(string vehiclePlateNumber);

//  检查车牌合法性
bool isVehiclePlateNumber(string vehiclePlateNumber);
