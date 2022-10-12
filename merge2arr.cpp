
#include <iostream>
#include <vector>

using namespace std;

vector<int> mergeVectors(const vector<int> &myVector, const vector<int> &alicesVector)
{
    vector<int> mergedVector;
    if (myVector.size() == 0)
    {
        return alicesVector;
    }
    if (alicesVector.size() == 0)
    {
        return myVector;
    }
    // combine the sorted vectors into one large sorted vector
    int i = 0, j = 0;
    // Go through the vectors until there one of iterators hits the end
    while (i < myVector.size() && j < alicesVector.size())
    {
        if (myVector[i] <= alicesVector[j])
        {
            mergedVector.push_back(myVector[i]);
            i++;
        }
        else
        {
            mergedVector.push_back(alicesVector[j]);
            j++;
        }
    }
    // If myVector is smaller than alicesVector, insert the rest of alicesVector
    if (i == myVector.size() && j < alicesVector.size())
    {
        for (j; j < alicesVector.size(); j++)
        {
            mergedVector.push_back(alicesVector[j]);
        }
    }
    // If myVector is larger than Alice's vector, insert the rest of myVector
    if (i < myVector.size() && j == alicesVector.size())
    {
        for (i; i < myVector.size(); i++)
        {
            mergedVector.push_back(myVector[i]);
        }
    }

    return mergedVector;
}

int main()
{
    const vector<int> myVector{2, 4, 6, 8};
    const vector<int> alicesVector{1, 7};
    const vector<int> merged = mergeVectors(myVector, alicesVector);
    for (int i = 0; i < merged.size(); i++)
    {
        cout << merged[i] << " ";
    }
    cout << "\n";
    return 0;
}