#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
#include <ctype.h>
void resultOfBmi(float bmi)
{ // bmi result analysis
    printf("\nYour BMI Score is: %.2f\n", bmi);
    if (bmi < 18.5)
    {
        printf("Under Weight\n");
    }
    else if (bmi >= 18.5 && bmi <= 24.9)
    {
        printf("Normal Weight\n");
    }
    else if (bmi >= 25 && bmi <= 29.9)
    {
        printf("Over Weight\n");
    }
    else
    {
        printf("Obesity\n");
    }
}
void bmiCalculator()
{
    printf("\n");
    float height, weight;
    printf("Enter Your Hight (Inch): ");
    scanf("%f", &height);
    printf("Enter Your weight (KG): ");
    scanf("%f", &weight);
    height = height * 0.0254;               // convet inch into meter
    float BMI = weight / (height * height); // bmi foumula
    resultOfBmi(BMI);
}
void temp_convert(int choice, float degree)
{
    float cel, far, kel;
    printf("\n");
    if (choice == 1)
    {
        far = (degree * 1.8) + 32;
        kel = degree + 273.15;
        printf("%0.2f Celcius is = %0.2f farenheit and %0.2f kelvin\n", degree, far, kel);
    }
    else if (choice == 2)
    {
        cel = ((degree - 32) * 5 / 9);
        kel = cel + 273.15;
        printf("%0.2f Farenheit is = %0.2f celcius and %0.2f kelvin\n", degree, cel, kel);
    }
    else if (choice == 3)
    {
        cel = degree - 273.15;
        far = cel * 1.8 + 32;
        printf("%0.2f Kelvin is = %0.2f celcius and %0.2f farenheit\n", degree, cel, far);
    }
    else
    {
        printf("Wrong choice.\n");
    }
}
void unitCalculate(float formula1, float formula2, const char *str1, const char *str2)
{ // this function is use for calculate every unit conversion
    float unit1;
    float unit2;
    printf("Note: If you don't want any conversion then enter '0' for it:\n");
    printf("Enter %s: ", str1);
    scanf("%f", &unit1);
    printf("Enter %s: ", str2);
    scanf("%f", &unit2);
    float calculateUnit1 = unit1 * formula1;
    float calculateUnit2 = unit2 * formula2;
    printf("%.2f %s = %.4f %s\n", unit1, str1, calculateUnit1, str2);
    printf("%.2f %s = %.4f %s\n", unit2, str2, calculateUnit2, str1);
}
void unitChanger()
{
    while (1)
    {
        printf("\n\n");
        printf("1. Length Converter\n");
        printf("2. Weight Converter\n");
        printf("3. Temperature Converter\n");
        printf("4. Previous Page\n");
        int choice;
        printf("\nEnter Your Choice: ");
        scanf("%d", &choice);
        // length
        if (choice == 1)
        {
            while (1)
            {
                printf("\n\n");
                printf("1. Centimeter to Meter or Reverse\n");
                printf("2. Decimeter to Meter or Reverse\n");
                printf("3. Kilometer to Meter or Reverse\n");
                printf("4. Inch to Meter or Reverse\n");
                printf("5. Foot to Meter or Reverse\n");
                printf("6. Foot to Inch or Reverse\n");
                printf("7. Mile to Kilometer or Reverse\n");
                printf("8. Previous Page\n");
                int command;
                printf("\nEnter Your Command: ");
                scanf("%d", &command);
                if (command == 1)
                {
                    const char *ar1 = "Centimeter";
                    const char *ar2 = "Meter";
                    unitCalculate(0.01, 100, ar1, ar2);
                }
                else if (command == 2)
                {
                    const char *ar1 = "Decimeter";
                    const char *ar2 = "Meter";
                    unitCalculate(0.1, 10, ar1, ar2);
                }
                else if (command == 3)
                {
                    const char *ar1 = "Kilometer";
                    const char *ar2 = "Meter";
                    unitCalculate(0.001, 1000, ar1, ar2);
                }
                else if (command == 4)
                {
                    const char *ar1 = "Inch";
                    const char *ar2 = "Meter";
                    unitCalculate(0.0254, 39.37, ar1, ar2);
                }
                else if (command == 5)
                {
                    const char *ar1 = "Foot";
                    const char *ar2 = "Meter";
                    unitCalculate(0.3048, 3.2808, ar1, ar2);
                }
                else if (command == 6)
                {
                    const char *ar1 = "Foot";
                    const char *ar2 = "Inch";
                    unitCalculate(12, 0.0836, ar1, ar2);
                }
                else if (command == 7)
                {
                    const char *ar1 = "Mile";
                    const char *ar2 = "Kilometer";
                    unitCalculate(1.6093, 0.6213, ar1, ar2);
                }
                else if (command == 8)
                {
                    break;
                }
                else
                {
                    printf("You have entered wrong Command\n");
                }
            }
            // weight
        }
        else if (choice == 2)
        {
            while (1)
            {
                printf("\n\n");
                printf("1. Miligram to Gram or Reverse\n");
                printf("2. Centigram to Gram or Reverse\n");
                printf("3. Kilogram to Gram or Reverse\n");
                printf("4. Pound to Kilogram or Reverse\n");
                printf("5. Ton to Kilogram or Reverse\n");
                printf("6. Previous Page\n");
                int command;
                printf("Enter Your Command: ");
                scanf("%d", &command);
                if (command == 1)
                {
                    const char *ar1 = "Miligram";
                    const char *ar2 = "Gram";
                    unitCalculate(0.001, 1000, ar1, ar2);
                }
                else if (command == 2)
                {
                    const char *ar1 = "Centigram";
                    const char *ar2 = "Gram";
                    unitCalculate(0.01, 100, ar1, ar2);
                }
                else if (command == 3)
                {
                    const char *ar1 = "Kilogram";
                    const char *ar2 = "Gram";
                    unitCalculate(1000, 0.001, ar1, ar2);
                }
                else if (command == 4)
                {
                    const char *ar1 = "Pound";
                    const char *ar2 = "Kilogram";
                    unitCalculate(0.4535, 2.2046, ar1, ar2);
                }
                else if (command == 5)
                {
                    const char *ar1 = "Ton";
                    const char *ar2 = "Kilogram";
                    unitCalculate(1000, 0.001, ar1, ar2);
                }
                else if (command == 6)
                {
                    break;
                }
                else
                {
                    printf("You have entered wrong Command\n");
                }
            }
            // temperature
        }
        else if (choice == 3)
        {
            while (1)
            {
                printf("\n\n");
                int choice;
                printf("1. Celcius to farenheit and kelvin:\n");
                printf("2. Farenheit to celcius and kelvin:\n");
                printf("3. Kelvin to celcius and farenheit:\n");
                printf("4. Previous Page\n");
                printf("\nEnter your choice: \n");
                scanf("%d", &choice);
                if (choice >= 4)
                {
                    break;
                }
                else
                {
                    float degree;
                    printf("Enter degree: \n");
                    scanf("%f", &degree);
                    temp_convert(choice, degree);
                }
            }
        }
        else if (choice == 4)
        {
            break;
        }
        else
        {
            printf("You have entered wrong Choice\n");
        }
    }
}
// eikhane leap year check korar function make korce
int isLeapYear(int year)
{
    return ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)); // leap-year bahir korar formula
}

// month er moddhe koi din kore thake oita justify kortace and return kortace
int daysInMonth(int month, int year)
{
    if (month == 2)
    {
        return isLeapYear(year) ? 29 : 28; // using conditional ternay operator
    }
    else if (month == 4 || month == 6 || month == 9 || month == 11)
    {
        return 30;
    }
    else
    {
        return 31;
    }
}

// date string theke data gola alada korar function
int *stringToDate(const char dateStr[])
{ // using dynamic allocation to return an array.
    int day, month, year;
    // date string ke part pate e vanga hocche.
    if (sscanf(dateStr, "%d/%d/%d", &day, &month, &year) != 3)
    { // ei sscanf diye day,month,year ke alada kor hoice. jeigola '/' diye alada and 3 ta variable data ache.
        printf("Error: Date format should be DD/MM/YYYY\n");
        return NULL;
    }


    // checking the date validation
    if (day <= 0 || day > 31 || month <= 0 || month > 12 || year < 0)
    {
        printf("Error: Invalid date\n");
        return NULL;
    }

    // dynamic allocation er maddhome array newar syntax: int* array_name = (int*)malloc(size * sizeof(int));
    // cause ei system cara array return kora jai nah. Jate onnu function theke etar direct address access kora jai tai pointer use kora hoi.
    int *dateArray = (int *)malloc(3 * sizeof(int)); // malloc function always return pointer.
    if (dateArray == NULL)
    { // due to insufficient memory malloc return Null thats why cheking allocation
        printf("Error: Memory allocation failed\n");
        return NULL;
    }

    // assign values
    dateArray[0] = day;
    dateArray[1] = month;
    dateArray[2] = year;

    return dateArray;
}

// Function to calculate age
void ageCalculate()
{
    printf("\n");
    char dateOfBirth[11], todayDate[11];
    printf("Enter Your date of Birth (dd/mm/yyyy): ");
    scanf("%10s", dateOfBirth);
    printf("Enter Today's date (dd/mm/yyyy): ");
    scanf("%10s", todayDate);

    int *birthDate = stringToDate(dateOfBirth); // dynamic array receive system
    int *dateOfToday = stringToDate(todayDate);

    if (birthDate != NULL && dateOfToday != NULL)
    {
        int birthDay = birthDate[0], birthMonth = birthDate[1], birthYear = birthDate[2];
        int presDay = dateOfToday[0], presMonth = dateOfToday[1], presYear = dateOfToday[2];

        free(birthDate);   // Free memory after use
        free(dateOfToday); // Free memory after use

        int year = presYear - birthYear;
        int month = presMonth - birthMonth;
        int day = presDay - birthDay;

        // if current day is before the birth day
        if (day <= 0)
        {
            month--;
            day += daysInMonth(presMonth - 1 == 0 ? 12 : presMonth - 1, presYear);
        }
        // if current month is before the birth month
        if (month <= 0)
        {
            year--;
            month += 12;
        }
        // if month value is 12 then update year and clear month
        if (month == 12)
        {
            year += 1;
            month = 0;
        }

        printf("\nAge: %d years, %d months, %d days Running.\n", year, month, day);
    }
}
void simpleCalculation(int cmd, float a, float b)
{
    float sum = 0, subs = 0, mul = 0;
    float div = 0;
    if (cmd == 1)
    {
        sum = a + b;
        printf("%0.2f + %0.2f = %0.2f\n", a, b, sum);
    }
    else if (cmd == 2)
    {
        subs = a - b;
        printf("%0.2f - %0.2f = %0.2f\n", a, b, subs);
    }
    else if (cmd == 3)
    {
        mul = a * b;
        printf("%0.2f * %0.2f = %0.2f\n", a, b, mul);
    }
    else if (cmd == 4)
    {
        div = a / b;
        printf("%0.2f / %0.2f = %0.2f\n", a, b, div);
    }
}

// Function to perform the given operation between two numbers
float perform_operation(float a, char op, float b)
{
    switch (op)
    {
    case '*':
        return a * b;
    case '/':
        return a / b;
    case '+':
        return a + b;
    case '-':
        return a - b;
    default:
        return 0;
    }
}

// Function to print the current state of the expression
void print_expression(float *numbers, char *operators, int num_count, int op_count)
{
    for (int i = 0; i < num_count; i++)
    {
        if (i > 0)
        {
            printf(" %c ", operators[i - 1]);
        }
        printf("%.2f", numbers[i]);
    }
    printf("\n");
}

// Function to parse the expression without spaces
void parse_expression(const char *expr, float *numbers, char *operators, int *num_count, int *op_count)
{
    char num_buffer[50];
    int num_index = 0, buffer_index = 0;

    for (int i = 0; expr[i] != '\0'; i++)
    {
        if (isdigit(expr[i]) || (expr[i] == '.' && isdigit(expr[i + 1])) || (expr[i] == '-' && (i == 0 || !isdigit(expr[i - 1]))))
        {
            num_buffer[buffer_index++] = expr[i];
        }
        else
        {
            if (buffer_index > 0)
            {
                num_buffer[buffer_index] = '\0';
                numbers[num_index++] = atof(num_buffer);
                buffer_index = 0;
            }
            operators[*op_count] = expr[i];
            (*op_count)++;
        }
    }
    if (buffer_index > 0)
    {
        num_buffer[buffer_index] = '\0';
        numbers[num_index++] = atof(num_buffer);
    }

    *num_count = num_index;
}

// Function to evaluate the expression and print each step
float evaluate_expression(const char *expr); // Assume this function is implemented elsewhere

void print_bracket_error(const char *expr, const char *msg)
{
    printf("Bracket error in expression \"%s\": %s\n", expr, msg);
}

void print_operand_error(const char *expr)
{
    printf("Operand error in expression \"%s\": Operands found without operators before or after brackets\n", expr);
}

void print_operator_error(const char *expr)
{
    printf("Operator error in expression \"%s\": Operator found at the end without operand\n", expr);
}

void print_continuous_operator_error(const char *expr)
{
    printf("Operator error in expression \"%s\": Continuous operators found without operand\n", expr);
}

void print_expression_error(const char *expr)
{
    printf("Expression error in expression \"%s\": Invalid character found\n", expr);
}

int is_operator(char c)
{
    return c == '+' || c == '-' || c == '*' || c == '/';
}

int is_valid_character(char c)
{
    return isdigit(c) || is_operator(c) || c == '.' || c == '(' || c == ')' || c == '{' || c == '}' || c == '[' || c == ']' || isspace(c);
}

int justify(const char *expr)
{
    for (int i = 0; expr[i] != '\0'; ++i)
    {
        if (!is_valid_character(expr[i]))
        {
            print_expression_error(expr);
            return -1;
        }
    }
    return 0;
}

float handle_nested_brackets(char *expr)
{
    char temp[100];
    char *start;
    char *end;

    if (justify(expr) != 0)
    {
        return -1;
    }

    // Bracket validation logic
    int bracket_balance = 0;

    for (int i = 0; expr[i] != '\0'; i++)
    {
        if (expr[i] == '(' || expr[i] == '{' || expr[i] == '[')
        {
            bracket_balance++;
        }
        else if (expr[i] == ')' || expr[i] == '}' || expr[i] == ']')
        {
            bracket_balance--;
            if (bracket_balance < 0)
            {
                print_bracket_error(expr, "Mismatched closing bracket found");
                return -1;
            }
        }
    }

    if (bracket_balance != 0)
    {
        print_bracket_error(expr, "Mismatched opening bracket found");
        return -1;
    }

    while ((start = strrchr(expr, '(')) || (start = strrchr(expr, '{')) || (start = strrchr(expr, '[')))
    {
        char closing_bracket;
        if (*start == '(')
            closing_bracket = ')';
        else if (*start == '{')
            closing_bracket = '}';
        else
            closing_bracket = ']';

        end = strchr(start, closing_bracket);

        if (!end)
        {
            print_bracket_error(expr, "Mismatched opening bracket");
            return -1;
        }

        if ((start != expr && isdigit(*(start - 1)) && !is_operator(*(start - 1))) ||
            (isdigit(*(end + 1)) && !is_operator(*(end + 1))))
        {
            print_operand_error(expr);
            return -1;
        }

        strncpy(temp, start + 1, end - start - 1);
        temp[end - start - 1] = '\0';
        float result = evaluate_expression(temp);
        snprintf(temp, sizeof(temp), "%.2f", result);
        memmove(start + strlen(temp), end + 1, strlen(end));
        memcpy(start, temp, strlen(temp));
    }

    return evaluate_expression(expr);
}

float evaluate_expression(const char *expression)
{
    char operators[50];
    float numbers[50];
    int num_index = 0, op_index = 0;

    parse_expression(expression, numbers, operators, &num_index, &op_index);

    printf("Original Expression: ");
    print_expression(numbers, operators, num_index, op_index);

    // Step 1: Perform all multiplications
    for (int i = 0; i < op_index; i++)
    {
        if (operators[i] == '*')
        {
            numbers[i] = perform_operation(numbers[i], '*', numbers[i + 1]);
            for (int j = i + 1; j < num_index - 1; j++)
            {
                numbers[j] = numbers[j + 1];
            }
            for (int j = i; j < op_index - 1; j++)
            {
                operators[j] = operators[j + 1];
            }
            num_index--;
            op_index--;
            i--;
        }
    }
    printf("After Multiplications: ");
    print_expression(numbers, operators, num_index, op_index);

    // Step 2: Perform all divisions
    for (int i = 0; i < op_index; i++)
    {
        if (operators[i] == '/')
        {
            numbers[i] = perform_operation(numbers[i], '/', numbers[i + 1]);
            for (int j = i + 1; j < num_index - 1; j++)
            {
                numbers[j] = numbers[j + 1];
            }
            for (int j = i; j < op_index - 1; j++)
            {
                operators[j] = operators[j + 1];
            }
            num_index--;
            op_index--;
            i--;
        }
    }
    printf("After Divisions: ");
    print_expression(numbers, operators, num_index, op_index);

    // Step 3: Perform all additions and subtractions
    for (int i = 0; i < op_index; i++)
    {
        if (operators[i] == '+' || operators[i] == '-')
        {
            numbers[i] = perform_operation(numbers[i], operators[i], numbers[i + 1]);
            for (int j = i + 1; j < num_index - 1; j++)
            {
                numbers[j] = numbers[j + 1];
            }
            for (int j = i; j < op_index - 1; j++)
            {
                operators[j] = operators[j + 1];
            }
            num_index--;
            op_index--;
            i--;
        }
    }
    printf("After Additions and Subtractions: ");
    print_expression(numbers, operators, num_index, op_index);

    return numbers[0];
}
void fac_root_squ(int command)
{
    printf("\n\n");
    int val;
    printf("Enter a value: ");
    scanf("%d", &val);
    if (command == 1)
    {
        int square = val * val;
        printf("Square of %d is: %d\n", val, square);
    }
    else if (command == 2)
    {
        float root = sqrt(val);
        printf("Root of %d is: %.2f\n", val, root);
    }
    else if (command == 3)
    {
        int fac = 1;
        if (val == 0 || val == 1)
        {
            fac = 1;
            printf("\n");
            printf("%d! = %d\n", val, fac);
            return;
        }
        for (int i = 2; i <= val; i++)
        {
            fac *= i;
        }
        printf("\n");
        printf("%d! = %d\n", val, fac);
    }
}
void advanceCall()
{
    while (1)
    {
        printf("\n\n");
        printf("1. Calculate square: \n");
        printf("2. Calcualte root: \n");
        printf("3. Calculate factorial: \n");
        printf("4. Previous Page\n");
        printf("\nEnter Command: ");
        int command;
        scanf("%d", &command);
        if (command >= 4)
        {
            break;
        }
        else
        {
            fac_root_squ(command);
        }
    }
}
void advancedCalculating()
{

    while (1)
    {
        printf("\n\n");
        printf("1. Solve Equation\n");
        printf("2. Advance call\n");
        printf("3. Unit Converter\n");
        printf("4. BMI Calculation\n");
        printf("5. Age Calculation\n");
        printf("6. Previous Page\n");
        int choice;
        printf("\n");
        printf("Enter Your Choice: ");
        scanf("%d", &choice);
        if (choice == 1)
        {
            while (1)
            {
                printf("\n\n");
                int cmd;
                printf("1. For summation \n");
                printf("2. For substract \n");
                printf("3. For multiply \n");
                printf("4. For division \n");
                printf("5. Arithmetic expression Equation(Ex: 1+2-[{(2-1)/4})*3]: \n");
                printf("6. Previous Page\n");
                printf("\nEnter command: ");
                scanf("%d", &cmd);
                if (cmd >= 6)
                {
                    break;
                }
                else if(cmd == 5)
                {
                    char expression[100];
                    getchar();
                    printf("Enter an arithmetic expression: ");
                    fgets(expression, sizeof(expression), stdin);
                    expression[strcspn(expression, "\n")] = '\0';
                    printf("\n");
                    float result = handle_nested_brackets(expression);
                    if (result != -1)
                    {
                        printf("\nResult: %.2f\n", result);
                    }
    
                }
                else
                {
                    float a, b;
                    printf("Put 2 value for simple calculation: ");
                    scanf("%f%f", &a, &b);
                    simpleCalculation(cmd, a, b);
                }
            }
        }
        else if (choice == 2)
        {
            printf("\n");
            advanceCall();
        }
        else if (choice == 3)
        {
            printf("\n");
            unitChanger();
        }
        else if (choice == 4)
        {
            printf("\n");
            bmiCalculator();
        }
        else if (choice == 5)
        {
            printf("\n");
            ageCalculate();
        }
        else if (choice == 6)
        {
            break;
        }
        else
        {
            printf("\nYou have entered wrong choice\n");
        }
    }
}
int main()
{

    printf("------------Welcme to Advance Calculator------------\n\n");

    while (1)
    {
        printf("\n");
        printf("1. On\n");
        printf("2. Off\n");
        printf("3. Exit\n");
        int command;
        printf("Enter Your Choice: ");
        scanf("%d", &command);
        if (command == 1)
        {
            printf("\nCalculator is Starting.......\n");
            advancedCalculating();
        }
        else if (command == 2)
        {
            printf("\nCalculator is Stop.......\n");
        }
        else if (command == 3)
        {
            break;
        }
        else
        {
            printf("\nYou have Entered wrong command\n");
        }
    }

    return 0;
}