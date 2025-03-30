#include "HashMap.h"

void HashMap::Add(int _key, int _value)
{
    if (Count() == TABLE_SIZE)
    {
        cout << "���� á���ϴ�." << endl;
        return;
    }
    else
    {
        Node* NewNode = new Node;
        NewNode->key = _key;
        NewNode->data = _value;
        int i = _key % TABLE_SIZE;
        if (table[i] == nullptr)
        {
            table[i] = NewNode;
        }
        else
        {
            while (table[i] != nullptr)
            {
                i++;
                i %= TABLE_SIZE;
            }
            table[i] = NewNode;
        }
        count++;
    }
    
}

int HashMap::GetValue(int _key)
{
    for (int i = 0; i < TABLE_SIZE; i++)
    {
        if (_key == table[i]->key)
        {
            cout << _key << "�� Value��: " << table[i]->data << " ���" << endl;
            return table[i]->data;
        }
    }
    cout << "���� �����ϴ�." << endl;
    return -99;
}

void HashMap::Remove(int _key)
{
    for (int i = 0; i < TABLE_SIZE; i++)
    {
        if (_key == table[i]->key)
        {
            delete table[i];
            table[i] == nullptr;
        }
    }
}

int HashMap::Count()
{
    int count = 0;

    for (int i = 0; i < TABLE_SIZE; i++)
    {
        if (table[i] != nullptr)
        {
            count++;
        }
    }
    return count;
}

void HashMap::Clear()
{
    for (int i = 0; i < TABLE_SIZE; i++)
    {
        if (table[i] != nullptr)
        {
            delete table[i];
            table[i] = nullptr;
        }
    }
}

HashMap::HashMap()
{
    Node* slot[TABLE_SIZE];
    table = slot;
    for (int i = 0; i < TABLE_SIZE; i++)
    {
        table[i] = nullptr;
    }
    count = 0;
}

HashMap::~HashMap()
{
    Clear();
}
