#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main()
{
    fstream file("test.txt");
    if (!file.is_open())
    {
        cerr << "Error opening the file" << endl;
        return 1;
    }
    long long byteCount = 0;
    string word;
    while (file >> word)
    {
        byteCount += word.size();
    }
    file.close();
}