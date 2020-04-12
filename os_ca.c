#include <stdio.h>
#include <stdlib.h>
double sol_fun(double PFST_NM,double PFST_M,double mem_AT,double times_page_M,double eff_AT);
double PFST_NM,
    PFST_M,
    mem_AT,
    times_page_M,
    eff_AT,
    pageFaultRate,
    PFST_NM_ns,
    PFST_M_ns,
    times_page_M_per;
int main()
{
	int ch;
	 while(1){
	 	printf("1.pre-coded values according to question \n 2.custom value \n 3.exit \n ");
	 	scanf("%d",&ch);
	 	switch(ch){
	 		case 1:
	 			system("cls");
	 			sol_fun(8,20,100,70,200);
	 			break;
			case 2:
				system("cls");
				printf("\nEnter service Page Fault (Not Modified):");
	            scanf("%lf",&PFST_NM);
	            printf("Enter Service Page Fault (Modified):");
	            scanf("%lf",&PFST_M);
 	            printf("Enter Memory Access Time(nanoseconds):");
	            scanf("%lf",&mem_AT);
	            printf("Enter Percentage of time the page to be replaced is modified:");
	            scanf("%lf",&times_page_M);
	            printf("Enter Effective Access time(nanoseconds):");
	            scanf("%lf",&eff_AT);
	            printf("------------------------------");
				sol_fun(PFST_NM,PFST_M,mem_AT,times_page_M,eff_AT);
				break;
			case 3:
				goto end_code;
				break;
	 		default:
	 			system("cls");
	 			continue;
	 			break;
		 }
	 }
end_code: ;
}
double sol_fun(double PFST_NM,double PFST_M,double mem_AT,double times_page_M,double eff_AT) {
	PFST_NM_ns = (PFST_NM*1000000);
	PFST_M_ns = (PFST_M*1000000);
	times_page_M_per = (times_page_M/100);
	printf("\nPage Fault rate calculated For:\n");
	printf("Service Page Fault(not Modified)= %lf ns \n",PFST_NM_ns );
	printf("Service Page Fault (Modified Page)= %lf ns \n",PFST_M_ns );
	printf("Percentage of time the page to be replaced is modified= %lf % \n",times_page_M);
	printf("Memory Access Time= %lf ns\n",mem_AT);
	printf("Effective Access Time= %lf ns\n",eff_AT);
	printf("\n Maximum Acceptable Page Fault rate = %.2e \n",
	(eff_AT - mem_AT)/(((1- times_page_M_per)*PFST_NM_ns)+(times_page_M_per*PFST_M_ns)));
	system("pause");
	system("cls");
}
