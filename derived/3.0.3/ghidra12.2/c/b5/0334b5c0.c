
undefined8 FUN_0334b5c0(long param_1,long *param_2,long *param_3)

{
  bool bVar1;
  short sVar2;
  long lVar3;
  char *pcVar4;
  undefined8 uVar5;
  char *pcVar6;
  undefined1 auStack_50 [32];
  
  if (*(long *)(param_1 + 0x20) == 0) {
    return 0;
  }
  (**(code **)(*param_2 + 0x18))(param_2);
  lVar3 = FUN_00369da0(param_1,param_2[1]);
  uVar5 = 0;
  if (lVar3 != 0) {
    FUN_00360020(auStack_50,lVar3);
    sVar2 = FUN_0036013c(auStack_50);
    if (sVar2 == 0) {
LAB_0334b6a0:
      uVar5 = 0;
    }
    else {
      if (*(char *)param_3[1] != '\0') {
        pcVar4 = (char *)FUN_00360154(auStack_50);
        (**(code **)(*param_3 + 0x18))(param_3);
        (**(code **)(*param_3 + 0x18))(param_3);
        if ((char *)param_3[1] != pcVar4) {
          pcVar6 = (char *)param_3[1];
          lVar3 = 0x7ffff;
          do {
            if (*pcVar6 != *pcVar4) goto LAB_0334b6a0;
          } while ((*pcVar6 != '\0') &&
                  (bVar1 = lVar3 != 0, pcVar6 = pcVar6 + 1, lVar3 = lVar3 + -1, pcVar4 = pcVar4 + 1,
                  bVar1));
        }
      }
      uVar5 = 1;
    }
  }
  return uVar5;
}

