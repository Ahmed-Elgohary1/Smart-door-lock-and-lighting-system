
#include <stdio.h>
#include <string.h>
struct people
{
    char password[200];
    char email[200];
};

void SetPassword(struct people * user)
{
    printf("Set your password: ");
    fgets(user->password, sizeof(user->password), stdin);  // read password
    

}

int CheckPassword(struct people *users,char * temp)
{
    int n=strlen(temp);
    for(int i=0;i<n;i++)
    {
     if(users->password[i]!=temp[i])
     return 0;
    }
    return 1;
}


int main()
{
    
 struct people user[3];
 char temp[200];
int ApartmentNumber ,flag=0;


 for(int i=0;i<3;i++)
 {
     printf("Set Apartment %d  password: ",i+1);
    SetPassword(user+i);
 }
printf("Enter your Apartment Number : ");
scanf("%d",&ApartmentNumber);

printf("Enter your password: ");
 scanf("%s",temp);  // read password    
 flag=CheckPassword(user+ApartmentNumber-1,temp);   

while(flag==0)
{
int option;
   printf("That was wrong password \n Press '1' to Try again\n press '2' to Exit\n");
   scanf("%d",&option);
   if(option==1)
   {
   printf("Enter your password: ");
   scanf("%s",temp);  // read password 
    flag=CheckPassword(user+ApartmentNumber-1,temp);   
   }
   else if (option==2)
            {
                break;
            }
    
}
if(flag==1)
    printf(" Welcome ");
    
    return 0;
}
