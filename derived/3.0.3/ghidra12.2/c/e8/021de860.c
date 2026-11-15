
undefined8 FUN_021de860(undefined4 *param_1)

{
  uint uVar1;
  ulong uVar2;
  long lVar3;
  
  lVar3 = *(long *)(DAT_053e0208 + 0x11e0);
  if (*(int *)(DAT_053e0208 + 0x11e8) < 1) {
    lVar3 = 0;
  }
  if (((lVar3 == 0 || (uint *)(lVar3 + -8) == (uint *)0x0) ||
      (uVar1 = *(uint *)(lVar3 + -8), 9 < uVar1)) || ((&DAT_053fee41)[(ulong)uVar1 * 0xba0] == '\0')
     ) {
    return 0;
  }
  uVar2 = (ulong)uVar1;
  *param_1 = (&DAT_053feb14)[uVar2 * 0x2e8];
  param_1[1] = (&DAT_053feb18)[uVar2 * 0x2e8];
  param_1[2] = (&DAT_053feb1c)[uVar2 * 0x2e8];
  return 1;
}

