// #include <stdio.h>
// #include <math.h>

// int main()
// {

//     printf("%d", 36+56);
//     return 0;
// }
// int main()
// {

//     printf("%d", 36-56);
//     return 0;
// }
// int main()
// {

//     printf("%d", 56*56);
//     return 0;
// }
// int main()
// {

//     printf("%d", 56/56);
//     return 0;
// }
// int main()
// {

//     printf("%f", 56.0 - 56.0);
//     return 0;
// }
// int main()
// {

//     printf("%d", 56%56);
//     return 0;
// }
// int main()
// {
//     float a = 6.3, b = 9;
//     printf("%.2f", a + b);
//     return 0;
// }
// int main()
// {
//     float a = 6.3, b = 9;
//     float result = a * b;
//     printf("%.2f", result);
//     return 0;
// }
// int main()
// {
//     int a = 100000, b = 100000;
//     long long result = 1ll * a * b;
//     printf("%lld", result);
//     return 0;
// }
// int main()
// {
//     long long a = 100000, b = 100000;
//     long long result = a * b;
//     printf("%lld", result);
//     return 0;
// }
// int main()
// {
//     int a = 100000;
//     double b = 100000;
//     long long result = a * b;
//     printf("%lld", result);
//     return 0;
// }
// int main()
// {
//     int a, b, c;
//     scanf("%d %d %d", &a, &b, &c);
//     printf("%d", a+ b + c);
//     return 0;
// }
// int main()
// {
//     int a = 10;
//     a += 5;
//     printf("%d", a);
//     return 0;
// }
// int main()
// {
//     int a = 10;
//     a -= 5;
//     printf("%d", a);
//     return 0;
// }
// int main()
// {
//     int a = 10;
//     a *= 5;
//     printf("%d", a);
//     return 0;
// }
// int main()
// {
//     int a = 10;
//     a /= 5;
//     printf("%d", a);
//     return 0;
// }
// int main()
// {
//     int a = 10;
//     a %= 3;
//     printf("%d", a);
//     return 0;
// }
// int main()
// {
//     int a = 10;
//     ++a;
//     printf("%d", a);
//     return 0;
// }
// int main()
// {
//     int a = 10;
//     a++;
//     printf("%d", a);
//     return 0;
// }
// int main()
// {
//     int a = 10;
//     --a;
//     printf("%d", a);
//     return 0;
// }
// int main()
// {
//     int a = 10;
//     printf("%d\n", ++a);
//     printf("%d", a);
//     return 0;
// }
// int main()
// {
//     int a = 10;
//     printf("%d\n", a--);
//     printf("%d", a);
//     return 0;
// }
// int main()
// {
//     int a = 10;
//     printf("%d\n", --a);
//     printf("%d", a);
//     return 0;
// }

// #include<stdio.h>
// #include<stdbool.h>
// int main()
// {
//     int a = 10, b = 6;

//     bool isEqual = a!=b;
//     printf("%d\n", isEqual);
//     return 0;
// }
// #include<stdio.h>
// #include<stdbool.h>
// int main()
// {
//     int a = 10, b = 6;

//     bool isEqual = a==b;
//     printf("%d\n", isEqual);
//     return 0;
// }
// #include<stdio.h>
// #include<stdbool.h>
// int main()
// {
//     int a = 10, b = 6;

//     bool isEqual = a>=b;
//     printf("%d\n", isEqual);
//     return 0;
// }
// #include<stdio.h>
// #include<stdbool.h>
// int main()
// {
//     int a = 10, b = 6;

//     bool isEqual = a<=b;
//     printf("%d\n", isEqual);
//     return 0;
// }
// #include<stdio.h>
// #include<stdbool.h>
// int main()
// {
//     int a = 10, b = 6;

//     bool isEqual = a<b;
//     printf("flag = %d\n", isEqual);
//     return 0;
// }
// #include<stdio.h>
// #include<stdbool.h>
// int main()
// {
//     int a = 10, b = 6;

//     bool isEqual = a>b;
//     printf("flag = %d\n", isEqual);
//     return 0;
// }
// #include<stdio.h>
// #include<stdbool.h>
// int main()
// {
//     int a = 10, b = 6;

//     bool result = a>b || a<b ;
//     printf("result = %d\n", result);
//     return 0;
// }
// #include<stdio.h>
// #include<stdbool.h>
// int main()
// {
//     int a = 10, b = 6;

//     bool result = a>b && a<b ;
//     printf("result = %d\n", result);
//     return 0;
// }

// #include<stdio.h>
// #include<stdbool.h>
// int main()
// {
//     int a = 10, b = 6, c= 7;

//     bool result = a<b || a<b || a<c;
//     printf("result = %d\n", result);
//     return 0;
// }

// #include<stdio.h>
// #include<stdbool.h>
// int main()
// {
//     int a = 10, b = 6, c= 7;

//     bool result = a>b && a>b && a>c;
//     printf("result = %d\n", result);
//     return 0;
// }

// #include<stdio.h>
// #include<stdbool.h>
// int main()
// {
//     int a = 10, b = 6, c= 7;

//     bool result = !(a>b && a>b && a>c);
//     printf("result = %d\n", result);
//     return 0;
// }
// #include<stdio.h>
// #include<stdbool.h>
// int main()
// {
//     int a = 10, b = 6, c= 7;

//     bool result = !(a<b || a<b || a<c);
//     printf("result = %d\n", result);
//     return 0;
// }

// #include<stdio.h>
// #include<stdbool.h>
// int main()
// {
//     int a = 10, b = 6, c= 7;

//     bool result = !(a>b && a>b && a>c);
//     printf("result = %d\n", result);
//     return 0;
// }

// #include<stdio.h>

// int main()
// {
//     int a = 10;

//     printf("a = 10\n");

//     if(a = 10);
//     {
//         printf("after a = 10\n");
//     }

//     printf("then a = 10\n");
// }
// #include<stdio.h>

// int main()
// {
//     int a = 10;

//     printf("a = 10\n");

//     if(a != 8)
//     {
//         printf("after a = 10\n");
//     }

//     printf("then a = 10\n");
// }
// #include<stdio.h>

// int main()
// {
//     int a = 10;

//     printf("a = 10\n");

//     if(a == 8)
//     {
//         printf("after a = 10\n");
//     }

//     printf("then a = 10\n");
// }

// #include<stdio.h>

// int main()
// {
//     int a = 12;

//     if(a < 10)
//     {
//         a += 100;
//         printf("hello if\n");
//     }

//     printf("%d\n", a);
// }
// #include<stdio.h>

// int main()
// {
//     int a = 9;

//     if(a < 10)
//     {
//         a += 100;
//         printf("hello if\n");
//     }

//     printf("%d\n", a);
// }

// #include<stdio.h>

// int main()
// {
//     int a = 9;

//     if(a < 10)
//     {
//         printf("a gretar equal 10\n");
//     }
//     else
//     {
//         printf("a not gretar equal 10\n");
//     }

// }

// #include<stdio.h>

// int main()
// {
//     int a = 12;

//     if(a < 10)
//     {
//         printf("a gretar equal 10\n");
//     }
//     else
//     {
//         printf("a not gretar equal 10\n");
//     }
// }

// #include<stdio.h>
// int main()
// {
//     int a = 40;
//     if(a <= 50)
//     {
//         printf("Buy 2 eggs\n");
//     }
//     else
//     {
//         printf("Buy 1 eggs\n");
//     }
// }
// #include<stdio.h>
// int main()
// {
//     int a = 60;
//     if(a <= 50)
//     {
//         printf("Buy 2 eggs\n");
//     }
//     else
//     {
//         printf("Buy 1 eggs\n");
//     }
// }

// #include<stdio.h>
// int main()
// {
//     int a = 40;
//     if(a <= 50)
//     {
//         printf("Buy 2 eggs\n");
//         printf("Take %d Taka back", 50 - a);
//     }
//     else
//     {
//         printf("Buy 1 eggs\n");
//     }
// }

// #include<stdio.h>
// int main()
// {
//     int a = 50;
//     if(a <= 40)
//     {
//         printf("Buy 2 eggs\n");
//     }
//     else
//     {
//         printf("Buy 1 eggs\n");
//         printf("give %d Taka", 50 - a);
//     }
// }

// #include<stdio.h>

// int main()
// {
//     int a;
//     scanf("%d", &a);
//     if(a < 5)
//     {
//         printf("a is less than 5\n");
//     }
//     else if(a < 10)
//     {
//         printf("a is less then 10\n");
//     }
//     else if(a < 20)
//     {
//         printf("a is less then 20\n");
//     }
//     else if(a < 30)
//     {
//         printf("a is less then 30\n");
//     }
//     else if(a < 30)
//     {
//         printf("a is less then 30\n");
//     }
//     else if(a < 40)
//     {
//         printf("a is less then 40\n");
//     }
//     else if(a < 50)
//     {
//         printf("a is less then 50\n");
//     }
//     else if(a < 100)
//     {
//         printf("a is less then 100\n");
//     }
//     else if(a < 200)
//     {
//         printf("a is less then 200\n");
//     }
//     else
//     {
//         printf("a is less then 200+\n");
//     }

//     printf("this is final number");
// }

// #include <stdio.h>
// #include <stdbool.h>
// int main()
// {
//     int tourDays = 1;
//     if (tourDays == 2)
//     {
//         bool isBoatAvailable = false;
//         if(isBoatAvailable)
//         {
//             printf("going to cox's bazar\n");
//         }
//         else
//         printf("not going  to cox's bazar");
//     }
//     else if(tourDays == 4)
//     {
//         bool shipAvailable = true;
//         if(shipAvailable)
//         {
//             printf("going to saint martin\n");
//         }
//         else
//         {
//             printf("not going to saint martin");
//         }
//     }
//     else{
//         printf("kotaw jabo na");
//     }

//     return 0;

// }

// #include<stdio.h>

// int main()
// {
//     int day = 5;
//     if(day == 1)
//     {
//         printf("saturday\n");
//     }
//     else if (day == 2)
//     {
//         printf("sunday\n");
//     }
//     else if (day == 3)
//     {
//         printf("monday\n");
//     }
//     else if (day == 4)
//     {
//         printf("tuesday\n");
//     }
//     else if (day == 5)
//     {
//         printf("wednesday\n");
//     }
//     else if (day == 6)
//     {
//         printf("thursday\n");
//     }
//     else if (day == 7)
//     {
//         printf("thursday\n");
//     }
//     else{
//         printf("wrong day\n");
//     }

//     return 0;

// }

// #include<stdio.h>

// int main()
// {
//     int day = 5;
//     switch (day)
//     {
//     case 1:
//         printf("saturday\n");
//         break;
//     case 2:
//         printf("sunday\n");
//         break;
//     case 3:
//         printf("monday\n");
//         break;
//     case 4:
//         printf("tuesday\n");
//         break;
//     case 5:
//         printf("wednesday\n");
//         break;
//     case 6:
//         printf("thursday\n");
//         break;
//     case 7:
//         printf("friday\n");
//         break;

//     default:
//         printf("wrong day\n");
//     }
//     printf("wrong day");

//     return 0;
// }

// #include<stdio.h>

// int main()
// {
//     int day = 1, hour = 5;
//     switch (day)
//     {
//     case 1:
//         switch (hour)
//         {
//         case 5:
//             printf("amra scl e jabo na\n");
//             break;

//         default:
//             printf("taile scl e jabo\n");
//         }
//         break;
//     case 2:
//         printf("sunday\n");
//         break;
//     case 3:
//         printf("monday\n");
//         break;
//     case 4:
//         printf("tuesday\n");
//         break;
//     case 5:
//         printf("wednesday\n");
//         break;
//     case 6:
//         printf("thursday\n");
//         break;
//     case 7:
//         printf("friday\n");
//         break;

//     default:
//         printf("wrong day\n");
//     }
//     printf("wrong day");

//     return 0;
// }

// #include <stdio.h>

// int main() {
//     int day;
//     printf("Enter a number (1-7): ");
//     scanf("%d", &day);

//     switch (day) {
//         case 1:
//             printf("Monday");
//             break;
//         case 2:
//             printf("Tuesday");
//             break;
//         case 3:
//             printf("Wednesday");
//             break;
//         case 4:
//             printf("Thursday");
//             break;
//         case 5:
//             printf("Friday");
//             break;
//         case 6:
//             printf("Saturday");
//             break;
//         case 7:
//             printf("Sunday");
//             break;
//         default:
//             printf("Invalid input");
//     }
//     return 0;
// }

// #include <stdio.h>
// int main()
// {
//     int a = 5;
//     a--;
//     printf("%d", --a);
// }

// #include <stdio.h>
// int main()
// {
//     int a = 10;
//     int x = a++;
//     --x;
//     a--;
//     int y = --x;
//     printf("%d", y--);
// }

// #include <stdio.h>
// int main()
// {
//     int x = 10;
//     int y = 12;
//     if(x>=y || x<=y)
//     {
//         printf("hi");
//     }
//     else
//     {
//         printf("hello");
//     }
// }

// #include <stdio.h>
// int main()
// {
//     int x = 10;
//     int y = 12;
//     if(x>=y || x<=y)
//     {
//         printf("hi ");
//     }

//     printf("hello");
// }

// #include <stdio.h>
// int main()
// {
//     int x = 5;
//     if (x < 10)
//     {
//         printf("hello ");
//     }
//     if (x == 5)
//     {
//         printf("hi");
//     }
//     else
//     {
//         printf("no");
//     }
// }
