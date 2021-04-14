#include<stdio.h>    
#include<string.h>   
#include<stdlib.h>

void showHangman(int);

int main(void)
{
    char hangmanWord[100], temp[100];       
    char Output[100];                    
    int wrong = 6 , found = 0;          
    int c = 0 , pos = 0, winner, length , i;
    char alphabetFromUser;

    system("clear");                              
    printf("\n\n Enter any word in small case and hit >>ENTER<<");
    printf("\n\n\t Enter HERE ==>  ");
    scanf("%s",hangmanWord);                    
    printf("\n\n Now give the COMPUTER to your friend and see if he/she CRACKS it!!!");
    printf("\n\n\tHIT >>ENTER<<");
    getchar();                                  
    length = strlen(hangmanWord);               

    system("clear");

    printf("\n\n !!!!!!!!!!!!!!!!!!!Welcome to the HANGMAN GAME!!!!!!!!!!!!!!!!!\n\n\n");   
    printf("\n\n You will get 5 chances to guess the right word");
    printf("\n\n So help the Man ..GO..!!");

    getchar();

    printf("\n\n\tHIT >>ENTER<< ");

    getchar();

    system("clear");

        printf("\n\t||===== ");                 
	printf("\n\t||    | ");
        printf("\n\t||      ");
        printf("\n\t||      ");
        printf("\n\t||      ");
        printf("\n\t||      ");

    printf("\n\n     The word has %d alphabets \n\n",length);  
    for( i = 0; i < length ; i++)
    {
        Output[i] = '_';
        Output[length] = '\0';
    }

    for(i = 0 ; i < length ; i++)
    {
        printf(" ");
        printf("%c",Output[i]);        

    }
    while(wrong != 0)                        
    {
        found = 0;
        printf("\n\n   enter any alphabet from a to z and please use small case!!");
        printf("\n\n\t Enter HERE ==> ");

	    fflush(stdin);

	    scanf("%c",&alphabetFromUser);            
    if(alphabetFromUser < 'a' || alphabetFromUser > 'z') 
    {
        system("clear");
        printf("\n\n\t Wrong input TRY AGAIN ");
        found = 2;
    }
    fflush(stdin);
    if (found != 2)
    {
        for(c=0;c<length;c++)    
	    {
		    if(alphabetFromUser==hangmanWord[c])
		     {
		       found = 1;
                     }
            }

	   if(found == 0)                      
	    {
     	      printf("\n\t :( You have %d tries left ",--wrong);
	          getchar();
              showHangman(wrong);
              getchar();
	    }
	   else
	   {
	     for(c = 0; c < length; c++)
             {
     	         found = 0;
                 if(alphabetFromUser == hangmanWord[c])
	          {
     		     pos = c ;
     		     found = 1;
	          }
    	      if(found == 1)
	          {
                 for(i = 0 ; i < length ; i++)
                 {
                      if( i == pos)
                  	  {
                          Output[i] = alphabetFromUser; 
                      }
                      else if( Output[i] >= 'a' && Output[i] <= 'z' )
                      {
                          continue;
                  	  }

                      else
                      {
                          Output[i] = '_';            
                      }
                }
                temp[pos] = alphabetFromUser;      
                temp[length] = '\0';                    
                winner = strcmp(temp,hangmanWord);      

                if(winner == 0)                             
                {
                    printf("\n\n\t \t YAHOO!!!!! You are the WINNER !!!!!");
                    printf("\n\n\t The Word was %s ",hangmanWord);
                    printf("\n\n\n\n\t\tEASY HUH???\n\n");
                    getchar();
                    return 0;
                }
	       }
	    }
      }
     }

    printf("\n\n\t");
    for(i = 0 ; i < length ; i++)
      {
          printf(" ");
          printf("%c",Output[i]);                
      }

    getchar();
    }

      if(wrong <= 0)                                 
      {
          printf("\n\n\t The Word was %s ",hangmanWord);
          printf("\n\n\t The man is dead you IDIOT!!!!!");
	      printf("\n\n\t Better luck next!!!");

      }
getchar();
return 0;
}



void showHangman(int choice)                           
 {

     switch(choice)
     {

     case 0:
         system("clear");
	printf("\n\t||===== ");
	printf("\n\t||    | ");
	printf("\n\t||   %cO/",'\\');
	printf("\n\t||    | ");
	printf("\n\t||   / %c",'\\');
	printf("\n\t||      ");
	break;
     case 1:
         system("clear");
	printf("\n\t||===== ");
	printf("\n\t||    | ");
	printf("\n\t||   %cO/",'\\');
	printf("\n\t||    | ");
	printf("\n\t||     %c",'\\');
	printf("\n\t||      ");
	break;
     case 2:
         system("clear");
	printf("\n\t||===== ");
	printf("\n\t||    | ");
	printf("\n\t||   %cO/",'\\');
	printf("\n\t||    | ");
	printf("\n\t||      ");
	printf("\n\t||      ");
	break;
     case 3:
         system("clear");
	printf("\n\t||===== ");
	printf("\n\t||    | ");
	printf("\n\t||   %cO/",'\\');
	printf("\n\t||      ");
	printf("\n\t||      ");
	printf("\n\t||      ");
	break;
     case 4:
         system("clear");
	printf("\n\t||===== ");
	printf("\n\t||    | ");
	printf("\n\t||   %cO ",'\\');
	printf("\n\t||      ");
	printf("\n\t||      ");
	printf("\n\t||      ");
	break;
     case 5:
         system("clear");
	printf("\n\t||===== ");
	printf("\n\t||    | ");
	printf("\n\t||    O ");
	printf("\n\t||      ");
	printf("\n\t||      ");
	printf("\n\t||      ");
	break;
      }
      return;
 }




