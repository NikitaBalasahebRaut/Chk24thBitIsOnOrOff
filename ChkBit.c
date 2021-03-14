/*
    Problem statement :
 Accept number from user and check whether 24th bit is on or off.
 
 Input :   8388608
 Binary :    0000   0000    1000    0000    0000    0000    0000    0000
 Output : TRUE
 
 Input :   35
 Binary :   0000    0000    0000    0000    0000    0000    0010    0011
 Output : FALSE
 
 */
 
  #include<stdio.h>
 #define TRUE 1
 #define FALSE 0
 typedef int BOOL;
 
 BOOL ChkBit(int iValue)
 {
	int iMask = 0x00800000;
    int iResult = 0;
	
	if(iValue < 0)
	{
		iValue = -iValue;
	}
 
    iResult = iValue & iMask;

    if(iResult == iMask	)
	{
		 return TRUE;
	}
	else
	{
		return FALSE;
	}
	 
 }
 
 int main()
 {
  int iNo = 0;
  BOOL bRet = FALSE;
  
  printf("enter the number \n");
  scanf("%d",&iNo);
  
  bRet = ChkBit(iNo);
  
  if(bRet == TRUE)
  {
     printf("Bit is on \n");
  }
  else
  {
     printf("Bit is off \n");
  }
 
 return 0;
 }
 
 /*
 
 output
 
 enter the number
9112431167
Bit is off

D:\ProgramTopicWise\LB\6ProblemsOnBitWiseOperator\Chk24Bit>myexe
enter the number
86
Bit is off

D:\ProgramTopicWise\LB\6ProblemsOnBitWiseOperator\Chk24Bit>myexe
enter the number
43
Bit is off

*/