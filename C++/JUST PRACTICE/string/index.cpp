#include <iostream>
using namespace std;

int main()
{
    // for loops
    string name = "Aman is hard working and a quick learner";
    int i;
    for (i = 0; i <= 5; i++)
    {
        // ? First condition will be true as 0 < 5 and it will execute till i = 5; , means it will run a total of 6 times
        cout << name << endl;
    }
    // ? Here the value of i will be 6 , it will be shown as it is out of the block scope of for loop and also as it will become 6 , the loop will stop as i will not be equal to 6;
    cout << i;

    // while loops
    int j = 0;
    while (j <= 5)
    {
        cout << name << endl;
        j++;
    }
    // ? j will also become 6 here , it will also stop working when the condition will be unmatched 
    cout << j;


    // Do while loop

    int n = 2;
    // ? The do block will execute this at least once even if the condition is false
    do {
        cout << name << endl;
        n++;
    } while (n<=1);
    // ? here the value of n will be 3
    cout << n << endl;
}
