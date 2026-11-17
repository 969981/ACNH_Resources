
ulong FUN_02a757e0(long param_1,uint param_2)

{
  byte bVar1;
  uint uVar2;
  ulong uVar3;
  undefined *puVar4;
  int iVar5;
  ulong uVar6;
  long *plVar7;
  ulong uVar8;
  long lVar9;
  uint uVar10;
  uint in_w11;
  long *plVar11;
  bool bVar12;
  
  puVar4 = PTR_DAT_04bc4410;
  if (*(int *)(PTR_DAT_04bc3a80 + 0x38) != -0x24a26848) {
    return (ulong)*(uint *)PTR_DAT_04bb3238;
  }
  if (param_2 < 0x36) {
    uVar10 = 0;
    do {
      uVar2 = *(uint *)(param_1 + 0x10 + ((long)((ulong)uVar10 << 0x20) >> 0x1d) + 4);
      if (uVar2 == param_2) {
        in_w11 = *(uint *)(param_1 + 0x10 + (long)(int)uVar10 * 8);
        break;
      }
      uVar10 = uVar10 + 1;
    } while (uVar10 != 0x36);
    uVar6 = (ulong)*(uint *)PTR_DAT_04bb3238;
    if (uVar2 != param_2) {
      in_w11 = *(uint *)PTR_DAT_04bb3238;
    }
    uVar3 = (ulong)in_w11;
  }
  else {
    in_w11 = *(uint *)PTR_DAT_04bb3238;
    uVar6 = (ulong)in_w11;
    uVar3 = uVar6;
  }
  if (in_w11 == 0) {
    return uVar6;
  }
  lVar9 = *(long *)PTR_DAT_04bb27c0;
  if (lVar9 == 0) {
    plVar11 = (long *)0x0;
  }
  else {
    plVar11 = *(long **)(*(long *)(*(long *)(lVar9 + 0x1c0) + 8) + (uVar3 >> 0x14) * 8);
    if (((plVar11 == (long *)0x0) || ((*(uint *)(plVar11 + 0x49) >> 1 & 1) != 0)) ||
       ((int)plVar11[0x46] != (int)uVar3)) {
      plVar11 = (long *)0x0;
    }
    if ((*(int *)(lVar9 + 0x288) == 1) || (*(int *)(lVar9 + 0x288) == -1)) {
      plVar7 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      (**(code **)(*plVar7 + 0x60))();
    }
    if (plVar11 != (long *)0x0) {
      if (((*puVar4 & 1) == 0) && (iVar5 = __cxa_guard_acquire(PTR_DAT_04bc4410), iVar5 != 0)) {
        *(undefined **)PTR_DAT_04bc4408 = PTR_DAT_04bb2e50 + 0x10;
        __cxa_guard_release(PTR_DAT_04bc4410);
      }
      (**(code **)(*plVar11 + 0x20))(plVar11,PTR_DAT_04bc4408);
      bVar12 = false;
      bVar1 = *puVar4;
      goto joined_r0x02a75954;
    }
  }
  bVar12 = true;
  bVar1 = *puVar4;
joined_r0x02a75954:
  if (((bVar1 & 1) == 0) && (iVar5 = __cxa_guard_acquire(PTR_DAT_04bc4410), iVar5 != 0)) {
    *(undefined **)PTR_DAT_04bc4408 = PTR_DAT_04bb2e50 + 0x10;
    __cxa_guard_release(PTR_DAT_04bc4410);
  }
  puVar4 = PTR_DAT_04bb3238;
  if (plVar11 == (long *)0x0) {
    uVar6 = (ulong)*(uint *)PTR_DAT_04bb3238;
  }
  else {
    uVar8 = (**(code **)(*plVar11 + 0x20))(plVar11,PTR_DAT_04bc4408);
    uVar6 = (ulong)*(uint *)puVar4;
    if ((uVar8 & 1) != 0) {
      if (param_2 < 0x36) {
        param_1 = param_1 + (ulong)param_2 * 8;
        *(uint *)(param_1 + 0x10) = *(uint *)puVar4;
        *(undefined4 *)(param_1 + 0x14) = 0xffffffff;
      }
      if (!bVar12) {
        FUN_006fb3d0(plVar11);
      }
      uVar6 = uVar3;
    }
  }
  return uVar6;
}

