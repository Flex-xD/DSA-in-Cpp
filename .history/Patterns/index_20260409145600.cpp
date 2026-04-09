#include <bits/stdc++.h>
using namespace std;

void printPattern1(int n)
{
    for (int i = 0; i < n; i++)
    {
        // ? For space
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }
        // ? For stars
        for (int j = 0; j < i * 2 + 1; j++)
        {
            cout << "*";
        }
        // ? For space
        for (int j = 0; j < n - i - 1; j++)
        {
            cout << " ";
        }
        cout << endl;
    }
}
void printPattern2(int n)
{
    for (int i = 0; i < n; i++)
    {
        // ? For space
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }
        // ? For star
        for (int j = 0; j < n * 2 - 1 - (2 * i); j++)
        {
            cout << "*";
        }
        // ? For space
        for (int j = 0; j < i; j++)
        {
            cout << " ";
        }
        cout << endl;
    }
}
void printPattern3(int n)
{
    for (int i = 0; i < n * 2; i++)
    {
        int stars = i;
        if (i > n)
            stars = 2 * n - i;
        for (int j = 0; j < stars; j++)
        {
            cout << "*";
        }
        cout << endl;
    }
}
void printPattern4(int n)
{
    int start;
    for (int i = 0; i < n; i++)
    {
        if (start % 2 == 0)
            start = 1;
        else
            start = 0;
        for (int j = 0; j <= i; j++)
        {
            cout << start;
            start = 1 - start;
        }
        cout << endl;
    }
}
void printPattern5(int n)
{
    // ? numnbers
    int space = 2 * (n - 1);
    for (int i = 0; i < n; i++)
    {
        // ? Numbers
        for (int j = 0; j < i; j++)
        {
            cout << j + 1;
        }
        // ? Space
        for (int j = 0; j < space; j++)
        {
            cout << " ";
        }
        // ? Numbers
        for (int j = i; j >= 1; j--)
        {
            cout << j;
        }
        cout << endl;
        space -= 2;
    }
}
void printPattern6(int n)
{
    int num = 1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
            cout << num << " ";
            num = num + 1;
        }
        cout << endl;
    }
}
void printPattern7(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (char ch = 'A'; ch <= 'A' + i; ch++)
        {
            cout << ch << " ";
        }
        cout << endl;
    }
}
void printPattern8(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (char ch = 'A'; ch <= 'A' + (n - i - 1); ch++)
        {
            cout << ch << " ";
        }
        cout << endl;
    }
}
void printPattern9(int n)
{
    for (int i = 0; i < n; i++)
    {
        char ch = 'A' + i;
        for (int j = 0; j <= i; j++)
        {
            cout << ch << " ";
        }
        cout << endl;
    }
}
void printPattern10(int n)
{
    for (int i = 0; i < n; i++)
    {
    }
}
void printPattern11(int n)
{
    for (int i = 0; i < n; i++)
    {
        // ? For space
        for (int j = 0; j <= n - i - 1; j++)
        {
            cout << " ";
        }
        // ? For chars
        int breakpoint = (i * 2 + 1) / 2;
        char ch = 'A';
        for (int j = 0; j <= i * 2; j++)
        {
            cout << ch;
            if (breakpoint <= j)
                ch--;
            else
                ch++;
        }
        // ? For space
        for (int j = 0; j <= n - i - 1; j++)
        {
            cout << " ";
        }
        cout << endl;
    }
}
void printPattern12(int n)
{
    for (int i = 0; i < n; i++)
    {
        for (char ch = 'E' - i; ch <= 'E'; ch++)
        {
            cout << ch << " ";
        }
        cout << endl;
    }
}
void printPattern13(int n)
{
    int initialSpcae = 0;
    for (int i = 0; i < n; i++)
    {
        // ? Stars
        for (int j = 0; j < n - i; j++)
        {
            cout << "*";
        }
        // ? Space
        for (int j = 0; j < initialSpcae; j++)
        {
            cout << " ";
        }
        // ? Stars
        for (int j = 0; j < n - i; j++)
        {
            cout << "*";
        }
        initialSpcae += 2;
        cout << endl;
    }

    initialSpcae = 8;
    for (int i = 0; i < n; i++)
    {
        // ? Stars
        for (int j = 0; j <= i; j++)
        {
            cout << "*";
        }
        // ? Space
        for (int j = 0; j < initialSpcae; j++)
        {
            cout << " ";
        }
        // ? Stars
        for (int j = 0; j <= i; j++)
        {
            cout << "*";
        }
        initialSpcae -= 2;
        cout << endl;
    }
}
void printPattern14(int n)
{
    int space = 2 * n - 1;
    for (int i = 0; i < 2 * n - 1; i++)
    {
        int stars = i;
        // ? stars
        for (int j = 0; j <stars;j++){
cout << "*"
        }

        // ? space


        // ? stars
    }
}

int main()
{
    freopen("input.txt", "r", stdin);
    int n;
    cin >> n;
    printPattern14(n);
    return 0;
}