#include <iostream>
#include <Windows.h>   // �� �Ʒ� gotoxy 
using namespace std;

class CTile
{
private:
	int Totla_Population; // Ÿ�� �� �α�
	int Infected_Population; // Ÿ�� �����α�
	int Dead_Population; // Ÿ�� ����α�
	int Survival_Population; // Ÿ�� �����α�
	int Tile_Feature;  // Ÿ�� Ư¡
	int Infection_Status; // ���� ���� 10%~100% ���� 1~10���� ��Ÿ���� ���� ����

public:
	void Set_Totla_Population(int Population);   // Set 
	void Set_Infected_Population(int Population);
	void Set_Dead_Population(int Population);
	void Set_Survival_Population(int Population);
	void Set_Tile_Feature(int Feature);
	void Set_Infection_Status(int Status);

	int Get_Totla_Population();   // Get 
	int Get_Infected_Population();
	int Get_Dead_Population();
	int Get_Survival_Population();
	int Get_Tile_Feature();
	int Get_Infection_Status();
};

class Area
{
private:
	int  Area_Total_Population;  // ���� �� �α�
	char Area_Feature; // ���� �� Ư¡
public:
	CTile * Tile;   // Ÿ�Ϲ迭 ó���ּҰ�. private�� �θ� ���������� �ȵǼ� CTile�� public �Լ��� ������ �� ����(������ public�� �־ ����)
	Area(int a);  //������ a����ŭ�� Ÿ�Ϲ迭�� ����
	~Area();      //delete [] Tile �ʿ�
};

void gotoxy(int x, int y);