
undefined1 FUN_01ddfa8c(undefined8 *param_1,undefined4 *param_2,ulong param_3)

{
  uint *puVar1;
  undefined *puVar2;
  uint *puVar3;
  undefined1 *puVar4;
  uint uVar5;
  ushort uVar6;
  byte *pbVar7;
  undefined *puVar8;
  bool bVar9;
  byte bVar10;
  int iVar11;
  int iVar12;
  ulong uVar13;
  void *__dest;
  long *plVar14;
  long lVar15;
  ushort *puVar16;
  uint uVar17;
  byte *pbVar18;
  long lVar19;
  undefined4 uVar20;
  undefined1 uVar21;
  long *plVar22;
  long lVar23;
  undefined *local_1b0;
  char *pcStack_1a8;
  undefined4 local_1a0;
  undefined1 local_19c;
  undefined8 local_198;
  undefined8 uStack_190;
  undefined4 local_188;
  undefined *local_180;
  undefined1 *puStack_178;
  undefined4 local_170;
  undefined1 local_16c [63];
  undefined1 local_12d;
  undefined *local_128;
  undefined1 *puStack_120;
  undefined4 local_118;
  undefined1 local_114 [63];
  undefined1 local_d5;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined2 local_a8;
  undefined1 auStack_a6 [6];
  undefined4 local_a0 [2];
  long local_98;
  undefined *local_90;
  undefined8 uStack_88;
  undefined8 local_80;
  undefined8 local_78;
  undefined8 uStack_70;
  undefined1 local_68;
  undefined4 local_64;
  
  *(undefined1 *)(param_1 + 0x11) = 0;
  if ((((param_3 & 1) != 0) && (*(int *)(*(long *)PTR_DAT_04bb21d0 + 0x78) == 0)) ||
     (*(long *)(param_2 + 2) == 0)) {
    return 0;
  }
  if ((*(int *)(param_1 + 3) != 0) ||
     ((*(int *)(*(long *)PTR_DAT_04bb21d0 + 0x78) != 0 &&
      (*(int *)(*(long *)PTR_DAT_04bb21d0 + 0xc4) != 0)))) {
LAB_01ddfae4:
    *(undefined1 *)(param_1 + 0x11) = 0;
    return 0;
  }
  uVar13 = FUN_02640eb0();
  puVar2 = PTR_DAT_04bb2020;
  if ((uVar13 & 1) == 0) goto LAB_01ddfae4;
  local_1b0 = PTR_DAT_04bb2020 + 0x10;
  pcStack_1a8 = "IllegalReportCount";
  iVar11 = FUN_0274f6e0(&local_1b0);
  lVar19 = *(long *)PTR_DAT_04bb39b0;
  pbVar18 = PTR_DAT_04bb32e0;
  if (lVar19 == 0) {
LAB_01ddfbb4:
    if (*pbVar18 < 8) goto LAB_01ddfc2c;
LAB_01ddfbc0:
    if (*(long **)PTR_DAT_04bb27d0 == (long *)0x0) {
LAB_01ddfc24:
      pbVar18 = PTR_DAT_04bb5038;
      goto LAB_01ddfc2c;
    }
    lVar19 = **(long **)PTR_DAT_04bb27d0;
    bVar10 = *(byte *)(lVar19 + 0x473);
    pbVar18 = PTR_DAT_04bb5038;
    if ((long)(char)bVar10 != 0xffffffffffffffff) {
      puVar1 = (uint *)(lVar19 + 0x48) + ((long)(char)bVar10 & 0xffffffffU) * 0x20;
      if (7 < bVar10) {
        puVar1 = (uint *)(lVar19 + 0x48);
      }
      if ((*puVar1 & 8) != 0) {
        pbVar18 = (byte *)(lVar19 + 0x471);
      }
    }
    bVar10 = *pbVar18;
    bVar9 = 7 < bVar10;
    if (bVar9) {
      bVar10 = 0xff;
    }
    local_90 = (undefined *)CONCAT71(local_90._1_7_,bVar10);
    if (bVar9) goto LAB_01ddfc24;
  }
  else {
    if (*(int *)(lVar19 + 0x15c) != 0) {
      pbVar18 = (byte *)(lVar19 + 0x158);
    }
    if (7 < *pbVar18) {
      if ((*(int *)(lVar19 + 0x15c) != 0) && (*(long *)PTR_DAT_04bb4718 != 0)) {
        pbVar18 = (byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a5);
        goto LAB_01ddfbb4;
      }
      goto LAB_01ddfbc0;
    }
LAB_01ddfc2c:
    bVar10 = *pbVar18;
    if (7 < bVar10) {
      bVar10 = 0xff;
    }
    local_90 = (undefined *)CONCAT71(local_90._1_7_,bVar10);
  }
  local_1b0 = puVar2 + 0x10;
  pcStack_1a8 = "IllegalReportCount";
  iVar12 = FUN_0274bce0(&local_90,&local_1b0);
  if (iVar11 <= iVar12) {
    uVar21 = 1;
LAB_01ddfd40:
    *(undefined1 *)(param_1 + 0x11) = uVar21;
    return uVar21;
  }
  uVar21 = 0;
  if ((*(long *)(param_2 + 6) == 0) || (*(long *)(param_2 + 8) == 0)) goto LAB_01ddfd40;
  __dest = (void *)(**(code **)(*(long *)*param_1 + 0x30))
                             ((long *)*param_1,*(long *)(param_2 + 8),0xfffffff8);
  if (__dest == (void *)0x0) {
    return 0;
  }
  memcpy(__dest,*(void **)(param_2 + 6),*(size_t *)(param_2 + 8));
  puVar2 = PTR_DAT_04bb2698;
  if ((*(long **)(param_2 + 4) != (long *)0x0) && (lVar19 = **(long **)(param_2 + 4), lVar19 != 0))
  goto LAB_01ddfd7c;
  lVar19 = **(long **)PTR_DAT_04bb27d0;
  bVar10 = *(byte *)(lVar19 + 0x473);
  if ((long)(char)bVar10 == 0xffffffffffffffff) {
    bVar10 = *PTR_DAT_04bc1220;
LAB_01ddfd4c:
    plVar14 = (long *)(*(long *)PTR_DAT_04bbaed0 + 0xd8) + (ulong)(uint)(int)(char)bVar10 * 6;
    if (7 < bVar10) {
      plVar14 = (long *)(*(long *)PTR_DAT_04bbaed0 + 0xd8);
    }
    lVar19 = *plVar14;
  }
  else {
    puVar1 = (uint *)(lVar19 + 0x48);
    puVar3 = puVar1 + ((long)(char)bVar10 & 0xffffffffU) * 0x20;
    if (7 < bVar10) {
      puVar3 = puVar1;
    }
    pbVar18 = PTR_DAT_04bc1220;
    pbVar7 = PTR_DAT_04bc1220;
    if ((*puVar3 & 8) != 0) {
      pbVar18 = (byte *)(lVar19 + 0x473);
      pbVar7 = (byte *)(lVar19 + 0x472);
    }
    bVar10 = *pbVar7;
    if (bVar10 == *pbVar18) goto LAB_01ddfd4c;
    lVar19 = 0;
    if ((bVar10 != 0xff) && ((*puVar3 >> 3 & 1) != 0)) {
      puVar3 = puVar1 + ((long)(char)bVar10 & 0xffffffffU) * 0x20;
      if (7 < bVar10) {
        puVar3 = puVar1;
      }
      if (((byte)*puVar3 >> 3 & 1) != 0) goto LAB_01ddfd4c;
      lVar19 = 0;
    }
  }
LAB_01ddfd7c:
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
  *(undefined1 *)((long)plVar14 + 0x24) = 0;
  plVar14[3] = (long)plVar14 + 0x24;
  *(undefined4 *)(plVar14 + 4) = 0x4b1;
  puVar8 = PTR_DAT_04bb2b70;
  *(undefined1 *)((long)plVar14 + 0x4d4) = 0;
  plVar14[0x9b] = 0;
  plVar14[0x9c] = 0;
  plVar14[0x9d] = 0;
  plVar14[1] = 0x700000000;
  plVar14[2] = (long)(puVar8 + 0x10);
  param_1[0xc] = plVar14;
  *plVar14 = lVar19;
  *(undefined4 *)(param_1[0xc] + 8) = 8;
  *(undefined4 *)(param_1[0xc] + 0xc) = *param_2;
  *(void **)(param_1[0xc] + 0x4d8) = __dest;
  *(undefined8 *)(param_1[0xc] + 0x4e0) = *(undefined8 *)(param_2 + 8);
  lVar19 = param_1[0xc];
  (**(code **)(*(long *)(lVar19 + 0x10) + 0x18))((long *)(lVar19 + 0x10));
  lVar23 = *(long *)(lVar19 + 0x18);
  uVar5 = *(uint *)(lVar19 + 0x20);
  (**(code **)(*(long *)(param_2 + 10) + 0x18))(param_2 + 10);
  if (uVar5 != 0) {
    uVar17 = 0;
    lVar19 = 0x7fffffff;
    puVar16 = *(ushort **)(param_2 + 0xc);
    do {
      pbVar18 = (byte *)(lVar23 + (ulong)uVar17);
      if (lVar19 == 0) goto LAB_01ddff30;
      uVar6 = *puVar16;
      if (uVar6 == 0) goto LAB_01ddff30;
      bVar10 = (byte)uVar6;
      if (uVar6 < 0x80) {
        *pbVar18 = bVar10;
        iVar11 = 1;
      }
      else if (uVar6 < 0x800) {
        if (uVar5 <= uVar17 + 1) break;
        *pbVar18 = (byte)(uVar6 >> 6) | 0xc0;
        pbVar18[1] = bVar10 & 0x3f | 0x80;
        iVar11 = 2;
      }
      else {
        if (uVar5 <= uVar17 + 2) break;
        *pbVar18 = (byte)(uVar6 >> 0xc) | 0xe0;
        pbVar18[1] = (byte)(uVar6 >> 6) & 0x3f | 0x80;
        pbVar18[2] = bVar10 & 0x3f | 0x80;
        iVar11 = 3;
      }
      uVar17 = iVar11 + uVar17;
      lVar19 = lVar19 + -1;
      puVar16 = puVar16 + 1;
    } while (uVar17 < uVar5);
    pbVar18 = (byte *)(lVar23 + (ulong)(uVar17 - 1));
LAB_01ddff30:
    *pbVar18 = 0;
  }
  lVar19 = *(long *)puVar2;
  if (lVar19 == 0) {
    plVar14 = malloc(0x140);
  }
  else {
    plVar14 = (long *)param_1[1];
    if (plVar14 == (long *)0x0) {
      lVar23 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar14 = (long *)(lVar19 + 8);
      if (lVar23 != 0) {
        plVar14 = (long *)(lVar23 + 0xa8);
      }
      plVar14 = (long *)*plVar14;
      if (plVar14 == (long *)0x0) {
        plVar14 = (long *)0x0;
        goto LAB_01ddff94;
      }
    }
    plVar14 = (long *)(**(code **)(*plVar14 + 0x30))(plVar14,0x140,8);
  }
LAB_01ddff94:
  lVar19 = *(long *)param_1[0xc];
  *(undefined1 *)((long)plVar14 + 0x24) = 0;
  uVar20 = 8;
  if (lVar19 == 0) {
    uVar20 = 9;
  }
  *(undefined4 *)(plVar14 + 1) = uVar20;
  *(undefined4 *)((long)plVar14 + 0xc) = 6;
  puVar2 = PTR_DAT_04bb2bc0;
  *(undefined4 *)(plVar14 + 4) = 0x40;
  *(undefined1 *)((long)plVar14 + 0x7c) = 0;
  *(undefined1 *)((long)plVar14 + 99) = 0;
  *(undefined4 *)(plVar14 + 0xf) = 0x40;
  *(undefined1 *)((long)plVar14 + 0xbb) = 0;
  puVar2 = puVar2 + 0x10;
  plVar14[2] = (long)puVar2;
  plVar14[3] = (long)plVar14 + 0x24;
  plVar14[0xd] = (long)puVar2;
  plVar14[0xe] = (long)plVar14 + 0x7c;
  puVar8 = PTR_DAT_04bb2b90;
  *(undefined1 *)((long)plVar14 + 0xd4) = 0;
  plVar14[0x19] = (long)plVar14 + 0xd4;
  *plVar14 = (long)(puVar8 + 0x10);
  puVar8 = PTR_DAT_04bb2b60;
  *(undefined4 *)(plVar14 + 0x1a) = 0x61;
  *(undefined1 *)((long)plVar14 + 0x134) = 0;
  *(undefined1 *)(plVar14 + 0x27) = 0;
  plVar22 = plVar14 + 0x18;
  *plVar22 = (long)(puVar8 + 0x10);
  *(long **)(param_1[0xc] + 0x4e8) = plVar14;
  FUN_01ddd380(plVar14,*(long *)(param_2 + 2) + 0x30);
  local_170 = 0x40;
  local_1a0 = 0x15;
  puStack_178 = local_16c;
  local_12d = 0;
  puStack_120 = local_114;
  local_118 = 0x40;
  local_d5 = 0;
  local_b0 = 0;
  local_a8 = 0;
  local_1b0 = PTR_DAT_04bc0ce8 + 0x10;
  local_d0 = 0;
  uStack_c8 = 0;
  puVar4 = auStack_a6;
  if (auStack_a6 <= (undefined1 *)((long)&local_d0 + 2U)) {
    puVar4 = (undefined1 *)((long)&local_d0 + 2U);
  }
  local_c0 = 0;
  uStack_b8 = 0;
  pcStack_1a8 = (char *)&local_d0;
  local_180 = puVar2;
  local_128 = puVar2;
  memset(&local_d0,0,(ulong)(puVar4 + (-0xe1 - (long)&local_1b0)) & 0xfffffffffffffff8 | 2);
  local_a0[0] = 0x14;
  local_98 = *(long *)(param_2 + 2) + 8;
  memset(&local_d0,0,(ulong)(puVar4 + ~(ulong)&local_d0) & 0xfffffffffffffff8 | 2);
  local_19c = 0;
  local_198 = 0xffffffff;
  uStack_190 = 0xffffffff00000000;
  local_188 = 0xffffffff;
  local_16c[0] = 0;
  local_114[0] = 0;
  local_80 = 0;
  local_68 = 1;
  local_64 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_90 = PTR_DAT_04bc0cd8 + 0x10;
  uStack_88 = 0;
  FUN_02906b00(&local_90,&local_1b0,local_a0);
  puVar16 = (ushort *)(**(code **)(local_1b0 + 0x18))(&local_1b0);
  (**(code **)(*plVar22 + 0x18))(plVar22);
  uVar5 = *(uint *)(plVar14 + 0x1a);
  if (uVar5 != 0) {
    lVar19 = plVar14[0x19];
    uVar17 = 0;
    lVar23 = 0x7fffffff;
    do {
      pbVar18 = (byte *)(lVar19 + (ulong)uVar17);
      if (lVar23 == 0) goto LAB_01de021c;
      uVar6 = *puVar16;
      if (uVar6 == 0) goto LAB_01de021c;
      bVar10 = (byte)uVar6;
      if (uVar6 < 0x80) {
        *pbVar18 = bVar10;
        iVar11 = 1;
      }
      else if (uVar6 < 0x800) {
        if (uVar5 <= uVar17 + 1) break;
        *pbVar18 = (byte)(uVar6 >> 6) | 0xc0;
        pbVar18[1] = bVar10 & 0x3f | 0x80;
        iVar11 = 2;
      }
      else {
        if (uVar5 <= uVar17 + 2) break;
        *pbVar18 = (byte)(uVar6 >> 0xc) | 0xe0;
        pbVar18[1] = (byte)(uVar6 >> 6) & 0x3f | 0x80;
        pbVar18[2] = bVar10 & 0x3f | 0x80;
        iVar11 = 3;
      }
      uVar17 = iVar11 + uVar17;
      lVar23 = lVar23 + -1;
      puVar16 = puVar16 + 1;
    } while (uVar17 < uVar5);
    pbVar18 = (byte *)(lVar19 + (ulong)(uVar17 - 1));
LAB_01de021c:
    *pbVar18 = 0;
  }
  bVar10 = FUN_026692d0(*(long *)(param_2 + 2) + 0x30);
  *(byte *)(plVar14 + 0x27) = bVar10 & 1;
  if ((param_3 & 1) == 0) {
    FUN_03ebb160(param_1 + 2,1);
    return 1;
  }
  FUN_01ddd784(param_1);
  return 1;
}

