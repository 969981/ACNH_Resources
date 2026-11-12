
void FUN_007e6c10(ushort *param_1,undefined1 param_2)

{
  ushort uVar1;
  uint uVar2;
  int iVar3;
  long *plVar4;
  undefined8 *puVar5;
  long lVar6;
  byte *pbVar7;
  ulong uVar8;
  long lVar9;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  
  uVar1 = *param_1;
  if (uVar1 == *(ushort *)PTR_DAT_04bb3170) {
    return;
  }
  if (*(long *)(param_1 + 8) == 0 && *(long *)(param_1 + 4) == 0) {
    return;
  }
  pbVar7 = PTR_DAT_04bb3128;
  if ((*PTR_DAT_04bb3128 & 1) == 0) {
    iVar3 = __cxa_guard_acquire(&DAT_04c8c100);
    pbVar7 = &DAT_04c8c100;
    if (iVar3 != 0) {
      FUN_00706e58(&DAT_04c8c0f0);
      __cxa_guard_release(&DAT_04c8c100);
      pbVar7 = &DAT_04c8c100;
    }
  }
  if (0 < (int)DAT_04c8c0f0) {
    uVar8 = 0;
    do {
      if (*(uint *)(DAT_04c8c0f8 + uVar8 * 4) == (uint)(uVar1 >> 0xb)) goto LAB_007e6c9c;
      uVar8 = uVar8 + 1;
    } while (DAT_04c8c0f0 != uVar8);
  }
  uVar8 = 0;
LAB_007e6c9c:
  local_48 = CONCAT44(local_48._4_4_,(int)uVar8);
  if (((*pbVar7 & 1) == 0) && (iVar3 = __cxa_guard_acquire(PTR_DAT_04bb3128), iVar3 != 0)) {
    FUN_00706e58(&DAT_04c8c0f0);
    __cxa_guard_release(&DAT_04c8c100);
  }
  uVar2 = (uint)local_48;
  if (DAT_04c8c0f0 <= (uint)local_48) {
    uVar2 = 0;
  }
  if (*(int *)(DAT_04c8c0f8 + (long)(int)uVar2 * 4) == 0x11) {
    lVar9 = *(long *)(param_1 + 8);
    if (lVar9 == 0) {
      return;
    }
    lVar6 = *(long *)(lVar9 + 0x28);
  }
  else {
    uVar8 = FUN_007ef180(param_1);
    if ((uVar8 & 1) == 0) {
      return;
    }
    lVar9 = *(long *)(param_1 + 8);
    lVar6 = *(long *)(lVar9 + 0x28);
  }
  if (lVar6 == 0) {
    *(undefined1 *)(*(long *)(lVar9 + 0x10) + *(long *)(lVar9 + 8) + 0x8a5) = param_2;
    return;
  }
  if (*(undefined8 **)(lVar6 + 0x10) == (undefined8 *)0x0) {
    uVar2 = 1;
  }
  else {
    uVar2 = (**(code **)**(undefined8 **)(lVar6 + 0x10))();
    lVar6 = *(long *)(lVar9 + 0x28);
    uVar2 = uVar2 ^ 1;
    if (lVar6 == 0) goto LAB_007e6d50;
  }
  plVar4 = *(long **)(lVar6 + 0x20);
  if (plVar4 != (long *)0x0) {
    local_48 = *(undefined8 *)(lVar9 + 8);
    uStack_40 = *(undefined8 *)(lVar9 + 0x10);
    local_38 = 0x8a8;
    (**(code **)(*plVar4 + 0x20))(plVar4,&local_48);
  }
LAB_007e6d50:
  *(undefined1 *)(*(long *)(lVar9 + 0x10) + *(long *)(lVar9 + 8) + 0x8a5) = param_2;
  if ((((uVar2 & 1) == 0) && (*(long *)(lVar9 + 0x28) != 0)) &&
     (puVar5 = *(undefined8 **)(*(long *)(lVar9 + 0x28) + 0x18), puVar5 != (undefined8 *)0x0)) {
    (**(code **)*puVar5)();
  }
  return;
}

