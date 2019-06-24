# Vehicle-Rental-System
该软件主要是使用C语言设计开发一个简单的车辆租赁管理系统，实现租赁信息的查询、修改、删除、添加以及订单的查询等功能。

##  使用方法

开发环境：VS2019

OS: Windows10 1903

程序运行时会自动初始化三个测试信息，测试信息请在**InitData.cpp**内查看修改

##  主要数据结构

###  Vehicle结构体

结构体成员

* orderNumber 
  * 订单号
* identifyNumber
  * 身份证号
* licensePlateNumber
  * 车牌号
* vehicleRent
  * 租金

###  RentalForm结构体

结构体成员

*  Vehicle [100]
  * vehicle数组
* arraySize
  * 数组长度

##  主要函数

###  Vehicle打印函数

函数定义

```c++
void toString(Vehicle vehicle);
```

函数功能

接受一个Vehicle结构体并打印

###  添加数组元素函数

函数定义

```c++
void addVehicleToForm(Vehicle vehicle);
```

函数功能

接受一个Vehicle对象，并添加到全局的RentalForm结构体中

###  添加元素打包函数

函数定义

```c++
void addVehicleToForm();
```

函数功能

供用户调用添加信息的函数，内部实现了对添加数组元素函数的封装

### RentalForm打印函数

函数定义

```c++
void toString();
```

函数功能

对一个RentalForm结构体实现打印

###  信息修改函数

函数定义

```c++
void modifyImformation(int Point);
```

函数功能

接受一个指针实现对于指针所指信息的修改

###  信息删除函数

函数定义

```c++
void deleteRentalRecord(int Point);
```

函数功能

接受一个指针实现对于指针所指的信息的删除

###  溢出检查函数

函数定义

```c++
bool checkOverflow();
```

函数功能

检查数组是否已满，已满则不添加

###  订单号合法性检查函数

函数定义

```c++
bool checkOrderNumber(string orderNumber);
```

函数功能

接受一个字符串，对于订单号长度实现检查

###  身份证长度合法性检查函数

函数定义

```c++
bool checkIdentifyNumber(string identifyNumber);
```

函数功能

接受一个字符串，检查身份证长度是否合法

###  身份证字符合法性检查函数

函数定义

```c++
bool isAllNumber(string inputString);
```

函数功能

接受一个字符串，检查是否合法

###  身份证信息查找方法

函数定义

```c++
void findRentalRecordById();
```

函数功能

实现通过身份证进行查找并打印输出

###  车牌号查找方法

函数定义

```c++
void findRentByPlateNumber();
```

函数功能

实现按车牌号查找信息

###  身份证查找方法

函数定义

```c++
int modifyRentalRocord();
```

函数功能

实现身份证查找，并返回一个对应信息的指针

###  统计总收入函数

函数定义

```c++
void statisticalTotalIncome();
```

函数功能

实现对当月收入统计

###  统计最高收入车辆函数

函数定义

```c++
void statisticalTotalIncomeByPlateNumber();
```

函数功能

实现对最高收入车辆的统计

