#include<iostream>
#include<string>
using namespace std;

void dump_test()
{
	int num[5][6];
	for (int i = 0; i < 5; i++)
	{
		for (int r = 0; r < 6; r++)
		{
			num[i][r] = i + 3 * r + i * r;
			std::cout << "a" << i+1 << "b" << r+1 << "c" << num[i][r] << endl;
		}
	}

}

int main(int argc, char** argv)
{
	dump_test();
}
