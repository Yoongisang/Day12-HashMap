#include "HashMap.h"

int main()
{
	int key, value, num;
	HashMap H;

	//Add
	cout << "key�� value�� �Է��� �ֽʽÿ�: ";
	cin >> key >> value;
	H.Add(key, value);

	//GetValue
	cout << "����� ���� key ��: ";
	cin >> key;
	H.GetValue(key);

	//Add
	cout << "key�� value�� �Է��� �ֽʽÿ�: ";
	cin >> key >> value;
	H.Add(key, value);

	//Add
	cout << "key�� value�� �Է��� �ֽʽÿ�: ";
	cin >> key >> value;
	H.Add(key, value);

	//Remove
	cout << "������ ���� key ��: ";
	cin >> key;
	H.Remove(key);

	//GetValue
	cout << "����� ���� key ��: ";
	cin >> key;
	H.GetValue(key);

	//Count
	num = H.Count();
	cout << num << endl;

	//Clear
	H.Clear();

	//Count
	num = H.Count();
	cout << num << endl;

	return 0;
}