#include <stdio.h> //remove #

int main(){
  int umur;
	char nama[60]; //chage {} to []
	char ice[20];
	printf("%c Mari Belajar Algoritma dengan Bahasa C %C\n",3,3);
	printf("========================================\n\n"); //changes Printf to printf | ‘’ to ""
	printf("Masukkan nama anda[13..52] : "); //change prIntf to printf
	scanf("%[^\n]s",nama); //change SCANF to scanf | remove s
	fflush(stdin); //Ff_lush to fflush
	printf("Masukkan umur anda : ");
	scanf("%d",&umur); // add ; | add &
	fflush(stdin); // ffLush to fflush add ;
	
  printf("\n%c%c%c%c%c " ,3,3,3,3,3); //add , | change : to ;
	printf("BeLaJaR algo itu menyenangkan seperti makan es krim"); //cetak to printf | add ""
	printf(" %c%c%c%c%c\n",3,3,3,3,3); //printF to printf
	printf("Rasa Es Krim yang disukai : "); //add ;
	scanf("%s",&ice); //add "" | change : to ;

  printf("================================================================\n\n");
	printf("%s berumur %d tahun menyukai es krim rasa %s\n\n",nama,umur,ice); //%S to %s | %D to %d
	printf("    .-\"`'\"-.\n");
  printf("   /        \\\n");
  printf("   |        |\n");
  printf("   /'---'--`\\\n");
  printf("  |          |\n");
  printf("  \\.--.---.-./\n"); // add '\'
  printf("  (_.--._.-._)\n"); // add )
  printf("    \\=-=-=-/\n");
  printf("     \\=-=-/\n"); // add '\'
  printf("      \\=-/\n");
  printf("       \\/\n"); //PRINTF to printf add '\'
	printf("\n");
  printf("SELAMAT BELAJAR ALGORITMA %c !\n\n",2);
	
  fflush(stdin); // remove _
	getchar(); //getcharz to getchar
	return 0; // RETURN to return 
}