
void FUN_007e7690(ushort *param_1,uint param_2,undefined4 *param_3)

{
  undefined1 *puVar1;
  undefined1 *puVar2;
  undefined4 uVar3;
  bool bVar4;
  int iVar5;
  long *plVar6;
  undefined8 *puVar7;
  long lVar8;
  uint uVar9;
  ulong uVar10;
  ulong uVar11;
  long lVar12;
  undefined8 local_48;
  undefined8 uStack_40;
  undefined8 local_38;
  
  uVar10 = (ulong)*param_1;
  uVar9 = (uint)*param_1;
  if (uVar9 == DAT_04cb6038) {
    return;
  }
  if (*(long *)(param_1 + 8) == 0 && *(long *)(param_1 + 4) == 0) {
    return;
  }
  if ((*PTR_DAT_04bb3128 & 1) == 0) {
    iVar5 = __cxa_guard_acquire(PTR_DAT_04bb3128);
    uVar10 = (ulong)uVar9;
    if (iVar5 != 0) {
      FUN_00706e58(&DAT_04c8c0f0);
      __cxa_guard_release(&DAT_04c8c100);
      uVar10 = (ulong)uVar9;
    }
  }
  if (0 < (int)DAT_04c8c0f0) {
    uVar11 = 0;
    do {
      if (*(int *)(DAT_04c8c0f8 + uVar11 * 4) == (int)(uVar10 >> 0xb)) goto LAB_007e7720;
      uVar11 = uVar11 + 1;
    } while (DAT_04c8c0f0 != uVar11);
  }
  uVar11 = 0;
LAB_007e7720:
  local_48 = CONCAT44(local_48._4_4_,(int)uVar11);
  if (((*PTR_DAT_04bb3128 & 1) == 0) && (iVar5 = __cxa_guard_acquire(&DAT_04c8c100), iVar5 != 0)) {
    FUN_00706e58(&DAT_04c8c0f0);
    __cxa_guard_release(&DAT_04c8c100);
  }
  uVar9 = (uint)local_48;
  if (DAT_04c8c0f0 <= (uint)local_48) {
    uVar9 = 0;
  }
  if (*(int *)(DAT_04c8c0f8 + (long)(int)uVar9 * 4) == 0x11) {
    lVar12 = *(long *)(param_1 + 8);
    if (lVar12 == 0) {
LAB_007e779c:
      lVar12 = *(long *)(param_1 + 4);
      lVar8 = *(long *)(lVar12 + 0x28);
      if (lVar8 == 0) goto LAB_007e77cc;
      if (*(undefined8 **)(lVar8 + 0x10) == (undefined8 *)0x0) {
        uVar10 = 0;
      }
      else {
        uVar10 = (**(code **)**(undefined8 **)(lVar8 + 0x10))();
        lVar8 = *(long *)(lVar12 + 0x28);
        uVar10 = uVar10 & 0xffffffff;
        if (lVar8 == 0) goto LAB_007e781c;
      }
      plVar6 = *(long **)(lVar8 + 0x20);
      if (plVar6 == (long *)0x0) goto LAB_007e781c;
      local_48 = *(undefined8 *)(lVar12 + 8);
      uStack_40 = *(undefined8 *)(lVar12 + 0x10);
      local_38 = 0x2a8;
    }
    else {
      lVar8 = *(long *)(lVar12 + 0x28);
      if (lVar8 == 0) goto LAB_007e77cc;
LAB_007e7778:
      if (*(undefined8 **)(lVar8 + 0x10) == (undefined8 *)0x0) {
        uVar10 = 0;
      }
      else {
        uVar10 = (**(code **)**(undefined8 **)(lVar8 + 0x10))();
        lVar8 = *(long *)(lVar12 + 0x28);
        uVar10 = uVar10 & 0xffffffff;
        if (lVar8 == 0) goto LAB_007e781c;
      }
      plVar6 = *(long **)(lVar8 + 0x20);
      if (plVar6 == (long *)0x0) goto LAB_007e781c;
      local_48 = *(undefined8 *)(lVar12 + 8);
      uStack_40 = *(undefined8 *)(lVar12 + 0x10);
      local_38 = 0x8a8;
    }
    (**(code **)(*plVar6 + 0x20))(plVar6,&local_48);
  }
  else {
    uVar10 = FUN_007ef180(param_1);
    if ((uVar10 & 1) == 0) goto LAB_007e779c;
    lVar12 = *(long *)(param_1 + 8);
    lVar8 = *(long *)(lVar12 + 0x28);
    if (lVar8 != 0) goto LAB_007e7778;
LAB_007e77cc:
    uVar10 = 0;
  }
LAB_007e781c:
  uVar3 = *param_3;
  if (0xe < (int)param_2) {
    param_2 = 0xf;
  }
  param_2 = param_2 & ((int)param_2 >> 0x1f ^ 0xffffffffU);
  bVar4 = 0xe < param_2;
  param_2 = param_2 * 3;
  puVar1 = (undefined1 *)(*(long *)(lVar12 + 0x10) + *(long *)(lVar12 + 8) + 0x78);
  puVar2 = puVar1 + param_2;
  if (bVar4) {
    puVar2 = puVar1;
  }
  *puVar2 = (char)((uint)uVar3 >> 0x18);
  puVar2 = puVar1 + (param_2 + 1);
  if (bVar4) {
    puVar2 = puVar1;
  }
  *puVar2 = (char)((uint)uVar3 >> 0x10);
  puVar2 = puVar1 + (param_2 + 2);
  if (bVar4) {
    puVar2 = puVar1;
  }
  *puVar2 = (char)((uint)uVar3 >> 8);
  if ((((uVar10 & 1) != 0) && (*(long *)(lVar12 + 0x28) != 0)) &&
     (puVar7 = *(undefined8 **)(*(long *)(lVar12 + 0x28) + 0x18), puVar7 != (undefined8 *)0x0)) {
    (**(code **)*puVar7)();
  }
  return;
}

