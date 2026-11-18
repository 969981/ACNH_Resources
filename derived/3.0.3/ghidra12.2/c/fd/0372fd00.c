
bool FUN_0372fd00(long param_1,int *param_2)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  long lVar4;
  long lVar5;
  undefined *local_30;
  char *pcStack_28;
  
  iVar2 = DAT_05abbc50;
  uVar1 = *(uint *)(param_1 + 0xe0);
  if (uVar1 != 0) {
    lVar4 = 0;
    lVar5 = (long)(int)uVar1 << 3;
    do {
      if (*param_2 == *(int *)(*(long *)(*(long *)(param_1 + 0xe8) + lVar4 * 8) + 8)) {
        if ((uint)lVar4 < uVar1) {
          lVar4 = *(long *)(*(long *)(param_1 + 0xe8) + lVar4 * 8);
        }
        else {
          lVar4 = 0;
        }
        iVar3 = DAT_05abbc50;
        if (DAT_05abbc50 == *(int *)(lVar4 + 0xe4)) goto LAB_0372fd50;
        local_30 = PTR_DAT_04bb2020 + 0x10;
        pcStack_28 = "GetCookingRecipeToday";
        iVar3 = FUN_02758850(&local_30);
        if (iVar3 == 0) {
          if (*(int *)(lVar4 + 0xd8) == 0xd) {
            iVar3 = 0x20;
            goto LAB_0372fd50;
          }
          if (*(int *)(lVar4 + 0xd8) == 0xe) {
            iVar3 = 0x21;
            goto LAB_0372fd50;
          }
        }
        iVar3 = *(int *)(lVar4 + 0xe4);
        goto LAB_0372fd50;
      }
      lVar4 = lVar4 + 1;
      lVar5 = lVar5 + -8;
    } while (lVar5 != 0);
  }
  iVar3 = 0;
LAB_0372fd50:
  return iVar2 == iVar3;
}

