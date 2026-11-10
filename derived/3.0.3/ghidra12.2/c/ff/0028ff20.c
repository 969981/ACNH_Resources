
void FUN_0028ff20(char *param_1,byte *param_2,ulong param_3,uint param_4)

{
  byte *pbVar1;
  char *pcVar2;
  char cVar3;
  ulong uVar4;
  char *pcVar5;
  ulong uVar6;
  
  pcVar2 = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789-_";
  if ((param_4 & 1) == 0) {
    pcVar2 = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz0123456789+/";
  }
  uVar4 = (param_3 / 3) * 3;
  if (uVar4 != 0) {
    uVar6 = 0;
    pcVar5 = param_1;
    do {
      pbVar1 = param_2 + uVar6;
      uVar6 = uVar6 + 3;
      *pcVar5 = pcVar2[*pbVar1 >> 2];
      pcVar5[1] = pcVar2[(ulong)(pbVar1[1] >> 4) | ((ulong)*pbVar1 & 3) << 4];
      pcVar5[2] = pcVar2[(ulong)(pbVar1[2] >> 6) | ((ulong)pbVar1[1] & 0xf) << 2];
      param_1 = pcVar5 + 4;
      pcVar5[3] = pcVar2[(ulong)pbVar1[2] & 0x3f];
      pcVar5 = param_1;
    } while (uVar6 < uVar4);
    param_2 = param_2 + uVar6;
  }
  if (param_3 % 3 == 1) {
    *param_1 = pcVar2[*param_2 >> 2];
    cVar3 = pcVar2[((ulong)*param_2 & 3) * 0x10];
    param_1[2] = '=';
    param_1[1] = cVar3;
  }
  else {
    if (param_3 % 3 != 2) {
      return;
    }
    *param_1 = pcVar2[*param_2 >> 2];
    param_1[1] = pcVar2[(ulong)(param_2[1] >> 4) | ((ulong)*param_2 & 3) << 4];
    param_1[2] = pcVar2[((ulong)param_2[1] & 0xf) * 4];
  }
  param_1[3] = '=';
  return;
}

