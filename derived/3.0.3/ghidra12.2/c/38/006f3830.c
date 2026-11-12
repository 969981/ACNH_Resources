
undefined * FUN_006f3830(ushort param_1)

{
  int iVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  ulong uVar5;
  
  if (((DAT_04c89408 & 1) == 0) && (iVar2 = __cxa_guard_acquire(&DAT_04c89408), iVar2 != 0)) {
    DAT_04c893f8 = 0xb0;
    DAT_04c89400 = &DAT_0414e0f4;
    __cxa_guard_release(&DAT_04c89408);
  }
  if (DAT_04c893f8 != 0) {
    if ((int)DAT_04c893f8 < 2) {
      uVar5 = 0;
    }
    else {
      uVar5 = 0;
      iVar2 = DAT_04c893f8 - 1;
      do {
        uVar3 = (uint)uVar5;
        iVar1 = iVar2 + uVar3;
        if (iVar1 < 0 != SCARRY4(iVar2,uVar3)) {
          iVar1 = iVar1 + 1;
        }
        uVar4 = iVar1 >> 1;
        uVar5 = (ulong)uVar4;
        if (*(ushort *)(DAT_04c89400 + (-(ulong)(uVar4 >> 0x1f) & 0xfffffff800000000 | uVar5 << 3))
            == param_1) goto joined_r0x006f38d8;
        if (*(ushort *)(DAT_04c89400 + (-(ulong)(uVar4 >> 0x1f) & 0xfffffff800000000 | uVar5 << 3))
            < param_1) {
          uVar3 = uVar4 + 1;
        }
        else {
          iVar2 = uVar4 - 1;
        }
        uVar5 = (ulong)uVar3;
      } while ((int)uVar3 < iVar2);
    }
    if (*(ushort *)(DAT_04c89400 + (-(uVar5 >> 0x1f) & 0xfffffff800000000 | uVar5 << 3)) == param_1)
    {
      uVar4 = (uint)uVar5;
joined_r0x006f38d8:
      if (-1 < (int)uVar4) {
        uVar3 = (uint)uVar5;
        if (DAT_04c893f8 <= uVar3) {
          uVar3 = 0;
        }
        return DAT_04c89400 + (ulong)uVar3 * 8;
      }
    }
  }
  return (undefined *)0x0;
}

