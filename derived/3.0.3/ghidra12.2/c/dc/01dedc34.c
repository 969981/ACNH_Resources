
undefined8 FUN_01dedc34(long param_1,uint param_2,ulong param_3)

{
  long lVar1;
  uint *puVar2;
  uint uVar3;
  int iVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  bool bVar9;
  undefined1 uVar10;
  int iVar11;
  ulong uVar12;
  undefined8 *puVar13;
  undefined8 uVar14;
  void *__src;
  long lVar15;
  long *plVar16;
  byte *pbVar17;
  long lVar18;
  byte *pbVar19;
  void *__dest;
  byte bVar20;
  long lVar21;
  long lVar22;
  undefined8 uVar23;
  size_t __n;
  long lVar24;
  undefined *local_150;
  long local_148;
  undefined4 local_140;
  uint local_138 [54];
  byte local_44 [4];
  
  puVar7 = PTR_DAT_04bb36f0;
  puVar5 = PTR_DAT_04bb21d0;
  if (*(int *)(param_1 + 8) != 0) {
    return 0;
  }
  if (*(char *)(param_1 + 0x48) != '\0') {
    uVar3 = *(uint *)(param_1 + 0x4c);
    if (*(uint *)(*(long *)PTR_DAT_04bb36f0 + 0x20) <= uVar3) {
      uVar3 = 0;
    }
    if (*(char *)(*(long *)(*(long *)PTR_DAT_04bb36f0 + 0x28) + (long)(int)uVar3 * 0x38 + 0x2c) ==
        '\0') {
      return 0;
    }
  }
  *(undefined1 *)(param_1 + 0x50) = 0;
  puVar8 = PTR_DAT_04bb39b0;
  pbVar19 = PTR_DAT_04bb32e0;
  puVar6 = PTR_DAT_04bb27d0;
  if (*(int *)(*(long *)puVar5 + 0x78) == 0) {
    return 0;
  }
  lVar15 = *(long *)puVar7;
  uVar3 = param_2;
  if (*(uint *)(lVar15 + 0x20) <= param_2) {
    uVar3 = 0;
  }
  if (*(char *)(*(long *)(lVar15 + 0x28) + (long)(int)uVar3 * 0x38 + 0x2c) == '\0') {
    return 0;
  }
  plVar16 = *(long **)PTR_DAT_04bb27d0;
  if (((plVar16 != (long *)0x0) && (plVar16[5] != 0)) && ((int)plVar16[0x10] == 1))
  goto LAB_01dee06c;
  lVar15 = *(long *)PTR_DAT_04bb39b0;
  pbVar17 = PTR_DAT_04bb32e0;
  if (lVar15 == 0) {
    bVar9 = 7 < (byte)*PTR_DAT_04bb32e0;
    if (bVar9) {
      pbVar17 = PTR_DAT_04bb5038;
    }
    if (plVar16 == (long *)0x0) goto LAB_01dede28;
LAB_01deddc0:
    if (!bVar9) goto LAB_01dede28;
LAB_01deddcc:
    lVar15 = *plVar16;
    bVar20 = *(byte *)(lVar15 + 0x473);
    pbVar17 = PTR_DAT_04bb5038;
    if ((long)(char)bVar20 != 0xffffffffffffffff) {
      puVar2 = (uint *)(lVar15 + 0x48) + ((long)(char)bVar20 & 0xffffffffU) * 0x20;
      if (7 < bVar20) {
        puVar2 = (uint *)(lVar15 + 0x48);
      }
      if ((*puVar2 & 8) != 0) {
        pbVar17 = (byte *)(lVar15 + 0x471);
      }
    }
    local_44[0] = *pbVar17;
    if (7 < local_44[0]) goto LAB_01dede20;
  }
  else {
    if (*(int *)(lVar15 + 0x15c) != 0) {
      pbVar17 = (byte *)(lVar15 + 0x158);
    }
    if (7 < *pbVar17) {
      if ((*(int *)(lVar15 + 0x15c) == 0) || (*(long *)PTR_DAT_04bb4718 == 0)) {
        if (plVar16 != (long *)0x0) goto LAB_01deddcc;
LAB_01dede20:
        pbVar17 = PTR_DAT_04bb5038;
      }
      else {
        pbVar17 = (byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a5);
        bVar9 = 7 < *pbVar17;
        if (bVar9) {
          pbVar17 = PTR_DAT_04bb5038;
        }
        if (plVar16 != (long *)0x0) goto LAB_01deddc0;
      }
    }
LAB_01dede28:
    local_44[0] = *pbVar17;
    if (7 < local_44[0]) {
      local_44[0] = 0xff;
    }
  }
  local_138[0] = param_2;
  lVar15 = FUN_025830c0(*(undefined8 *)PTR_DAT_04bb4f78,local_44,1);
  if (lVar15 == 0) {
    return 0;
  }
  lVar18 = *(long *)puVar8;
  if (lVar18 == 0) {
LAB_01dedea0:
    if (*pbVar19 < 8) goto LAB_01dedf10;
LAB_01dedeac:
    if (*(long **)puVar6 == (long *)0x0) {
LAB_01dedf08:
      pbVar19 = PTR_DAT_04bb5038;
      goto LAB_01dedf10;
    }
    lVar18 = **(long **)puVar6;
    bVar20 = *(byte *)(lVar18 + 0x473);
    pbVar19 = PTR_DAT_04bb5038;
    if ((long)(char)bVar20 != 0xffffffffffffffff) {
      puVar2 = (uint *)(lVar18 + 0x48) + ((long)(char)bVar20 & 0xffffffffU) * 0x20;
      if (7 < bVar20) {
        puVar2 = (uint *)(lVar18 + 0x48);
      }
      if ((*puVar2 & 8) != 0) {
        pbVar19 = (byte *)(lVar18 + 0x471);
      }
    }
    bVar20 = *pbVar19;
    bVar9 = 7 < bVar20;
    if (bVar9) {
      bVar20 = 0xff;
    }
    local_150 = (undefined *)CONCAT71(local_150._1_7_,bVar20);
    if (bVar9) goto LAB_01dedf08;
  }
  else {
    if (*(int *)(lVar18 + 0x15c) != 0) {
      pbVar19 = (byte *)(lVar18 + 0x158);
    }
    if (7 < *pbVar19) {
      if ((*(int *)(lVar18 + 0x15c) != 0) && (*(long *)PTR_DAT_04bb4718 != 0)) {
        pbVar19 = (byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a5);
        goto LAB_01dedea0;
      }
      goto LAB_01dedeac;
    }
LAB_01dedf10:
    bVar20 = *pbVar19;
    if (7 < bVar20) {
      bVar20 = 0xff;
    }
    local_150 = (undefined *)CONCAT71(local_150._1_7_,bVar20);
  }
  uVar12 = FUN_01ce0060(local_138,&local_150);
  if ((uVar12 & 1) == 0) {
    return 0;
  }
  iVar11 = FUN_01cdfea0(local_138);
  if ((param_3 & 1) == 0) {
    lVar18 = lVar15 + 0x194b0;
    if (*(long *)(lVar15 + 0x194b8) == 0) {
      lVar18 = *(long *)(*(long *)PTR_DAT_04bb46b0 + 0x20);
    }
    local_148 = lVar18 + 0x2acb0;
    local_140 = CONCAT31(local_140._1_3_,1);
    if (*(long **)(lVar18 + 0x2acd8) == (long *)0x0) {
      uVar10 = 0;
    }
    else {
      puVar13 = (undefined8 *)**(long **)(lVar18 + 0x2acd8);
      uVar10 = 0;
      if (puVar13 != (undefined8 *)0x0) {
        uVar10 = (**(code **)*puVar13)();
      }
    }
    local_140 = CONCAT22(local_140._2_2_,CONCAT11(uVar10,(undefined1)local_140)) & 0xffff01ff;
    local_150 = PTR_DAT_04bc1158 + 0x10;
    iVar4 = *(int *)(*(long *)(lVar18 + 0x2acc0) + *(long *)(lVar18 + 0x2acb8) + 0x1c);
    FUN_02640184(&local_150);
    if ((iVar4 != 0) && (iVar4 == iVar11)) {
LAB_01dee06c:
      *(undefined1 *)(param_1 + 0x50) = 1;
      return 1;
    }
  }
  puVar5 = PTR_DAT_04bc1048;
  puVar13 = (undefined8 *)FUN_01dee1c0(*(undefined8 *)PTR_DAT_04bc1048,local_138);
  if (puVar13 == (undefined8 *)0x0) {
    return 0;
  }
  uVar23 = *(undefined8 *)(*(long *)PTR_DAT_04bb47c8 + 8);
  plVar16 = (long *)FUN_038aa4a0(0x20,uVar23,8);
  puVar6 = PTR_DAT_04bb29b8;
  *(undefined4 *)(plVar16 + 1) = 0;
  plVar16[2] = 0;
  plVar16[3] = 0;
  *plVar16 = (long)(puVar6 + 0x10);
  *(long **)(param_1 + 0x78) = plVar16;
  lVar18 = *(long *)puVar5;
  lVar15 = *(long *)(lVar18 + 0x10);
  if (lVar15 != lVar18 + 8) {
    do {
      if (lVar15 == (long)puVar13 + (long)*(int *)(lVar18 + 0x1c)) {
        uVar14 = puVar13[1];
        goto LAB_01dee07c;
      }
      lVar15 = *(long *)(lVar15 + 8);
    } while (lVar15 != lVar18 + 8);
  }
  uVar14 = 0;
LAB_01dee07c:
  FUN_006d2e60(plVar16,uVar14,uVar23,8);
  lVar18 = *(long *)puVar5;
  lVar15 = lVar18 + 8;
  lVar21 = *(long *)(lVar18 + 0x10);
  lVar24 = *(long *)(param_1 + 0x78);
  if (lVar21 == lVar15) {
    __src = (void *)0x0;
    __n = 0;
  }
  else {
    lVar1 = (long)puVar13 + (long)*(int *)(lVar18 + 0x1c);
    lVar22 = lVar21;
    do {
      if (lVar22 == lVar1) {
        __src = (void *)*puVar13;
        goto LAB_01dee0d8;
      }
      lVar22 = *(long *)(lVar22 + 8);
    } while (lVar22 != lVar15);
    __src = (void *)0x0;
LAB_01dee0d8:
    do {
      if (lVar21 == lVar1) {
        __n = puVar13[1];
        goto LAB_01dee0f8;
      }
      lVar21 = *(long *)(lVar21 + 8);
    } while (lVar21 != lVar15);
    __n = 0;
  }
LAB_01dee0f8:
  __dest = *(void **)(lVar24 + 0x10);
  if (__dest != (void *)0x0) {
    if (*(uint *)(lVar24 + 8) < __n) {
      memcpy(__dest,__src,(ulong)*(uint *)(lVar24 + 8));
      __n = (size_t)*(uint *)(lVar24 + 8);
    }
    else {
      memcpy(__dest,__src,__n);
    }
    lVar18 = *(long *)puVar5;
    *(size_t *)(lVar24 + 0x18) = __n;
  }
  FUN_01d3be50(lVar18,puVar13);
  local_140 = 0xffffffff;
  local_150 = (undefined *)CONCAT44(local_150._4_4_,4);
  local_148 = *(undefined8 *)(param_1 + 0x78);
  uVar12 = FUN_006ea184(*(undefined8 *)(*(long *)PTR_DAT_04bb21c8 + 0x250),&local_150);
  if ((uVar12 & 1) != 0) {
    uVar23 = *(undefined8 *)puVar7;
    *(int *)(param_1 + 0x60) = iVar11;
    *(undefined8 *)(param_1 + 0x58) = &PTR_LAB_04a5bd80;
    *(long *)(param_1 + 0x68) = param_1;
    FUN_01c9a8a8(uVar23,(undefined8 *)(param_1 + 0x58),1,param_2);
    *(uint *)(param_1 + 0x4c) = param_2;
    *(undefined1 *)(param_1 + 0x48) = 1;
    return 1;
  }
  if (*(long **)(param_1 + 0x78) != (long *)0x0) {
    (**(code **)(**(long **)(param_1 + 0x78) + 8))();
  }
  *(undefined8 *)(param_1 + 0x78) = 0;
  return 0;
}

