/*
The variable is a allocated space in memory to store a value
We refer to a variable-s name to access the stored value
That variable now behaves as if it was the value it contains
But we need to declare what type of data wa are storing
*/

int main()
{
    int age = 23;           
    float f = 8.8;
    char myChar = 'A';
    char name[] = "Abdallah";
    
    printf("My name is %s\n", name);
    printf("My favorite number (float) is %f\n", f);
    printf("I'm %d years old\n", age);
    printf("My first character : %c\n", myChar);

    return 0;
}
