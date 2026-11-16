
long FUN_0264e170(ushort *param_1)

{
  uint uVar1;
  byte *pbVar2;
  ulong uVar3;
  ushort uVar4;
  ushort uVar5;
  undefined *puVar6;
  undefined *puVar7;
  bool bVar8;
  int iVar9;
  ulong uVar10;
  long lVar11;
  long lVar12;
  byte bVar13;
  uint uVar14;
  uint local_58;
  undefined1 uStack_51;
  undefined1 local_50 [16];
  undefined1 *local_28;
  
  puVar7 = PTR_DAT_04bb3128;
  uVar4 = *param_1;
  if (((*PTR_DAT_04bb3128 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_04bb3128), iVar9 != 0))
  {
    FUN_00706e58(PTR_DAT_04bb3120);
    __cxa_guard_release(PTR_DAT_04bb3128);
  }
  puVar6 = PTR_DAT_04bb3120;
  if (0 < (int)*(uint *)PTR_DAT_04bb3120) {
    uVar10 = 0;
    do {
      if (*(uint *)(*(long *)(PTR_DAT_04bb3120 + 8) + uVar10 * 4) == (uint)(uVar4 >> 0xb))
      goto LAB_0264e1dc;
      uVar10 = uVar10 + 1;
    } while (*(uint *)PTR_DAT_04bb3120 != uVar10);
  }
  uVar10 = 0;
LAB_0264e1dc:
  local_58 = (uint)uVar10;
  uVar4 = *param_1;
  if (uVar4 == *(ushort *)PTR_DAT_04bb3170) {
    return 0;
  }
  uVar10 = (ulong)uVar4 & 0x7f;
  uVar14 = (uint)uVar10;
  if (99 < uVar14) {
    return 0;
  }
  if (((*puVar7 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_04bb3128), iVar9 != 0)) {
    FUN_00706e58(PTR_DAT_04bb3120);
    __cxa_guard_release(PTR_DAT_04bb3128);
  }
  uVar1 = local_58;
  if (*(uint *)puVar6 <= local_58) {
    uVar1 = 0;
  }
  if (*(int *)(*(long *)(puVar6 + 8) + (long)(int)uVar1 * 4) == 0) {
    if ((*(ushort **)PTR_DAT_04bc3a48 != (ushort *)0x0) &&
       ((**(ushort **)PTR_DAT_04bc3a48 & 1) != 0)) {
      return *(long *)(*(long *)PTR_DAT_04bc1530 + uVar10 * 8 + 0x88) + 0x2a8;
    }
    lVar12 = *(long *)PTR_DAT_04bb46b0;
    if (lVar12 != 0) {
      lVar11 = *(long *)(lVar12 + 0x10);
      if ((*(byte *)(lVar12 + 0x453) & 1) == 0) goto joined_r0x0264e2a4;
      if (lVar11 != 0) {
        lVar12 = *(long *)(lVar11 + 0x138);
        goto joined_r0x0264e2d8;
      }
    }
  }
  else {
    if (((*puVar7 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_04bb3128), iVar9 != 0)) {
      FUN_00706e58(PTR_DAT_04bb3120);
      __cxa_guard_release(PTR_DAT_04bb3128);
    }
    uVar1 = local_58;
    if (*(uint *)puVar6 <= local_58) {
      uVar1 = 0;
    }
    if ((*(int *)(*(long *)(puVar6 + 8) + (long)(int)uVar1 * 4) == 4) &&
       (*(long *)PTR_DAT_04bb46b0 != 0)) {
      lVar11 = *(long *)(*(long *)PTR_DAT_04bb46b0 + 0x10);
joined_r0x0264e2a4:
      if (lVar11 != 0) {
        lVar12 = *(long *)(lVar11 + 8);
joined_r0x0264e2d8:
        if ((lVar12 != 0) && (*(long *)(lVar12 + 0x18) != 0)) {
          return *(long *)(lVar12 + 0x18) + uVar10 * 0xb60 + 0x70;
        }
      }
    }
  }
  if (((*puVar7 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_04bb3128), iVar9 != 0)) {
    FUN_00706e58(PTR_DAT_04bb3120);
    __cxa_guard_release(PTR_DAT_04bb3128);
  }
  uVar1 = local_58;
  if (*(uint *)puVar6 <= local_58) {
    uVar1 = 0;
  }
  if (*(int *)(*(long *)(puVar6 + 8) + (long)(int)uVar1 * 4) == 2) {
    lVar11 = *(long *)PTR_DAT_04bb46b0;
    if (lVar11 == 0) goto LAB_0264e3ac;
    lVar12 = *(long *)(lVar11 + 0x10);
    if ((*(byte *)(lVar11 + 0x453) & 1) == 0) goto joined_r0x0264e37c;
    if (lVar12 == 0) goto LAB_0264e3ac;
    lVar12 = *(long *)(lVar12 + 0x138);
  }
  else {
    if (((*puVar7 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_04bb3128), iVar9 != 0)) {
      FUN_00706e58(PTR_DAT_04bb3120);
      __cxa_guard_release(PTR_DAT_04bb3128);
    }
    uVar1 = local_58;
    if (*(uint *)puVar6 <= local_58) {
      uVar1 = 0;
    }
    if ((*(int *)(*(long *)(puVar6 + 8) + (long)(int)uVar1 * 4) != 6) ||
       (*(long *)PTR_DAT_04bb46b0 == 0)) goto LAB_0264e3ac;
    lVar12 = *(long *)(*(long *)PTR_DAT_04bb46b0 + 0x10);
joined_r0x0264e37c:
    if (lVar12 == 0) goto LAB_0264e3ac;
    lVar12 = *(long *)(lVar12 + 8);
  }
  if ((lVar12 != 0) && (*(long *)(lVar12 + 0x18) != 0)) {
    return *(long *)(lVar12 + 0x18) + 0x8cdc8;
  }
LAB_0264e3ac:
  if (((*puVar7 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_04bb3128), iVar9 != 0)) {
    FUN_00706e58(PTR_DAT_04bb3120);
    __cxa_guard_release(PTR_DAT_04bb3128);
  }
  uVar1 = local_58;
  if (*(uint *)puVar6 <= local_58) {
    uVar1 = 0;
  }
  if (*(int *)(*(long *)(puVar6 + 8) + (long)(int)uVar1 * 4) == 9) {
    pbVar2 = PTR_DAT_04bb5038 + uVar10;
    if (7 < uVar14) {
      pbVar2 = PTR_DAT_04bb32e0;
    }
    bVar13 = *pbVar2;
    if (7 < bVar13) {
      bVar13 = 0xff;
    }
    local_50[0] = bVar13;
    lVar12 = FUN_02583354(*(undefined8 *)PTR_DAT_04bb4f78,local_50,1);
    if (lVar12 != 0) {
      return lVar12 + 0x32c0;
    }
  }
  if (((*puVar7 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_04bb3128), iVar9 != 0)) {
    FUN_00706e58(PTR_DAT_04bb3120);
    __cxa_guard_release(PTR_DAT_04bb3128);
  }
  uVar1 = local_58;
  if (*(uint *)puVar6 <= local_58) {
    uVar1 = 0;
  }
  if (*(int *)(*(long *)(puVar6 + 8) + (long)(int)uVar1 * 4) == 0xc) {
    pbVar2 = PTR_DAT_04bb5038 + uVar10;
    if (7 < uVar14) {
      pbVar2 = PTR_DAT_04bb32e0;
    }
    bVar13 = *pbVar2;
    if (7 < bVar13) {
      bVar13 = 0xff;
    }
    local_50[0] = bVar13;
    lVar12 = FUN_02583354(*(undefined8 *)PTR_DAT_04bb4f78,local_50,1);
    if (lVar12 != 0) {
      return lVar12 + 0x26f0;
    }
  }
  if (((*puVar7 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_04bb3128), iVar9 != 0)) {
    FUN_00706e58(PTR_DAT_04bb3120);
    __cxa_guard_release(PTR_DAT_04bb3128);
  }
  uVar1 = local_58;
  if (*(uint *)puVar6 <= local_58) {
    uVar1 = 0;
  }
  if ((*(int *)(*(long *)(puVar6 + 8) + (long)(int)uVar1 * 4) == 0x10) &&
     (*(long *)PTR_DAT_04bb47d8 != 0)) {
    uVar3 = uVar10;
    if (10 < uVar14) {
      uVar3 = 0;
    }
    lVar12 = *(long *)(*(long *)PTR_DAT_04bb47d8 + uVar3 * 8);
    if (lVar12 != 0) {
      return lVar12 + 0x1650;
    }
  }
  if (((*puVar7 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_04bb3128), iVar9 != 0)) {
    FUN_00706e58(PTR_DAT_04bb3120);
    __cxa_guard_release(PTR_DAT_04bb3128);
  }
  uVar1 = local_58;
  if (*(uint *)puVar6 <= local_58) {
    uVar1 = 0;
  }
  if ((*(int *)(*(long *)(puVar6 + 8) + (long)(int)uVar1 * 4) == 0x17) &&
     (*(long *)PTR_DAT_04bb47d8 != 0)) {
    uVar3 = uVar10;
    if (10 < uVar14) {
      uVar3 = 0;
    }
    lVar12 = *(long *)(*(long *)PTR_DAT_04bb47d8 + uVar3 * 8);
    if (lVar12 != 0) {
      return lVar12 + 0x21b0;
    }
  }
  if (((*puVar7 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_04bb3128), iVar9 != 0)) {
    FUN_00706e58(PTR_DAT_04bb3120);
    __cxa_guard_release(PTR_DAT_04bb3128);
  }
  uVar14 = local_58;
  if (*(uint *)puVar6 <= local_58) {
    uVar14 = 0;
  }
  if (*(int *)(*(long *)(puVar6 + 8) + (long)(int)uVar14 * 4) == 0x13) {
    if (*(long *)PTR_DAT_04bb46b0 == 0) {
      lVar11 = 0;
    }
    else {
      lVar12 = FUN_026eec4c(*(long *)PTR_DAT_04bb46b0,uVar10);
      lVar11 = 0;
      if (lVar12 != 0) {
        lVar11 = lVar12 + 0xe0;
      }
    }
    lVar12 = 0;
    if (lVar11 != 0) {
      lVar12 = lVar11 + 0x31e0;
    }
  }
  else {
    if (((*puVar7 & 1) == 0) && (iVar9 = __cxa_guard_acquire(PTR_DAT_04bb3128), iVar9 != 0)) {
      FUN_00706e58(PTR_DAT_04bb3120);
      __cxa_guard_release(PTR_DAT_04bb3128);
    }
    uVar14 = local_58;
    if (*(uint *)puVar6 <= local_58) {
      uVar14 = 0;
    }
    if (*(int *)(*(long *)(puVar6 + 8) + (long)(int)uVar14 * 4) == 0x16) {
      if ((uVar4 & 0x780) == 0) {
        lVar12 = FUN_02685590(uVar10);
        return lVar12;
      }
    }
    else {
      iVar9 = FUN_00802664(&local_58);
      if ((((iVar9 == 0x18) && ((*param_1 & 0x780) == 0x80)) && (*(long *)PTR_DAT_04bc1530 != 0)) &&
         (lVar12 = *(long *)(*(long *)PTR_DAT_04bc1530 + 0x6d0), lVar12 != 0)) {
        return lVar12 + 0x31e0;
      }
    }
    local_50 = FUN_02642d30();
    uVar10 = local_50._8_8_ & 0xffffffff;
    if (uVar10 == 0xffffffff) {
                    /* WARNING: Subroutine does not return */
      FUN_00d72dc0();
    }
    local_28 = &uStack_51;
    lVar12 = (*(code *)(&PTR_LAB_04a88330)[uVar10])(&local_28,local_50);
    if (lVar12 != 0) {
      uVar4 = *param_1;
      uVar5 = uVar4 >> 7 & 0xf;
      if (uVar5 == 2) {
        uVar10 = (ulong)uVar4 & 0x7f;
        lVar11 = lVar12 + 0x47298;
        lVar12 = lVar11 + uVar10 * 0xb60;
        bVar8 = 0xb < (uint)uVar10;
      }
      else {
        if (uVar5 != 0) {
          return 0;
        }
        lVar11 = lVar12 + 0xe0;
        uVar10 = (ulong)uVar4 & 0x7f;
        lVar12 = lVar11 + uVar10 * 0xb60;
        bVar8 = 99 < (uint)uVar10;
      }
      if (bVar8) {
        lVar12 = lVar11;
      }
    }
  }
  return lVar12;
}

