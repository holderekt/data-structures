#include <iostream>
#include "hash_table.hpp"
#include <string>

using namespace std;

int main(){

    Hash_Table<string, int> table(3);
    table.insert({"a",1});
    table.insert("b",2);
    Hash_Table<string, int> table2(table);

    int &a = table["a"];

    cout << table << endl;

    a = 5;

    cout << table << endl;

    table["b"] = 12;

    cout << table << endl;


    cout << table2;

    table2 = table;

    cout << table2;
    return 0;
}