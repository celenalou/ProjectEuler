#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <cassert>
#include <algorithm>

using namespace std;
typedef long long int INT;

void ReadFile(string& iNameFile, std::vector<string>& oNumbers)
{
    ifstream myFile(iNameFile.c_str());
    assert(myFile);

    string nbStr;

    while (getline(myFile, nbStr))
    {
        oNumbers.push_back(nbStr);
    }
}

int main()
{
    // Reading the numbers in a .txt file
    vector<string> numbers;
    string fileName = "./13_largeSum_numbers.txt";
    ReadFile(fileName, numbers);

    // Getting the restraint
    int sumDigit = 0;
    for (int i = numbers[0].size() - 1; i >= 10; --i)
    {
        for (auto& number : numbers)
        {
            string s(1, number[i]);
            sumDigit += stoi(s);
        }
        sumDigit = sumDigit / 10;
    }

    // Computing the sum of the 10 first digits of each number + the restraint
    INT totalSum = sumDigit;
    for (auto& number : numbers)
    {
        string num10 = number.substr(0, 10);
        totalSum += stoll(num10);
    }

    // Truncate the number to 10 digits
    while (int(log10(totalSum) + 1) > 10)
    {
        totalSum /= 10;
    }
    cout << "The sum of the huge numbers is " << totalSum << "." << endl;


    return 0;
}
