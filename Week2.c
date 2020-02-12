#include <stdio.h>
#include <stdlib.h>
char name[20];
char number[5];
int main()
{
    // printf("Enter name : ");
    // gets(name); // กำหนดจำนวนรับไม่ได้
    // fgets(name, 20, stdin); // อ่านค่าได้จากหลายที่
    // getchar(chr); // ระวัง! เหลือที่ให้ '/' ด้วย
    // printf("%s", name);
    // fgets(number, 5, stdin);
    // int i = atoi(number); // atoi = Array to Integer
    // long l = atol(); // atol = Array to Long
    // double d = atof(); // atof = Array to Float
    // printf("number = %s, i = %d");

    // int chr, chr1;
    // chr = getchar();
    // chr1 = getchar();

    //    fgets(number, 5, stdin);
    //    int i = atoi(number);
    //    puts(number);
    //    putchar(100);
    //    putchar('u');

    //    !!ใน C สามตัวนี้เป็น False ที่เหลือเป็น True!!
    //    int found = 0; // = False
    //    float isExist = 0.0; // = False
    //    char isONline = '\0'; // = False  

    //    fgets(number, 5, stdin);
    //    int i = atoi(number);

    //    if (i > 0 && i < 10){ // "&&" คือเครื่องหมาย "and"
    //         printf("if = %d\n", i > 0 && i <= 10);
    //    }else if(i <= 20 || !found){ // "||" คือเครื่องหมาย "or"
    //         printf("else if\n");
    //     }else{

    //     }
    fgets(number, 5, stdin);
    int i = atoi(number);
    // int count = 0;
    // while (count < 1){
        
    //     count++ * count - 5; // count++ ทำก่อนค่อย +
    //     ++count * count - 5; // ++count บวกก่อนค่อยทำ

    // }
    // for (int j = 0; j < i; j++){ // ถ้าเปลี่ยน j < 1 เป็น 1 จะกลายเป็น Infinite Loop // 1 คือ True
    //     printf("j = %d\n", j);
    // }
   }