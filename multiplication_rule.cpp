#include <iostream>
#include<cmath>

using namespace std;

int main()
{
    int number1,number2,number3,n=0;
    int remainds  = 1;
    int rest = 1;
    int product = 1;
    cout<<"Enter the multiplying number : ";
    cin>>number1;
    cout<<"Enter the multiplier number : ";
    cin>>number2;
    number3 = number2;
    cout<<" \t\t  "<<number1<<endl;
    cout<<"x \t\t  "<<number2<<endl;
    cout<<"-------------------------"<<endl;
    while(number2!=0){
        remainds = number2 % 10;
        product = number1 *remainds*pow(10,n);
        cout<<number1<<" x "<<remainds<<" is\t"<<product<<endl;
        rest = number2 - remainds;
        number2 = rest/10;
        n++;
    }
    
    cout<<"-------------------------"<<endl;
    cout<<"ADD   them \t"<<number3*number1;

    return 0;
}
// #include<stdio.h>
// #include<math.h>
// int main (){
//   int num1, num2, i, int_p, multipy = 1, sum=0, abcd;
//   printf("Enter the two number: ");
//   scanf("%d", &num1);
//   scanf("%d", &num2);
//   int n = 1+(int)log10(num2);

//   printf("\t\t%d\n", num1);
//   printf("\tX\t%d\n", num2);
//   printf("-------------------------\n");

//   for(i=0; i<n; i++){
//       int_p = (int) num2%10;
//       num2 = num2 - int_p;
//       num2 = num2/10;
//       if(i != 0){
//         multipy = multipy*10;
//       }
//       sum = sum + num1*int_p*multipy;
//       printf ("(%dX%d)\t%d\n",num1,int_p, num1*int_p*multipy);
//   } 
//   printf("-------------------------\n");
//   printf ("\t\t%d\n",sum);
//     return 0;
// }