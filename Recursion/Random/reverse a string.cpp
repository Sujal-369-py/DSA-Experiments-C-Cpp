#include <iostream>
using namespace std;

void normalRecursion(string &s, int i, int len)
{
    if (i >= len) return;

    cout << "Call: rev(" << i << ", " << len << ")" << endl; // Track calls
    normalRecursion(s, i + 1, len);
    cout << "Return: rev(" << i << ", " << len << ") -> Prints: " << s[i] << endl; // Track returns
}

int main()
{
    string ch = "Sujal";
    normalRecursion(ch, 0, ch.size());
}
