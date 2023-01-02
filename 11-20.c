    #include <stdio.h>
    int main(){
    int Que;
    printf(" Que 11: Sum of digits of a number.\n");
    printf(" Que 12: Sum of N natural numbers.\n");
    printf(" Que 13: Sum of numbers in a given range.\n");
    printf(" Que 14: Reverse a given number.\n");
    printf(" Que 15: Factorial of a number.\n");
    printf(" Que 16: Fibonacci series up to n.\n");
    printf(" Que 17: Leap year or not.\n");
    printf(" Que 18: Prime number or not.\n");
    printf(" Que 19: Palindrome or not.\n"); 
    printf(" Que 20: Armstrong number or not.\n");
    printf("Enter question number : ");
    scanf("%d", &Que);
    
    switch(Que){
        
        case 11 : {
        int n,sum=0,m;    
        printf("Enter a number: ");    
        scanf("%d",&n); 
        
        while(n>0)    
        {    
        m=n%10;    
        sum=sum+m;    
        n=n/10;    
        } 
        
        printf("Sum is= %d",sum);    
        return 0;
        }
        
        case 12 : {
        int n, i, sum = 0;
    
        printf("Enter a positive integer: ");
        scanf("%d", &n);
    
        for (i = 1; i <= n; ++i)
        {
        sum += i;
        }
        
        printf("Sum = %d", sum);
        return 0;        
        }

        case 13 : {
        int n,m,sum,i;
        printf("Enter first number : ");
        scanf("%d",&n);
        printf("Enter second number : ");
        scanf("%d",&m);
        
    	for(i = n; i <= m; i++)
    	{
    		sum = sum + i;
    	}
    	
    	printf(“%d”,sum);
    	return 0;        
        }
        
        case 14 :{
          int n, reverse = 0, remainder;
          printf("Enter an integer: ");
          scanf("%d", &n);
        
          while (n != 0) {
            remainder = n % 10;
            reverse = reverse * 10 + remainder;
            n /= 10;
          }
        
          printf("Reversed number = %d", reverse);
        
          return 0;        
        }
        
        case 15 :{
        int i,fact=1,number;    
        printf("Enter a number: ");    
        scanf("%d",&number);
        
        for(i=1;i<=number;i++)
        {    
        fact=fact*i;    
        }    
        printf("Factorial of %d is: %d",number,fact);    
        return 0;         
         }
                
        case 16 :{
         int n1=0,n2=1,n3,i,number;    
         printf("Enter the number of elements:");    
         scanf("%d",&number);    
         printf("\n%d %d",n1,n2);//printing 0 and 1 
         
         for(i=2;i<number;++i)  
         {    
          n3=n1+n2;    
          printf(" %d",n3);    
          n1=n2;    
          n2=n3;    
         }  
         return 0;  
        }   
        
        case 17 :{
            int year;
           printf("Enter a year: ");
           scanf("%d", &year);
           if (year % 400 == 0) {
              printf("%d is a leap year.", year);
           }
           // not a leap year if divisible by 100
           // but not divisible by 400
           else if (year % 100 == 0) {
              printf("%d is not a leap year.", year);
           }
           // leap year if not divisible by 100
           // but divisible by 4
           else if (year % 4 == 0) {
              printf("%d is a leap year.", year);
           }
           // all other years are not leap years
           else {
              printf("%d is not a leap year.", year);
           }
            return 0;
        }
        
        case 18 :{
            int n,i,c=0;
            printf("Enter the Number : ");
            scanf("%d", &n);
            
            for(i=1; i<=n; i++){
                if(n%i==0)
                    c++;
            }
            if(c==2)
                printf("The number is prime.");
            else
                printf("The number is not prime.");
            
            return 0;
        }
        
        case 19 :{
        int n, reversed = 0, remainder, original;
        printf("Enter an integer: ");
        scanf("%d", &n);
        original = n;
        // reversed integer is stored in reversed variable
        while (n != 0) {
            remainder = n % 10;
            reversed = reversed * 10 + remainder;
            n /= 10;
        }
        // palindrome if orignal and reversed are equal
        if (original == reversed)
            printf("%d is a palindrome.", original);
        else
            printf("%d is not a palindrome.", original);
    
        return 0;        
        }
        
        case 20 :{
        int n,r,sum=0,temp;    
        printf("enter the number=");    
        scanf("%d",&n);    
        temp=n; 
        
        while(n>0)    
        {    
        r=n%10;    
        sum=sum+(r*r*r);    
        n=n/10;    
        }  
        
        if(temp==sum)
        printf("armstrong  number ");    
        else    
        printf("not armstrong number");    
        return 0;          
        }
    }
    return 0:
        )
