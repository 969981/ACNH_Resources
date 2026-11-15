
undefined8 FUN_01ded300(long param_1,uint param_2,ulong param_3)

{
  long lVar1;
  uint *puVar2;
  uint uVar3;
  uint uVar4;
  byte bVar5;
  undefined *puVar6;
  undefined *puVar7;
  undefined *puVar8;
  undefined *puVar9;
  undefined4 uVar10;
  bool bVar11;
  undefined1 uVar12;
  int iVar13;
  undefined8 *puVar14;
  ulong uVar15;
  undefined8 uVar16;
  void *__src;
  long lVar17;
  long *plVar18;
  byte *pbVar19;
  byte *pbVar20;
  void *__dest;
  long lVar21;
  long lVar22;
  long lVar23;
  undefined8 uVar24;
  size_t __n;
  long lVar25;
  undefined *local_88;
  char *local_80;
  undefined4 local_78;
  undefined8 local_6c;
  undefined4 local_64;
  byte local_48 [4];
  byte local_44 [4];
  
  puVar8 = PTR_DAT_04bb36f0;
  puVar6 = PTR_DAT_04bb21d0;
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
  puVar9 = PTR_DAT_04bb39b0;
  pbVar20 = PTR_DAT_04bb32e0;
  puVar7 = PTR_DAT_04bb27d0;
  if (*(int *)(*(long *)puVar6 + 0x78) == 0) {
    return 0;
  }
  lVar17 = *(long *)puVar8;
  local_88 = (undefined *)CONCAT44(local_88._4_4_,param_2);
  uVar3 = param_2;
  if (*(uint *)(lVar17 + 0x20) <= param_2) {
    uVar3 = 0;
  }
  if (*(char *)(*(long *)(lVar17 + 0x28) + (long)(int)uVar3 * 0x38 + 0x2c) == '\0') {
    return 0;
  }
  plVar18 = *(long **)PTR_DAT_04bb27d0;
  if (((plVar18 != (long *)0x0) && (plVar18[5] != 0)) && ((int)plVar18[0x10] == 1))
  goto LAB_01ded86c;
  lVar17 = *(long *)PTR_DAT_04bb39b0;
  pbVar19 = PTR_DAT_04bb32e0;
  if (lVar17 == 0) {
    bVar11 = 7 < (byte)*PTR_DAT_04bb32e0;
    if (bVar11) {
      pbVar19 = PTR_DAT_04bb5038;
    }
    if (plVar18 == (long *)0x0) goto LAB_01ded4f4;
LAB_01ded48c:
    if (!bVar11) goto LAB_01ded4f4;
LAB_01ded498:
    lVar17 = *plVar18;
    bVar5 = *(byte *)(lVar17 + 0x473);
    pbVar19 = PTR_DAT_04bb5038;
    if ((long)(char)bVar5 != 0xffffffffffffffff) {
      puVar2 = (uint *)(lVar17 + 0x48) + ((long)(char)bVar5 & 0xffffffffU) * 0x20;
      if (7 < bVar5) {
        puVar2 = (uint *)(lVar17 + 0x48);
      }
      if ((*puVar2 & 8) != 0) {
        pbVar19 = (byte *)(lVar17 + 0x471);
      }
    }
    local_44[0] = *pbVar19;
    if (7 < local_44[0]) goto LAB_01ded4ec;
  }
  else {
    if (*(int *)(lVar17 + 0x15c) != 0) {
      pbVar19 = (byte *)(lVar17 + 0x158);
    }
    if (7 < *pbVar19) {
      if ((*(int *)(lVar17 + 0x15c) == 0) || (*(long *)PTR_DAT_04bb4718 == 0)) {
        if (plVar18 != (long *)0x0) goto LAB_01ded498;
LAB_01ded4ec:
        pbVar19 = PTR_DAT_04bb5038;
      }
      else {
        pbVar19 = (byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a5);
        bVar11 = 7 < *pbVar19;
        if (bVar11) {
          pbVar19 = PTR_DAT_04bb5038;
        }
        if (plVar18 != (long *)0x0) goto LAB_01ded48c;
      }
    }
LAB_01ded4f4:
    local_44[0] = *pbVar19;
    if (7 < local_44[0]) {
      local_44[0] = 0xff;
    }
  }
  lVar17 = FUN_025830c0(*(undefined8 *)PTR_DAT_04bb4f78,local_44,1);
  puVar6 = PTR_DAT_04bb2020;
  if (lVar17 == 0) {
    return 0;
  }
  lVar21 = *(long *)puVar9;
  local_64 = 0;
  local_6c = 0x100000022;
  pbVar19 = pbVar20;
  if (lVar21 == 0) {
    if (7 < *pbVar20) goto LAB_01ded59c;
LAB_01ded600:
    local_48[0] = *pbVar19;
    if (7 < local_48[0]) {
      local_48[0] = 0xff;
    }
  }
  else {
    if (*(int *)(lVar21 + 0x15c) != 0) {
      pbVar19 = (byte *)(lVar21 + 0x158);
    }
    if ((*pbVar19 < 8) ||
       (((*(int *)(lVar21 + 0x15c) != 0 && (*(long *)PTR_DAT_04bb4718 != 0)) &&
        (pbVar19 = (byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a5), *pbVar19 < 8)))) goto LAB_01ded600;
LAB_01ded59c:
    plVar18 = *(long **)puVar7;
    if (plVar18 == (long *)0x0) {
LAB_01ded5f8:
      pbVar19 = PTR_DAT_04bb5038;
      goto LAB_01ded600;
    }
    lVar21 = *plVar18;
    bVar5 = *(byte *)(lVar21 + 0x473);
    pbVar19 = PTR_DAT_04bb5038;
    if ((long)(char)bVar5 != 0xffffffffffffffff) {
      puVar2 = (uint *)(lVar21 + 0x48) + ((long)(char)bVar5 & 0xffffffffU) * 0x20;
      if (7 < bVar5) {
        puVar2 = (uint *)(lVar21 + 0x48);
      }
      if ((*puVar2 & 8) != 0) {
        pbVar19 = (byte *)(lVar21 + 0x471);
      }
    }
    local_48[0] = *pbVar19;
    if (7 < local_48[0]) goto LAB_01ded5f8;
  }
  local_88 = PTR_DAT_04bb2020 + 0x10;
  local_80 = "WHEREAREN_Unlock_ResortPlannerAppNetwork";
  iVar13 = FUN_0274bce0(local_48,&local_88);
  local_64 = CONCAT31(local_64._1_3_,iVar13 != 0);
  lVar21 = *(long *)puVar9;
  if (lVar21 == 0) {
LAB_01ded688:
    if (*pbVar20 < 8) goto LAB_01ded6f8;
LAB_01ded694:
    plVar18 = *(long **)puVar7;
    if (plVar18 == (long *)0x0) {
LAB_01ded6f0:
      pbVar20 = PTR_DAT_04bb5038;
      goto LAB_01ded6f8;
    }
    lVar21 = *plVar18;
    bVar5 = *(byte *)(lVar21 + 0x473);
    pbVar20 = PTR_DAT_04bb5038;
    if ((long)(char)bVar5 != 0xffffffffffffffff) {
      puVar2 = (uint *)(lVar21 + 0x48) + ((long)(char)bVar5 & 0xffffffffU) * 0x20;
      if (7 < bVar5) {
        puVar2 = (uint *)(lVar21 + 0x48);
      }
      if ((*puVar2 & 8) != 0) {
        pbVar20 = (byte *)(lVar21 + 0x471);
      }
    }
    local_48[0] = *pbVar20;
    if (7 < local_48[0]) goto LAB_01ded6f0;
  }
  else {
    if (*(int *)(lVar21 + 0x15c) != 0) {
      pbVar20 = (byte *)(lVar21 + 0x158);
    }
    if (7 < *pbVar20) {
      if ((*(int *)(lVar21 + 0x15c) != 0) && (*(long *)PTR_DAT_04bb4718 != 0)) {
        pbVar20 = (byte *)(*(long *)PTR_DAT_04bb4718 + 0x11a5);
        goto LAB_01ded688;
      }
      goto LAB_01ded694;
    }
LAB_01ded6f8:
    local_48[0] = *pbVar20;
    if (7 < local_48[0]) {
      local_48[0] = 0xff;
    }
  }
  local_88 = puVar6 + 0x10;
  local_80 = "WHEREAREN_Unlock_ResortPlannerApp";
  iVar13 = FUN_0274bce0(local_48,&local_88);
  uVar10 = local_64;
  local_64._3_1_ = SUB41(uVar10,3);
  local_64._0_3_ =
       CONCAT12(*(undefined1 *)(*(long *)PTR_DAT_04bb4508 + 8),
                CONCAT11(iVar13 != 0,(undefined1)local_64));
  uVar3 = local_6c._4_4_ * 0x16a88000 | (uint)(local_6c._4_4_ * -0x3361d2af) >> 0x11;
  uVar3 = (local_64 * 0x16a88000 | (uint)(local_64 * -0x3361d2af) >> 0x11) * 0x1b873593 ^
          (uVar3 * 0x1b873593 >> 0x13 | uVar3 * -0x194da000) * 5 + 0xe6546b64;
  uVar3 = (uVar3 >> 0x13 | uVar3 << 0xd) * 5 + 0xe6546b64;
  uVar3 = (uVar3 ^ uVar3 >> 0x10 ^ 8) * -0x7a143595;
  uVar3 = (uVar3 ^ uVar3 >> 0xd) * -0x3d4d51cb;
  uVar3 = uVar3 ^ uVar3 >> 0x10;
  if ((param_3 & 1) == 0) {
    lVar21 = lVar17 + 0x194b0;
    if (*(long *)(lVar17 + 0x194b8) == 0) {
      lVar21 = *(long *)(*(long *)PTR_DAT_04bb46b0 + 0x20);
    }
    local_80 = (char *)(lVar21 + 0x2acb0);
    local_78 = CONCAT31(local_78._1_3_,1);
    if (*(long **)(lVar21 + 0x2acd8) == (long *)0x0) {
      uVar12 = 0;
    }
    else {
      puVar14 = (undefined8 *)**(long **)(lVar21 + 0x2acd8);
      uVar12 = 0;
      if (puVar14 != (undefined8 *)0x0) {
        uVar12 = (**(code **)*puVar14)();
      }
    }
    local_78 = CONCAT22(local_78._2_2_,CONCAT11(uVar12,(undefined1)local_78)) & 0xffff01ff;
    local_88 = PTR_DAT_04bc1158 + 0x10;
    uVar4 = *(uint *)(*(long *)(lVar21 + 0x2acc0) + *(long *)(lVar21 + 0x2acb8) + 0x18);
    FUN_02640184(&local_88);
    if ((uVar4 != 0) && (uVar4 == uVar3)) {
LAB_01ded86c:
      *(undefined1 *)(param_1 + 0x50) = 1;
      return 1;
    }
  }
  puVar6 = PTR_DAT_04bc1048;
  puVar14 = (undefined8 *)FUN_01deda58(*(undefined8 *)PTR_DAT_04bc1048,&local_6c);
  if (puVar14 == (undefined8 *)0x0) {
    return 0;
  }
  uVar24 = *(undefined8 *)(*(long *)PTR_DAT_04bb47c8 + 8);
  plVar18 = (long *)FUN_038aa4a0(0x20,uVar24,8);
  puVar7 = PTR_DAT_04bb29b8;
  *(undefined4 *)(plVar18 + 1) = 0;
  plVar18[2] = 0;
  plVar18[3] = 0;
  *plVar18 = (long)(puVar7 + 0x10);
  *(long **)(param_1 + 0x78) = plVar18;
  lVar21 = *(long *)puVar6;
  lVar17 = *(long *)(lVar21 + 0x10);
  if (lVar17 != lVar21 + 8) {
    do {
      if (lVar17 == (long)puVar14 + (long)*(int *)(lVar21 + 0x1c)) {
        uVar16 = puVar14[1];
        goto LAB_01ded910;
      }
      lVar17 = *(long *)(lVar17 + 8);
    } while (lVar17 != lVar21 + 8);
  }
  uVar16 = 0;
LAB_01ded910:
  FUN_006d2e60(plVar18,uVar16,uVar24,8);
  lVar21 = *(long *)puVar6;
  lVar17 = lVar21 + 8;
  lVar22 = *(long *)(lVar21 + 0x10);
  lVar25 = *(long *)(param_1 + 0x78);
  if (lVar22 == lVar17) {
    __src = (void *)0x0;
    __n = 0;
  }
  else {
    lVar1 = (long)puVar14 + (long)*(int *)(lVar21 + 0x1c);
    lVar23 = lVar22;
    do {
      if (lVar23 == lVar1) {
        __src = (void *)*puVar14;
        goto LAB_01ded970;
      }
      lVar23 = *(long *)(lVar23 + 8);
    } while (lVar23 != lVar17);
    __src = (void *)0x0;
LAB_01ded970:
    do {
      if (lVar22 == lVar1) {
        __n = puVar14[1];
        goto LAB_01ded990;
      }
      lVar22 = *(long *)(lVar22 + 8);
    } while (lVar22 != lVar17);
    __n = 0;
  }
LAB_01ded990:
  __dest = *(void **)(lVar25 + 0x10);
  if (__dest != (void *)0x0) {
    if (*(uint *)(lVar25 + 8) < __n) {
      memcpy(__dest,__src,(ulong)*(uint *)(lVar25 + 8));
      __n = (size_t)*(uint *)(lVar25 + 8);
    }
    else {
      memcpy(__dest,__src,__n);
    }
    lVar21 = *(long *)puVar6;
    *(size_t *)(lVar25 + 0x18) = __n;
  }
  FUN_01d3be50(lVar21,puVar14);
  local_78 = 0xffffffff;
  local_88 = (undefined *)CONCAT44(local_88._4_4_,3);
  local_80 = *(char **)(param_1 + 0x78);
  uVar15 = FUN_006ea184(*(undefined8 *)(*(long *)PTR_DAT_04bb21c8 + 0x250),&local_88);
  if ((uVar15 & 1) != 0) {
    uVar24 = *(undefined8 *)puVar8;
    *(uint *)(param_1 + 0x60) = uVar3;
    *(undefined8 *)(param_1 + 0x58) = &PTR_LAB_04a5bd58;
    *(long *)(param_1 + 0x68) = param_1;
    FUN_01c9a8a8(uVar24,(undefined8 *)(param_1 + 0x58),1,param_2);
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

