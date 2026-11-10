
void FUN_001c2814(long param_1,long *param_2,undefined8 param_3,undefined8 param_4,
                 undefined4 param_5)

{
  short sVar1;
  short sVar2;
  undefined4 uVar3;
  ulong uVar4;
  long lVar5;
  long lVar6;
  undefined1 auStack_d0 [144];
  
  sVar1 = FUN_001e14f8(param_4);
  sVar2 = FUN_001e00b4();
  if (sVar1 == sVar2) {
    uVar4 = FUN_001c2a70(param_1,param_3,param_5);
    if ((uVar4 & 1) == 0) {
      *(int *)(param_1 + 0x550) = *(int *)(param_1 + 0x550) + 1;
                    /* WARNING: Could not recover jumptable at 0x001c289c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
      (**(code **)(*param_2 + 0x28))(param_2,param_3,param_4);
      return;
    }
  }
  else {
    if (*(char *)(param_1 + 0x468) != '\0') {
      uVar4 = FUN_001bcf54(param_1 + 0x458,param_4,0);
      if ((uVar4 & 1) != 0) {
        FUN_001bd160(param_1 + 0x458,param_3,param_4,param_5);
        return;
      }
    }
    if (*(char *)(param_1 + 0x440) != '\0') {
      uVar4 = FUN_001d681c(param_1 + 0x438,param_4,0);
      if ((uVar4 & 1) != 0) {
        FUN_001c2cd0(param_1 + 0x438,param_3,param_4,param_5);
        return;
      }
    }
    lVar6 = *(long *)(param_1 + 0x1d8);
    if (lVar6 == 0) {
LAB_001c29a8:
      *(int *)(param_1 + 0x550) = *(int *)(param_1 + 0x550) + 1;
      (**(code **)(*param_2 + 0x28))(param_2,param_3,param_4);
      return;
    }
    lVar5 = FUN_001de6d0(lVar6 + 8,param_4);
    if (lVar6 + 0x10 == lVar5) {
      uVar3 = FUN_001e14f8(param_4);
      FUN_001e17ec(auStack_d0,0,uVar3);
      lVar6 = FUN_001de6d0(lVar6 + 8,auStack_d0);
      FUN_001e1868(auStack_d0);
      if (lVar5 == lVar6) goto LAB_001c29a8;
    }
  }
  return;
}

