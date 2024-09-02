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
   
    for (n;n;n)
    {
        start:
        srand(time(NULL));
        int x = rand() % 100,status,c1 = 0;
        printf("Enter dev mode? y/n\n");//dev mode
        cin >> chose;
        if (chose == 'y')
                {
                printf("you are in dev mode,the x = %d\n", x);
                 cout <<"c1=" << c1 << "\n" ;
                status = 1;
                }
            else
                {
                printf("normal mode\n");
                status = 1;
                }
        
        while(true)
        {
        switch (status) 
            {         
                case 1:
                input:
                    printf("Guess the number\n");               
                    cin >> input;
                    if (c1 == 7)
                    {
                        printf("You failed, please retrty\n");
                        goto start;
                    }
                    goto judge; // Jump to casejudge
                    
                
                case 2:
                judge:        // Label for casejudge
                    
                    if (input == x)
                    {
                    printf("that's right\ncontinue?\ny/n\n");
                    cin >> continuechose;
                    
                    if (continuechose == 'n')
                        {
                            return 0;
                        }
                        else 
                        {
                            goto start; 
                        }
                    }
                    
                    if (input > x)
                    {
                        printf("too high,retry\n");
                        c1++;
                        status = 3;
                    }
                    else if (input < x)
                    {
                        printf("too low,retry\n");
                        c1++;
                        status = 3;
                    }
                    
                    case 3:
                    {
                        goto input;
                    }                         
            }
        } 
    }
}