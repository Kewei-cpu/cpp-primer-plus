#include <iostream>
#include <vector>

using namespace std;

vector<double> input_scores();
void display_scores(const vector<double>* scores);
void calc_average(const vector<double>* scores);

int main()
{
    auto scores = input_scores();
    display_scores(&scores);
    calc_average(&scores);
}

vector<double> input_scores()
{
    double s;
    vector<double> ss;
    cout << "Enter your scores: " << endl;

    for (int i = 0; i < 10 && (cin >> s); i++)
    {
        ss.push_back(s);
    }

    return ss;
}


void calc_average(const vector<double>* scores)
{
    double total = 0.0;
    for (auto s : *scores)
    {
        total += s;
    }
    double avg = total / scores->size();
    cout << "Average: " << avg << endl;
}

void display_scores(const vector<double>* scores)
{
    cout << "=============" << endl;
    cout << "Your scores: " << endl;

    for (auto s : *scores)
    {
        cout << s << " ";
    }
    cout << endl;
}
