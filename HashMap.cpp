#include "HashMap.h"

void HashMap::Add(int key, int value)
{
    if (Count() == TABLE_SIZE)
    {
        cout << "가득 찼습니다." << endl;
        return;
    }
    else
    {
        Node* NewNode = new Node;
        NewNode->key = key;
        NewNode->data = value;
        int i = key % TABLE_SIZE;
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
    }
    
}

int HashMap::GetValue(int key)
{
    for (int i = 0; i < TABLE_SIZE; i++)
    {
        if (table[i] != nullptr && key == table[i]->key)
        {
            cout << key << "의 Value값: " << table[i]->data << " 출력" << endl;
            return table[i]->data;
        }
    }
    cout << "값이 없습니다." << endl;
    return -99;
}

void HashMap::Remove(int key)
{
    for (int i = 0; i < TABLE_SIZE; i++)
    {
        if (table[i] != nullptr && key == table[i]->key)
        {
            delete table[i];
            table[i] = nullptr;
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
    table = new Node*[TABLE_SIZE];
    for (int i = 0; i < TABLE_SIZE; i++)
    {
        table[i] = nullptr;
    }
}

HashMap::~HashMap()
{
    Clear();
}
