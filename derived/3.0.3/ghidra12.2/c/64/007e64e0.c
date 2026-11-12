
void FUN_007e64e0(ushort *param_1,undefined8 *param_2)

{
  int iVar1;
  long *plVar2;
  undefined8 *puVar3;
  long lVar4;
  uint uVar5;
  ulong uVar6;
  undefined8 uVar7;
  ulong uVar8;
  undefined8 uVar9;
  undefined8 uVar10;
  long lVar11;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  
  uVar6 = (ulong)*param_1;
  uVar5 = (uint)*param_1;
  if (uVar5 == *(ushort *)PTR_DAT_04bb3170) {
    return;
  }
  if (*(long *)(param_1 + 8) == 0 && *(long *)(param_1 + 4) == 0) {
    return;
  }
  if ((*PTR_DAT_04bb3128 & 1) == 0) {
    iVar1 = __cxa_guard_acquire(PTR_DAT_04bb3128);
    uVar6 = (ulong)uVar5;
    if (iVar1 != 0) {
      FUN_00706e58(&DAT_04c8c0f0);
      __cxa_guard_release(&DAT_04c8c100);
      uVar6 = (ulong)uVar5;
    }
  }
  if (0 < (int)DAT_04c8c0f0) {
    uVar8 = 0;
    do {
      if (*(int *)(DAT_04c8c0f8 + uVar8 * 4) == (int)(uVar6 >> 0xb)) goto LAB_007e656c;
      uVar8 = uVar8 + 1;
    } while (DAT_04c8c0f0 != uVar8);
  }
  uVar8 = 0;
LAB_007e656c:
  local_48 = CONCAT44(local_48._4_4_,(int)uVar8);
  if (((*PTR_DAT_04bb3128 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04c8c100), iVar1 != 0)) {
    FUN_00706e58(&DAT_04c8c0f0);
    __cxa_guard_release(&DAT_04c8c100);
  }
  uVar5 = (uint)local_48;
  if (DAT_04c8c0f0 <= (uint)local_48) {
    uVar5 = 0;
  }
  if (*(int *)(DAT_04c8c0f8 + (long)(int)uVar5 * 4) == 0x11) {
    lVar11 = *(long *)(param_1 + 8);
    if (lVar11 == 0) {
LAB_007e65e8:
      lVar11 = *(long *)(param_1 + 4);
      lVar4 = *(long *)(lVar11 + 0x28);
      if (lVar4 == 0) goto LAB_007e6618;
      if (*(undefined8 **)(lVar4 + 0x10) == (undefined8 *)0x0) {
        uVar6 = 0;
      }
      else {
        uVar6 = (**(code **)**(undefined8 **)(lVar4 + 0x10))();
        lVar4 = *(long *)(lVar11 + 0x28);
        uVar6 = uVar6 & 0xffffffff;
        if (lVar4 == 0) goto LAB_007e6668;
      }
      plVar2 = *(long **)(lVar4 + 0x20);
      if (plVar2 == (long *)0x0) goto LAB_007e6668;
      local_48 = *(undefined8 *)(lVar11 + 8);
      uStack_40 = *(undefined8 *)(lVar11 + 0x10);
      local_38 = 0x2a8;
    }
    else {
      lVar4 = *(long *)(lVar11 + 0x28);
      if (lVar4 == 0) goto LAB_007e6618;
LAB_007e65c4:
      if (*(undefined8 **)(lVar4 + 0x10) == (undefined8 *)0x0) {
        uVar6 = 0;
      }
      else {
        uVar6 = (**(code **)**(undefined8 **)(lVar4 + 0x10))();
        lVar4 = *(long *)(lVar11 + 0x28);
        uVar6 = uVar6 & 0xffffffff;
        if (lVar4 == 0) goto LAB_007e6668;
      }
      plVar2 = *(long **)(lVar4 + 0x20);
      if (plVar2 == (long *)0x0) goto LAB_007e6668;
      local_48 = *(undefined8 *)(lVar11 + 8);
      uStack_40 = *(undefined8 *)(lVar11 + 0x10);
      local_38 = 0x8a8;
    }
    (**(code **)(*plVar2 + 0x20))(plVar2,&local_48);
  }
  else {
    uVar6 = FUN_007ef180(param_1);
    if ((uVar6 & 1) == 0) goto LAB_007e65e8;
    lVar11 = *(long *)(param_1 + 8);
    lVar4 = *(long *)(lVar11 + 0x28);
    if (lVar4 != 0) goto LAB_007e65c4;
LAB_007e6618:
    uVar6 = 0;
  }
LAB_007e6668:
  lVar4 = *(long *)(lVar11 + 0x10) + *(long *)(lVar11 + 8);
  uVar7 = *param_2;
  uVar9 = param_2[1];
  uVar10 = param_2[2];
  *(undefined1 *)(lVar4 + 0x50) = *(undefined1 *)(param_2 + 3);
  *(undefined8 *)(lVar4 + 0x38) = uVar7;
  *(undefined8 *)(lVar4 + 0x40) = uVar9;
  *(undefined8 *)(lVar4 + 0x48) = uVar10;
  uVar7 = *(undefined8 *)((long)param_2 + 0x1c);
  uVar9 = *(undefined8 *)((long)param_2 + 0x24);
  *(undefined8 *)(lVar4 + 100) = *(undefined8 *)((long)param_2 + 0x2c);
  *(undefined8 *)(lVar4 + 0x5c) = uVar9;
  *(undefined8 *)(lVar4 + 0x54) = uVar7;
  uVar5 = *(uint *)((long)param_2 + 0x34);
  if (1 < uVar5) {
    uVar5 = 0;
  }
  *(uint *)(lVar4 + 0x6c) = uVar5;
  if ((((uVar6 & 1) != 0) && (*(long *)(lVar11 + 0x28) != 0)) &&
     (puVar3 = *(undefined8 **)(*(long *)(lVar11 + 0x28) + 0x18), puVar3 != (undefined8 *)0x0)) {
    (**(code **)*puVar3)();
  }
  return;
}

