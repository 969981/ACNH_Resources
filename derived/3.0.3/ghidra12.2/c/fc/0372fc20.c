
int FUN_0372fc20(long param_1,int *param_2)

{
  uint uVar1;
  int iVar2;
  long lVar3;
  long lVar4;
  undefined *local_30;
  char *pcStack_28;
  
  uVar1 = *(uint *)(param_1 + 0xe0);
  if (uVar1 == 0) {
    return 0;
  }
  lVar3 = 0;
  lVar4 = (long)(int)uVar1 << 3;
  while (*param_2 != *(int *)(*(long *)(*(long *)(param_1 + 0xe8) + lVar3 * 8) + 8)) {
    lVar3 = lVar3 + 1;
    lVar4 = lVar4 + -8;
    if (lVar4 == 0) {
      return 0;
    }
  }
  if ((uint)lVar3 < uVar1) {
    lVar3 = *(long *)(*(long *)(param_1 + 0xe8) + lVar3 * 8);
  }
  else {
    lVar3 = 0;
  }
  if (DAT_05abbc50 == *(int *)(lVar3 + 0xe4)) {
    return DAT_05abbc50;
  }
  local_30 = PTR_DAT_04bb2020 + 0x10;
  pcStack_28 = "GetCookingRecipeToday";
  iVar2 = FUN_02758850(&local_30);
  if (iVar2 == 0) {
    if (*(int *)(lVar3 + 0xd8) == 0xd) {
      return 0x20;
    }
    if (*(int *)(lVar3 + 0xd8) == 0xe) {
      return 0x21;
    }
  }
  return *(int *)(lVar3 + 0xe4);
}

