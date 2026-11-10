
void FUN_0018c150(long param_1,byte *param_2,long param_3)

{
  byte *pbVar1;
  char cVar2;
  char cVar3;
  
  if (param_3 != 0) {
    pbVar1 = (byte *)(param_1 + 1);
    do {
      cVar2 = '\t';
      if (5 < pbVar1[-1] - 0x41) {
        cVar2 = '\0';
      }
      cVar3 = -0x37;
      if (5 < *pbVar1 - 0x41) {
        cVar3 = -0x30;
      }
      param_3 = param_3 + -1;
      *param_2 = *pbVar1 + cVar3 | (pbVar1[-1] + cVar2) * '\x10';
      param_2 = param_2 + 1;
      pbVar1 = pbVar1 + 2;
    } while (param_3 != 0);
  }
  return;
}

