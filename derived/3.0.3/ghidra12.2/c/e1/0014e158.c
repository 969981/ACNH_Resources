
byte * FUN_0014e158(byte *param_1,char *param_2,long *param_3)

{
  char *pcVar1;
  uint __c;
  byte *pbVar2;
  byte *pbVar3;
  
  if (param_1 == (byte *)0x0) {
    param_1 = (byte *)*param_3;
  }
  __c = (uint)*param_1;
  if (*param_1 != 0) {
    do {
      pbVar2 = param_1 + 1;
      pcVar1 = strchr(param_2,__c);
      if (pcVar1 == (char *)0x0) {
        do {
          pbVar3 = pbVar2;
          *param_3 = (long)pbVar3;
          if (*pbVar3 == 0) {
            return param_1;
          }
          pcVar1 = strchr(param_2,(uint)*pbVar3);
          pbVar2 = pbVar3 + 1;
        } while (pcVar1 == (char *)0x0);
        *pbVar3 = 0;
        *param_3 = *param_3 + 1;
        return param_1;
      }
      __c = (uint)*pbVar2;
      param_1 = pbVar2;
    } while (__c != 0);
  }
  return (byte *)0x0;
}

