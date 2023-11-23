#include <iostream>
#include <fstream>
#include <string>
#include <sstream>
#include <stack>
#include <vector>
#include <algorithm>
#include <numeric>

using namespace std;

#define player_info "./player.txt"

void display_without_vowels(string name)
{
    string name2 = "";

    int length = name.length();

    for (int i = 0; i < length; i++)
    {
        if (name[i] != 'a' && name[i] != 'e' && name[i] != 'i' && name[i] != 'o' &&
            name[i] != 'u' && name[i] != 'A' && name[i] != 'E' && name[i] != 'I' &&
            name[i] != 'O' && name[i] != 'U')
        {
            name2 += name[i];
        }
    }

    cout << name2 << endl;
}

void reverse_oder(vector<pair<string, int>> &v1)
{
    stack<pair<string, int>> s1;

    for (int i = 0; i < v1.size(); i++)
    {
        s1.push(v1[i]);
    }

    cout << "Reverse order: " << endl;

    while (!s1.empty())
    {
        cout << s1.top().first << " " << s1.top().second << endl;
        s1.pop();
    }
}

int score_greater_than_X(vector<pair<string, int>> &v1, int x)
{
    int count = 0;

    for (int i = 0; i < v1.size(); i++)
    {
        if (v1[i].second > x)
        {
            count++;
        }
    }

    return count;
}

int score_equal_to_X(vector<pair<string, int>> &v1, int x)
{
    int count = 0;

    for (int i = 0; i < v1.size(); i++)
    {
        if (v1[i].second == x)
        {
            count++;
        }
    }

    return count;
}

float calculate_average(vector<pair<string, int>> &v1)
{
    float result = accumulate(v1.begin(), v1.end(), 0, [](int a, pair<string, int> b)
                              { return a + b.second; });

    float size = v1.size();

    return result / size;
}

int main()
{
    ifstream file;
    file.open(player_info);

    if (!file.is_open())
    {
        cout << "File could not be opened" << endl;
        return 0;
    }

    vector<pair<string, int>> v1;

    string line;
    while (getline(file, line))
    {
        istringstream iss(line);
        string player_name;
        int player_score;

        if (getline(iss, player_name, ',') && (iss >> player_score))
        {
            v1.push_back({player_name, player_score});
        }
    }

    file.close();

    // task1

    cout << endl;
    cout << "Name without vowels: " << endl;
    cout << endl;
    for (int i = 0; i < v1.size(); i++)
    {
        display_without_vowels(v1[i].first);
    }

    cout << endl;
    cout << endl;

    // task2

    cout << "Top 5 scorers: " << endl;

    sort(v1.begin(), v1.end(), [](pair<string, int> a, pair<string, int> b)
         { return a.second > b.second; });

    // sort(v1.begin(), v1.end(), greater<>());

    for (int i = 0; i < 5; i++)
    {
        cout << v1[i].first << " " << v1[i].second << endl;
    }

    cout << endl;
    cout << endl;

    // task3

    sort(v1.begin(), v1.end());

    cout << "Sorted according to ascending order: " << endl;
    cout << endl;

    for (int i = 0; i < v1.size(); i++)
    {
        cout << v1[i].first << " " << v1[i].second << endl;
    }

    cout << endl;
    cout << endl;

    // task 4
    cout << endl;
    reverse_oder(v1);
    cout << endl;
    cout << endl;

    // task 5
    int x;
    cout << "Input the threshold score: ";
    cin >> x;
    cout << "Number of players with score greater than " << x << ": " << score_greater_than_X(v1, x) << endl;
    cout << endl;

    // task 6

    cout << "Input the threshold score: ";
    cin >> x;
    cout << "Number of players with score equal to " << x << ": " << score_equal_to_X(v1, x) << endl;
    cout << endl;

    // task 7

    vector<pair<string, int>> v2 = v1;

    if (v1 == v2)
    {
        cout << "Vectors are equal" << endl;
    }

    else
    {
        cout << "Vectors are not equal" << endl;
    }

    // task 8

    cout << "Average score: " << calculate_average(v1) << endl;
}