// 3-6.cpp : �������̨Ӧ�ó������ڵ㡣
//

#include "stdafx.h"
#include<iostream>

int main()
{
	using namespace std;
	char ch = 'M';
	int i = ch;
	cout << "The ASCII code for " << ch << " is " << i << endl;
	cout << "Add one to the character code:" << endl;
	ch = ch + 1;
	i = ch;
	cout << "The ASCII code for " << ch << " is " << i << endl;
	cout << "Displaying char ch using cout.put(ch):" << endl;
	cout.put(ch);
	//ʹ��cout.put()���������һ���ַ�����
	cout.put('!');
	cout << endl << "Done!" << endl;
	getchar();
    return 0;
}
