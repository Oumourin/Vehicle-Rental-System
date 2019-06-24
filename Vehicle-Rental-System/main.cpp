#include"RentalForm.h"
#include"UI.h"
#include"InitData.h"
#include"FindFunction.h"

extern RentalForm rentalForm;

int main(int args, char* argb[])
{		
	initArray();
	welcomeUI();
	getchar();
	system("cls");
	while (true)
	{
		menuUI();
		menuChoice();
		cout << "请按任意键继续...........";
		getchar();
		system("cls");
	}
}