#include "Tile.h"
using namespace std;

Area::Area(int a)        // ���� ������ a�� Ÿ�Ϲ迭����
{
	Tile = new CTile[a];
}

Area::~Area()        // �Ҹ��� 
{
	delete[] Tile;
}

	//Set
	void CTile::Set_Totla_Population(int Population)
	{
		Totla_Population = Population;
	} 
	void CTile::Set_Infected_Population(int Population)
	{
		Infected_Population = Population;
	}
	void CTile::Set_Dead_Population(int Population)
	{
		Dead_Population = Population;
	}
	void CTile::Set_Survival_Population(int Population)
	{
		Survival_Population = Population;
	}
	void CTile::Set_Tile_Feature(int Feature)
	{
		Tile_Feature = Feature;
	}
	void CTile::Set_Infection_Status(int Status)
	{
		Infection_Status = Status;
	}

	//Get
	int CTile::Get_Totla_Population()
	{
		return Totla_Population;
	}
	int CTile::Get_Infected_Population()
	{
		return Infected_Population;
	}
	int CTile::Get_Dead_Population()
	{
		return Dead_Population;
	}
	int CTile::Get_Survival_Population()
	{
		return Survival_Population;
	}
	int CTile::Get_Tile_Feature()
	{
		return Tile_Feature;
	}            // ���ڶ� ���� Ư¡ �����ؼ� ����ؾ���(�����ʿ�)
	int CTile::Get_Infection_Status()
	{
		return Infection_Status;
	}			 // ���ڶ� ���� ���� ���̶� �����ؼ� ����ؾ���(�����ʿ�)

	void gotoxy(int x, int y)
	{
		COORD Pos;
		Pos.X = x;
		Pos.Y = y;
		SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), Pos);
	}