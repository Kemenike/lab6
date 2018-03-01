/* Kanayo Emenike */
/* Lab 6 */
/* 3-1-2018 */
#include <iostream>
#include <cstdlib>

using namespace std;

void fill(int *arr, int n, int s, int r);
void sortBubble(int *arr, int n);
void sortSelection(int *arr, int n);

int main()
{
    srand (time(NULL));
    int n = 0, rStart = 0, rRange = 0;
    char choice;

    cout << "This code is for the CMPS 2020 class at CSUB. It tests the abilities" << endl;
    cout << " of sorting algorithms." << endl << endl;

    cout << "Enter a value of number of elements you want to produce: " << endl;
    cin >> n;
    cout << "Please enter the starting number of random numbers: ";
    cin >> rStart;
    cout << endl << endl << "Now enter the range value of the random numbers (from previous number to";
    cout << " [previous number]+[this number]-1): ";
    cin >> rRange;

    cout << "What sorting method would you like to use?" << endl;
    cout << "B - Bubble" << endl;
    cout << "I - Insertion" << endl;
    cout << "S - Selection" << endl;
    cin >> choice;
    if(choice > 'Z')
        choice = choice - 32;

    int arr[n];
    fill(arr, n, rStart, rRange);
    if(choice == 'B')
        sortBubble(arr, n);

    return 0;
}

void fill(int *arr, int n, int s, int r)
{
    for(int i = 0; i < n; i++)
    {
        arr[i] = rand()% r+s; 
    }
}

void sortBubble(int *arr, int n)
{
    bool swap = false;
    int hold;

    do
    {
        swap = false;
        for(int i = 0; i < n; i++)
        {
            if(arr[i] > arr[i+1])
            {
                hold = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = hold;
                swap = true;
            }
        }
    } while(swap);
}

void sortSelection(int *arr, int n)
{

    bool swap = false;
    int hold;

    do
    {
        swap = false;
        for(int i = 0; i < n; i++)
        {
            if(arr[i] > arr[i+1])
            {
                hold = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = hold;
                swap = true;
            }
        }
    } while(swap);
}
