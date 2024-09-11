#include <stdio.h>
#define MaxLvl 31

struct  data {
	int CurrentLvl;
	int TargetLvl;
};

struct data da;

struct maple_6th_mastery{
	int CurrentMasteryLvl;
	int SolErda;
	int Fragment;
	int TotalSolErda;
	int TotalFragment;
};

struct maple_6th_mastery Mastery[MaxLvl] = {
	{0, 0, 0, 0, 0},
	{1, 3, 50, 3, 50},
	{2, 1, 15, 4, 65},
	{3, 1, 18, 5, 83},
	{4, 1, 20, 6, 103},
	{5, 1, 23, 7, 126},
	{6, 1, 25, 8, 151},
	{7, 1, 28, 9, 179},
	{8, 2, 30, 11, 209},
	{9, 2, 33, 13, 242},
	{10, 5, 100, 18, 342},
	{11, 2, 40, 20, 382},
	{12, 2, 45, 22, 427},
	{13, 2, 50, 24, 477},
	{14, 2, 55, 26, 532},
	{15, 2, 60, 28, 592},
	{16, 2, 65, 30, 657},
	{17, 2, 70, 32, 727},
	{18, 2, 75, 34, 802},
	{19, 3, 80, 37, 882},
	{20, 8, 175, 45, 1057},
	{21, 3, 85, 48, 1142},
	{22, 3, 90, 51, 1232},
	{23, 3, 95, 54, 1327},
	{24, 3, 100, 57, 1427},
	{25, 3, 105, 60, 1532},
	{26, 3, 110, 63, 1642},
	{27, 3, 115, 66, 1757},
	{28, 3, 120, 69, 1887},
	{29, 4, 125, 73, 2002},
	{30, 10, 250, 83, 2252},
};

//struct maple_6th_mastery Mastery[MaxLvl];

int GetInfo()
{

	printf("6�� �����͸� �ھ��� ���� ������ �����ÿ�.(�ִ� 30����)\n");
	scanf("%d", &da.CurrentLvl);

	printf("��ǥ �����͸� �ھ��� ������ �����ÿ�.(�ִ� 30����, ���� �������� ���ų� ���ƾ� ��)\n");
	scanf("%d", &da.TargetLvl);

	if (da.CurrentLvl >= 0 && da.CurrentLvl <= MaxLvl && da.TargetLvl >= da.CurrentLvl && da.TargetLvl <= MaxLvl)
	{
		printf("���� �����͸� �ھ��� ������ %d�Դϴ�.\n", da.CurrentLvl);
		printf("��ǥ �����͸� �ھ��� ������ %d�Դϴ�.\n", da.TargetLvl);
	}
}

int GetSolErda()
{
	int a = Mastery[da.TargetLvl].TotalSolErda;
	int b = Mastery[da.CurrentLvl].TotalSolErda;
	int ReqSolErda = a - b;

	printf("%d�������� %d�������� ��ȭ�ϱ� ���� �� �� �����ٴ� %d��\n", da.CurrentLvl, da.TargetLvl, ReqSolErda);
}

int GetSolFrag()
{
	int a = Mastery[da.TargetLvl].TotalFragment;
	int b = Mastery[da.CurrentLvl].TotalFragment;
	int ReqFragment = a - b;

	printf("%d�������� %d�������� ��ȭ�ϱ� ���� �� �� ������ ������ %d��\n", da.CurrentLvl, da.TargetLvl, ReqFragment);
}

int main(void)
{
	int a = 0;
	int b = 0;
	int ReqSolErda = 0;
	int ReqFragment = 0;

	printf("��â���� �Բ��ϴ� �������� ����ȭ\n");
	printf("\n");
	printf("���� ������ ����\n");
	printf("\n");
	printf("��â���� ������ ����ȭ\n");
	printf("\n");

	printf("===============��� �����͸� �ھ� ��ȭ�� �ʿ��� �� �����ٿ� �� ������ ������ ��===============\n");

	GetInfo();

	GetSolErda();

	GetSolFrag();

	return 0;
}