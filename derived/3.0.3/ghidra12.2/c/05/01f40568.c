
bool FUN_01f40568(long *param_1)

{
  long lVar1;
  ulong uVar2;
  int iVar3;
  int iVar4;
  
  lVar1 = (**(code **)(*param_1 + 0x3a0))();
  if ((((*(int *)(lVar1 + 0xdc) == 1) && (*(int *)(lVar1 + 0x84) == 6)) &&
      (lVar1 = (**(code **)(*param_1 + 0x3a0))(param_1),
      *(int *)(lVar1 + 0x164) <= *(int *)(lVar1 + 0x15c))) &&
     ((*(int *)((long)param_1 + 0xaf34) == 0 &&
      (uVar2 = (**(code **)(*param_1 + 0x380))(param_1), (uVar2 & 1) != 0)))) {
    *(uint *)((long)param_1 + 0xaf3c) = *(uint *)((long)param_1 + 0xaf3c) | 0x2000;
    return true;
  }
  lVar1 = (**(code **)(*param_1 + 0x3a0))(param_1);
  if (*(int *)(lVar1 + 0xdc) == 1) {
    iVar4 = *(int *)(lVar1 + 0x168);
    if (iVar4 == 2) {
      if (*(int *)(lVar1 + 0x170) == 2) {
        return true;
      }
      if (*(char *)(lVar1 + 0x16c) == '\0') {
        iVar3 = *(int *)(lVar1 + 0x160);
        iVar4 = *(int *)(lVar1 + 0x164);
LAB_01f40694:
        iVar4 = iVar4 * 2;
        if (iVar4 < 0x709) {
          iVar4 = 0x708;
        }
        return iVar4 <= iVar3;
      }
    }
    else if (iVar4 == 1) {
      if (*(int *)(lVar1 + 0x170) == 2) {
        return true;
      }
      if (*(char *)(lVar1 + 0x16c) == '\0') {
        return 0x707 < *(int *)(lVar1 + 0x160);
      }
    }
    else if (iVar4 == 0) {
      iVar4 = *(int *)(lVar1 + 0x164);
      if (iVar4 <= *(int *)(lVar1 + 0x15c)) {
        return true;
      }
      if (*(int *)(lVar1 + 0x170) == 2) {
        return true;
      }
      if (*(char *)(lVar1 + 0x16c) == '\0') {
        iVar3 = *(int *)(lVar1 + 0x160);
        goto LAB_01f40694;
      }
    }
  }
  return false;
}

