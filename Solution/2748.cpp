#include <iostream>

using namespace std;
int main()
{
	unsigned long long a = 0;
	unsigned long long b = 1;
	unsigned long long temp;
	int input;

	if (scanf("%d", &input)&&input>=1&&input<=90) {

		for (int i = 1; i < input; i++) {
			temp = a + b;
			a = b;
			b = temp;
		}
		cout << b << endl;
	}
	else {
		cout << "90������ �ڿ����� �Է��ϼ���.\n" << endl;
	}


	return 0;
}

