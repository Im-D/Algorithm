#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main(void)

{
	int num = 0;
	int count = 0;
	string str;

	// �ܾ� ���� �ޱ�
	cin >> num;

	for (int i = 0; i < num; i++)

	{
		// �ܾ ���ڿ��� �ޱ�
		cin >> str;

		stack<char> temp;

		for (int j = 0; j < str.length(); j++)

		{
			// stack�� ������� �ʰ�, ������ top�� str[j]�� ���ٸ� stack���� ���� ����
			if (!temp.empty() && temp.top() == str[j])

				temp.pop();

			else
				temp.push(str[j]);
		}

		// ������ ����ִٸ� �����ܾ�
		if (temp.empty())

			count++;

	}

	cout << count << "\n";

	return 0;

}