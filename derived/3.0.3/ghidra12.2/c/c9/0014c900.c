
byte FUN_0014c900(char *param_1)

{
  byte bVar1;
  int iVar2;
  char *pcVar3;
  long lVar4;
  byte bVar5;
  char *pcVar6;
  char *pcVar7;
  undefined4 local_14;
  
  bVar5 = 0;
  if (param_1 != (char *)0x0) {
    local_14 = 0;
    iVar2 = FUN_0014b5f8(2,param_1,&local_14);
    if (iVar2 == 0) {
      pcVar3 = (char *)strlen(param_1);
      lVar4 = FUN_0014e898(param_1,0x2e,pcVar3);
      if ((lVar4 == 0) || (lVar4 = FUN_0014e898(param_1,0x2e,lVar4 - (long)param_1), lVar4 == 0)) {
        pcVar6 = (char *)0x0;
      }
      else {
        pcVar6 = (char *)(lVar4 + 1);
        pcVar3 = param_1 + ((long)pcVar3 - (long)pcVar6);
      }
      if (pcVar6 != (char *)0x0) {
        param_1 = pcVar6;
      }
      if ((long)pcVar3 < 1) {
        bVar5 = 5;
      }
      else {
        bVar5 = 5;
        pcVar6 = param_1;
        do {
          pcVar7 = pcVar6 + 1;
          bVar1 = FUN_00144a78(*pcVar6);
          bVar5 = bVar5 * '!' ^ bVar1;
          pcVar6 = pcVar7;
        } while (pcVar7 < param_1 + (long)pcVar3);
      }
    }
    else {
      bVar5 = 0;
    }
  }
  return bVar5;
}

