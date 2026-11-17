
void FUN_02b64410(short param_1)

{
  undefined *puVar1;
  byte bVar2;
  short sVar3;
  undefined *puVar4;
  undefined *puVar5;
  bool bVar6;
  int iVar7;
  long *plVar8;
  ulong uVar9;
  long lVar10;
  uint in_w13;
  long *plVar11;
  uint uVar12;
  ulong uVar13;
  
  puVar5 = PTR_DAT_04bc3010;
  puVar4 = PTR_DAT_04bb27c0;
  if (param_1 == 0) {
    return;
  }
  iVar7 = 0;
  do {
    sVar3 = *(short *)(*(long *)PTR_DAT_04bb5008 + 0x1fd0 + (long)iVar7 * 0x14 + 4);
    if (sVar3 != 0 && sVar3 == param_1) {
      in_w13 = *(uint *)(*(long *)PTR_DAT_04bb5008 + 0x1fd0 + (long)iVar7 * 0x14);
      break;
    }
    iVar7 = iVar7 + 1;
  } while (iVar7 != 0x24);
  uVar12 = *(uint *)PTR_DAT_04bb3238;
  if (sVar3 != 0 && sVar3 == param_1) {
    uVar12 = in_w13;
  }
  lVar10 = *(long *)PTR_DAT_04bb27c0;
  if (lVar10 == 0) {
    plVar11 = (long *)0x0;
    uVar13 = 0;
    bVar2 = *PTR_DAT_04bc3010;
  }
  else {
    if ((((uVar12 == 0) ||
         (plVar11 = *(long **)(*(long *)(*(long *)(lVar10 + 0x1c0) + 8) +
                              (ulong)(uVar12 >> 0x14) * 8), plVar11 == (long *)0x0)) ||
        ((*(uint *)(plVar11 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar11 + 0x46) != uVar12)) {
      plVar11 = (long *)0x0;
    }
    if (*(int *)(lVar10 + 0x288) == 1 || *(int *)(lVar10 + 0x288) == -1) {
      plVar8 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      lVar10 = *(long *)puVar4;
      iVar7 = (**(code **)(*plVar8 + 0x60))();
      if (iVar7 < 0x11) {
        uVar13 = 1;
        uVar12 = 1;
      }
      else {
        if (4 < *(uint *)(lVar10 + 0x5e8)) goto LAB_02b64560;
        uVar13 = 0x101000100 >> (((ulong)*(uint *)(lVar10 + 0x5e8) & 7) << 3);
        uVar12 = (uint)uVar13;
      }
    }
    else {
LAB_02b64560:
      uVar13 = 0;
      uVar12 = 0;
    }
    if (plVar11 != (long *)0x0) {
      bVar6 = (int)plVar11[0x2a] == 1;
      if (((*puVar5 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_04bc3010), iVar7 != 0)) {
        *(undefined **)PTR_DAT_04bc3008 = PTR_DAT_04bc3018 + 0x10;
        __cxa_guard_release(PTR_DAT_04bc3010);
      }
      uVar13 = (**(code **)(*plVar11 + 0x20))(plVar11,PTR_DAT_04bc3008);
      if ((uVar13 & 1) == 0) {
        uVar12 = 0;
      }
      uVar13 = (ulong)uVar12;
      bVar2 = *puVar5;
      goto joined_r0x02b645a4;
    }
    bVar2 = *puVar5;
  }
  bVar6 = false;
joined_r0x02b645a4:
  if (((bVar2 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_04bc3010), iVar7 != 0)) {
    *(undefined **)PTR_DAT_04bc3008 = PTR_DAT_04bc3018 + 0x10;
    __cxa_guard_release(PTR_DAT_04bc3010);
  }
  if ((((plVar11 != (long *)0x0) &&
       (uVar9 = (**(code **)(*plVar11 + 0x20))(plVar11,PTR_DAT_04bc3008), puVar5 = PTR_DAT_04bb3c48,
       puVar4 = PTR_DAT_04bb3c40, (uVar9 & 1) != 0)) && (bVar6)) && ((uVar13 & 0xff) != 0)) {
    if ((long *)plVar11[0x16] != plVar11 + 0x15) {
      lVar10 = (long)*(int *)((long)plVar11 + 0xbc);
      plVar8 = (long *)(plVar11[0x16] - lVar10);
      puVar1 = PTR_DAT_04bb3040 + 0x10;
      do {
        if (((*puVar5 & 1) == 0) && (iVar7 = __cxa_guard_acquire(puVar5), iVar7 != 0)) {
          *(undefined **)puVar4 = puVar1;
          __cxa_guard_release(puVar5);
        }
        if ((plVar8 != (long *)0x0) &&
           (uVar13 = (**(code **)(*plVar8 + 0x10))(plVar8,puVar4), (uVar13 & 1) != 0)) {
          *(undefined1 *)(plVar8 + 0x7c) = 1;
          return;
        }
        plVar8 = (long *)(*(long *)((long)plVar8 + lVar10 + 8) - lVar10);
      } while (plVar8 != (long *)((long)(plVar11 + 0x15) - lVar10));
    }
  }
  return;
}

