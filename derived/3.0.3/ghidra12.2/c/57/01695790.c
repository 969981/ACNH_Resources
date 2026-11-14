
uint FUN_01695790(long param_1,long param_2,uint param_3)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  
  uVar3 = *(uint *)(param_2 + 0x10);
  if ((((DAT_05233970 <= (int)uVar3) && (*(int *)(param_2 + 0x20) <= DAT_05233980)) &&
      (iVar4 = *(int *)(param_2 + 0x14), DAT_05233974 <= iVar4)) &&
     (*(int *)(param_2 + 0x24) <= DAT_05233984)) {
    iVar1 = *(int *)(param_2 + 0x24) + 1;
    if (iVar1 != iVar4) {
      uVar5 = uVar3;
      do {
        uVar2 = uVar5 + iVar4 * 0x200;
        if ((uVar2 >> 0x11 == 0) &&
           ((*(uint *)(param_1 + 8 + (ulong)(uVar2 >> 5) * 4) >> (ulong)(uVar5 & 0x1f) & 1) != 0)) {
          return 1;
        }
        if ((int)uVar5 < *(int *)(param_2 + 0x20)) {
          uVar5 = uVar5 + 1;
        }
        else {
          iVar4 = iVar4 + 1;
          uVar5 = uVar3;
        }
      } while ((uVar3 != uVar5) || (iVar1 != iVar4));
    }
    param_3 = 0;
  }
  return param_3 & 1;
}

