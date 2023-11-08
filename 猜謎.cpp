#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <iostream>
using namespace std;

int main()
{
    int input,n,n1;
    int runtimes = 8;
    char chose, continuechose;

    for(n;n;n)
    {
        srand(time(NULL));
        int x = rand() % 100;
        printf("Enter dev mode? y/n\n");//dev mode
        cin >> chose;
        
        if (chose == 'y')
            {
                printf("you are in dev mode,the x = %d\n", x);
            }
        else
            {
                printf("normal mode\n");
            }
        
        for (n1 = 1; n1 <= 8; n1++)
            {
                printf("Guess the number\n");
                cin >> input;

                if (input == x)
                {
                    printf("that's right\ncontinue?\ny/n\n");
                    break;
                }
                if (input > x)
                {
                    cout << "too high,retry\n";
                }
                if (input < x)
                {
                    cout << "too low,retry\n";
                }
            }
        cin >> continuechose;
        if (continuechose == 'n')
                return 0;
    }
    
  
        











}

