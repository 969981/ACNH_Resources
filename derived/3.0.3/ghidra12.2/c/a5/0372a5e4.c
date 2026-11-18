
/* WARNING: Removing unreachable block (ram,0x0372a6cc) */

void FUN_0372a5e4(long param_1,ulong param_2)

{
  long lVar1;
  uint uVar2;
  undefined *puVar3;
  int iVar4;
  uint uVar5;
  long *plVar6;
  ulong uVar7;
  long lVar8;
  undefined1 *__src;
  long lVar9;
  long *plVar10;
  undefined8 *puVar11;
  undefined *local_50;
  char *pcStack_48;
  int local_40;
  undefined1 local_3c [7];
  undefined1 local_35;
  
  lVar9 = *(long *)PTR_DAT_04bb27f8;
  if (lVar9 == 0) {
    return;
  }
  lVar8 = *(long *)PTR_DAT_04bb2720;
  if (lVar8 == 0) {
    puVar11 = &DAT_055c04a0;
  }
  else {
    puVar11 = &DAT_055c04a0;
    if (*(long *)(lVar8 + 0x330) != 0) {
      puVar11 = (undefined8 *)
                (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                          (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar8 + 0x338));
      iVar4 = FUN_006bd550(*puVar11,0);
      puVar11 = (undefined8 *)PTR_DAT_04bc3a80;
      if (iVar4 != 0x758f7eaf) {
        puVar11 = &DAT_055c04a0;
      }
    }
  }
  if ((*(int *)(puVar11 + 7) != -0x3e092032) && (*(int *)(puVar11 + 7) != -0x7975b8e8)) {
    return;
  }
  if ((((*(ushort **)PTR_DAT_04bc3a48 == (ushort *)0x0) ||
       ((**(ushort **)PTR_DAT_04bc3a48 & 1) == 0)) &&
      ((*(int *)(lVar9 + 0x14) == 4 || (*(int *)(lVar9 + 0x14) == 5)))) && ((param_2 & 1) == 0)) {
    return;
  }
  if (*(char *)(param_1 + 0x1231) < '\0') {
    return;
  }
  local_50 = PTR_DAT_04bb2020 + 0x10;
  pcStack_48 = "SeqFirstEditOngoing";
  iVar4 = FUN_02758850(&local_50);
  if (iVar4 != 0) {
    return;
  }
  local_35 = 0;
  local_3c[0] = 0;
  local_40 = 8;
  local_50 = PTR_DAT_04bb3768 + 0x10;
  uVar5 = *(uint *)(param_1 + 0x123c8);
  pcStack_48 = local_3c;
  if (uVar5 != 0xffffffff) {
    if (uVar5 < *(uint *)(param_1 + 0xe0)) {
      lVar9 = *(long *)(*(long *)(param_1 + 0xe8) + (long)(int)uVar5 * 8);
    }
    else {
      lVar9 = 0;
    }
    plVar10 = (long *)(lVar9 + 0x10);
    (**(code **)(*plVar10 + 0x18))(plVar10);
    __src = *(undefined1 **)(lVar9 + 0x18);
    if (local_3c != __src) {
      (**(code **)(*(long *)(lVar9 + 0x10) + 0x18))(plVar10);
      lVar8 = 0;
      do {
        if (*(char *)(*(long *)(lVar9 + 0x18) + lVar8) == '\0') goto LAB_0372a7fc;
        lVar1 = *(long *)(lVar9 + 0x18) + lVar8;
        if (*(char *)(lVar1 + 1) == '\0') {
          lVar8 = lVar8 + 1;
          goto LAB_0372a7fc;
        }
        if (*(char *)(lVar1 + 2) == '\0') {
          lVar8 = lVar8 + 2;
          goto LAB_0372a7fc;
        }
        lVar8 = lVar8 + 3;
      } while (lVar8 != 0x80001);
      lVar8 = 0;
LAB_0372a7fc:
      iVar4 = (int)lVar8;
      if (local_40 <= (int)lVar8) {
        iVar4 = local_40 + -1;
      }
      memcpy(local_3c,__src,(long)iVar4);
      local_3c[iVar4] = 0;
    }
  }
  uVar5 = FUN_020a4f40(*(undefined8 *)PTR_DAT_04bb3968,&local_50,PTR_DAT_04bb3238,1);
  puVar3 = PTR_DAT_04bb27c0;
  if (uVar5 == 0) {
    return;
  }
  lVar9 = *(long *)PTR_DAT_04bb27c0;
  if (lVar9 == 0) {
    return;
  }
  plVar10 = *(long **)(*(long *)(*(long *)(lVar9 + 0x1c0) + 8) + (ulong)(uVar5 >> 0x14) * 8);
  if (((plVar10 == (long *)0x0) || ((*(uint *)(plVar10 + 0x49) >> 1 & 1) != 0)) ||
     (*(uint *)(plVar10 + 0x46) != uVar5)) {
    plVar10 = (long *)0x0;
  }
  if (*(int *)(lVar9 + 0x288) == 1 || *(int *)(lVar9 + 0x288) == -1) {
    plVar6 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar9 = *(long *)puVar3;
    iVar4 = (**(code **)(*plVar6 + 0x60))();
    if (iVar4 < 0x11) {
      uVar5 = 1;
      goto LAB_0372a8e8;
    }
    if (*(uint *)(lVar9 + 0x5e8) < 5) {
      uVar5 = 0x1aU >> (ulong)(*(uint *)(lVar9 + 0x5e8) & 0x1f) & 1;
      goto LAB_0372a8e8;
    }
  }
  uVar5 = 0;
LAB_0372a8e8:
  if (plVar10 != (long *)0x0) {
    lVar9 = plVar10[0x2a];
    if (((*PTR_DAT_04bb37d8 & 1) == 0) &&
       (iVar4 = __cxa_guard_acquire(PTR_DAT_04bb37d8), iVar4 != 0)) {
      *(undefined **)PTR_DAT_04bb37d0 = PTR_DAT_04bb3750 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb37d8);
    }
    uVar7 = (**(code **)(*plVar10 + 0x20))(plVar10,PTR_DAT_04bb37d0);
    uVar2 = 0;
    if ((int)lVar9 == 1) {
      uVar2 = uVar5;
    }
    if (((uVar7 & 1) != 0) && (uVar2 != 0)) {
      FUN_006fb3d0(plVar10);
    }
  }
  return;
}

