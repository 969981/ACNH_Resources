
void FUN_013d8b28(long param_1,byte param_2,byte *param_3)

{
  uint *puVar1;
  uint uVar2;
  undefined *puVar3;
  int iVar4;
  long *plVar5;
  ulong uVar6;
  long lVar7;
  long *plVar8;
  ulong uVar9;
  uint uVar10;
  
  if (7 < *param_3) {
    return;
  }
  uVar9 = (ulong)param_2;
  uVar6 = uVar9;
  if (*(uint *)(param_1 + 8) <= (uint)param_2 || *(long *)(param_1 + 0x10) == 0) {
    uVar6 = 0;
  }
  *(byte *)(*(long *)(param_1 + 0x10) + uVar6 * 0x10 + 0xc) = *param_3;
  uVar6 = uVar9;
  if (*(uint *)(param_1 + 8) <= (uint)param_2 || *(long *)(param_1 + 0x10) == 0) {
    uVar6 = 0;
  }
  *(undefined1 *)(*(long *)(param_1 + 0x10) + uVar6 * 0x10 + 0xf) = 0;
  FUN_013d8724();
  puVar3 = PTR_DAT_04bb27c0;
  lVar7 = *(long *)PTR_DAT_04bb27c0;
  if (lVar7 == 0) {
    return;
  }
  uVar10 = *(uint *)PTR_DAT_04bbc7c0;
  if ((((uVar10 == 0) ||
       (plVar8 = *(long **)(*(long *)(*(long *)(lVar7 + 0x1c0) + 8) +
                           ((ulong)(uVar10 >> 0x11) & 0x7ff8)), plVar8 == (long *)0x0)) ||
      ((*(uint *)(plVar8 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar8 + 0x46) != uVar10)) {
    plVar8 = (long *)0x0;
  }
  if (*(int *)(lVar7 + 0x288) == 1 || *(int *)(lVar7 + 0x288) == -1) {
    plVar5 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar7 = *(long *)puVar3;
    iVar4 = (**(code **)(*plVar5 + 0x60))();
    if (iVar4 < 0x11) {
      uVar10 = 1;
    }
    else {
      if (4 < *(uint *)(lVar7 + 0x5e8)) goto LAB_013d8c44;
      uVar10 = 0x1aU >> (ulong)(*(uint *)(lVar7 + 0x5e8) & 0x1f) & 1;
    }
  }
  else {
LAB_013d8c44:
    uVar10 = 0;
  }
  if (plVar8 == (long *)0x0) {
    return;
  }
  lVar7 = plVar8[0x2a];
  if (((*PTR_DAT_04bbc7a8 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_04bbc7a8), iVar4 != 0))
  {
    *(undefined **)PTR_DAT_04bbc7a0 = PTR_DAT_04bb2e50 + 0x10;
    __cxa_guard_release(PTR_DAT_04bbc7a8);
  }
  uVar6 = (**(code **)(*plVar8 + 0x20))(plVar8,PTR_DAT_04bbc7a0);
  uVar2 = 0;
  if ((int)lVar7 == 1) {
    uVar2 = uVar10;
  }
  if ((uVar6 & 1) == 0) {
    return;
  }
  if (uVar2 == 0) {
    return;
  }
  lVar7 = plVar8[0x5e];
  if ((lVar7 == 0) || (0x13 < param_2)) {
LAB_013d8ce0:
    lVar7 = *(long *)puVar3;
    puVar1 = (uint *)PTR_DAT_04bb3238;
  }
  else {
    if (((int)(uint)*(byte *)(lVar7 + 0x59a) <= (int)(char)param_2) &&
       ((int)((uint)*(byte *)(lVar7 + 0x59b) + (uint)*(byte *)(lVar7 + 0x59a)) <= (int)(char)param_2
       )) goto LAB_013d8ce0;
    puVar1 = (uint *)(lVar7 + uVar9 * 8 + 0x4f8);
    lVar7 = *(long *)puVar3;
  }
  if (lVar7 == 0) {
    return;
  }
  uVar10 = *puVar1;
  if ((((uVar10 == 0) ||
       (plVar8 = *(long **)(*(long *)(*(long *)(lVar7 + 0x1c0) + 8) +
                           ((ulong)(uVar10 >> 0x11) & 0x7ff8)), plVar8 == (long *)0x0)) ||
      ((*(uint *)(plVar8 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar8 + 0x46) != uVar10)) {
    plVar8 = (long *)0x0;
  }
  if ((*(int *)(lVar7 + 0x288) == 1) || (*(int *)(lVar7 + 0x288) == -1)) {
    plVar5 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar7 = *(long *)puVar3;
    iVar4 = (**(code **)(*plVar5 + 0x60))();
    if (iVar4 < 0x11) {
      uVar10 = 1;
      goto joined_r0x013d8d98;
    }
    if (*(uint *)(lVar7 + 0x5e8) < 5) {
      uVar10 = 0x1aU >> (ulong)(*(uint *)(lVar7 + 0x5e8) & 0x1f) & 1;
      goto joined_r0x013d8d98;
    }
  }
  uVar10 = 0;
joined_r0x013d8d98:
  if (plVar8 != (long *)0x0) {
    lVar7 = plVar8[0x2a];
    if (((*PTR_DAT_04bbc7b8 & 1) == 0) &&
       (iVar4 = __cxa_guard_acquire(PTR_DAT_04bbc7b8), iVar4 != 0)) {
      *(undefined **)PTR_DAT_04bbc7b0 = PTR_DAT_04bb2e50 + 0x10;
      __cxa_guard_release(PTR_DAT_04bbc7b8);
    }
    uVar6 = (**(code **)(*plVar8 + 0x20))(plVar8,PTR_DAT_04bbc7b0);
    uVar2 = 0;
    if ((int)lVar7 == 1) {
      uVar2 = uVar10;
    }
    if (((uVar6 & 1) != 0) && (uVar2 != 0)) {
      FUN_013e599c(plVar8,param_3);
      return;
    }
  }
  return;
}

