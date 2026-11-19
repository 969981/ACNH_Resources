
void FUN_0383dc80(long param_1)

{
  int iVar1;
  long lVar2;
  
  FUN_03f45838(param_1 + 0x80);
  lVar2 = *(long *)(param_1 + 0x20);
  if ((lVar2 != 0) && ((*(byte *)(lVar2 + 0xd8) >> 1 & 1) == 0)) {
    FUN_03bf3a60(lVar2);
    *(byte *)(lVar2 + 0xd8) = *(byte *)(lVar2 + 0xd8) | 2;
  }
  iVar1 = *(int *)(param_1 + 0x10);
  if (iVar1 == 3) {
    if (*(int *)(param_1 + 0x88) != 3) {
      if (*(int *)(param_1 + 0x88) != 2) {
        return;
      }
LAB_0383dd10:
      *(undefined4 *)(param_1 + 0x10) = 4;
      *(byte *)(param_1 + 8) = *(byte *)(param_1 + 8) | 2;
      return;
    }
    iVar1 = 2;
  }
  else if (iVar1 == 6) {
    iVar1 = *(int *)(param_1 + 0x88);
    if (iVar1 == 3) goto LAB_0383dd10;
    if (iVar1 != 2) {
      return;
    }
  }
  else {
    if (iVar1 != 5) {
      return;
    }
    iVar1 = 4;
  }
  *(int *)(param_1 + 0x10) = iVar1;
  return;
}

