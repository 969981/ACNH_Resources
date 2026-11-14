
void FUN_01ad5f60(long *param_1,long param_2)

{
  uint uVar1;
  uint uVar2;
  undefined *puVar3;
  undefined *__s;
  int iVar4;
  uint *puVar5;
  long lVar6;
  long lVar7;
  int *piVar8;
  ulong uVar9;
  uint uVar10;
  long *plVar11;
  undefined *puVar12;
  uint *puVar13;
  char cVar14;
  undefined *local_78;
  char *pcStack_70;
  int local_64;
  
  puVar12 = PTR_DAT_04bb2020;
  if (((DAT_0532a8a8 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_0532a8a8), iVar4 != 0)) {
    local_78 = puVar12 + 0x10;
    pcStack_70 = "FtrCommonUser";
    FUN_00772610(&DAT_0532a870,&local_78);
    __cxa_guard_release(&DAT_0532a8a8);
  }
  __s = PTR_DAT_04bbfe90;
  puVar3 = PTR_DAT_04bbfe88;
  puVar13 = *(uint **)(param_2 + 0x10);
  if ((puVar13 == (uint *)0x0) || (*puVar13 == 0)) goto LAB_01ad632c;
  cVar14 = *PTR_DAT_04bbfe88;
LAB_01ad5fdc:
  if (cVar14 == '\0') {
    cVar14 = '\x01';
    *puVar3 = 1;
    memset(__s,0xff,0x1ac);
    uVar2 = *puVar13;
joined_r0x01ad6020:
    if ((uVar2 == 0) || (puVar5 = (uint *)(ulong)uVar2, puVar13 == puVar5)) goto LAB_01ad6154;
    lVar7 = 0xc;
    if (*(char *)((long)puVar13 + (10 - (long)puVar5)) != '\0') {
      lVar7 = 0x1c;
    }
    lVar7 = (long)puVar13 + (lVar7 - (long)puVar5);
    if (lVar7 == 0) goto LAB_01ad6154;
    uVar9 = (ulong)*(ushort *)((long)puVar13 + (8 - (long)puVar5));
    *(undefined4 *)(__s + 0x1a8) = 0xfffffffe;
    if (uVar9 == 0) goto LAB_01ad6154;
    piVar8 = (int *)(lVar7 + 4);
    while (piVar8[-1] != 0x49cc96d0) {
      piVar8 = piVar8 + 2;
      uVar9 = uVar9 - 1;
      if (uVar9 == 0) goto LAB_01ad6154;
    }
    iVar4 = 0;
    if (*piVar8 != -1) {
      iVar4 = *piVar8;
    }
    *(int *)(__s + 0x1a8) = iVar4;
    if (*puVar13 == 0) goto LAB_01ad6154;
    goto LAB_01ad5fdc;
  }
  uVar2 = *(uint *)(__s + 0x1a8);
  if ((int)uVar2 < 0) {
    if (uVar2 != 0xffffffff) goto LAB_01ad6154;
    uVar2 = *puVar13;
    goto joined_r0x01ad6020;
  }
  if (((char *)((ulong)uVar2 + (long)puVar13) != (char *)0x0) &&
     (*(char *)((ulong)uVar2 + (long)puVar13) != '\0')) {
    puVar13 = *(uint **)(param_2 + 0x10);
    if (puVar13 == (uint *)0x0) {
      lVar7 = *(long *)(PTR_PTR_04bb2238 + 8);
      puVar12 = PTR_DAT_04bb2020;
      goto LAB_01ad6388;
    }
    uVar2 = *puVar13;
    if (uVar2 == 0) goto LAB_01ad6130;
    uVar10 = *(uint *)(__s + 0x18c);
    goto LAB_01ad60c4;
  }
LAB_01ad6154:
  puVar12 = PTR_DAT_04bb2020;
  puVar13 = *(uint **)(param_2 + 0x10);
  if (((puVar13 == (uint *)0x0) || (uVar2 = *puVar13, uVar2 == 0)) ||
     (puVar13 == (uint *)(ulong)uVar2)) {
LAB_01ad632c:
    local_78 = (undefined *)CONCAT44(local_78._4_4_,0xe);
    local_64 = FUN_01ae7550(param_2);
    if (local_64 == (int)local_78) {
      if (((DAT_0532a928 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_0532a928), iVar4 != 0)) {
        local_78 = puVar12 + 0x10;
        pcStack_70 = "FtrCeilingCommonUser";
        FUN_00772610(&DAT_0532a8f0,&local_78);
        __cxa_guard_release(&DAT_0532a928);
      }
      plVar11 = &DAT_0532a8f0;
    }
    else {
      plVar11 = &DAT_0532a870;
    }
  }
  else {
    puVar5 = (uint *)((long)puVar13 - (long)(ulong)uVar2);
    uVar2 = *puVar5;
    if (uVar2 == 0) goto LAB_01ad632c;
    uVar10 = puVar5[1];
    if ((uVar10 == 0) || ((ulong)(ushort)puVar5[2] == 0)) {
LAB_01ad61e8:
      uVar10 = *(uint *)PTR_DAT_04bc00c8;
LAB_01ad61f4:
      uVar9 = (ulong)puVar5[1];
      if (puVar5[1] != 0) {
        if ((ulong)(ushort)puVar5[2] != 0) {
          lVar7 = 0xc;
          if (*(char *)((long)puVar5 + 10) != '\0') {
            lVar7 = 0x1c;
          }
          lVar7 = (long)puVar5 + lVar7 + (ulong)(ushort)puVar5[2] * 8;
          if (lVar7 != 0) {
            uVar1 = 0;
            if (uVar9 != 0) {
              uVar1 = (uint)((ulong)((long)puVar13 - lVar7) / uVar9);
            }
            if (uVar2 <= uVar1) {
              uVar1 = 0xffffffff;
            }
            if ((uVar1 < uVar10) &&
               (*(short *)(*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar1 * 2) == 2))
            goto LAB_01ad6310;
          }
        }
        if ((ulong)(ushort)puVar5[2] != 0) {
          lVar7 = 0xc;
          if (*(char *)((long)puVar5 + 10) != '\0') {
            lVar7 = 0x1c;
          }
          lVar7 = (long)puVar5 + lVar7 + (ulong)(ushort)puVar5[2] * 8;
          if (lVar7 != 0) {
            uVar1 = 0;
            if (uVar9 != 0) {
              uVar1 = (uint)((ulong)((long)puVar13 - lVar7) / uVar9);
            }
            if (uVar2 <= uVar1) {
              uVar1 = 0xffffffff;
            }
            if ((uVar1 < uVar10) &&
               (0xff43 < (ushort)(*(short *)(*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar1 * 2)
                                 - 0xbdU))) goto LAB_01ad632c;
          }
        }
        if ((ulong)(ushort)puVar5[2] != 0) {
          lVar7 = 0xc;
          if (*(char *)((long)puVar5 + 10) != '\0') {
            lVar7 = 0x1c;
          }
          lVar7 = (long)puVar5 + lVar7 + (ulong)(ushort)puVar5[2] * 8;
          if (lVar7 != 0) {
            uVar10 = 0;
            if (uVar9 != 0) {
              uVar10 = (uint)((ulong)((long)puVar13 - lVar7) / uVar9);
            }
            if (uVar2 <= uVar10) {
              uVar10 = 0xffffffff;
            }
            if ((uVar10 < *(uint *)PTR_DAT_04bc0070) &&
               (*(short *)(*(long *)(PTR_DAT_04bc0070 + 8) + (long)(int)uVar10 * 2) == 1))
            goto LAB_01ad6310;
          }
        }
      }
      goto LAB_01ad632c;
    }
    lVar7 = 0xc;
    if (*(char *)((long)puVar5 + 10) != '\0') {
      lVar7 = 0x1c;
    }
    lVar7 = (long)puVar5 + lVar7 + (ulong)(ushort)puVar5[2] * 8;
    if (lVar7 == 0) goto LAB_01ad61e8;
    uVar1 = 0;
    if ((ulong)uVar10 != 0) {
      uVar1 = (uint)((ulong)((long)puVar13 - lVar7) / (ulong)uVar10);
    }
    uVar10 = *(uint *)PTR_DAT_04bc00c8;
    if (uVar2 <= uVar1) {
      uVar1 = 0xffffffff;
    }
    if ((uVar10 <= uVar1) ||
       (*(short *)(*(long *)(PTR_DAT_04bc00c8 + 8) + (long)(int)uVar1 * 2) != 1)) goto LAB_01ad61f4;
LAB_01ad6310:
    if (((DAT_0532a8e8 & 1) == 0) && (iVar4 = __cxa_guard_acquire(&DAT_0532a8e8), iVar4 != 0)) {
      local_78 = puVar12 + 0x10;
      pcStack_70 = "FtrDishCommonUser";
      FUN_00772610(&DAT_0532a8b0,&local_78);
      __cxa_guard_release(&DAT_0532a8e8);
    }
    plVar11 = &DAT_0532a8b0;
  }
  (**(code **)(*plVar11 + 0x18))(plVar11);
  lVar7 = plVar11[1];
LAB_01ad6388:
  *param_1 = (long)(puVar12 + 0x10);
  param_1[1] = lVar7;
  return;
LAB_01ad60c4:
  if (-1 < (int)uVar10) {
    lVar6 = (long)puVar13 + (ulong)uVar10;
    goto LAB_01ad6134;
  }
  if ((uVar10 != 0xffffffff) || (lVar7 = (long)puVar13 - (ulong)uVar2, lVar7 == 0))
  goto LAB_01ad6130;
  lVar6 = 0xc;
  if (*(char *)(lVar7 + 10) != '\0') {
    lVar6 = 0x1c;
  }
  if (lVar6 + lVar7 == 0) goto LAB_01ad6130;
  uVar9 = (ulong)*(ushort *)(lVar7 + 8);
  *(undefined4 *)(__s + 0x18c) = 0xfffffffe;
  if (uVar9 == 0) goto LAB_01ad6130;
  puVar5 = (uint *)(lVar6 + lVar7 + 4);
  while (puVar5[-1] != 0x3febc642) {
    puVar5 = puVar5 + 2;
    uVar9 = uVar9 - 1;
    if (uVar9 == 0) goto LAB_01ad6130;
  }
  uVar10 = 0;
  if (*puVar5 != 0xffffffff) {
    uVar10 = *puVar5;
  }
  *(uint *)(__s + 0x18c) = uVar10;
  uVar2 = *puVar13;
  if (uVar2 == 0) goto LAB_01ad6130;
  goto LAB_01ad60c4;
LAB_01ad6130:
  lVar6 = 0;
LAB_01ad6134:
  lVar7 = *(long *)PTR_PTR_04bc0008;
  if (lVar6 != 0) {
    lVar7 = lVar6;
  }
  puVar12 = PTR_DAT_04bb2020;
  goto LAB_01ad6388;
}

