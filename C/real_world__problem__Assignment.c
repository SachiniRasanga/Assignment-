#include <stdio.h>
int main(void)
 {
    char type, ch = 'Y';
    int count = 0, countR = 0, countD = 0, countF = 0, countS = 0, countM = 0;
    float qty, tot, ntot, dis1, dis2, dis3, dis4, dis5, delcharge = 200, stot, sumR, sumD, sumF, sumS, sumM;
	/*R = Rice, D = Dhal, F = Fish tin, S = Sugar, M = Milk powder
	qty = Quantity, 
	tot = Total
	dis = Discount
	ntot = New Total
	delcharge = Delivery charges
	stot = Sub total*/
    while ((count <= 10)  && (ch == 'Y')){
		printf("\nEnter  food type : ");
		scanf(" %c", &type);
		printf("Enter qty : ");
		scanf(" %f", &qty);
		if (type == 'r' || type == 'R')
			countR+=qty;
		else if (type == 'd' || type == 'D')
			countD+=qty;
		else if (type == 'f' || type == 'F')
			countF+=qty;
		else if (type == 's' || type == 'S')
			countS+=qty;
		else if (type == 'm' || type == 'M')
			countM+=qty;
		else
			printf("Invalid food type\n");
			count++;
			if (count >= 10){
				printf("\nYou have reached the maximum number of oders for once\n");
				break;
			}
			else{
				printf("\nDo you want to place another order (Y/N): ");
				scanf("%*c%c", &ch);
			}
	}
		sumR = (countR*98);
		sumD = (countD*160);
		sumF = (countF*225);
		sumS = (countS*110);
		sumM = (countM*950);
		tot = (sumR + sumD + sumF + sumS + sumM);
		printf ("\n-----------------------------------------------------------\n");
		printf ("Rice				%d kg		Rs.%.2f\n",countR,sumR);
		printf ("Dhal				%d kg		Rs.%.2f\n",countD,sumD);
		printf ("Fish tin			%d pcs		Rs.%.2f\n",countF,sumF);
		printf ("Suger				%d kg		Rs.%.2f\n",countS,sumS);
		printf ("Milk powder(1 kg)		%d pcs		Rs.%.2f\n",countM,sumM);
		printf ("-----------------------------------------------------------\n");
		printf ("Total amount:					Rs.%.2f\n",tot);

		if(tot>10000){
			dis1 = tot*0.20;
			ntot = tot - dis1;
			stot = ntot + delcharge;
			printf ("Discount(20%):					Rs.%.2f\n",tot*0.20);
			printf ("New total:					Rs.%.2f\n",ntot);
			printf ("Delivery charge:				Free Delivery\n");
			printf ("Sub total:					Rs.%.2f\n",stot);
			printf ("-----------------------------------------------------------\n");
			printf ("--------------- Thank you. Visit us again. ----------------\n");
			printf ("-----------------------------------------------------------\n");
		}


		else if (tot>5000){
			dis2 = tot*0.15;
			ntot = tot - dis2;
			stot = ntot + delcharge;
			printf ("Discount(15%):					Rs.%.2f\n",tot*0.15);
			printf ("New total:					Rs.%.2f\n",ntot);
			printf ("Delivery charge:				Rs.%.2f\n",delcharge);
			printf ("Sub total:					Rs.%.2f\n",stot);
			printf ("-----------------------------------------------------------\n");
			printf ("--------------- Thank you. Visit us again. ----------------\n");
			printf ("-----------------------------------------------------------\n");
		}
		else if(tot>3000){
			dis3 = tot*0.10;
			ntot = tot - dis3;
			stot = ntot + delcharge;
			printf ("Discount(10%):					Rs.%.2f\n",tot*0.10);
			printf ("New total:					Rs.%.2f\n",ntot);
			printf ("Delivery charge:				Rs.%.2f\n",delcharge);
			printf ("Sub total:					Rs.%.2f\n",stot);
			printf ("-----------------------------------------------------------\n");
			printf ("--------------- Thank you. Visit us again. ----------------\n");
			printf ("-----------------------------------------------------------\n");
		}
		else if(tot>2000){
			dis4 = tot*0.05;
			ntot = tot - dis4;
			stot = ntot + delcharge;
			printf ("Discount(5%):					Rs.%.2f\n",tot*0.05);
			printf ("New total:					Rs.%.2f\n",ntot);
			printf ("Delivery charge:				Rs.%.2f\n",delcharge);
			printf ("Sub total:					Rs.%.2f\n",stot);
			printf ("-----------------------------------------------------------\n");
			printf ("--------------- Thank you. Visit us again. ----------------\n");
			printf ("-----------------------------------------------------------\n");
		}
		else if(tot>1500){
			dis5 = tot*0.02;
			ntot = tot - dis5;
			stot = ntot + delcharge;
			printf ("Discount(2%):					Rs.%.2f\n",tot*0.02);
			printf ("New total:					Rs.%.2f\n",ntot);
			printf ("Delivery charge:				Rs.%.2f\n",delcharge);
			printf ("Sub total:						Rs.%.2f\n",stot);
			printf ("-----------------------------------------------------------\n");
			printf ("--------------- Thank you. Visit us again. ----------------\n");
			printf ("-----------------------------------------------------------\n");
		}
		else{
			ntot = tot - 0;
			stot = ntot + delcharge;
			printf ("Discount(0%):					No Discount\n");
			printf ("Delivery charge:				Rs.%.2f\n",delcharge);
			printf ("Sub total:					Rs.%.2f\n",stot);
			printf ("-----------------------------------------------------------\n");
			printf ("--------------- Thank you. Visit us again. ----------------\n");
			printf ("-----------------------------------------------------------\n");
		}
	return 0;
}









