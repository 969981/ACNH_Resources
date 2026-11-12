
void FUN_007e6230(undefined8 *param_1,ushort *param_2)

{
  long lVar1;
  undefined8 uVar2;
  uint uVar3;
  ushort uVar4;
  uint uVar5;
  int iVar6;
  undefined8 *puVar7;
  long *plVar8;
  ulong uVar9;
  long lVar10;
  
  uVar4 = *param_2;
  if ((uVar4 == *(ushort *)PTR_DAT_04bb3170) ||
     (*(long *)(param_2 + 8) == 0 && *(long *)(param_2 + 4) == 0)) {
    *(undefined4 *)param_1 = 0;
    *(undefined8 *)((long)param_1 + 4) = 0;
    *(undefined1 *)(param_1 + 3) = 2;
    *(undefined8 *)((long)param_1 + 0xc) = 0;
    *(undefined4 *)((long)param_1 + 0x14) = 0;
    *(undefined8 *)((long)param_1 + 0x1c) = 0;
    *(undefined8 *)((long)param_1 + 0x24) = 0;
    *(undefined8 *)((long)param_1 + 0x2c) = 0;
    *(undefined4 *)((long)param_1 + 0x34) = 0;
    return;
  }
  if (((DAT_04c8c100 & 1) == 0) && (iVar6 = __cxa_guard_acquire(&DAT_04c8c100), iVar6 != 0)) {
    FUN_00706e58(&DAT_04c8c0f0);
    __cxa_guard_release(&DAT_04c8c100);
  }
  if (0 < (int)DAT_04c8c0f0) {
    uVar9 = 0;
    do {
      if (*(uint *)(DAT_04c8c0f8 + uVar9 * 4) == (uint)(uVar4 >> 0xb)) goto LAB_007e62bc;
      uVar9 = uVar9 + 1;
    } while (DAT_04c8c0f0 != uVar9);
  }
  uVar9 = 0;
LAB_007e62bc:
  uVar5 = (uint)uVar9;
  if (((DAT_04c8c100 & 1) == 0) && (iVar6 = __cxa_guard_acquire(PTR_DAT_04bb3128), iVar6 != 0)) {
    FUN_00706e58(&DAT_04c8c0f0);
    __cxa_guard_release(&DAT_04c8c100);
  }
  if (DAT_04c8c0f0 <= uVar5) {
    uVar5 = 0;
  }
  if (*(int *)(DAT_04c8c0f8 + (long)(int)uVar5 * 4) == 0x11) {
    lVar10 = *(long *)(param_2 + 8);
    if (lVar10 != 0) {
      plVar8 = *(long **)(lVar10 + 0x28);
joined_r0x007e6348:
      if ((plVar8 == (long *)0x0) || ((undefined8 *)*plVar8 == (undefined8 *)0x0)) {
        uVar5 = 1;
      }
      else {
        uVar5 = (*(code *)**(undefined8 **)*plVar8)();
        uVar5 = uVar5 ^ 1;
      }
      lVar1 = *(long *)(lVar10 + 0x10) + *(long *)(lVar10 + 8);
      uVar2 = *(undefined8 *)(lVar1 + 0x40);
      *param_1 = *(undefined8 *)(lVar1 + 0x38);
      param_1[1] = uVar2;
      param_1[2] = *(undefined8 *)(lVar1 + 0x48);
      *(undefined4 *)(param_1 + 3) = *(undefined4 *)(lVar1 + 0x50);
      *(undefined8 *)((long)param_1 + 0x1c) = *(undefined8 *)(lVar1 + 0x54);
      *(undefined8 *)((long)param_1 + 0x24) = *(undefined8 *)(lVar1 + 0x5c);
      uVar3 = *(uint *)(lVar1 + 0x6c);
      *(undefined8 *)((long)param_1 + 0x2c) = *(undefined8 *)(lVar1 + 100);
      if (1 < uVar3) {
        uVar3 = 0;
      }
      *(uint *)((long)param_1 + 0x34) = uVar3;
      if ((uVar5 & 1) != 0) {
        return;
      }
      lVar10 = *(long *)(lVar10 + 0x28);
      goto joined_r0x007e6440;
    }
  }
  else {
    uVar9 = FUN_007ef180(param_2);
    if ((uVar9 & 1) != 0) {
      lVar10 = *(long *)(param_2 + 8);
      plVar8 = *(long **)(lVar10 + 0x28);
      goto joined_r0x007e6348;
    }
  }
  lVar10 = *(long *)(param_2 + 4);
  if ((*(long **)(lVar10 + 0x28) == (long *)0x0) ||
     (puVar7 = (undefined8 *)**(long **)(lVar10 + 0x28), puVar7 == (undefined8 *)0x0)) {
    uVar5 = 1;
  }
  else {
    uVar5 = (**(code **)*puVar7)();
    uVar5 = uVar5 ^ 1;
  }
  lVar1 = *(long *)(lVar10 + 0x10) + *(long *)(lVar10 + 8);
  uVar2 = *(undefined8 *)(lVar1 + 0x40);
  *param_1 = *(undefined8 *)(lVar1 + 0x38);
  param_1[1] = uVar2;
  param_1[2] = *(undefined8 *)(lVar1 + 0x48);
  *(undefined4 *)(param_1 + 3) = *(undefined4 *)(lVar1 + 0x50);
  *(undefined8 *)((long)param_1 + 0x1c) = *(undefined8 *)(lVar1 + 0x54);
  *(undefined8 *)((long)param_1 + 0x24) = *(undefined8 *)(lVar1 + 0x5c);
  uVar3 = *(uint *)(lVar1 + 0x6c);
  *(undefined8 *)((long)param_1 + 0x2c) = *(undefined8 *)(lVar1 + 100);
  if (1 < uVar3) {
    uVar3 = 0;
  }
  *(uint *)((long)param_1 + 0x34) = uVar3;
  if ((uVar5 & 1) != 0) {
    return;
  }
  lVar10 = *(long *)(lVar10 + 0x28);
joined_r0x007e6440:
  if ((lVar10 == 0) || (*(undefined8 **)(lVar10 + 8) == (undefined8 *)0x0)) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x007e6460. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)**(undefined8 **)(lVar10 + 8))();
  return;
}

