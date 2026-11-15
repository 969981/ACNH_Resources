
void FUN_021cad10(long param_1)

{
  uint uVar1;
  undefined *puVar2;
  int iVar3;
  long *plVar4;
  ulong uVar5;
  long lVar6;
  undefined8 *puVar7;
  long *plVar8;
  uint uVar9;
  long lVar10;
  undefined **local_58;
  undefined4 local_50;
  uint *local_48;
  uint local_34;
  
  local_34 = 0;
  local_50 = *(undefined4 *)(param_1 + 4);
  lVar6 = *(long *)PTR_DAT_04bb3968;
  if (lVar6 == 0) {
    return;
  }
  local_48 = &local_34;
  local_58 = &PTR_FUN_04a77108;
  if (*(int *)(lVar6 + 0xb88) == 0) {
    return;
  }
  lVar10 = (long)*(int *)(lVar6 + 0xb88) << 3;
  puVar7 = *(undefined8 **)(lVar6 + 0xb90);
  do {
    (*(code *)*local_58)(&local_58,*puVar7);
    puVar2 = PTR_DAT_04bb27c0;
    lVar10 = lVar10 + -8;
    puVar7 = puVar7 + 1;
  } while (lVar10 != 0);
  if (local_34 == 0) {
    return;
  }
  lVar6 = *(long *)PTR_DAT_04bb27c0;
  if (lVar6 == 0) {
    return;
  }
  plVar8 = *(long **)(*(long *)(*(long *)(lVar6 + 0x1c0) + 8) + ((ulong)(local_34 >> 0x11) & 0x7ff8)
                     );
  if (((plVar8 == (long *)0x0) || ((*(uint *)(plVar8 + 0x49) >> 1 & 1) != 0)) ||
     (*(uint *)(plVar8 + 0x46) != local_34)) {
    plVar8 = (long *)0x0;
  }
  if (*(int *)(lVar6 + 0x288) == 1 || *(int *)(lVar6 + 0x288) == -1) {
    plVar4 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar6 = *(long *)puVar2;
    iVar3 = (**(code **)(*plVar4 + 0x60))();
    if (iVar3 < 0x11) {
      uVar9 = 1;
      goto joined_r0x021cae34;
    }
    if (*(uint *)(lVar6 + 0x5e8) < 5) {
      uVar9 = 0x1aU >> (ulong)(*(uint *)(lVar6 + 0x5e8) & 0x1f) & 1;
      goto joined_r0x021cae34;
    }
  }
  uVar9 = 0;
joined_r0x021cae34:
  if (plVar8 != (long *)0x0) {
    lVar6 = plVar8[0x2a];
    if (((*PTR_DAT_04bb37d8 & 1) == 0) &&
       (iVar3 = __cxa_guard_acquire(PTR_DAT_04bb37d8), iVar3 != 0)) {
      *(undefined **)PTR_DAT_04bb37d0 = PTR_DAT_04bb3750 + 0x10;
      __cxa_guard_release(PTR_DAT_04bb37d8);
    }
    uVar5 = (**(code **)(*plVar8 + 0x20))(plVar8,PTR_DAT_04bb37d0);
    uVar1 = 0;
    if ((int)lVar6 == 1) {
      uVar1 = uVar9;
    }
    if ((((uVar5 & 1) != 0) && (uVar1 != 0)) && (lVar6 = plVar8[0x77], lVar6 != 0)) {
      FUN_01ea7f28(lVar6,*(undefined4 *)(param_1 + 700),*(ulong *)(lVar6 + 0xad58) >> 0x32 & 1);
    }
  }
  return;
}

