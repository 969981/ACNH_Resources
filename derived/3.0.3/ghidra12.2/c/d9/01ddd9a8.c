
undefined1 FUN_01ddd9a8(undefined8 *param_1,undefined4 *param_2,ulong param_3)

{
  uint *puVar1;
  uint *puVar2;
  uint uVar3;
  ushort uVar4;
  byte bVar5;
  byte *pbVar6;
  undefined *puVar7;
  undefined *puVar8;
  byte bVar9;
  int iVar10;
  int iVar11;
  ulong uVar12;
  void *__dest;
  undefined8 *puVar13;
  long *plVar14;
  long lVar15;
  uint uVar16;
  byte *pbVar17;
  undefined4 uVar18;
  long lVar19;
  ushort *puVar20;
  undefined1 uVar21;
  long lVar22;
  long lVar23;
  undefined *local_80;
  char *local_78;
  undefined1 local_70;
  byte local_6f;
  byte local_64 [4];
  
  *(undefined1 *)(param_1 + 0x11) = 0;
  if (((param_3 & 1) != 0) && (*(int *)(*(long *)PTR_DAT_04bb21d0 + 0x78) == 0)) {
    return 0;
  }
  if (*(int *)(*(long *)(param_2 + 2) + 0x7798) == 0 ||
      *(int *)(*(long *)(param_2 + 2) + 0x777c) == 0) {
    return 0;
  }
  if ((*(int *)(param_1 + 3) != 0) ||
     ((*(int *)(*(long *)PTR_DAT_04bb21d0 + 0x78) != 0 &&
      (*(int *)(*(long *)PTR_DAT_04bb21d0 + 0xc4) != 0)))) {
LAB_01ddda20:
    *(undefined1 *)(param_1 + 0x11) = 0;
    return 0;
  }
  uVar12 = FUN_02640eb0();
  puVar7 = PTR_DAT_04bb2020;
  if ((uVar12 & 1) == 0) goto LAB_01ddda20;
  local_80 = PTR_DAT_04bb2020 + 0x10;
  local_78 = "IllegalReportCount";
  iVar10 = FUN_0274f6e0(&local_80);
  lVar19 = *(long *)PTR_DAT_04bb39b0;
  pbVar17 = PTR_DAT_04bb32e0;
  if (lVar19 == 0) {
LAB_01dddae8:
    if (*pbVar17 < 8) goto LAB_01dddb60;
LAB_01dddaf4:
    if (*(long **)PTR_DAT_04bb27d0 == (long *)0x0) {
LAB_01dddb58:
      pbVar17 = PTR_DAT_04bb5038;
      goto LAB_01dddb60;
    }
    lVar19 = **(long **)PTR_DAT_04bb27d0;
    bVar9 = *(byte *)(lVar19 + 0x473);
    pbVar17 = PTR_DAT_04bb5038;
    if ((long)(char)bVar9 != 0xffffffffffffffff) {
      puVar1 = (uint *)(lVar19 + 0x48) + ((long)(char)bVar9 & 0xffffffffU) * 0x20;
      if (7 < bVar9) {
        puVar1 = (uint *)(lVar19 + 0x48);
      }
      if ((*puVar1 & 8) != 0) {
        pbVar17 = (byte *)(lVar19 + 0x471);
      }
    }
    local_64[0] = *pbVar17;
    if (7 < local_64[0]) goto LAB_01dddb58;
  }
  else {
    if (*(int *)(lVar19 + 0x15c) != 0) {
      pbVar17 = (byte *)(lVar19 + 0x158);
    }
    if (7 < *pbVar17) {
      if ((*(int *)(lVar19 + 0x15c) != 0) && (*(long *)PTR_DAT_04bb4718 != 0)) {
        pbVar17 = (byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a5);
        goto LAB_01dddae8;
      }
      goto LAB_01dddaf4;
    }
LAB_01dddb60:
    local_64[0] = *pbVar17;
    if (7 < local_64[0]) {
      local_64[0] = 0xff;
    }
  }
  local_80 = puVar7 + 0x10;
  local_78 = "IllegalReportCount";
  iVar11 = FUN_0274bce0(local_64,&local_80);
  if (iVar10 <= iVar11) {
    uVar21 = 1;
LAB_01dddbe8:
    *(undefined1 *)(param_1 + 0x11) = uVar21;
    return uVar21;
  }
  uVar21 = 0;
  if ((*(long *)(param_2 + 4) == 0) || (*(long *)(param_2 + 6) == 0)) goto LAB_01dddbe8;
  __dest = (void *)(**(code **)(*(long *)*param_1 + 0x30))
                             ((long *)*param_1,*(long *)(param_2 + 6),0xfffffff8);
  if (__dest == (void *)0x0) {
    return 0;
  }
  memcpy(__dest,*(void **)(param_2 + 4),*(size_t *)(param_2 + 6));
  lVar19 = *(long *)(*(long *)(param_2 + 2) + 0x77b8);
  if (lVar19 == 0) {
    plVar14 = *(long **)PTR_DAT_04bb27d0;
    if (((plVar14 == (long *)0x0) || (plVar14[5] == 0)) || ((int)plVar14[0x10] != 1)) {
      lVar22 = *plVar14;
      bVar9 = *(byte *)(lVar22 + 0x473);
      if ((long)(char)bVar9 == 0xffffffffffffffff) {
        bVar9 = *PTR_DAT_04bc1220;
LAB_01dddd10:
        plVar14 = (long *)(*(long *)PTR_DAT_04bbaed0 + 0xd8) + (ulong)(uint)(int)(char)bVar9 * 6;
        if (7 < bVar9) {
          plVar14 = (long *)(*(long *)PTR_DAT_04bbaed0 + 0xd8);
        }
        lVar22 = *plVar14;
      }
      else {
        puVar1 = (uint *)(lVar22 + 0x48);
        puVar2 = puVar1 + ((long)(char)bVar9 & 0xffffffffU) * 0x20;
        if (7 < bVar9) {
          puVar2 = puVar1;
        }
        pbVar17 = PTR_DAT_04bc1220;
        pbVar6 = PTR_DAT_04bc1220;
        if ((*puVar2 & 8) != 0) {
          pbVar17 = (byte *)(lVar22 + 0x473);
          pbVar6 = (byte *)(lVar22 + 0x472);
        }
        bVar9 = *pbVar6;
        if (bVar9 == *pbVar17) goto LAB_01dddd10;
        lVar22 = 0;
        if ((bVar9 != 0xff) && ((*puVar2 >> 3 & 1) != 0)) {
          puVar2 = puVar1 + ((long)(char)bVar9 & 0xffffffffU) * 0x20;
          if (7 < bVar9) {
            puVar2 = puVar1;
          }
          if (((byte)*puVar2 >> 3 & 1) != 0) goto LAB_01dddd10;
          lVar22 = 0;
        }
      }
      bVar9 = FUN_026692d0(*(long *)(param_2 + 2) + 0x777c);
    }
    else {
      lVar22 = FUN_02659440();
      if (((lVar22 == 0) || (iVar10 = FUN_02659360(), iVar10 == -1)) ||
         ((*(long *)PTR_DAT_04bb46b0 == 0 ||
          (lVar23 = FUN_026eec4c(*(long *)PTR_DAT_04bb46b0,iVar10), lVar23 == 0)))) {
        FUN_01dde060(param_1);
        return 0;
      }
      local_78 = (char *)(lVar23 + 0x17b88);
      local_70 = 1;
      if (*(long **)(lVar23 + 0x17bb0) == (long *)0x0) {
        local_6f = 0;
      }
      else {
        puVar13 = (undefined8 *)**(long **)(lVar23 + 0x17bb0);
        local_6f = 0;
        if (puVar13 != (undefined8 *)0x0) {
          local_6f = (**(code **)*puVar13)();
        }
      }
      local_6f = local_6f & 1;
      local_80 = PTR_DAT_04bb4c18 + 0x10;
      bVar9 = FUN_026692d0(*(long *)(lVar23 + 0x17b98) + *(long *)(lVar23 + 0x17b90));
      FUN_02640184(&local_80);
    }
    uVar18 = 2;
  }
  else {
    bVar9 = 0;
    uVar18 = 1;
    lVar22 = lVar19;
  }
  puVar7 = PTR_DAT_04bb2698;
  lVar23 = *(long *)PTR_DAT_04bb2698;
  if (lVar23 == 0) {
    plVar14 = malloc(0x4f0);
  }
  else {
    plVar14 = (long *)param_1[1];
    if (plVar14 == (long *)0x0) {
      lVar15 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar14 = (long *)(lVar23 + 8);
      if (lVar15 != 0) {
        plVar14 = (long *)(lVar15 + 0xa8);
      }
      plVar14 = (long *)*plVar14;
    }
    plVar14 = (long *)(**(code **)(*plVar14 + 0x30))(plVar14,0x4f0,8);
  }
  *(undefined1 *)((long)plVar14 + 0x4d4) = 0;
  *(undefined1 *)((long)plVar14 + 0x24) = 0;
  plVar14[3] = (long)plVar14 + 0x24;
  *(undefined4 *)(plVar14 + 4) = 0x4b1;
  puVar8 = PTR_DAT_04bb2b70;
  plVar14[0x9b] = 0;
  plVar14[0x9c] = 0;
  plVar14[0x9d] = 0;
  plVar14[1] = 0x700000000;
  plVar14[2] = (long)(puVar8 + 0x10);
  param_1[0xc] = plVar14;
  *plVar14 = lVar22;
  *(undefined4 *)(param_1[0xc] + 8) = uVar18;
  *(undefined4 *)(param_1[0xc] + 0xc) = *param_2;
  *(void **)(param_1[0xc] + 0x4d8) = __dest;
  *(undefined8 *)(param_1[0xc] + 0x4e0) = *(undefined8 *)(param_2 + 6);
  lVar22 = param_1[0xc];
  (**(code **)(*(long *)(lVar22 + 0x10) + 0x18))((long *)(lVar22 + 0x10));
  lVar23 = *(long *)(lVar22 + 0x18);
  uVar3 = *(uint *)(lVar22 + 0x20);
  (**(code **)(*(long *)(param_2 + 8) + 0x18))(param_2 + 8);
  if (uVar3 != 0) {
    uVar16 = 0;
    lVar22 = 0x7fffffff;
    puVar20 = *(ushort **)(param_2 + 10);
    do {
      pbVar17 = (byte *)(lVar23 + (ulong)uVar16);
      if (lVar22 == 0) goto LAB_01dddf04;
      uVar4 = *puVar20;
      if (uVar4 == 0) goto LAB_01dddf04;
      bVar5 = (byte)uVar4;
      if (uVar4 < 0x80) {
        *pbVar17 = bVar5;
        iVar10 = 1;
      }
      else if (uVar4 < 0x800) {
        if (uVar3 <= uVar16 + 1) break;
        *pbVar17 = (byte)(uVar4 >> 6) | 0xc0;
        pbVar17[1] = bVar5 & 0x3f | 0x80;
        iVar10 = 2;
      }
      else {
        if (uVar3 <= uVar16 + 2) break;
        *pbVar17 = (byte)(uVar4 >> 0xc) | 0xe0;
        pbVar17[1] = (byte)(uVar4 >> 6) & 0x3f | 0x80;
        pbVar17[2] = bVar5 & 0x3f | 0x80;
        iVar10 = 3;
      }
      uVar16 = iVar10 + uVar16;
      lVar22 = lVar22 + -1;
      puVar20 = puVar20 + 1;
    } while (uVar16 < uVar3);
    pbVar17 = (byte *)(lVar23 + (ulong)(uVar16 - 1));
LAB_01dddf04:
    *pbVar17 = 0;
  }
  lVar22 = *(long *)puVar7;
  if (lVar22 == 0) {
    plVar14 = malloc(200);
  }
  else {
    plVar14 = (long *)param_1[1];
    if (plVar14 == (long *)0x0) {
      lVar23 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar14 = (long *)(lVar22 + 8);
      if (lVar23 != 0) {
        plVar14 = (long *)(lVar23 + 0xa8);
      }
      plVar14 = (long *)*plVar14;
      if (plVar14 == (long *)0x0) {
        plVar14 = (long *)0x0;
        goto LAB_01dddf68;
      }
    }
    plVar14 = (long *)(**(code **)(*plVar14 + 0x30))(plVar14,200,8);
  }
LAB_01dddf68:
  uVar18 = 1;
  if (lVar19 == 0) {
    uVar18 = 2;
  }
  *(undefined4 *)(plVar14 + 1) = uVar18;
  *(undefined4 *)((long)plVar14 + 0xc) = 1;
  *(undefined1 *)((long)plVar14 + 0x24) = 0;
  *(undefined4 *)(plVar14 + 4) = 0x40;
  puVar8 = PTR_DAT_04bb2bc0;
  *(undefined1 *)((long)plVar14 + 99) = 0;
  *(undefined4 *)(plVar14 + 0xf) = 0x40;
  *(undefined1 *)((long)plVar14 + 0x7c) = 0;
  *(undefined1 *)((long)plVar14 + 0xbb) = 0;
  plVar14[2] = (long)(puVar8 + 0x10);
  plVar14[3] = (long)plVar14 + 0x24;
  puVar7 = PTR_DAT_04bb2b80;
  *(undefined1 *)(plVar14 + 0x18) = 0;
  plVar14[0xd] = (long)(puVar8 + 0x10);
  plVar14[0xe] = (long)plVar14 + 0x7c;
  *plVar14 = (long)(puVar7 + 0x10);
  *(long **)(param_1[0xc] + 0x4e8) = plVar14;
  FUN_01ddd380(plVar14,*(long *)(param_2 + 2) + 0x777c);
  *(byte *)(plVar14 + 0x18) = bVar9 & 1;
  if ((param_3 & 1) == 0) {
    FUN_03ebb160(param_1 + 2,1);
    return 1;
  }
  FUN_01ddd784(param_1);
  return 1;
}

