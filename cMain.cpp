#include "HashMap.h"

int main()
{
	int key, value, num;
	HashMap H;

	//Add
	cout << "key와 value를 입력해 주십시오: ";
	cin >> key >> value;
	H.Add(key, value);

	//GetValue
	cout << "출력할 값의 key 값: ";
	cin >> key;
	H.GetValue(key);

	//Add
	cout << "key와 value를 입력해 주십시오: ";
	cin >> key >> value;
	H.Add(key, value);

	//Add
	cout << "key와 value를 입력해 주십시오: ";
	cin >> key >> value;
	H.Add(key, value);

	//Remove
	cout << "삭제할 값의 key 값: ";
	cin >> key;
	H.Remove(key);

	//GetValue
	cout << "출력할 값의 key 값: ";
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