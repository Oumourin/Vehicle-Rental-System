#pragma once
#include<stdio.h>
#include"RentalForm.h"
#include"FindFunction.h"
#include"InitData.h"
#include"CheckSecurity.h"
#include"StatisticsFunction.h"

void printHeader();

// 自己改名字（改完删掉这个注释）
void welcomeUI();

// 功能菜单
void menuUI();

// 功能菜单对于的后台逻辑
void menuChoice();