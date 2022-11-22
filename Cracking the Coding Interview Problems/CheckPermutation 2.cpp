#include <iostream>
#include <algorithm>
#include <string>
#include <map>


using namespace std;

bool checkPermutation(string first, string second)
{
    map<char, int> firstFreq;
    map<char, int> secondFreq;
    bool answer = false;

    for(int i = 0; i < first.length(); i++)
    {
        if(firstFreq.find(first[i]) == firstFreq.end())
        {
            firstFreq[first[i]] = 1;
            continue;
        }

        firstFreq[first[i]]++;
    }

    for(int i = 0; i < second.length(); i++)
    {
        if(secondFreq.find(second[i]) == secondFreq.end())
        {
            secondFreq[second[i]] = 1;
            continue;
        }

        secondFreq[second[i]]++;
    }

    if(firstFreq == secondFreq)
    {
        answer = true;
    }

    return answer;

}


int main()
{
    bool answer = checkPermutation("abc", "cba");
    cout << answer << endl;
    return 0;
}