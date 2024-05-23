//enter your name here
//enter your email here
#include<stdio.h>
int main()
{
    int a,b,c, choice;
    
    printf("Enter your choice\n");
    printf(" 1.addition\n 2. Subtraction\n 3. Multiplication\n 4. Division\n");
    scanf("%d",&choice);
    
    printf("Enter a and b values");
    scanf("%d %d", &a, &b);
    
    // Add your code here using switch
        switch(choice) {
        case 1:
            c = a + b;
            printf(" addition: %d\n", c);
            break;
        case 2:
            c = a - b;
            printf(" subtraction: %d\n", c);
            break;
        case 3:
            c = a * b;
            printf(" multiplication: %d\n", c);
            break;
        case 4:
            if (b != 0) {
                c = a / b;
                printf(" division: %d\n", c);
            } else {
                printf("Error: Division by zero is not allowed.\n");
            }
            break;
        default:
            printf("Invalid choice.\n");
            break;
    }
           
    return 0;
}
