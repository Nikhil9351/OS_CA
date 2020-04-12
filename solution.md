
Consider a scenario of demand paged memory. Page table is held in registers. It takes
8 milliseconds to service a page fault if an empty page is available or the replaced page is not
modified and 20 milliseconds if the replaced page is modified. Memory access time is 100
nanoseconds. Assume that the page to be replaced is modified 70 percent of the time. Generate a
solution to find maximum acceptable page-fault rate for access time that is not more than 200
nanoseconds.


here we have :

PDFT_M = 8ms
PDFT_NM =20ms
mem_AT =100ns
eff_AT =200ns
time_pages_M =70%
page_fault=p

we know, 
   eff_AT  = (1-page_fault)*(mem_AT) + [ page_fault*(mem_AT+(1-(time_pages_M/100)*PDFT_M)]
	   +((time_pages_M/100)*PDFT_NM)
	=(1-p)*(100ns) + p*(100ns+((1-0.7)*(8ms)) + (0.7)*(20ms)
	
p= 6.0975609756097560975609756097561e-6
  = 6.01 e-06