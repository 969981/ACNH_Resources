
undefined8 FUN_003ce5d0(long param_1,int param_2)

{
  int iVar1;
  long lVar2;
  int iVar3;
  uint uVar4;
  
  iVar1 = *(int *)(param_1 + 0x40);
  if (iVar1 != 0) {
    lVar2 = *(long *)(param_1 + 8);
    if (lVar2 == param_1) {
      if (0 < iVar1) {
        return 1;
      }
    }
    else {
      iVar3 = 0;
      do {
        lVar2 = *(long *)(lVar2 + 8);
        iVar3 = iVar3 + 1;
      } while (lVar2 != param_1);
      if (iVar3 < iVar1) {
        return 1;
      }
    }
    uVar4 = *(int *)(*(long *)(param_1 + 0x18) + -0x174) +
            (uint)*(byte *)(*(long *)(param_1 + 0x18) + -0xf8);
    uVar4 = uVar4 & ((int)uVar4 >> 0x1f ^ 0xffffffffU);
    if (0x7e < (int)uVar4) {
      uVar4 = 0x7f;
    }
    if (*(char *)(param_1 + 0x80) == '\0') {
      if ((int)uVar4 <= param_2) {
        return 1;
      }
    }
    else if ((int)uVar4 < param_2) {
      return 1;
    }
  }
  return 0;
}

