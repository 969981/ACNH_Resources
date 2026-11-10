
void FUN_00100350(short *param_1,short *param_2)

{
  short sVar1;
  short *psVar2;
  
  sVar1 = *param_2;
  if (sVar1 != 0) {
    psVar2 = param_1;
    do {
      param_2 = param_2 + 1;
      param_1 = psVar2 + 1;
      *psVar2 = sVar1;
      sVar1 = *param_2;
      psVar2 = param_1;
    } while (sVar1 != 0);
  }
  *param_1 = 0;
  return;
}

