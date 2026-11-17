
undefined8 FUN_02b639c0(short param_1,undefined4 param_2)

{
  byte bVar1;
  short sVar2;
  uint uVar3;
  undefined *puVar4;
  undefined *puVar5;
  bool bVar6;
  int iVar7;
  long *plVar8;
  ulong uVar9;
  undefined8 uVar10;
  long lVar11;
  uint in_w13;
  long *plVar12;
  uint uVar13;
  ulong uVar14;
  
  puVar5 = PTR_DAT_04bc3010;
  puVar4 = PTR_DAT_04bb27c0;
  if (param_1 == 0) {
    return 0;
  }
  iVar7 = 0;
  do {
    sVar2 = *(short *)(*(long *)PTR_DAT_04bb5008 + 0x1fd0 + (long)iVar7 * 0x14 + 4);
    if (sVar2 != 0 && sVar2 == param_1) {
      in_w13 = *(uint *)(*(long *)PTR_DAT_04bb5008 + 0x1fd0 + (long)iVar7 * 0x14);
      break;
    }
    iVar7 = iVar7 + 1;
  } while (iVar7 != 0x24);
  uVar13 = *(uint *)PTR_DAT_04bb3238;
  if (sVar2 != 0 && sVar2 == param_1) {
    uVar13 = in_w13;
  }
  lVar11 = *(long *)PTR_DAT_04bb27c0;
  if (lVar11 == 0) {
    plVar12 = (long *)0x0;
    uVar14 = 0;
    bVar1 = *PTR_DAT_04bc3010;
  }
  else {
    if ((((uVar13 == 0) ||
         (plVar12 = *(long **)(*(long *)(*(long *)(lVar11 + 0x1c0) + 8) +
                              (ulong)(uVar13 >> 0x14) * 8), plVar12 == (long *)0x0)) ||
        ((*(uint *)(plVar12 + 0x49) >> 1 & 1) != 0)) || (*(uint *)(plVar12 + 0x46) != uVar13)) {
      plVar12 = (long *)0x0;
    }
    if (*(int *)(lVar11 + 0x288) == 1 || *(int *)(lVar11 + 0x288) == -1) {
      plVar8 = (long *)nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      lVar11 = *(long *)puVar4;
      iVar7 = (**(code **)(*plVar8 + 0x60))();
      if (iVar7 < 0x11) {
        uVar14 = 1;
        uVar13 = 1;
      }
      else {
        if (4 < *(uint *)(lVar11 + 0x5e8)) goto LAB_02b63b14;
        uVar14 = 0x101000100 >> (((ulong)*(uint *)(lVar11 + 0x5e8) & 7) << 3);
        uVar13 = (uint)uVar14;
      }
    }
    else {
LAB_02b63b14:
      uVar14 = 0;
      uVar13 = 0;
    }
    if (plVar12 != (long *)0x0) {
      bVar6 = (int)plVar12[0x2a] == 1;
      uVar3 = *(uint *)(plVar12 + 0x49) >> 4 & 1;
      if (((*puVar5 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_04bc3010), iVar7 != 0)) {
        *(undefined **)PTR_DAT_04bc3008 = PTR_DAT_04bc3018 + 0x10;
        __cxa_guard_release(PTR_DAT_04bc3010);
      }
      uVar14 = (**(code **)(*plVar12 + 0x20))(plVar12,PTR_DAT_04bc3008);
      if ((uVar14 & 1) == 0) {
        uVar13 = 0;
      }
      uVar14 = (ulong)uVar13;
      bVar1 = *puVar5;
      goto joined_r0x02b63b5c;
    }
    bVar1 = *puVar5;
  }
  bVar6 = false;
  uVar3 = 0;
joined_r0x02b63b5c:
  if (((bVar1 & 1) == 0) && (iVar7 = __cxa_guard_acquire(PTR_DAT_04bc3010), iVar7 != 0)) {
    *(undefined **)PTR_DAT_04bc3008 = PTR_DAT_04bc3018 + 0x10;
    __cxa_guard_release(PTR_DAT_04bc3010);
  }
  if ((((plVar12 != (long *)0x0) &&
       (uVar9 = (**(code **)(*plVar12 + 0x20))(plVar12,PTR_DAT_04bc3008), (uVar9 & 1) != 0)) &&
      (bVar6)) && (((uVar14 & 0xff) != 0 && (uVar3 != 0)))) {
    uVar10 = FUN_02ac5f14(plVar12,param_2);
    return uVar10;
  }
  return 0;
}

