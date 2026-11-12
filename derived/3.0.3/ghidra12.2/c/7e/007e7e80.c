
void FUN_007e7e80(ushort *param_1)

{
  int iVar1;
  long *plVar2;
  undefined8 *puVar3;
  byte *pbVar4;
  long lVar5;
  uint uVar6;
  ulong uVar7;
  ulong uVar8;
  long lVar9;
  undefined8 local_38;
  undefined8 uStack_30;
  undefined8 local_28;
  
  uVar7 = (ulong)*param_1;
  uVar6 = (uint)*param_1;
  if (uVar6 == DAT_04cb6038) {
    return;
  }
  if (*(long *)(param_1 + 8) == 0 && *(long *)(param_1 + 4) == 0) {
    return;
  }
  pbVar4 = &DAT_04c8c100;
  if ((DAT_04c8c100 & 1) == 0) {
    iVar1 = __cxa_guard_acquire(PTR_DAT_04bb3128);
    uVar7 = (ulong)uVar6;
    pbVar4 = PTR_DAT_04bb3128;
    if (iVar1 != 0) {
      FUN_00706e58(&DAT_04c8c0f0);
      __cxa_guard_release(&DAT_04c8c100);
      uVar7 = (ulong)uVar6;
      pbVar4 = PTR_DAT_04bb3128;
    }
  }
  if (0 < (int)DAT_04c8c0f0) {
    uVar8 = 0;
    do {
      if (*(int *)(DAT_04c8c0f8 + uVar8 * 4) == (int)(uVar7 >> 0xb)) goto LAB_007e7f0c;
      uVar8 = uVar8 + 1;
    } while (DAT_04c8c0f0 != uVar8);
  }
  uVar8 = 0;
LAB_007e7f0c:
  local_38 = CONCAT44(local_38._4_4_,(int)uVar8);
  if (((*pbVar4 & 1) == 0) && (iVar1 = __cxa_guard_acquire(&DAT_04c8c100), iVar1 != 0)) {
    FUN_00706e58(&DAT_04c8c0f0);
    __cxa_guard_release(&DAT_04c8c100);
  }
  uVar6 = (uint)local_38;
  if (DAT_04c8c0f0 <= (uint)local_38) {
    uVar6 = 0;
  }
  if (*(int *)(DAT_04c8c0f8 + (long)(int)uVar6 * 4) == 0x11) {
    lVar9 = *(long *)(param_1 + 8);
    if (lVar9 == 0) {
LAB_007e7f88:
      lVar9 = *(long *)(param_1 + 4);
      lVar5 = *(long *)(lVar9 + 0x28);
      if (lVar5 == 0) goto LAB_007e7fb8;
      if (*(undefined8 **)(lVar5 + 0x10) == (undefined8 *)0x0) {
        uVar7 = 0;
      }
      else {
        uVar7 = (**(code **)**(undefined8 **)(lVar5 + 0x10))();
        lVar5 = *(long *)(lVar9 + 0x28);
        uVar7 = uVar7 & 0xffffffff;
        if (lVar5 == 0) goto LAB_007e8018;
      }
      plVar2 = *(long **)(lVar5 + 0x20);
      if (plVar2 != (long *)0x0) {
        local_38 = *(undefined8 *)(lVar9 + 8);
        uStack_30 = *(undefined8 *)(lVar9 + 0x10);
        local_28 = 0x2a8;
        goto LAB_007e8004;
      }
    }
    else {
      lVar5 = *(long *)(lVar9 + 0x28);
      if (lVar5 == 0) goto LAB_007e7fb8;
LAB_007e7f64:
      if (*(undefined8 **)(lVar5 + 0x10) == (undefined8 *)0x0) {
        uVar7 = 0;
      }
      else {
        uVar7 = (**(code **)**(undefined8 **)(lVar5 + 0x10))();
        lVar5 = *(long *)(lVar9 + 0x28);
        uVar7 = uVar7 & 0xffffffff;
        if (lVar5 == 0) goto LAB_007e8018;
      }
      plVar2 = *(long **)(lVar5 + 0x20);
      if (plVar2 != (long *)0x0) {
        local_38 = *(undefined8 *)(lVar9 + 8);
        uStack_30 = *(undefined8 *)(lVar9 + 0x10);
        local_28 = 0x8a8;
LAB_007e8004:
        (**(code **)(*plVar2 + 0x20))(plVar2,&local_38);
      }
    }
LAB_007e8018:
    lVar5 = *(long *)(lVar9 + 0x10) + *(long *)(lVar9 + 8);
    *(byte *)(lVar5 + 0x70) = *(byte *)(lVar5 + 0x70) & 0xfb;
    if ((((uVar7 & 1) != 0) && (*(long *)(lVar9 + 0x28) != 0)) &&
       (puVar3 = *(undefined8 **)(*(long *)(lVar9 + 0x28) + 0x18), puVar3 != (undefined8 *)0x0)) {
      (**(code **)*puVar3)();
    }
  }
  else {
    uVar7 = FUN_007ef180(param_1);
    if ((uVar7 & 1) == 0) goto LAB_007e7f88;
    lVar9 = *(long *)(param_1 + 8);
    lVar5 = *(long *)(lVar9 + 0x28);
    if (lVar5 != 0) goto LAB_007e7f64;
LAB_007e7fb8:
    lVar5 = *(long *)(lVar9 + 0x10) + *(long *)(lVar9 + 8);
    *(byte *)(lVar5 + 0x70) = *(byte *)(lVar5 + 0x70) & 0xfb;
  }
  return;
}

