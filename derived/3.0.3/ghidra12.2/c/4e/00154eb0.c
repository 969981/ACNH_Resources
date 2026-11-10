
undefined8 FUN_00154eb0(undefined8 param_1,char *param_2,ulong param_3)

{
  byte bVar1;
  undefined8 uVar2;
  byte *pbVar3;
  char *pcVar4;
  byte abStack_b0 [128];
  
  if ((param_3 & 0xffffffffffffff01) != 1) {
    return 0x2b;
  }
  memset(abStack_b0,0,0x80);
  param_3 = param_3 - 1;
  uVar2 = FUN_00154d70(param_1,abStack_b0,param_3 >> 1);
  if ((int)uVar2 == 0) {
    if (param_3 != 0) {
      pbVar3 = abStack_b0;
      pcVar4 = param_2;
      do {
        bVar1 = *pbVar3;
        param_3 = param_3 - 2;
        *pcVar4 = "0123456789abcdef"[bVar1 >> 4];
        param_2 = pcVar4 + 2;
        pcVar4[1] = "0123456789abcdef"[(ulong)bVar1 & 0xf];
        pbVar3 = pbVar3 + 1;
        pcVar4 = param_2;
      } while (param_3 != 0);
    }
    uVar2 = 0;
    *param_2 = '\0';
  }
  return uVar2;
}

