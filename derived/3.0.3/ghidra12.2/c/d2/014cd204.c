
void FUN_014cd204(undefined8 param_1,ulong param_2)

{
  uint uVar1;
  undefined *puVar2;
  int iVar3;
  uint uVar4;
  long *plVar5;
  ulong uVar6;
  long *plVar7;
  long lVar8;
  long *plVar9;
  uint uVar10;
  undefined *local_70;
  char *pcStack_68;
  undefined *local_60;
  char *pcStack_58;
  undefined8 local_4c;
  undefined4 local_44;
  
  puVar2 = PTR_DAT_04bb27c0;
  lVar8 = *(long *)PTR_DAT_04bb27c0;
  if (lVar8 == 0) {
    return;
  }
  uVar10 = *(uint *)PTR_DAT_04bb32f8;
  if ((((uVar10 == 0) ||
       (plVar9 = *(long **)(*(long *)(*(long *)(lVar8 + 0x1c0) + 8) +
                           ((ulong)(uVar10 >> 0x11) & 0x7ff8)), plVar9 == (long *)0x0)) ||
      ((*(uint *)(plVar9 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar9 + 0x46) != uVar10)) {
    plVar9 = (long *)0x0;
  }
  if (*(int *)(lVar8 + 0x288) == 1 || *(int *)(lVar8 + 0x288) == -1) {
    plVar5 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar8 = *(long *)puVar2;
    iVar3 = (**(code **)(*plVar5 + 0x60))();
    if (iVar3 < 0x11) {
      uVar10 = 1;
    }
    else {
      if (4 < *(uint *)(lVar8 + 0x5e8)) goto LAB_014cd2cc;
      uVar10 = 0x1aU >> (ulong)(*(uint *)(lVar8 + 0x5e8) & 0x1f) & 1;
    }
  }
  else {
LAB_014cd2cc:
    uVar10 = 0;
  }
  if (plVar9 == (long *)0x0) {
    return;
  }
  lVar8 = plVar9[0x2a];
  if (((*PTR_DAT_04bb3280 & 1) == 0) && (iVar3 = __cxa_guard_acquire(PTR_DAT_04bb3280), iVar3 != 0))
  {
    *(undefined **)PTR_DAT_04bb3278 = PTR_DAT_04bb2e50 + 0x10;
    __cxa_guard_release(PTR_DAT_04bb3280);
  }
  uVar6 = (**(code **)(*plVar9 + 0x20))(plVar9,PTR_DAT_04bb3278);
  uVar1 = 0;
  if ((int)lVar8 == 1) {
    uVar1 = uVar10;
  }
  if ((uVar6 & 1) == 0) {
    return;
  }
  if (uVar1 == 0) {
    return;
  }
  lVar8 = *(long *)puVar2;
  if (lVar8 == 0) {
    return;
  }
  if ((((int)param_2 == 0) ||
      (plVar5 = *(long **)(*(long *)(*(long *)(lVar8 + 0x1c0) + 8) + (param_2 >> 0x14 & 0xfff) * 8),
      plVar5 == (long *)0x0)) ||
     (((*(uint *)(plVar5 + 0x49) >> 1 & 1) != 0 || ((int)plVar5[0x46] != (int)param_2)))) {
    plVar5 = (long *)0x0;
  }
  if ((*(int *)(lVar8 + 0x288) == 1) || (*(int *)(lVar8 + 0x288) == -1)) {
    plVar7 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar8 = *(long *)puVar2;
    iVar3 = (**(code **)(*plVar7 + 0x60))();
    if (iVar3 < 0x11) {
      uVar10 = 1;
      goto joined_r0x014cd3c8;
    }
    if (*(uint *)(lVar8 + 0x5e8) < 5) {
      uVar10 = 0x1aU >> (ulong)(*(uint *)(lVar8 + 0x5e8) & 0x1f) & 1;
      goto joined_r0x014cd3c8;
    }
  }
  uVar10 = 0;
joined_r0x014cd3c8:
  if (plVar5 != (long *)0x0) {
    lVar8 = plVar5[0x2a];
    uVar1 = *(uint *)(plVar5 + 0x49);
    if (((*PTR_DAT_04bb37d8 & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(PTR_DAT_04bb37d8), iVar3 != 0)) {
      *(undefined **)PTR_DAT_04bb37d0 = PTR_DAT_04bb3750 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb37d8);
    }
    uVar4 = (**(code **)(*plVar5 + 0x20))(plVar5,PTR_DAT_04bb37d0);
    if (((((int)lVar8 == 1) && ((uVar4 & uVar10) != 0)) && ((uVar1 >> 4 & 1) != 0)) &&
       (lVar8 = plVar5[0xc], lVar8 != 0)) {
      local_44 = *(undefined4 *)(lVar8 + 0x1604);
      local_4c = *(undefined8 *)(lVar8 + 0x15fc);
      local_70 = PTR_DAT_04bb2020 + 0x10;
      pcStack_58 = "cEmoticonMenuNpc";
      pcStack_68 = "cItemMenu";
      local_60 = local_70;
      FUN_008f9a6c(plVar9,&local_60,&local_70,&local_4c,1,1,0);
    }
  }
  return;
}

