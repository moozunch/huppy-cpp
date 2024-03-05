#include <stdio.h> //untuk input output
#include <stdlib.h> //untuk sytem cls
//variables: to store data
//macam cpp, semuanya excuted berdasar urutan penulisan, don't forget semicolon every end of the statement


int main() {
    system("cls");


// 1. Comment
    // Single line comment
    /* Double line 
    comment */

// 2. Printing 
    printf ("Hello World \n");
    // escape character
    printf ("Hello \n World \n"); //"\n" untuk new line
    printf ("Hello \t World \n"); //"\t" untuk tab
    printf("They call him \"Johnny\". \n"); // \" untuk kata didalam tanda petik

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
    printf ("%d \n", a + b + c);
    int number = 15;
    char myLetter = 'D';
    printf("My number is %d and my letter is %c \n", number, myLetter); //jadi dia pengganti nama variabel karena nama variable nya diakhir kan, dan make sures nama variables nya pun berurut sesuai urutan deklarasi spesifier.

    // A floating point number can also be a scientific number with an "e" to indicate the power of 10:
    float f1 = 35e3;
    double d1 = 12E4;

    printf("%f \n", f1);
    printf("%lf \n", d1);
    // show one digit after the decimal point:
    float myScore = 9.5;
    printf("%.1f \n", myScore);
    // to check the memory size it stores (based on data type)
    printf("%lu\n", sizeof(myScore)); //using %lu a saver way to use %d, (lu: lonng unsigned int)

    float sum = (float) 3 / 2; //supaya hasilnya buka 1 aja, tapi jadi 1.5
    printf("print pakai 1f: %.1f \n", sum); //kalau pascal ada yang di write itu (number:3:2)
    printf("print pakai 2f: %.2f \n", sum); //dua dibelakang koma


// 4. Const - Variables yang isinya tidak berubah ubah
    const float pi = 3.14159; //harus ada value, nggak boleh cuma variables kosong.
    printf ("%f \n", pi);
// 5. Operators
    //5.1 Arithmatic Operator
    //deklarasi check line 36
    printf ("a = %d b = %d",a,b);
    int penjumlahan = a + b;
    printf ("penjumlahan: %d \n", penjumlahan);
    int pengurangan = a - b;
    printf ("pengurangan: %d \n", pengurangan);
    int perkalian = a * b;
    printf ("perkalian: %d \n", perkalian);
    int pembagian = a / b;
    printf ("pembagian: %d \n", pembagian); //dibulatin kebawah
    int modulo = a % b;
    printf ("modulo: %d \n", modulo);
    printf ("post-increment a++ : %d \n", a++);
    printf ("pre-increment ++a : %d \n", ++a); 
    printf ("post-decrement b-- : %d \n", b--);
    printf ("pre-increment --b : %d \n", --b);

    //5.2 Assignmetn Operator
    // "apapun yang ada sama dengannya (=)"
    int apa = 5;
    apa += 3; // apa = apa + 3;, bisa kali bagi, kurang, mod, and, or, xor dkk

    //5.3 Comparison Operator, (<, >, ==, <=, >=, !=) answer in boolean (0/1)
    printf ("%d > %d = %d \n", a, c, a > c);

    //5.4 Logical Operator (and(&&), or(||), not(!))
    printf ("!(%d < %d) && (%d > %d) = %d \n", a, c, b, c, !(a < c) && (b > c));


// 6. Booleans (Yes/No, On/Off, True/False) 
    bool d = true;
    printf ("%d \n",d);
    printf ("%d > %d = %d \n", c, a, c > a); //return in bool
    
    int myAge = 25;
    int votingAge = 18;
    printf("%d", myAge >= votingAge); // Returns 1 (true), meaning 25 year olds are allowed to vote!


// 7. If.. Else (pakai Conditional operator)
    if (a > c) {
        printf("%d is greater than %d \n", a, c);
    } else if (a < b) {
        printf("%d is less than %d \n", c, a);
    } else {
        printf ("%d is equal to %d \n", c, a);
    }
    // Shorthand if else
    int time = 20;
    (time < 18) ? printf("Good day! \n") : printf("Good evening! \n"); 

// 8. Switch Case- Conditional kalau kondisinya banyak instead of makai banyak if
    int day = 2;
    switch (day) {
        case 1:
            printf("Monday \n");
            break; //harus pakai break soalnya tar dia ngecekin semua walaupun kondisi udah terpenuhi
        case 2:
            printf("Tuesday \n");
            break;
        case 3:
            printf("Wednesday \n");
            break;
        case 4:
            printf("Thursday \n");
            break;
        case 5:
            printf("Friday \n");
            break;
        case 6:
            printf("Saturday \n");
            break;
        default: //macem else
            printf("Sunday \n");
            break;
    }
// 9. While Loop - bakal teteap jalan selama kondisi true
    int countdown = 3;

    while (countdown > 0) {
    printf("%d\n", countdown);
    countdown--;
    }
    printf("Happy New Year!!\n");
    // check kondisi dulu baru dijalankan loopnya
    // 9.1 Do-While Loop - Dilakukan dulu minimal sekali baru dijalankan dan dilakukan pengecekan
    int i = 0;
    do {
        printf("%d \n", i); 
        i++;

    } while (i < 5);


// 10. For Loop
    for (i = 1; i <= 5; i++) {
        printf ("perulangan ke-%d \n", i);
    }
    // 10.1 Nested Loops
    for (i = 1; i <= 5; i++){
        printf ("Outer ke- %d \n",i);
        for (int j = 1; j <= i; j++) {
            printf ("Inner ke- %d \n",j);
        }
    }

// 11. Break dan Continue
    // Break buat berhenti, continue untuk skip
    for (int i = 0; i <= 100; i++) {
        if (i % 2 != 0) {
            continue; //jadi yang ganjil bakal di skip
        }
        if (i > 50) {
            break; //jadi lebih dari 50 akan berhenti
        }
        //Program untuk menampilkan angka genap 0-50
        printf ("%d",i);
        if (i < 50) {
            printf (", ");
        }
        if (i == 50) {
            printf ("\n"); // untuk new line diakhir
        }
    }


// 12. Arrays - banyak data bertype sama
    // tipe nama[]; atau tipe nama[] = {value1, value2};
    int nomorpeserta[] = {120, 121, 122, 123};
    //ingat indeks dimulai dari 0
    for (i = 0; i < 4; i++) {
        printf ("Access array index ke-%d = %d \n", i, nomorpeserta[i]);
    } printf ("Selesai!");

    // bisa juga cuma deklare array dan diisi later on
    int Number[4];
    Number[0] = 10;
    Number[1] = 15;
    Number[2] = 20;
    Number[3] = 25;

    // 12.1 Array size or length - untuk check elemen array yang sudah punya nilai ada berapa tapi in bytes.
    // tadi kan udah ada array nomorpeserta - eceknya mau check size nya
    printf("size dari array nomor peserta (4 elemen) = %d \n", sizeof(nomorpeserta)); // return 16 (in bytes)
    // 16 = 16 / 4 (int 4 byte) maka isinya/elemennya = 4 
    printf("size dari array nomor peserta setelah dibagi dengan salah satu size elemen = %d \n", sizeof(nomorpeserta) / sizeof(nomorpeserta[0])); // dibagi dengan salah satu isi elemen, karena kan semua type nya sama jadi should be enough untuk pembagian biasa 

    //Example array dengan penggunaan length/size
    // An array storing different ages
    int ages[] = {20, 22, 18, 35, 48, 26, 87, 70};

    float avg= 0;
    sum = 0; //sebelumnyaa udah di declare di line 56 tipe float

    // Get the length of the array
    int length = sizeof(ages) / sizeof(ages[0]);

    // Mencari total umur
    for (i = 0; i < length; i++) {
    sum += ages[i];
    }

    // Calculate the average by dividing the sum by the length
    avg = sum / length;

    // Print the average
    printf("The average age is: %.2f \n", avg);

    // Ngecheck umur mana yang paling muda
    // Create a variable and assign the first array element of ages to it
    int lowestAge = ages[0];

    // Loop through the elements of the ages array to find the lowest age
    for (i = 0; i < length; i++) {
    if (lowestAge > ages[i]) {
        lowestAge = ages[i]; //di check dulu apakah di lowest ages ada yang lebih kecil dari dia? kalau ada maka akan digantilah kedudukan si lowest ages
  }
}
    printf("Umur termuda adalah %d", lowestAge);


// 13. String




    // return 0 artinya nggak ada yang dikembalikan, karena most of the time subprogram perlu ada value yang dikembalikan
    return 0;
}
