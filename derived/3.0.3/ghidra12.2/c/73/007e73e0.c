
uint FUN_007e73e0(ushort *param_1,uint param_2)

{
  byte *pbVar1;
  byte *pbVar2;
  byte *pbVar3;
  uint uVar4;
  byte *pbVar5;
  uint uVar6;
  int iVar7;
  undefined8 *puVar8;
  long *plVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  
  uVar10 = (ulong)*param_1;
  uVar6 = (uint)*param_1;
  if ((uVar6 == *(ushort *)PTR_DAT_04bb3170) ||
     (*(long *)(param_1 + 8) == 0 && *(long *)(param_1 + 4) == 0)) {
    return 0xffffffff;
  }
  if ((*PTR_DAT_04bb3128 & 1) == 0) {
    iVar7 = __cxa_guard_acquire(PTR_DAT_04bb3128);
    uVar10 = (ulong)uVar6;
    if (iVar7 != 0) {
      FUN_00706e58(&DAT_04c8c0f0);
      __cxa_guard_release(&DAT_04c8c100);
      uVar10 = (ulong)uVar6;
    }
  }
  if (0 < (int)DAT_04c8c0f0) {
    uVar11 = 0;
    do {
      if (*(int *)(DAT_04c8c0f8 + uVar11 * 4) == (int)(uVar10 >> 0xb)) goto LAB_007e746c;
      uVar11 = uVar11 + 1;
    } while (DAT_04c8c0f0 != uVar11);
  }
  uVar11 = 0;
LAB_007e746c:
  uVar6 = (uint)uVar11;
  if (((*PTR_DAT_04bb3128 & 1) == 0) && (iVar7 = __cxa_guard_acquire(&DAT_04c8c100), iVar7 != 0)) {
    FUN_00706e58(&DAT_04c8c0f0);
    __cxa_guard_release(&DAT_04c8c100);
  }
  if (DAT_04c8c0f0 <= uVar6) {
    uVar6 = 0;
  }
  if (*(int *)(DAT_04c8c0f8 + (long)(int)uVar6 * 4) == 0x11) {
    lVar12 = *(long *)(param_1 + 8);
    if (lVar12 != 0) {
      plVar9 = *(long **)(lVar12 + 0x28);
joined_r0x007e74d8:
      if ((plVar9 == (long *)0x0) || ((undefined8 *)*plVar9 == (undefined8 *)0x0)) {
        uVar6 = 1;
      }
      else {
        uVar6 = (*(code *)**(undefined8 **)*plVar9)();
        uVar6 = uVar6 ^ 1;
      }
      if (0xe < (int)param_2) {
        param_2 = 0xf;
      }
      pbVar1 = (byte *)(*(long *)(lVar12 + 0x10) + *(long *)(lVar12 + 8) + 0x78);
      param_2 = param_2 & ((int)param_2 >> 0x1f ^ 0xffffffffU);
      uVar4 = param_2 * 3;
      pbVar2 = pbVar1 + uVar4;
      if (0xe < param_2) {
        pbVar2 = pbVar1;
      }
      pbVar3 = pbVar1 + (uVar4 + 2);
      pbVar5 = pbVar1 + (uVar4 + 1);
      if (0xe < param_2) {
        pbVar3 = pbVar1;
        pbVar5 = pbVar1;
      }
      uVar4 = (uint)*pbVar5 << 0x10 | (uint)*pbVar2 << 0x18 | (uint)*pbVar3 << 8 | 0xff;
      if ((uVar6 & 1) != 0) {
        return uVar4;
      }
      lVar12 = *(long *)(lVar12 + 0x28);
      goto joined_r0x007e7600;
    }
  }
  else {
    uVar10 = FUN_007ef180(param_1);
    if ((uVar10 & 1) != 0) {
      lVar12 = *(long *)(param_1 + 8);
      plVar9 = *(long **)(lVar12 + 0x28);
      goto joined_r0x007e74d8;
    }
  }
  lVar12 = *(long *)(param_1 + 4);
  if ((*(long **)(lVar12 + 0x28) == (long *)0x0) ||
     (puVar8 = (undefined8 *)**(long **)(lVar12 + 0x28), puVar8 == (undefined8 *)0x0)) {
    uVar6 = 1;
  }
  else {
    uVar6 = (**(code **)*puVar8)();
    uVar6 = uVar6 ^ 1;
  }
  if (0xe < (int)param_2) {
    param_2 = 0xf;
  }
  pbVar1 = (byte *)(*(long *)(lVar12 + 0x10) + *(long *)(lVar12 + 8) + 0x78);
  param_2 = param_2 & ((int)param_2 >> 0x1f ^ 0xffffffffU);
  uVar4 = param_2 * 3;
  pbVar2 = pbVar1 + uVar4;
  if (0xe < param_2) {
    pbVar2 = pbVar1;
  }
  pbVar3 = pbVar1 + (uVar4 + 2);
  pbVar5 = pbVar1 + (uVar4 + 1);
  if (0xe < param_2) {
    pbVar3 = pbVar1;
    pbVar5 = pbVar1;
  }
  uVar4 = (uint)*pbVar5 << 0x10 | (uint)*pbVar2 << 0x18 | (uint)*pbVar3 << 8 | 0xff;
  if ((uVar6 & 1) != 0) {
    return uVar4;
  }
  lVar12 = *(long *)(lVar12 + 0x28);
joined_r0x007e7600:
  if ((lVar12 != 0) && (*(undefined8 **)(lVar12 + 8) != (undefined8 *)0x0)) {
    (**(code **)**(undefined8 **)(lVar12 + 8))();
  }
  return uVar4;
}

