#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <iostream>
using namespace std;

int main()
{
    int input,n,status;
    char chose, continuechose;
    
    while(true)
    {
        srand(time(NULL));
                int x = rand() % 100,status,c1 = 0;
                bool flag=true;
                printf("Enter dev mode? y/n\n");//dev mode
                cin >> chose;
                if (chose == 'y')
                {
                    printf("you are in dev mode,the x = %d\n", x);
                    status = 0;
                }
                else
                {
                    printf("normal mode\n");
                    status = 0;
                }
        while(flag)
        {
        switch (status)
            {                    
                case 0:
                    printf("Guess the number\n");   
                    cin >> input;
                    if (input > x)
                        {
                            status = 2;
                            break;     
                        }
                    if (input < x)
                        {
                            status = 3;
                            break;
                        }
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
                                flag = false; 
                            }
                    }
                    break;

                case 2:
                    printf("too high,retry\n");
                    c1++;
                    status = 0;
                    break;
                case 3:    
                    printf("too low,retry\n");
                    c1++;    
                    status = 0;
                    break;
                        
                if (c1 == 7)
                {
                    printf("You failed, please retrty\n");
                    break;
                }        
            }
        }
    }
}        