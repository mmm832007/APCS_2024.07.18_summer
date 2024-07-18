/* printf example */
#include <stdio.h>
int main()
{
   printf ("Characters: %c %c \n", 'a', 64);
   //第一個%c對應到字母a，第二個%c對應到ascii code表第64個
   printf ("Decimals: %d %ld\n", 1977, 650000L);
   printf ("Preceding with blanks: %10d \n", 1977);
   //在寬度為10d的距離填上數字，數字長度<10則補上空格
   printf ("Preceding with zeros: %010d \n", 1977);
   //在寬度為10d的距離填上數字，數字長度<10則補上0
   printf ("Some different radices: %d %x %o %#x %#o \n", 100, 100, 100, 100, 100);
   //%d：10進位、%x：16進位、%o：8進位
   printf ("floats: %4.2f %+.0e %E \n", 3.1416, 3.1416, 3.1416);
   //%4.2f：列印欄位寬度為 4、精確度為 2 位元小數的浮點數值
   //%+.0e：以科學記數法列印浮點數值
   //%E：以大寫指數的科學記數法印出浮點數值
   printf ("Width trick: %*d \n", 5, 10);
   //*：用於動態指定欄位寬度。它採用前一個參數的值(5)
   //d:格式說明符指示下一個參數（ 10）將列印為十進位整數。
   printf ("%s \n", "A string");
   return 0;
  
}
