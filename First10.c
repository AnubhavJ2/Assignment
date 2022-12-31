#include <stdio.h>
#include<math.h>
int main(){
    int Que;
    printf(" Que 1: A character is a vowel or consonant\n");
    printf(" Que 2: A character is an alphabet or not\n");
    printf(" Que 3: Ascii values of a character\n");
    printf(" Que 4: A number is positive or negative\n");
    printf(" Que 5: A number is even or odd\n");
    printf(" Que 6: Swap two numbers without third variable\n");
    printf(" Que 7: Area of a circle\n");
    printf(" Que 8: Greatest of two numbers\n");
    printf(" Que 9: Greatest of three numbers\n"); 
    printf(" Que 10: Number of digits in an integer\n");

    printf("Enter Question Number.\n");
    scanf("%d",&Que);
    switch (Que){
        case 1 :{
                char ch; 
                scanf(" %c",&ch); //input.
                if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U') //vowels.
                {
                    printf("The Written letter is a vowel");
                }
                else{
                    printf("The Written letter is a consonant");
                }
                return 0;

                }
        case 2 :
                {    
                printf("Enter the Input:");
                char a; 
                scanf(" %c",&a); //input.
              
                if(a<='z'&&a>='a'|| a<='Z'&&a>='A'){ //conditions.
                    printf("Written letter is an Alphabet.");
                }
                else{
                    printf("Written letter is a NOT Alphabet.");
                }
                return(0);
                }  
        case 3 :
                {
                char ch;
                printf("Enter the Character:");
                //taking input of an alphabet.
                scanf(" %c",&ch);
                printf("%d",ch); // Prints Ascii Value of the Input Charachter
                return 0;
                }
        case 4 :
                {
                int num; 
                printf("Enter the number:");
                scanf("%d",&num); // input
                if(num<0){  // conditions.
                    printf("%d is a negative number.", num);
                }
                else if(num==0){
                    printf("%d is a zero.", num);
                }
                else {
                    printf("%d is a positive number.", num);
                }
                return 0;
                }        
        case 5 :{
                int num;
                printf("Enter the Input:");
                scanf("%d",&num);
                //checking the condition for even
                if(num%2==0){
                    printf("The Input number is even");
                }
                //checking the condition for odd
                else{
                    printf("The Input number is odd");
                }
                return 0 ;
                }
        case 6 :{
                int num1,num2;
              
                scanf("%d%d",&num1,&num2);
                //num1=10,num2=20    
                num1=num1+num2;  //num1=30 (10+20)    
                num2=num1-num2;  //num2=10 (30-20)    
                num1=num1-num2;  //num1=20 (30-10)
                printf("%d,%d",num1,num2);
                return 0;
                }
        case 7 :{
                float r; 
                printf("Enter the radius of circle:");
                scanf("%f",&r); // input
                float area;
                // Formla used to calculate Area of circle 
                area= 3.14*r*r;
                printf("%f",area);
                return 0;
                }           
        case 8 :{
                int num1,num2;
                printf("Enter the first number:");
                scanf("%d",&num1); // input for 1st number.
                printf("Enter the second number:");
                scanf("%d",&num2); // input for second number.
                if(num1>num2){
                    printf("%d is greater.",num1);
                }
                else{
                    printf("%d is greater.",num2);
                }
                return 0;
                }           
        case 9 :{
                int a,b,c;
                printf("Enter the first number:");
                scanf("%d",&a); // input for 1st number.
                printf("Enter the second number:");
                scanf("%d",&b); // input for 1st number.
                printf("Enter the third number:");
                scanf("%d",&c); // input for 1st number.
                 
                if(a>c && a>b){ // conditions.
                    printf(" %d is Greater.",a);
                }
                else if(b>c && b>a){
                    printf(" %d is Greater.",b);
                }
                else if(c>a && c>b){
                    printf(" %d is Greater.",c);
                }
                return 0;
                }           
        case 10 :{
                long long n;
                int count = 0;
                printf("Enter an integer: ");
                scanf("%lld", &n);
                // iterate at least once, then until n becomes 0
                // remove last digit from n in each iteration
                // increase count by 1 in each iteration
                do {
                  n /= 10;
                 ++count;
                } while (n != 0);
                printf("Number of digits: %d", count);
                return(0);
                }
        default: {
                printf("Enter a valid Input!");
        }
    }
    return 0;
}
