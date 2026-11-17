
undefined8 FUN_02a56ed0(undefined8 *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  undefined8 uVar3;
  long lVar4;
  
  uVar2 = *param_2;
  uVar1 = 0;
  if (uVar2 != 99999 && -1 < (int)uVar2) {
    uVar1 = uVar2 & ((int)uVar2 >> 0x1f ^ 0xffffffffU);
  }
  lVar4 = *(long *)(DAT_055f6860 + 0x19f820);
  if (lVar4 == 0) {
    return 0;
  }
  do {
    while ((int)uVar1 < *(int *)(lVar4 + 0x20)) {
      lVar4 = *(long *)(lVar4 + 8);
      if (lVar4 == 0) {
        return 0;
      }
    }
    if ((int)uVar1 <= *(int *)(lVar4 + 0x20)) {
      uVar3 = *(undefined8 *)(lVar4 + 0x28);
      *(undefined1 *)(param_1 + 1) = *(undefined1 *)(lVar4 + 0x30);
      *param_1 = uVar3;
      param_1[3] = *(undefined8 *)(lVar4 + 0x40);
      return 1;
    }
    lVar4 = *(long *)(lVar4 + 0x10);
  } while (lVar4 != 0);
  return 0;
}

