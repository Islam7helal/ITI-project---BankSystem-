#include <stdio.h>
//#include "BankAdmin.h"
#include "BankSystem.h"
#include "BankDb.h"



int main (void){
	
		Bank_welcome();

		while (1){

				
				switch (Bank_select_window())
				{
					case 1: 
					Bank_Admin();
					break;
					
					case 2:
					Bank_client();
					break;
				}
				
			}

		return 0;

	}
