
void FUN_013d8f8c(long *param_1,byte param_2,undefined8 param_3)

{
  uint *puVar1;
  uint uVar2;
  long lVar3;
  long lVar4;
  undefined *puVar5;
  int iVar6;
  long *plVar7;
  ulong uVar8;
  long lVar9;
  byte bVar10;
  long *plVar11;
  uint uVar12;
  ulong uVar13;
  
  puVar5 = PTR_DAT_04bb27c0;
  lVar9 = *(long *)PTR_DAT_04bb27c0;
  if (lVar9 == 0) {
    return;
  }
  uVar12 = *(uint *)PTR_DAT_04bbc7c0;
  if ((((uVar12 == 0) ||
       (plVar11 = *(long **)(*(long *)(*(long *)(lVar9 + 0x1c0) + 8) +
                            ((ulong)(uVar12 >> 0x11) & 0x7ff8)), plVar11 == (long *)0x0)) ||
      ((*(uint *)(plVar11 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar11 + 0x46) != uVar12)) {
    plVar11 = (long *)0x0;
  }
  if (*(int *)(lVar9 + 0x288) == 1 || *(int *)(lVar9 + 0x288) == -1) {
    plVar7 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar9 = *(long *)puVar5;
    iVar6 = (**(code **)(*plVar7 + 0x60))();
    if (iVar6 < 0x11) {
      uVar12 = 1;
    }
    else {
      if (4 < *(uint *)(lVar9 + 0x5e8)) goto LAB_013d905c;
      uVar12 = 0x1aU >> (ulong)(*(uint *)(lVar9 + 0x5e8) & 0x1f) & 1;
    }
  }
  else {
LAB_013d905c:
    uVar12 = 0;
  }
  if (plVar11 == (long *)0x0) {
    return;
  }
  lVar9 = plVar11[0x2a];
  if (((*PTR_DAT_04bbc7a8 & 1) == 0) && (iVar6 = __cxa_guard_acquire(PTR_DAT_04bbc7a8), iVar6 != 0))
  {
    *(undefined **)PTR_DAT_04bbc7a0 = PTR_DAT_04bb2e50 + 0x10;
    __cxa_guard_release(PTR_DAT_04bbc7a8);
  }
  uVar8 = (**(code **)(*plVar11 + 0x20))(plVar11,PTR_DAT_04bbc7a0);
  uVar2 = 0;
  if ((int)lVar9 == 1) {
    uVar2 = uVar12;
  }
  if ((uVar8 & 1) == 0) {
    return;
  }
  if (uVar2 == 0) {
    return;
  }
  uVar12 = (uint)param_2;
  uVar13 = (ulong)param_2;
  bVar10 = *PTR_DAT_04bb32e0;
  uVar8 = uVar13;
  if (*(uint *)(param_1 + 1) <= uVar12 || param_1[2] == 0) {
    uVar8 = 0;
  }
  if (7 < bVar10) {
    bVar10 = 0xff;
  }
  *(byte *)(param_1[2] + uVar8 * 0x10 + 0xc) = bVar10;
  uVar8 = uVar13;
  if (*(uint *)(param_1 + 1) <= uVar12 || param_1[2] == 0) {
    uVar8 = 0;
  }
  *(undefined1 *)(param_1[2] + uVar8 * 0x10 + 0xf) = 0;
  uVar8 = (**(code **)(*param_1 + 0x58))(param_1);
  if ((uVar8 & 1) != 0) {
    uVar2 = uVar12;
    if (*(uint *)(param_1 + 3) <= uVar12) {
      uVar2 = 0;
    }
    if (*(uint *)(param_1 + 1) <= uVar12) {
      uVar12 = 0;
    }
    lVar9 = param_1[4] + (ulong)uVar2 * 0x28;
    plVar7 = (long *)(param_1[2] + (ulong)uVar12 * 0x10);
    if (*(long *)(lVar9 + 8) != *plVar7 || *(long *)(lVar9 + 0x10) != plVar7[1]) {
      lVar3 = *plVar7;
      lVar4 = plVar7[1];
      *(undefined1 *)(param_1[4] + (ulong)uVar2 * 0x28 + 0x18) = 1;
      *(long *)(lVar9 + 8) = lVar3;
      *(long *)(lVar9 + 0x10) = lVar4;
    }
  }
  lVar9 = plVar11[0x5e];
  if ((lVar9 == 0) || (0x13 < param_2)) {
LAB_013d91bc:
    lVar9 = *(long *)puVar5;
    puVar1 = (uint *)PTR_DAT_04bb3238;
  }
  else {
    if (((int)(uint)*(byte *)(lVar9 + 0x59a) <= (int)(char)param_2) &&
       ((int)((uint)*(byte *)(lVar9 + 0x59b) + (uint)*(byte *)(lVar9 + 0x59a)) <= (int)(char)param_2
       )) goto LAB_013d91bc;
    puVar1 = (uint *)(lVar9 + uVar13 * 8 + 0x4f8);
    lVar9 = *(long *)puVar5;
  }
  if (lVar9 == 0) {
    return;
  }
  uVar12 = *puVar1;
  if ((((uVar12 == 0) ||
       (plVar11 = *(long **)(*(long *)(*(long *)(lVar9 + 0x1c0) + 8) +
                            ((ulong)(uVar12 >> 0x11) & 0x7ff8)), plVar11 == (long *)0x0)) ||
      ((*(uint *)(plVar11 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar11 + 0x46) != uVar12)) {
    plVar11 = (long *)0x0;
  }
  if ((*(int *)(lVar9 + 0x288) == 1) || (*(int *)(lVar9 + 0x288) == -1)) {
    plVar7 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar9 = *(long *)puVar5;
    iVar6 = (**(code **)(*plVar7 + 0x60))();
    if (iVar6 < 0x11) {
      uVar12 = 1;
      goto joined_r0x013d9274;
    }
    if (*(uint *)(lVar9 + 0x5e8) < 5) {
      uVar12 = 0x1aU >> (ulong)(*(uint *)(lVar9 + 0x5e8) & 0x1f) & 1;
      goto joined_r0x013d9274;
    }
  }
  uVar12 = 0;
joined_r0x013d9274:
  if (plVar11 != (long *)0x0) {
    lVar9 = plVar11[0x2a];
    if (((*PTR_DAT_04bbc7b8 & 1) == 0) &&
       (iVar6 = __cxa_guard_acquire(PTR_DAT_04bbc7b8), iVar6 != 0)) {
      *(undefined **)PTR_DAT_04bbc7b0 = PTR_DAT_04bb2e50 + 0x10;
      __cxa_guard_release(PTR_DAT_04bbc7b8);
    }
    uVar8 = (**(code **)(*plVar11 + 0x20))(plVar11,PTR_DAT_04bbc7b0);
    uVar2 = 0;
    if ((int)lVar9 == 1) {
      uVar2 = uVar12;
    }
    if (((uVar8 & 1) != 0) && (uVar2 != 0)) {
      FUN_013e5f68(plVar11,param_3);
      return;
    }
  }
  return;
}

