#include <iostream>
#include <stdlib.h> 

using namespace std;


/* AUX FUNCTIONS */
void print_array(int my_array[], int size_array)
{
    cout << "[";
    for(int i = 0; i < size_array - 1; i++){
        cout << my_array[i] << ", ";
    }
    cout << my_array[size_array - 1] << "]" << endl;
}


/* ----------------------------------------------------- */


/* Exercise 1: Return max between two numbers */
int my_max_func()
{
    int a = 3;
    int b = 5;
    
    cout << "\nExercise 1: " << endl;
    if (b > a){
        cout << "\tMax value is: " << b << "\n" << endl;
        return b;
    }
    
    cout << "\tMax value is: " << a << "\n" << endl;
    return a;
}


/* Exercise 2: Return min between two numbers */
int my_min_func()
{
    int a = 3;
    int b = 5;
    int min_value = 0;

    min_value = (a<b)?a:b;

    cout << "Exercise 2: " << endl;
    cout << "\tMin value is: " << min_value << "\n" << endl;

    return min_value;
}


/* Exercise 3: Check if a number is within a range. */
void num_between_range()
{
    int c = 50;

    cout << "Exercise 3: " << endl;
    if (c > 0 && c <= 100)
        cout << "\tThe value " << c << " is between 0 or 100\n" << endl;
    else
        cout << "\tThe value " << c << " is NOT between 0 or 100\n" << endl;
}


/* Exercise 4: Compare if two strings are the same. */
void equal_strings()
{
    string chain1 = "hola", chain2 = "ola";
    bool equals = true;

    for(int i = 0; i < chain1.length(); i++){
        cout << i << endl;
        if (chain1[i] != chain2[i]){
            equals = false;
            break;
        }
    }

    string response = (equals==0)?"False":"True";
    cout << "Exercise 4: " << endl;
    std::cout << "\tThe strings are equals?: " << response << "\n" << std::endl;

}

/* Exercise 5: Character is contained in string */
void char_in_string()
{

    char letter = 'a';
    string word = "Hola";
    
    bool exists = false;
    for(int i = 0; i < word.length(); i++){
        //cout << i << endl;
        if (letter == word[i]){
            exists = true;
            break;
        }
    }

    string response = (exists==0)?"False":"True";
    cout << "Exercise 5: " << endl;
    std::cout << "\tIs contained the word in string?: " << response << "\n" <<std::endl;

}


/* Exercise 6: Fuits array and size array */
void fruits_array()
{
    string fruits[3] = {"banana", "apple", "raspberry"};
    int size_array = sizeof(fruits) / sizeof(*fruits);

    cout << "List of fruits: " << endl;
    for(int i = 0; i < size_array; i++){
        cout << "\t" << fruits[i];
    }
}


/* Exercise 7: Suma acumulada, bucles, random */
void accumulated_sum()
{
    
    int iSecret = 0;
    /* initialize random seed: */
    srand (time(NULL));

    int my_random_array[5];
    int size_array = sizeof(my_random_array) / sizeof(*my_random_array);

    // Loop for push into array
    for(int i = 0; i < 5; i++){
        /* Generate secret number between 1 and 10: */
        iSecret = rand() % 10 + 1;
        /* Append to array */
        my_random_array[i] = iSecret;
        //cout << "\t" << my_random_array[i] << endl;
    }
    print_array(my_random_array, size_array);
    

    // Loop for accumulated sum
    int acc_sum = 0;
    for(int i = 0; i < size_array; i++){
        acc_sum += my_random_array[i];
    }
    cout << "\tAccumulated sum: " << acc_sum << endl;

}


main () /* Main program */
{
    
    my_max_func();
    my_min_func();
    num_between_range();
    equal_strings();
    char_in_string();
    fruits_array();
    accumulated_sum();
    
}
