
byte FUN_007e85b0(ushort *param_1)

{
  int iVar1;
  undefined8 *puVar2;
  long *plVar3;
  byte *pbVar4;
  uint uVar5;
  ulong uVar6;
  ulong uVar7;
  byte bVar8;
  long lVar9;
  
  uVar6 = (ulong)*param_1;
  uVar5 = (uint)*param_1;
  if ((uVar5 == DAT_04cb6038) || (*(long *)(param_1 + 8) == 0 && *(long *)(param_1 + 4) == 0)) {
    return 0;
  }
  pbVar4 = &DAT_04c8c100;
  if ((DAT_04c8c100 & 1) == 0) {
    iVar1 = __cxa_guard_acquire(PTR_DAT_04bb3128);
    uVar6 = (ulong)uVar5;
    pbVar4 = PTR_DAT_04bb3128;
    if (iVar1 != 0) {
      FUN_00706e58(&DAT_04c8c0f0);
      __cxa_guard_release(&DAT_04c8c100);
      uVar6 = (ulong)uVar5;
      pbVar4 = PTR_DAT_04bb3128;
    }
  }
  if (0 < (int)DAT_04c8c0f0) {
    uVar7 = 0;
    do {
      if (*(int *)(DAT_04c8c0f8 + uVar7 * 4) == (int)(uVar6 >> 0xb)) goto LAB_007e863c;
      uVar7 = uVar7 + 1;
    } while (DAT_04c8c0f0 != uVar7);
  }
  uVar7 = 0;
LAB_007e863c:
  uVar5 = (uint)uVar7;
  if (((*pbVar4 & 1) == 0) && (iVar1 = __cxa_guard_acquire(PTR_DAT_04bb3128), iVar1 != 0)) {
    FUN_00706e58(&DAT_04c8c0f0);
    __cxa_guard_release(&DAT_04c8c100);
  }
  if (DAT_04c8c0f0 <= uVar5) {
    uVar5 = 0;
  }
  if (*(int *)(DAT_04c8c0f8 + (long)(int)uVar5 * 4) == 0x11) {
    lVar9 = *(long *)(param_1 + 8);
    if (lVar9 != 0) {
      plVar3 = *(long **)(lVar9 + 0x28);
      goto joined_r0x007e86a8;
    }
  }
  else {
    uVar6 = FUN_007ef180(param_1);
    if ((uVar6 & 1) != 0) {
      lVar9 = *(long *)(param_1 + 8);
      plVar3 = *(long **)(lVar9 + 0x28);
      goto joined_r0x007e86a8;
    }
  }
  lVar9 = *(long *)(param_1 + 4);
  plVar3 = *(long **)(lVar9 + 0x28);
joined_r0x007e86a8:
  if ((plVar3 == (long *)0x0) || ((undefined8 *)*plVar3 == (undefined8 *)0x0)) {
    bVar8 = *(byte *)(*(long *)(lVar9 + 0x10) + *(long *)(lVar9 + 8) + 0x70) >> 3 & 1;
  }
  else {
    uVar6 = (*(code *)**(undefined8 **)*plVar3)();
    bVar8 = *(byte *)(*(long *)(lVar9 + 0x10) + *(long *)(lVar9 + 8) + 0x70) >> 3 & 1;
    if ((((uVar6 & 1) != 0) && (*(long *)(lVar9 + 0x28) != 0)) &&
       (puVar2 = *(undefined8 **)(*(long *)(lVar9 + 0x28) + 8), puVar2 != (undefined8 *)0x0)) {
      (**(code **)*puVar2)();
    }
  }
  return bVar8;
}

