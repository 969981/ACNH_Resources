
undefined1 FUN_01ddf2dc(undefined8 *param_1,undefined4 *param_2,ulong param_3)

{
  uint *puVar1;
  uint *puVar2;
  ushort uVar3;
  char cVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  bool bVar8;
  int iVar9;
  int iVar10;
  ulong uVar11;
  void *__dest;
  long *plVar12;
  long lVar13;
  undefined8 *puVar14;
  char *pcVar15;
  byte bVar16;
  uint uVar17;
  uint uVar18;
  byte *pbVar19;
  long *plVar20;
  byte bVar21;
  undefined4 uVar22;
  long lVar23;
  ushort *puVar24;
  undefined8 uVar25;
  byte *pbVar26;
  undefined1 uVar27;
  byte *pbVar28;
  byte local_78 [4];
  byte local_74 [4];
  undefined *local_70;
  char *pcStack_68;
  
  *(undefined1 *)(param_1 + 0x11) = 0;
  puVar7 = PTR_DAT_04bb27d0;
  if (((param_3 & 1) != 0) && (*(int *)(*(long *)PTR_DAT_04bb21d0 + 0x78) == 0)) {
    return 0;
  }
  pbVar26 = (byte *)(param_2 + 1);
  if (7 < *pbVar26) {
    return 0;
  }
  if (*(byte *)(**(long **)PTR_DAT_04bb27d0 + 0x476) < 2) {
    iVar9 = FUN_02582d8c(pbVar26,2);
    if (iVar9 < 0) {
      return 0;
    }
  }
  else {
    local_70 = (undefined *)CONCAT71(local_70._1_7_,*pbVar26);
    uVar11 = FUN_01d3e2d0(**(long **)PTR_DAT_04bb27d0 + 8,&local_70);
    if ((uVar11 & 1) == 0) {
      return 0;
    }
  }
  puVar6 = PTR_DAT_04bb39b0;
  pbVar28 = PTR_DAT_04bb32e0;
  lVar23 = *(long *)PTR_DAT_04bb39b0;
  pbVar19 = PTR_DAT_04bb32e0;
  if (lVar23 == 0) {
    if (7 < (byte)*PTR_DAT_04bb32e0) goto LAB_01ddf3ec;
LAB_01ddf444:
    bVar16 = *pbVar19;
    if (7 < bVar16) {
      bVar16 = 0xff;
    }
  }
  else {
    if (*(int *)(lVar23 + 0x15c) != 0) {
      pbVar19 = (byte *)(lVar23 + 0x158);
    }
    if ((*pbVar19 < 8) ||
       (((*(int *)(lVar23 + 0x15c) != 0 && (*(long *)PTR_DAT_04bb4718 != 0)) &&
        (pbVar19 = (byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a5), *pbVar19 < 8)))) goto LAB_01ddf444;
LAB_01ddf3ec:
    if (*(long **)puVar7 == (long *)0x0) {
LAB_01ddf43c:
      pbVar19 = PTR_DAT_04bb5038;
      goto LAB_01ddf444;
    }
    lVar23 = **(long **)puVar7;
    bVar16 = *(byte *)(lVar23 + 0x473);
    pbVar19 = PTR_DAT_04bb5038;
    if ((long)(char)bVar16 != 0xffffffffffffffff) {
      puVar1 = (uint *)(lVar23 + 0x48) + ((long)(char)bVar16 & 0xffffffffU) * 0x20;
      if (7 < bVar16) {
        puVar1 = (uint *)(lVar23 + 0x48);
      }
      if ((*puVar1 & 8) != 0) {
        pbVar19 = (byte *)(lVar23 + 0x471);
      }
    }
    bVar16 = *pbVar19;
    if (7 < bVar16) goto LAB_01ddf43c;
  }
  bVar21 = *pbVar26;
  if (7 < bVar16) {
    bVar16 = 0xff;
  }
  if (7 < bVar21) {
    bVar21 = 0xff;
  }
  if (bVar16 == bVar21) {
    return 0;
  }
  if ((*(int *)(param_1 + 3) != 0) ||
     ((*(int *)(*(long *)PTR_DAT_04bb21d0 + 0x78) != 0 &&
      (*(int *)(*(long *)PTR_DAT_04bb21d0 + 0xc4) != 0)))) {
LAB_01ddf4a4:
    *(undefined1 *)(param_1 + 0x11) = 0;
    return 0;
  }
  uVar11 = FUN_02640eb0();
  puVar5 = PTR_DAT_04bb2020;
  if ((uVar11 & 1) == 0) goto LAB_01ddf4a4;
  local_70 = PTR_DAT_04bb2020 + 0x10;
  pcStack_68 = "IllegalReportCount";
  iVar9 = FUN_0274f6e0(&local_70);
  lVar23 = *(long *)puVar6;
  if (lVar23 == 0) {
LAB_01ddf53c:
    if (*pbVar28 < 8) goto LAB_01ddf5ac;
LAB_01ddf548:
    if (*(long **)puVar7 == (long *)0x0) {
LAB_01ddf5a4:
      pbVar28 = PTR_DAT_04bb5038;
      goto LAB_01ddf5ac;
    }
    lVar23 = **(long **)puVar7;
    bVar16 = *(byte *)(lVar23 + 0x473);
    pbVar19 = PTR_DAT_04bb5038;
    if ((long)(char)bVar16 != 0xffffffffffffffff) {
      puVar1 = (uint *)(lVar23 + 0x48) + ((long)(char)bVar16 & 0xffffffffU) * 0x20;
      if (7 < bVar16) {
        puVar1 = (uint *)(lVar23 + 0x48);
      }
      if ((*puVar1 & 8) != 0) {
        pbVar19 = (byte *)(lVar23 + 0x471);
      }
    }
    local_74[0] = *pbVar19;
    if (7 < local_74[0]) goto LAB_01ddf5a4;
  }
  else {
    if (*(int *)(lVar23 + 0x15c) != 0) {
      pbVar28 = (byte *)(lVar23 + 0x158);
    }
    if (7 < *pbVar28) {
      if ((*(int *)(lVar23 + 0x15c) != 0) && (*(long *)PTR_DAT_04bb4718 != 0)) {
        pbVar28 = (byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a5);
        goto LAB_01ddf53c;
      }
      goto LAB_01ddf548;
    }
LAB_01ddf5ac:
    local_74[0] = *pbVar28;
    if (7 < local_74[0]) {
      local_74[0] = 0xff;
    }
  }
  local_70 = puVar5 + 0x10;
  pcStack_68 = "IllegalReportCount";
  iVar10 = FUN_0274bce0(local_74,&local_70);
  if (iVar9 <= iVar10) {
    uVar27 = 1;
LAB_01ddf674:
    *(undefined1 *)(param_1 + 0x11) = uVar27;
    return uVar27;
  }
  uVar27 = 0;
  if ((*(long *)(param_2 + 2) == 0) || (*(long *)(param_2 + 4) == 0)) goto LAB_01ddf674;
  __dest = (void *)(**(code **)(*(long *)*param_1 + 0x30))
                             ((long *)*param_1,*(long *)(param_2 + 4),0xfffffff8);
  if (__dest == (void *)0x0) {
    return 0;
  }
  memcpy(__dest,*(void **)(param_2 + 2),*(size_t *)(param_2 + 4));
  puVar6 = PTR_DAT_04bb2698;
  lVar23 = *(long *)PTR_DAT_04bb2698;
  if (lVar23 == 0) {
    puVar14 = malloc(0x4f0);
  }
  else {
    plVar12 = (long *)param_1[1];
    if (plVar12 == (long *)0x0) {
      lVar13 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar12 = (long *)(lVar23 + 8);
      if (lVar13 != 0) {
        plVar12 = (long *)(lVar13 + 0xa8);
      }
      plVar12 = (long *)*plVar12;
    }
    puVar14 = (undefined8 *)(**(code **)(*plVar12 + 0x30))(plVar12,0x4f0,8);
  }
  puVar5 = PTR_DAT_04bb2b70;
  *puVar14 = 0;
  puVar14[1] = 0x700000000;
  *(undefined4 *)(puVar14 + 4) = 0x4b1;
  plVar12 = *(long **)puVar7;
  *(undefined1 *)((long)puVar14 + 0x24) = 0;
  *(undefined1 *)((long)puVar14 + 0x4d4) = 0;
  puVar14[0x9b] = 0;
  puVar14[0x9c] = 0;
  puVar14[0x9d] = 0;
  puVar14[2] = puVar5 + 0x10;
  puVar14[3] = (undefined1 *)((long)puVar14 + 0x24);
  param_1[0xc] = puVar14;
  pcVar15 = (char *)FUN_02582a24(pbVar26,1);
  lVar23 = *plVar12;
  cVar4 = *pcVar15;
  uVar17 = (uint)cVar4;
  bVar16 = *(byte *)(lVar23 + 0x473);
  if ((long)(char)bVar16 == 0xffffffffffffffff) {
    if (*PTR_DAT_04bc1220 == cVar4) goto LAB_01ddf744;
LAB_01ddf77c:
    uVar25 = 0;
  }
  else {
    puVar1 = (uint *)(lVar23 + 0x48);
    puVar2 = puVar1 + ((long)(char)bVar16 & 0xffffffffU) * 0x20;
    if (7 < bVar16) {
      puVar2 = puVar1;
    }
    pcVar15 = PTR_DAT_04bc1220;
    if ((*puVar2 & 8) != 0) {
      pcVar15 = (char *)(lVar23 + 0x473);
    }
    if (*pcVar15 != cVar4) {
      uVar25 = 0;
      if (((*puVar2 >> 3 & 1) == 0) || (uVar17 == 0xffffffff)) goto LAB_01ddf780;
      puVar2 = puVar1 + (ulong)uVar17 * 0x20;
      if (7 < uVar17) {
        puVar2 = puVar1;
      }
      if (((byte)*puVar2 >> 3 & 1) == 0) goto LAB_01ddf77c;
    }
LAB_01ddf744:
    puVar14 = (undefined8 *)(*(long *)PTR_DAT_04bbaed0 + 0xd8) + (ulong)uVar17 * 6;
    if (7 < uVar17) {
      puVar14 = (undefined8 *)(*(long *)PTR_DAT_04bbaed0 + 0xd8);
    }
    uVar25 = *puVar14;
  }
LAB_01ddf780:
  *(undefined8 *)param_1[0xc] = uVar25;
  *(undefined4 *)(param_1[0xc] + 8) = 0;
  *(undefined4 *)(param_1[0xc] + 0xc) = *param_2;
  *(void **)(param_1[0xc] + 0x4d8) = __dest;
  *(undefined8 *)(param_1[0xc] + 0x4e0) = *(undefined8 *)(param_2 + 4);
  lVar23 = param_1[0xc];
  (**(code **)(*(long *)(lVar23 + 0x10) + 0x18))((long *)(lVar23 + 0x10));
  lVar13 = *(long *)(lVar23 + 0x18);
  uVar17 = *(uint *)(lVar23 + 0x20);
  (**(code **)(*(long *)(param_2 + 6) + 0x18))(param_2 + 6);
  if (uVar17 != 0) {
    uVar18 = 0;
    lVar23 = 0x7fffffff;
    puVar24 = *(ushort **)(param_2 + 8);
    do {
      pbVar19 = (byte *)(lVar13 + (ulong)uVar18);
      if (lVar23 == 0) goto LAB_01ddf894;
      uVar3 = *puVar24;
      if (uVar3 == 0) goto LAB_01ddf894;
      bVar16 = (byte)uVar3;
      if (uVar3 < 0x80) {
        *pbVar19 = bVar16;
        iVar9 = 1;
      }
      else if (uVar3 < 0x800) {
        if (uVar17 <= uVar18 + 1) break;
        *pbVar19 = (byte)(uVar3 >> 6) | 0xc0;
        pbVar19[1] = bVar16 & 0x3f | 0x80;
        iVar9 = 2;
      }
      else {
        if (uVar17 <= uVar18 + 2) break;
        *pbVar19 = (byte)(uVar3 >> 0xc) | 0xe0;
        pbVar19[1] = (byte)(uVar3 >> 6) & 0x3f | 0x80;
        pbVar19[2] = bVar16 & 0x3f | 0x80;
        iVar9 = 3;
      }
      uVar18 = iVar9 + uVar18;
      lVar23 = lVar23 + -1;
      puVar24 = puVar24 + 1;
    } while (uVar18 < uVar17);
    pbVar19 = (byte *)(lVar13 + (ulong)(uVar18 - 1));
LAB_01ddf894:
    *pbVar19 = 0;
  }
  lVar23 = *(long *)puVar6;
  if (lVar23 == 0) {
    plVar12 = malloc(0xd0);
  }
  else {
    plVar12 = (long *)param_1[1];
    if (plVar12 == (long *)0x0) {
      lVar13 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
      plVar12 = (long *)(lVar23 + 8);
      if (lVar13 != 0) {
        plVar12 = (long *)(lVar13 + 0xa8);
      }
      plVar12 = (long *)*plVar12;
      if (plVar12 == (long *)0x0) {
        plVar12 = (long *)0x0;
        goto LAB_01ddf8f8;
      }
    }
    plVar12 = (long *)(**(code **)(*plVar12 + 0x30))(plVar12,0xd0,8);
  }
LAB_01ddf8f8:
  puVar5 = PTR_DAT_04bb2bc0;
  *(undefined4 *)(plVar12 + 4) = 0x40;
  puVar6 = PTR_DAT_04bb2b78;
  *(undefined4 *)(plVar12 + 0xf) = 0x40;
  *(undefined1 *)((long)plVar12 + 99) = 0;
  *(undefined1 *)((long)plVar12 + 0xbb) = 0;
  *(undefined1 *)((long)plVar12 + 0x24) = 0;
  *(undefined1 *)((long)plVar12 + 0x7c) = 0;
  *(undefined2 *)(plVar12 + 0x19) = 0;
  plVar12[0x18] = 0;
  plVar12[2] = (long)(puVar5 + 0x10);
  plVar12[3] = (long)plVar12 + 0x24;
  plVar12[0xd] = (long)(puVar5 + 0x10);
  plVar12[0xe] = (long)plVar12 + 0x7c;
  *plVar12 = (long)(puVar6 + 0x10);
  plVar12[1] = 0;
  *(long **)(param_1[0xc] + 0x4e8) = plVar12;
  local_78[0] = *pbVar26;
  if (7 < local_78[0]) {
    local_78[0] = 0xff;
  }
  lVar23 = FUN_025830c0(*(undefined8 *)PTR_DAT_04bb4f78,local_78,1);
  if ((*(long **)(lVar23 + 0x17bb0) == (long *)0x0) ||
     (puVar14 = (undefined8 *)**(long **)(lVar23 + 0x17bb0), puVar14 == (undefined8 *)0x0)) {
    FUN_01ddd380(plVar12,*(long *)(lVar23 + 0x17b98) + *(long *)(lVar23 + 0x17b90));
  }
  else {
    uVar11 = (**(code **)*puVar14)();
    FUN_01ddd380(plVar12,*(long *)(lVar23 + 0x17b98) + *(long *)(lVar23 + 0x17b90));
    if ((((uVar11 & 1) != 0) && (*(long *)(lVar23 + 0x17bb0) != 0)) &&
       (puVar14 = *(undefined8 **)(*(long *)(lVar23 + 0x17bb0) + 8), puVar14 != (undefined8 *)0x0))
    {
      (**(code **)*puVar14)();
    }
  }
  plVar20 = *(long **)puVar7;
  uVar22 = 0;
  if (plVar20[2] != 0) {
    uVar22 = *(undefined4 *)(plVar20[2] + 0xaa8);
  }
  local_70 = (undefined *)CONCAT44(local_70._4_4_,uVar22);
  *(undefined4 *)(plVar12 + 0x18) = uVar22;
  uVar22 = 0;
  if (*plVar20 != 0) {
    uVar22 = *(undefined4 *)(*plVar20 + 0x548);
  }
  *(undefined4 *)((long)plVar12 + 0xc4) = uVar22;
  lVar23 = *plVar20;
  bVar16 = *(byte *)(lVar23 + 0x473);
  if ((long)(char)bVar16 != 0xffffffffffffffff) {
    pbVar26 = (byte *)(lVar23 + 0x48) + ((long)(char)bVar16 & 0xffffffffU) * 0x80;
    if (7 < bVar16) {
      pbVar26 = (byte *)(lVar23 + 0x48);
    }
    if ((*pbVar26 >> 3 & 1) != 0) {
      bVar8 = *(byte *)(lVar23 + 0x472) == bVar16;
      goto LAB_01ddfa58;
    }
  }
  bVar8 = true;
LAB_01ddfa58:
  *(bool *)(plVar12 + 0x19) = bVar8;
  if ((param_3 & 1) == 0) {
    FUN_03ebb160(param_1 + 2,1);
    return 1;
  }
  FUN_01ddd784(param_1);
  return 1;
}

