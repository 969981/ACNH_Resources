
ulong FUN_036086e4(long param_1)

{
  long lVar1;
  long lVar2;
  uint uVar3;
  ulong uVar4;
  ulong uVar5;
  
  if ((((*(byte *)(param_1 + 9) & 0x83) != 0x81) &&
      ((*(byte *)(*(long *)(param_1 + 0x1968) + 9) & 0x83) != 0x81)) &&
     (*(char *)(param_1 + -0x25a5) == '\0')) {
    if (*(char *)(param_1 + -0x25a6) == '\0') {
      if ((*(byte *)(param_1 + -0x177d) >> 2 & 1) == 0) goto LAB_036087e8;
    }
    else if (*(char *)(param_1 + 0xe) != '\0') {
LAB_036087e8:
      uVar4 = *(ulong *)(param_1 + -0x30);
      lVar2 = *(long *)(param_1 + -0x2538);
      uVar5 = lVar2 - *(long *)(param_1 + 0x10);
      if (((int)*(long *)(param_1 + 0x10) - (int)uVar4 & 4U) != 0) {
        uVar5 = uVar5 + 4;
      }
      uVar3 = *(int *)(param_1 + 0x1c) + (int)(uVar5 >> 3);
      uVar5 = (lVar2 - uVar4 & 0xfffffffffffffffc) + uVar4;
      if ((lVar2 - uVar4 & 4) != 0) {
        uVar5 = uVar5 - 4;
      }
      if (uVar5 != 0xffffffffffffffff) {
        if (uVar5 != uVar4) {
          uVar5 = uVar5 & ((long)uVar5 >> 0x3f ^ 0xffffffffffffffffU);
          uVar4 = 8;
          goto LAB_03608794;
        }
        if (-1 < (long)uVar4) {
          uVar5 = *(ulong *)(param_1 + 0x28);
          uVar4 = 8;
          goto LAB_03608794;
        }
      }
      uVar5 = 0;
      uVar4 = 8;
      goto LAB_03608794;
    }
  }
  uVar4 = *(ulong *)(param_1 + -0x30);
  uVar5 = *(long *)(param_1 + 0x10) - uVar4;
  lVar2 = *(long *)(param_1 + -0x2538);
  lVar1 = (lVar2 - *(long *)(param_1 + 0x10)) + (uVar5 & 0x7f);
  if ((uVar5 & 0x80) != 0) {
    lVar1 = lVar1 + 0x80;
  }
  uVar3 = *(int *)(param_1 + 0x18) + (int)((ulong)lVar1 >> 8);
  uVar5 = (lVar2 - uVar4 & 0xffffffffffffff80) + uVar4;
  if ((lVar2 - uVar4 & 0x80) != 0) {
    uVar5 = uVar5 - 0x80;
  }
  if (uVar5 == 0xffffffffffffffff) {
LAB_03608784:
    uVar5 = 0;
  }
  else if (uVar5 == uVar4) {
    if ((long)uVar4 < 0) goto LAB_03608784;
    uVar5 = *(ulong *)(param_1 + 0x20);
  }
  else {
    uVar5 = uVar5 & ((long)uVar5 >> 0x3f ^ 0xffffffffffffffffU);
  }
  uVar4 = 0x100;
LAB_03608794:
  if (lVar2 - uVar5 <= uVar4) {
    uVar3 = 2 - (uVar3 & 3);
    if (((*(byte *)(param_1 + 9) ^ 0xff) & 0x81) != 0) {
      uVar3 = 2;
    }
    uVar5 = uVar3 * uVar4 - (lVar2 - uVar5);
    uVar4 = 4;
    if (uVar5 != 0) {
      uVar4 = uVar5;
    }
  }
  return uVar4;
}

