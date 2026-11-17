
void FUN_03195900(long param_1,short *param_2,uint param_3)

{
  ulong uVar1;
  long lVar2;
  int iVar3;
  ulong uVar4;
  int iVar5;
  
  lVar2 = param_1 + 0x1f8;
  uVar4 = (ulong)param_3;
  uVar1 = FUN_02672fb0(lVar2);
  if ((uVar1 & 1) != 0) {
    if (param_3 < 0x28) {
      FUN_02674700(lVar2,param_3,param_2,0,0);
    }
    else {
      FUN_026738b0(lVar2,param_2,0,0);
    }
  }
  if (*PTR_DAT_04c4b988 == '\0' && *param_2 == -2) {
    iVar5 = -1;
  }
  else {
    iVar5 = 0;
    iVar3 = 0;
    do {
      if ((*(int *)(param_1 + 0x268 + (long)iVar3 * 0x1a8 + 0x1a0) == 0) &&
         (lVar2 = param_1 + 0x268 + (long)iVar3 * 0x1a8, (*(byte *)(lVar2 + 0x18) >> 1 & 1) == 0)) {
        FUN_03412d40(lVar2,PTR_PTR_04bb2238,param_2,0);
        goto LAB_031959f0;
      }
      iVar3 = iVar3 + 1;
      iVar5 = iVar5 + 1;
    } while (iVar3 != 0x10e);
    iVar5 = -1;
  }
LAB_031959f0:
  if (0x27 < param_3) {
    uVar4 = 0;
  }
  *(int *)(param_1 + uVar4 * 4 + 0x1c1b8) = iVar5;
  return;
}

