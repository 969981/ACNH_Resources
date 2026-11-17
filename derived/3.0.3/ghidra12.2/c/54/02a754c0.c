
ulong FUN_02a754c0(long param_1,uint param_2)

{
  byte bVar1;
  uint uVar2;
  ulong uVar3;
  undefined *puVar4;
  int iVar5;
  ulong uVar6;
  long *plVar7;
  long lVar8;
  long lVar9;
  uint uVar10;
  uint *puVar11;
  uint in_w11;
  long *plVar12;
  undefined4 *puVar13;
  bool bVar14;
  
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
  lVar8 = *(long *)PTR_DAT_04bb27c0;
  if (lVar8 == 0) {
    plVar12 = (long *)0x0;
  }
  else {
    plVar12 = *(long **)(*(long *)(*(long *)(lVar8 + 0x1c0) + 8) + (uVar3 >> 0x14) * 8);
    if (((plVar12 == (long *)0x0) || ((*(uint *)(plVar12 + 0x49) >> 1 & 1) != 0)) ||
       (*(uint *)(plVar12 + 0x46) != (uint)uVar3)) {
      plVar12 = (long *)0x0;
    }
    if ((*(int *)(lVar8 + 0x288) == 1) || (*(int *)(lVar8 + 0x288) == -1)) {
      plVar7 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      (**(code **)(*plVar7 + 0x60))();
    }
    if (plVar12 != (long *)0x0) {
      if (((*puVar4 & 1) == 0) && (iVar5 = __cxa_guard_acquire(PTR_DAT_04bc4410), iVar5 != 0)) {
        *(undefined **)PTR_DAT_04bc4408 = PTR_DAT_04bb2e50 + 0x10;
        __cxa_guard_release(PTR_DAT_04bc4410);
      }
      (**(code **)(*plVar12 + 0x20))(plVar12,PTR_DAT_04bc4408);
      bVar14 = false;
      bVar1 = *puVar4;
      goto joined_r0x02a75644;
    }
  }
  bVar14 = true;
  bVar1 = *puVar4;
joined_r0x02a75644:
  if (((bVar1 & 1) == 0) && (iVar5 = __cxa_guard_acquire(PTR_DAT_04bc4410), iVar5 != 0)) {
    *(undefined **)PTR_DAT_04bc4408 = PTR_DAT_04bb2e50 + 0x10;
    __cxa_guard_release(PTR_DAT_04bc4410);
  }
  puVar4 = PTR_DAT_04bb3238;
  if (plVar12 == (long *)0x0) {
    return (ulong)*(uint *)PTR_DAT_04bb3238;
  }
  uVar6 = (**(code **)(*plVar12 + 0x20))(plVar12,PTR_DAT_04bc4408);
  uVar10 = *(uint *)puVar4;
  if ((uVar6 & 1) == 0) {
    return (ulong)uVar10;
  }
  if (param_2 < 0x36) {
    lVar8 = param_1 + (ulong)param_2 * 8;
    *(uint *)(lVar8 + 0x10) = uVar10;
    *(undefined4 *)(lVar8 + 0x14) = 0xffffffff;
  }
  iVar5 = 0;
  param_1 = param_1 + 0x1c8;
  do {
    puVar11 = (uint *)(param_1 + (long)iVar5 * 0x14);
    if (((short)puVar11[1] != 0) && (*puVar11 == (uint)uVar3)) {
      *(undefined2 *)(puVar11 + 1) = 0;
      lVar8 = param_1 + (long)iVar5 * 0x14;
      *puVar11 = uVar10;
      *(undefined8 *)(lVar8 + 8) = 0;
      *(undefined4 *)(lVar8 + 0x10) = 0;
    }
    iVar5 = iVar5 + 1;
  } while (iVar5 != 0x24);
  lVar8 = plVar12[0x11];
  if (lVar8 != 0) {
    iVar5 = 0;
    do {
      puVar13 = (undefined4 *)(param_1 + (long)iVar5 * 0x14);
      uVar6 = FUN_00714920(lVar8,puVar13);
      if ((uVar6 & 1) != 0) {
        lVar9 = param_1 + (long)iVar5 * 0x14;
        *puVar13 = *(undefined4 *)puVar4;
        *(undefined2 *)(lVar9 + 4) = 0;
        *(undefined8 *)(lVar9 + 8) = 0;
        *(undefined4 *)(lVar9 + 0x10) = 0;
      }
      iVar5 = iVar5 + 1;
    } while (iVar5 != 0x24);
    if (bVar14) {
      return uVar3;
    }
  }
  FUN_006fb3d0(plVar12);
  return uVar3;
}

