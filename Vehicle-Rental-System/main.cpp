#include"RentalForm.h"
#include"UI.h"
#include"InitData.h"
#include"FindFunction.h"

extern RentalForm rentalForm;

int main(int args, char* argb[])
{
	welcomeUI();
	getchar();
	system("cls");
	while (true)
	{
		initArray();
		menuUI();
		menuChoice();
		cout << "�밴���������...........";
		getchar();
		system("cls");
	}
}