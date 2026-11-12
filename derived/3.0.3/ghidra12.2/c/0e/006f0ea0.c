
bool FUN_006f0ea0(ushort *param_1)

{
  int iVar1;
  uint uVar2;
  ushort uVar3;
  int iVar4;
  uint uVar5;
  ulong uVar6;
  ushort uVar7;
  
  if (((DAT_04c893b0 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_04c893b0), iVar4 != 0)) {
    DAT_04c893a0 = 0x32;
    DAT_04c893a8 = &DAT_0414dd7c;
    __cxa_guard_release(&DAT_04c893b0);
  }
  uVar3 = *param_1;
  uVar7 = uVar3;
  if (DAT_04c893a0 != 0) {
    if ((int)DAT_04c893a0 < 2) {
      uVar6 = 0;
    }
    else {
      uVar6 = 0;
      iVar4 = DAT_04c893a0 - 1;
      do {
        uVar5 = (uint)uVar6;
        iVar1 = iVar4 + uVar5;
        if (iVar1 < 0 != SCARRY4(iVar4,uVar5)) {
          iVar1 = iVar1 + 1;
        }
        uVar2 = iVar1 >> 1;
        uVar6 = (ulong)uVar2;
        if (*(ushort *)(DAT_04c893a8 + (-(ulong)(uVar2 >> 0x1f) & 0xfffffffc00000000 | uVar6 << 2))
            == uVar3) goto LAB_006f0f3c;
        if (*(ushort *)(DAT_04c893a8 + (-(ulong)(uVar2 >> 0x1f) & 0xfffffffc00000000 | uVar6 << 2))
            < uVar3) {
          uVar5 = uVar2 + 1;
        }
        else {
          iVar4 = uVar2 - 1;
        }
        uVar6 = (ulong)uVar5;
      } while ((int)uVar5 < iVar4);
    }
    if (*(ushort *)(DAT_04c893a8 + (-(uVar6 >> 0x1f) & 0xfffffffc00000000 | uVar6 << 2)) == uVar3) {
LAB_006f0f3c:
      uVar5 = (uint)uVar6;
      if (-1 < (int)uVar5) {
        if (DAT_04c893a0 <= uVar5) {
          uVar5 = 0;
        }
        uVar7 = *(ushort *)(DAT_04c893a8 + (ulong)uVar5 * 4 + 2);
      }
    }
  }
  *param_1 = uVar7;
  return uVar7 != uVar3;
}

