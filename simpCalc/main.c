// Performs addition, subtraction, multiplication or division depending the input from user

# include <stdio.h>

int main() {

    char oper;
    int firstNum,secondNum;

    printf("Enter an operator (+, -, *, /): ");
    scanf("%c", &oper);

    printf("Enter two integers: ");
    scanf("%d %d",&firstNum, &secondNum);

    switch(oper)
            {
                    case '+':
                    printf("%d + %d = %d",firstNum, secondNum, firstNum + secondNum);
                    break;

                    case '-':
                    printf("%d - %d = %d",firstNum, secondNum, firstNum - secondNum);
                    break;

                    case '*':
                    printf("%d * %d = %d",firstNum, secondNum, firstNum * secondNum);
                    break;

                    case '/':
                    printf"%d / %d = %d",firstNum, secondNum, firstNum / secondNum);
                    break;

                    // operator doesn't match any case constant (+, -, *, /)
                    default:
                    printf("Error! oper is not correct");
            }

        return 0;
}