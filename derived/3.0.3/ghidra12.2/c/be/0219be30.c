
void FUN_0219be30(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  int iVar3;
  ulong uVar4;
  long *plVar5;
  uint *puVar6;
  long *plVar7;
  uint uVar8;
  undefined8 *puVar9;
  uint *puVar10;
  long lVar11;
  undefined8 *local_60;
  int *piStack_58;
  undefined *local_50;
  undefined8 uStack_48;
  int local_24;
  
  puVar10 = (uint *)PTR_DAT_04bb3238;
  piStack_58 = &local_24;
  local_24 = (int)*(char *)(param_1 + 0xaf8);
  local_50 = PTR_FUN_04bb67b8;
  uStack_48 = 0;
  local_60 = (undefined8 *)(PTR_DAT_04bb67b0 + 0x10);
  iVar3 = *(int *)(*(long *)PTR_DAT_04bb3968 + 0xb88);
  if (iVar3 != 0) {
    puVar9 = *(undefined8 **)(*(long *)PTR_DAT_04bb3968 + 0xb90);
    lVar11 = (long)iVar3 << 3;
    do {
      puVar6 = (uint *)*puVar9;
      uVar4 = (*(code *)*local_60)(&local_60,puVar6);
      if ((uVar4 & 1) != 0) {
        puVar10 = puVar6;
        break;
      }
      puVar9 = puVar9 + 1;
      lVar11 = lVar11 + -8;
    } while (lVar11 != 0);
  }
  puVar2 = PTR_DAT_04bb27c0;
  lVar11 = *(long *)PTR_DAT_04bb27c0;
  if (lVar11 == 0) {
    return;
  }
  uVar8 = *puVar10;
  if ((((uVar8 == 0) ||
       (plVar7 = *(long **)(*(long *)(*(long *)(lVar11 + 0x1c0) + 8) +
                           ((ulong)(uVar8 >> 0x11) & 0x7ff8)), plVar7 == (long *)0x0)) ||
      ((*(uint *)(plVar7 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar7 + 0x46) != uVar8)) {
    plVar7 = (long *)0x0;
  }
  if (*(int *)(lVar11 + 0x288) == 1 || *(int *)(lVar11 + 0x288) == -1) {
    plVar5 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar11 = *(long *)puVar2;
    iVar3 = (**(code **)(*plVar5 + 0x60))();
    if (iVar3 < 0x11) {
      uVar8 = 1;
      goto joined_r0x0219bf84;
    }
    if (*(uint *)(lVar11 + 0x5e8) < 5) {
      uVar8 = 0x1aU >> (ulong)(*(uint *)(lVar11 + 0x5e8) & 0x1f) & 1;
      goto joined_r0x0219bf84;
    }
  }
  uVar8 = 0;
joined_r0x0219bf84:
  if (plVar7 != (long *)0x0) {
    lVar11 = plVar7[0x2a];
    if (((*PTR_DAT_04bb37d8 & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(PTR_DAT_04bb37d8), iVar3 != 0)) {
      *(undefined **)PTR_DAT_04bb37d0 = PTR_DAT_04bb3750 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb37d8);
    }
    uVar4 = (**(code **)(*plVar7 + 0x20))(plVar7,PTR_DAT_04bb37d0);
    uVar1 = 0;
    if ((int)lVar11 == 1) {
      uVar1 = uVar8;
    }
    if ((((uVar4 & 1) != 0) && (uVar1 != 0)) && (lVar11 = plVar7[0x77], lVar11 != 0)) {
      FUN_01ea7f28(lVar11,*(undefined4 *)(param_1 + 0x4e8),*(ulong *)(lVar11 + 0xad58) >> 0x32 & 1);
    }
  }
  return;
}

