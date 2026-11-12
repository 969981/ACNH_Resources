
undefined8 FUN_008cdfe0(undefined8 param_1,long *param_2,undefined4 *param_3)

{
  long lVar1;
  uint uVar2;
  undefined *puVar3;
  int iVar4;
  uint uVar5;
  uint uVar6;
  long *plVar7;
  undefined8 uVar8;
  long lVar9;
  long lVar10;
  undefined4 *puVar11;
  long *plVar12;
  undefined *local_a8;
  long lStack_a0;
  undefined8 local_98;
  undefined1 local_90;
  undefined1 local_55;
  
  puVar3 = PTR_DAT_04bb27c0;
  if (param_3 == (undefined4 *)0x0) {
    return 0;
  }
  if (*(char *)param_2[1] == '\0') {
    return 0;
  }
  lVar9 = *(long *)PTR_DAT_04bb27c0;
  if (lVar9 == 0) {
    return 0;
  }
  uVar6 = *(uint *)PTR_DAT_04bb32f8;
  if ((((uVar6 == 0) ||
       (plVar12 = *(long **)(*(long *)(*(long *)(lVar9 + 0x1c0) + 8) +
                            ((ulong)(uVar6 >> 0x11) & 0x7ff8)), plVar12 == (long *)0x0)) ||
      ((*(uint *)(plVar12 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar12 + 0x46) != uVar6)) {
    plVar12 = (long *)0x0;
  }
  if (*(int *)(lVar9 + 0x288) == 1 || *(int *)(lVar9 + 0x288) == -1) {
    plVar7 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar9 = *(long *)puVar3;
    iVar4 = (**(code **)(*plVar7 + 0x60))();
    if (iVar4 < 0x11) {
      uVar6 = 1;
    }
    else {
      if (4 < *(uint *)(lVar9 + 0x5e8)) goto LAB_008ce0c4;
      uVar6 = 0x1aU >> (ulong)(*(uint *)(lVar9 + 0x5e8) & 0x1f) & 1;
    }
  }
  else {
LAB_008ce0c4:
    uVar6 = 0;
  }
  if (plVar12 == (long *)0x0) {
    return 0;
  }
  lVar9 = plVar12[0x2a];
  uVar2 = *(uint *)(plVar12 + 0x49);
  if (((*PTR_DAT_04bb3280 & 1) == 0) && (iVar4 = __cxa_guard_acquire(PTR_DAT_04bb3280), iVar4 != 0))
  {
    *(undefined **)PTR_DAT_04bb3278 = PTR_DAT_04bb2e50 + 0x10;
    __cxa_guard_release(PTR_DAT_04bb3280);
  }
  uVar5 = (**(code **)(*plVar12 + 0x20))(plVar12,PTR_DAT_04bb3278);
  if ((int)lVar9 != 1) {
    return 0;
  }
  if ((uVar6 & uVar5) == 0) {
    return 0;
  }
  if ((uVar2 >> 4 & 1) == 0) {
    return 0;
  }
  local_90 = 0;
  local_98 = 0x3a63704e00000040;
  lVar10 = 0;
  lVar9 = (long)&local_98 + 4;
  local_55 = 0;
  local_a8 = PTR_DAT_04bb2bc0 + 0x10;
  do {
    if (*(char *)((long)&local_98 + lVar10 + 4) == '\0') goto LAB_008ce19c;
    if (*(char *)((long)&local_98 + lVar10 + 5) == '\0') {
      lVar10 = lVar10 + 1;
      goto LAB_008ce19c;
    }
    if (*(char *)((long)&local_98 + lVar10 + 6) == '\0') {
      lVar10 = lVar10 + 2;
      goto LAB_008ce19c;
    }
    lVar10 = lVar10 + 3;
  } while (lVar10 != 0x80001);
  lVar10 = 0;
LAB_008ce19c:
  uVar6 = (uint)lVar10 & ((int)(uint)lVar10 >> 0x1f ^ 0xffffffffU);
  lStack_a0 = lVar9;
  (**(code **)(*param_2 + 0x18))(param_2);
  lVar10 = 0;
  do {
    if (*(char *)(param_2[1] + lVar10) == '\0') goto LAB_008ce1fc;
    lVar1 = param_2[1] + lVar10;
    if (*(char *)(lVar1 + 1) == '\0') {
      lVar10 = lVar10 + 1;
      goto LAB_008ce1fc;
    }
    if (*(char *)(lVar1 + 2) == '\0') {
      lVar10 = lVar10 + 2;
      goto LAB_008ce1fc;
    }
    lVar10 = lVar10 + 3;
  } while (lVar10 != 0x80001);
  lVar10 = 0;
LAB_008ce1fc:
  uVar2 = (uint)lVar10;
  if ((int)((int)local_98 - uVar6) <= (int)(uint)lVar10) {
    uVar2 = (int)local_98 + ~uVar6;
  }
  if (0 < (int)uVar2) {
    (**(code **)(*param_2 + 0x18))(param_2);
    memcpy((void *)(lVar9 + (ulong)uVar6),(void *)param_2[1],(ulong)uVar2);
    *(undefined1 *)(lVar9 + (int)(uVar2 + uVar6)) = 0;
  }
  uVar8 = FUN_008fa0e0(plVar12,&local_a8,0,*(undefined4 *)PTR_DAT_04bb3238,
                       *(undefined4 *)PTR_DAT_04bb3238);
  uVar6 = (uint)uVar8;
  if (uVar6 == 0) {
    return uVar8;
  }
  lVar9 = *(long *)puVar3;
  if (lVar9 == 0) {
    return 0;
  }
  plVar12 = *(long **)(*(long *)(*(long *)(lVar9 + 0x1c0) + 8) + (ulong)(uVar6 >> 0x14) * 8);
  if (((plVar12 == (long *)0x0) || ((*(uint *)(plVar12 + 0x49) >> 1 & 1) != 0)) ||
     (*(uint *)(plVar12 + 0x46) != uVar6)) {
    plVar12 = (long *)0x0;
  }
  if ((*(int *)(lVar9 + 0x288) == 1) || (*(int *)(lVar9 + 0x288) == -1)) {
    plVar7 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar9 = *(long *)puVar3;
    iVar4 = (**(code **)(*plVar7 + 0x60))();
    if (iVar4 < 0x11) {
      uVar6 = 1;
      goto LAB_008ce308;
    }
    if (*(uint *)(lVar9 + 0x5e8) < 5) {
      uVar6 = 0x1aU >> (ulong)(*(uint *)(lVar9 + 0x5e8) & 0x1f) & 1;
      goto LAB_008ce308;
    }
  }
  uVar6 = 0;
LAB_008ce308:
  if (plVar12 != (long *)0x0) {
    lVar9 = plVar12[0x2a];
    uVar2 = *(uint *)(plVar12 + 0x49);
    if (((*PTR_DAT_04bb37d8 & 1) == 0) &&
       (iVar4 = __cxa_guard_acquire(PTR_DAT_04bb37d8), iVar4 != 0)) {
      *(undefined **)PTR_DAT_04bb37d0 = PTR_DAT_04bb3750 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb37d8);
    }
    uVar5 = (**(code **)(*plVar12 + 0x20))(plVar12,PTR_DAT_04bb37d0);
    if ((int)lVar9 != 1) {
      return 0;
    }
    if ((uVar6 & uVar5) == 0) {
      return 0;
    }
    if ((uVar2 >> 4 & 1) == 0) {
      return 0;
    }
    uVar6 = *(uint *)(*(long *)PTR_DAT_04bb3968 + 0xd64);
    if ((uVar6 >> 2 & 1) == 0) {
      if ((uVar6 >> 3 & 1) == 0) {
        if (plVar12[0x77] == 0) {
          return 0;
        }
        if ((uVar6 >> 1 & 1) != 0) {
          return 0;
        }
        if (plVar12[0xc] == 0) {
          return 0;
        }
        if (((uint)*(undefined8 *)(plVar12[0x77] + 0xad58) >> 2 & 1) == 0) {
          return 0;
        }
        puVar11 = (undefined4 *)(plVar12[0xc] + 0x15fc);
      }
      else {
        puVar11 = (undefined4 *)(*(long *)PTR_DAT_04bb3968 + 0xd74);
      }
      *param_3 = *puVar11;
      param_3[1] = puVar11[1];
      param_3[2] = puVar11[2];
      return 1;
    }
  }
  return 0;
}

