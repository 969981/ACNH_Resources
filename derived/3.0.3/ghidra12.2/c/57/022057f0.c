
void FUN_022057f0(ushort *param_1,short *param_2,undefined4 param_3)

{
  long lVar1;
  ushort uVar2;
  undefined *puVar3;
  uint uVar4;
  int iVar5;
  long lVar6;
  long lVar7;
  undefined8 *puVar8;
  long *plVar9;
  long lVar10;
  ulong uVar11;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined8 local_68;
  ushort local_44;
  undefined1 auStack_42 [2];
  
  puVar3 = PTR_DAT_04bb3128;
  if (*param_2 == DAT_04cb6038) {
    FUN_007ef010(param_1,param_2);
    return;
  }
  if (((*PTR_DAT_04bb3128 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_04c8c100), iVar5 != 0)) {
    FUN_00706e58(&DAT_04c8c0f0);
    __cxa_guard_release(&DAT_04c8c100);
  }
  if (0 < (int)DAT_04c8c0f0) {
    uVar11 = 0;
    do {
      if (*(int *)(DAT_04c8c0f8 + uVar11 * 4) == 0x13) goto LAB_022058ac;
      uVar11 = uVar11 + 1;
    } while (DAT_04c8c0f0 != uVar11);
  }
  uVar11 = 0;
LAB_022058ac:
  local_44 = 0;
  if (((*puVar3 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_04c8c100), iVar5 != 0)) {
    FUN_00706e58(&DAT_04c8c0f0);
    __cxa_guard_release(&DAT_04c8c100);
  }
  uVar2 = (ushort)param_3 & 0x7f;
  uVar4 = (uint)uVar11;
  if (DAT_04c8c0f0 <= uVar4) {
    uVar4 = 0;
  }
  local_44 = uVar2 | (ushort)(*(int *)(DAT_04c8c0f8 + (long)(int)uVar4 * 4) << 0xb);
  FUN_007ef010(auStack_42,&local_44);
  lVar6 = FUN_0264e170(auStack_42);
  if (lVar6 == 0) {
    FUN_007ef010(param_1,param_2);
    return;
  }
  if ((*(long *)PTR_DAT_04bb46b0 == 0) ||
     (lVar7 = FUN_026eec4c(*(long *)PTR_DAT_04bb46b0,param_3), lVar7 == 0)) goto LAB_02205a14;
  if ((*(long **)(lVar7 + 0x32e8) == (long *)0x0) ||
     (puVar8 = (undefined8 *)**(long **)(lVar7 + 0x32e8), puVar8 == (undefined8 *)0x0)) {
    uVar4 = 1;
  }
  else {
    uVar4 = (**(code **)*puVar8)();
    uVar4 = uVar4 ^ 1;
  }
  lVar1 = *(long *)(lVar7 + 0x32d0) + *(long *)(lVar7 + 13000);
  lVar10 = *(long *)(lVar6 + 0x28);
  if (lVar10 == 0) {
    FUN_027c1640(*(long *)(lVar6 + 0x10) + *(long *)(lVar6 + 8),lVar1);
  }
  else {
    if (*(undefined8 **)(lVar10 + 0x10) == (undefined8 *)0x0) {
      uVar11 = 0;
LAB_0220599c:
      plVar9 = *(long **)(lVar10 + 0x20);
      if (plVar9 != (long *)0x0) {
        local_78 = *(undefined8 *)(lVar6 + 8);
        uStack_70 = *(undefined8 *)(lVar6 + 0x10);
        local_68 = 0x2a8;
        (**(code **)(*plVar9 + 0x20))(plVar9,&local_78);
      }
    }
    else {
      uVar11 = (**(code **)**(undefined8 **)(lVar10 + 0x10))();
      lVar10 = *(long *)(lVar6 + 0x28);
      uVar11 = uVar11 & 0xffffffff;
      if (lVar10 != 0) goto LAB_0220599c;
    }
    FUN_027c1640(*(long *)(lVar6 + 0x10) + *(long *)(lVar6 + 8),lVar1);
    if ((((uVar11 & 1) != 0) && (*(long *)(lVar6 + 0x28) != 0)) &&
       (puVar8 = *(undefined8 **)(*(long *)(lVar6 + 0x28) + 0x18), puVar8 != (undefined8 *)0x0)) {
      (**(code **)*puVar8)();
    }
  }
  if ((((uVar4 & 1) == 0) && (*(long *)(lVar7 + 0x32e8) != 0)) &&
     (puVar8 = *(undefined8 **)(*(long *)(lVar7 + 0x32e8) + 8), puVar8 != (undefined8 *)0x0)) {
    (**(code **)*puVar8)();
  }
LAB_02205a14:
  if (((*puVar3 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_04c8c100), iVar5 != 0)) {
    FUN_00706e58(&DAT_04c8c0f0);
    __cxa_guard_release(&DAT_04c8c100);
  }
  if (0 < (int)DAT_04c8c0f0) {
    uVar11 = 0;
    do {
      if (*(int *)(DAT_04c8c0f8 + uVar11 * 4) == 0x13) goto LAB_02205a4c;
      uVar11 = uVar11 + 1;
    } while (DAT_04c8c0f0 != uVar11);
  }
  uVar11 = 0;
LAB_02205a4c:
  *param_1 = 0;
  if (((*puVar3 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_04c8c100), iVar5 != 0)) {
    FUN_00706e58(&DAT_04c8c0f0);
    __cxa_guard_release(&DAT_04c8c100);
  }
  uVar4 = (uint)uVar11;
  if (DAT_04c8c0f0 <= uVar4) {
    uVar4 = 0;
  }
  *param_1 = uVar2 | (ushort)(*(int *)(DAT_04c8c0f8 + (long)(int)uVar4 * 4) << 0xb);
  return;
}

