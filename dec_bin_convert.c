/*
	#include <stdio.h>

int main (){
	int num, bin=0, rem=0, place=1;
	
	printf("Enter a decimal number\n");
	scanf("%d", &num);
	
	printf("\nBinary equivalent of %d is ", num);
	while (num) {
		rem = num%2;
		num = num/2;
		bin = bin +(rem*place);
		place *=10;
	}
	printf("%d\n",bin);
}
*/

#include<stdio.h>
int main()
{
  int i,n,a[10];
  printf("\nEnter the Decimal value:");
  scanf("%d",&n);
  for(i=0;n!=0;i++)
  {
    a[i]=n%2;
    n=n/2;
  }
  n=i;
  printf("\nBinary Value:");
  for(i=0;i<n;i++)
  {
    printf("%d",a[n-i-1]);
  }
  return 0;
}
/*
function convertToBinary() {
    var decimal = document.getElementById("number").value;
    var num,rem;
    var bin = 0,place = 1;
    num = decimal;

    while(num > 0) {
      rem = num % 2;
      num = (num / 2);
      bin = bin + (rem * place);
      place *= 10;
    }

    document.getElementById("result-box").innerHTML = bin;
    
  }
*/
/*
function convertToBinary() {
  var decimal = document.getElementById("number").value;
  var mainno = parseInt(decimal);
  var result = mainno.toString(2);
  document.getElementById("result-box").innerHTML = result;
}
*/

