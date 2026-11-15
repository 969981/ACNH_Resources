
undefined8 FUN_021de7e0(long param_1)

{
  uint uVar1;
  long lVar2;
  undefined *puVar3;
  
  if ((param_1 != 0) && (uVar1 = *(uint *)(param_1 + 0x508), uVar1 != 0xffffffff)) {
    lVar2 = *(long *)(DAT_053e0208 + 0x11e0);
    if (*(int *)(DAT_053e0208 + 0x11e8) < 1) {
      lVar2 = 0;
    }
    if (lVar2 != 0 && (int *)(lVar2 + -8) != (int *)0x0) {
      puVar3 = &DAT_053fe348 + (ulong)uVar1 * 0xba0;
      if (9 < uVar1) {
        puVar3 = &DAT_053fe348;
      }
      if (*(int *)(lVar2 + -8) == (int)(char)puVar3[0xaf8]) {
        return 1;
      }
    }
  }
  return 0;
}

