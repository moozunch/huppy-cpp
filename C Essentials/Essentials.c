#include <stdio.h>
//variables: to store data
//macam cpp, semuanya excuted berdasar urutan penulisan, don't forget semicolon every end of the statement


int main() {


// 1. Comment
    // Single line comment
    /* Double line 
    comment */

// 2. Printing 
    printf ("Hello World");
    // escape character
    printf ("Hello \n World"); //"\n" untuk new line
    printf ("Hello \t World"); //"\t" untuk tab
    printf("They call him \"Johnny\"."); // \" untuk kata didalam tanda petik

// 3. Variables
    int myNum = 50;
    printf ("%d", myNum); //%d keluar dalam tipe data integer, harus didalam persen, kalau nggak ada nothing will happen.
    // Format specifier - Format specifiers are used together with the printf() function to tell the compiler what type of data the variable is storing. It is basically a placeholder for the variable value.
    /* 
       "%d" atau "%i" for integer
       "%f" for float
       "%lf" for double
       "%c" for char, don't use it for multiple character
       "%s" for string 
    */

    int y = 5;
    printf ("%d", myNum + y);
    // atau caara deklarasiin sekali banyak dengan tanda koma
    int a = 3, b = 7, c = 4;
    printf ("%d", a + b + c);
    int number = 15;
    char myLetter = 'D';
    printf("My number is %d and my letter is %c", number, myLetter); //jadi dia pengganti nama variabel karena nama variable nya diakhir kan, dan make sures nama variables nya pun berurut sesuai urutan deklarasi spesifier.

    // A floating point number can also be a scientific number with an "e" to indicate the power of 10:
    float f1 = 35e3;
    double d1 = 12E4;

    printf("%f\n", f1);
    printf("%lf", d1);
    // show one digit after the decimal point:
    float myScore = 9.5;
    printf("%.1f", myScore);
    // to check the memory size it stores (based on data type)
    printf("%lu\n", sizeof(myScore)); //using %lu a saver way to use %d, (lu: lonng unsigned int)

    float sum = (float) 3 / 2; //supaya hasilnya buka 1 aja, tapi jadi 1.5
    printf("%.1f", sum);


    // return 0 artinya nggak ada yang dikembalikan, karena most of the time subprogram perlu ada value yang dikembalikan
    return 0;
}
