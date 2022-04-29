#include <stdio.h>
#include <string.h>
#include <wchar.h>
#include <time.h>
#include <stdlib.h>
struct people
{
    char password[200];
    char email[200];
};


//Array of all char that can be used
char Lowcase[]="abcdefghijklmnopqrstuvwxyz";
char Uppercase[]="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
char SpecialChar[]="@#$_()!%&*-_=+.,^";
char numbers []="1234567890";

int FindChar (char ptr,char*string,int length);
char* adjacent(char*edit,int n);
char* append(char* str,char ch);


void recommend(char* password,int count)
{
 switch (count)
 {
     case 0:
        if(strlen(password)>20)
        {
            
          password= adjacent(password,16);
           printf("\n %s\n",password);
        }
        else
        {
            
            int n=10,L=strlen(password)-1;
            n-=L;
            printf("%d  %d  ",L,n);
          password=adjacent(password,L);
            while(n--)
            {
               srand(time(NULL));   // Initialization, should only be called once.
               int randomIndex = rand()%26; // Returns a pseudo-random integer between 0 and 26.
              password=append(password,*(Lowcase+7));
                             printf("%s\n",password);

            }

        }
}
    return;
}




int IsValid(char* password)
{
        int count =0;

    
    // For checking if password length
    // is between 8 and 20
   int  length=strlen(password);
    if (( length> 8) && (length<= 20))
      {
          count++;
      }
    else
    {
                printf("%d \n",count);

            recommend(password,count);
    }
    // To check space
   if(!FindChar(' ',password,length))
    {
        count++;
    }
    //TO check that password contains Lowcase char
    for(int i=0;i<strlen(Lowcase);i++)
    {
        if(FindChar(Lowcase[i],password,length))
        {
            count++;
            break;
        }
    }
     
     //TO check that password contains Uppercase char
    for(int i=0;i<strlen(Uppercase);i++)
    {
        if(FindChar(Uppercase[i],password,length))
        {
            count++;
            break;
        }
    }
     
    //TO check that password contains SpecialChar 
    for(int i=0;i<strlen(SpecialChar);i++)
    {
        if(FindChar(SpecialChar[i],password,length))
        {
            count++;
            break;
        }
    }
     
     
     //TO check that password contains numbers 
    for(int i=0;i<strlen(numbers);i++)
    {
        if(FindChar(numbers[i],password,length))
        {
            count++;
            break;
        }
    }


if(count==6)
{
    return 1;
}   
    return 0;
}






void SetPassword(struct people * user)
{
    printf("Set your password: ");
    fgets(user->password, sizeof(user->password), stdin);  // read password
    
   printf("%d",IsValid(user->password));
          
}






int main() 
{
    struct people user[3];
    SetPassword(user+1);
    return 0;
}


//helper Functions

//that function search if the character exsit in the string or not
int FindChar (char ptr,char*string,int length)
{
   char* ch = strchr(string, ptr);
    int Place = ch - string + 1;
     if(Place<length&&Place>=0)
     {
         return 1;
     }  
return 0;
}
// append character to string
char* append(char* str,char ch)
{
    
    size_t len = strlen(str);
   
    /* one for extra char, one for trailing zero */
    char *str2 = malloc(len + 1 + 1);

    strcpy(str2, str);
    str2[len] = ch;
    str2[len + 1] = '\0';

return str2;
    free(str2);
}


char* adjacent(char* edit,int n)
{
         char temp[21]="";
           strncat(temp, edit, n );
           edit=temp;
return edit;
}


