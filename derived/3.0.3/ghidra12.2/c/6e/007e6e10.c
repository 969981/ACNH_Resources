
byte FUN_007e6e10(ushort *param_1,uint param_2,uint param_3)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  byte bVar4;
  long lVar5;
  byte bVar6;
  uint uVar7;
  int iVar8;
  undefined8 *puVar9;
  long *plVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  
  uVar11 = (ulong)*param_1;
  uVar7 = (uint)*param_1;
  if ((uVar7 == DAT_04cb6038) || (*(long *)(param_1 + 8) == 0 && *(long *)(param_1 + 4) == 0)) {
    return 0;
  }
  if ((*PTR_DAT_04bb3128 & 1) == 0) {
    iVar8 = __cxa_guard_acquire(PTR_DAT_04bb3128);
    uVar11 = (ulong)uVar7;
    if (iVar8 != 0) {
      FUN_00706e58(&DAT_04c8c0f0);
      __cxa_guard_release(&DAT_04c8c100);
      uVar11 = (ulong)uVar7;
    }
  }
  if (0 < (int)DAT_04c8c0f0) {
    uVar12 = 0;
    do {
      if (*(int *)(DAT_04c8c0f8 + uVar12 * 4) == (int)(uVar11 >> 0xb)) goto LAB_007e6ea0;
      uVar12 = uVar12 + 1;
    } while (DAT_04c8c0f0 != uVar12);
  }
  uVar12 = 0;
LAB_007e6ea0:
  uVar7 = (uint)uVar12;
  if (((*PTR_DAT_04bb3128 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_04c8c100), iVar8 != 0)) {
    FUN_00706e58(&DAT_04c8c0f0);
    __cxa_guard_release(&DAT_04c8c100);
  }
  if (DAT_04c8c0f0 <= uVar7) {
    uVar7 = 0;
  }
  if (*(int *)(DAT_04c8c0f8 + (long)(int)uVar7 * 4) == 0x11) {
    lVar13 = *(long *)(param_1 + 8);
    if (lVar13 != 0) {
      plVar10 = *(long **)(lVar13 + 0x28);
joined_r0x007e6f10:
      if ((plVar10 == (long *)0x0) || ((undefined8 *)*plVar10 == (undefined8 *)0x0)) {
        uVar7 = 1;
      }
      else {
        uVar7 = (*(code *)**(undefined8 **)*plVar10)();
        uVar7 = uVar7 ^ 1;
      }
      uVar3 = param_3 + 0x1f;
      if (-1 < (int)param_3) {
        uVar3 = param_3;
      }
      lVar1 = *(long *)(lVar13 + 0x10) + *(long *)(lVar13 + 8) + 0xa5;
      uVar2 = param_2 + 0x1f;
      if (-1 < (int)param_2) {
        uVar2 = param_2;
      }
      uVar2 = ((int)uVar3 >> 5) * 2 + ((int)uVar2 >> 5);
      uVar3 = (int)param_2 % 0x20 + (param_3 - (uVar3 & 0x7ffffe0)) * 0x20;
      lVar5 = lVar1 + (ulong)uVar2 * 0x200;
      if (3 < uVar2) {
        lVar5 = lVar1;
      }
      uVar2 = uVar3 & 0x80000001;
      if ((int)uVar3 < 0) {
        uVar3 = uVar3 + 1;
      }
      bVar6 = *(byte *)(lVar5 + ((int)uVar3 >> 1));
      bVar4 = bVar6 >> 4;
      if (uVar2 != 1) {
        bVar4 = bVar6 & 0xf;
      }
      if ((uVar7 & 1) != 0) {
        return bVar4;
      }
      lVar13 = *(long *)(lVar13 + 0x28);
      goto joined_r0x007e7040;
    }
  }
  else {
    uVar11 = FUN_007ef180(param_1);
    if ((uVar11 & 1) != 0) {
      lVar13 = *(long *)(param_1 + 8);
      plVar10 = *(long **)(lVar13 + 0x28);
      goto joined_r0x007e6f10;
    }
  }
  lVar13 = *(long *)(param_1 + 4);
  if ((*(long **)(lVar13 + 0x28) == (long *)0x0) ||
     (puVar9 = (undefined8 *)**(long **)(lVar13 + 0x28), puVar9 == (undefined8 *)0x0)) {
    uVar7 = 1;
  }
  else {
    uVar7 = (**(code **)*puVar9)();
    uVar7 = uVar7 ^ 1;
  }
  uVar3 = param_2 & 0x1f;
  uVar2 = param_3 & 0x1f;
  if (-1 < (int)-param_2) {
    uVar3 = -(-param_2 & 0x1f);
  }
  if (-1 < (int)-param_3) {
    uVar2 = -(-param_3 & 0x1f);
  }
  uVar3 = uVar3 + uVar2 * 0x20;
  uVar2 = uVar3;
  if ((int)uVar3 < 0) {
    uVar2 = uVar3 + 1;
  }
  bVar6 = *(byte *)(*(long *)(lVar13 + 0x10) + *(long *)(lVar13 + 8) + (long)((int)uVar2 >> 1) +
                   0xa5);
  bVar4 = bVar6 >> 4;
  if ((uVar3 & 0x80000001) != 1) {
    bVar4 = bVar6 & 0xf;
  }
  if ((uVar7 & 1) != 0) {
    return bVar4;
  }
  lVar13 = *(long *)(lVar13 + 0x28);
joined_r0x007e7040:
  if ((lVar13 != 0) && (*(undefined8 **)(lVar13 + 8) != (undefined8 *)0x0)) {
    (**(code **)**(undefined8 **)(lVar13 + 8))();
  }
  return bVar4;
}

