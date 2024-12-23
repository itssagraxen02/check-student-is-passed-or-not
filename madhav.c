/* to check whether the student is passed or failed
marks.30 is Pass
marks <=30 is Fail*/

# include<stdio.h>
int main(){

int marks;
printf("enter the marks (0-100)");
scanf("%d", &marks);

if (marks >= 0 && marks <= 30){
    printf("Fail \n");
    printf("Try hard and score more \n");
}
else if (marks >30 && marks <=100 )
{    printf("Pass \n");
     printf("Congratulations");
    
}



return 0;

}