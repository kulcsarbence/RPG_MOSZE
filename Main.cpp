#include "Unit.h"
#include "Control.h"
int main()
{
	Control vezerles;
	Unit player1(0,0,"");
	Unit player2(0,0,"");
	vezerles.GameStart(player1,player2);
	
	vezerles.Attack(player1,player2);
	if (player1.GetHp() == 0)
	{
		std::cout << player1.GetName() << " Died " << player2.GetName() << " Wins";
	}
	else 
	{
		std::cout << player2.GetName() << " Died " << player1.GetName() << " Wins";
	}
	

	return 0;
}