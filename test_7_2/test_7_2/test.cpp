#include <ctime>
#include <cstdlib>
#include <iostream>
using namespace std;

int map[12][12];    // 为避免边界的特殊处理，故将二维数组四周边界扩展1
int derection[3] = { 0, 1, -1 };  //方向数组

int calculate(int x, int y)
{
	int counter = 0;
	for (int i = 0; i < 3; i++)
	for (int j = 0; j < 3; j++)
	if (map[x + derection[i]][y + derection[j]] == 9)
		counter++;                 // 统计以(x,y)为中心的四周的雷数目
	return counter;
}

void game(int x, int y)
{
	if (calculate(x, y) == 0)
	{
		map[x][y] = 0;
		for (int i = 0; i < 3; i++)
		{                                  // 模拟游戏过程，若点到一个空白，则系统自动向外扩展
			for (int j = 0; j < 3; j++)
			if (x + derection[i] <= 9 && y + derection[j] <= 9 && x + derection[i] >= 1 && y + derection[j] >= 1
				&& !(derection[i] == 0 && derection[j] == 0) && map[x + derection[i]][y + derection[j]] == -1)
				game(x + derection[i], y + derection[j]); // 条件比较多，一是不可以让两个方向坐标同时为0，否则
			//递归调用本身！
		}                                                      //二是递归不能出界.三是要保证不返回调用。
	}
	else
		map[x][y] = calculate(x, y);
}


void print()
{
	for (int i = 1; i < 10; i++)
	{
		for (int j = 1; j < 10; j++)
		{
			if (map[i][j] == -1 || map[i][j] == 9)
				cout << "#";
			else
				cout << map[i][j];
		}
		cout << endl;
	}
}


bool check()
{
	int counter = 0;
	for (int i = 1; i < 10; i++)
	for (int j = 1; j < 10; j++)
	if (map[i][j] != -1)
		counter++;
	if (counter == 10)
		return true;
	else
		return false;
}


int main()
{

	int i, j, x, y;
	char ch;
	srand(time(0));

	do
	{
		memset(map, -1, sizeof(map));  // 将map全部初始化为-1，以后用-1表示未涉及的区域

		for (i = 0; i < 10;)
		{
			x = rand() % 9 + 1;
			y = rand() % 9 + 1;
			if (map[x][y] != 9)
			{
				map[x][y] = 9;
				i++;
			}
		}

		for (i = 1; i < 10; i++)
		{
			for (j = 1; j < 10; j++)
				cout << "#";
			cout << "\n";
		}
		cout << "\n";

		cout << "Please enter a coordinate: ";
		while (cin >> x >> y)
		{
			if (map[x][y] == 9)
			{
				cout << "GAME OVER" << endl;    //点中雷之后游戏结束，并且输出雷的位置
				for (i = 1; i < 10; i++)
				{
					for (j = 1; j < 10; j++)
					{
						if (map[i][j] == 9)
							cout << "@";
						else
							cout << "#";
					}
					cout << endl;
				}
				break;
			}

			game(x, y);
			print();

			if (check())
			{
				cout << "YOU WIN" << endl;
				break;
			}
			cout << "\n\n";
		}

		cout << "Do you want to play again, if true enter Y, or enter N" << endl;
		cin >> ch;
		cout << "\n\n";
	} while (ch == 'Y');

	return 0;
}
