
void FUN_01e33da0(long param_1,undefined8 param_2)

{
  bool bVar1;
  ushort uVar2;
  int iVar3;
  undefined8 *puVar4;
  long lVar5;
  uint uVar6;
  long *plVar7;
  byte bVar8;
  int iVar9;
  undefined *puVar10;
  uint uVar11;
  ulong uVar12;
  int iVar13;
  ulong uVar14;
  uint uVar15;
  long *plVar16;
  uint uVar17;
  int *piVar18;
  uint uVar19;
  long *plVar20;
  undefined *puVar21;
  ulong uVar22;
  undefined **ppuVar23;
  long lVar24;
  undefined8 local_b0;
  undefined **local_a8;
  undefined *local_a0 [10];
  
  puVar4 = &DAT_0538de58 + (ulong)*(uint *)(param_1 + 0x558) * 2;
  if (5 < *(uint *)(param_1 + 0x558)) {
    puVar4 = &DAT_0538de58;
  }
  if (*(char *)puVar4[1] != '\0') {
    FUN_02507c6c(&local_b0,1,1,1,0);
    if ((byte)local_b0 < 8) {
      puVar4 = &DAT_0538de58 + (ulong)*(uint *)(param_1 + 0x558) * 2;
      if (5 < *(uint *)(param_1 + 0x558)) {
        puVar4 = &DAT_0538de58;
      }
      FUN_0274bfe8(&local_b0,puVar4,0);
      puVar21 = PTR_DAT_04bb5038;
      while ((byte)local_b0 < 8) {
        uVar14 = (ulong)(byte)local_b0;
        do {
          if (uVar14 == 7) goto LAB_01e33e94;
          uVar14 = uVar14 + 1;
          uVar12 = FUN_02507924(&local_b0,puVar21 + uVar14);
        } while ((uVar12 & 1) == 0);
        bVar8 = puVar21[uVar14];
        if (7 < bVar8) break;
        local_b0 = CONCAT71(local_b0._1_7_,bVar8);
        puVar4 = &DAT_0538de58 + (ulong)*(uint *)(param_1 + 0x558) * 2;
        if (5 < *(uint *)(param_1 + 0x558)) {
          puVar4 = &DAT_0538de58;
        }
        FUN_0274bfe8(&local_b0,puVar4,0);
      }
    }
  }
LAB_01e33e94:
  plVar16 = *(long **)(param_1 + 0x440);
  if (plVar16 != (long *)(param_1 + 0x438)) {
    do {
      uVar11 = *(uint *)(plVar16 + -1);
      if ((uVar11 < 10) && ((&DAT_053fee41)[(ulong)uVar11 * 0xba0] != '\0')) {
        uVar14 = (ulong)uVar11;
        *(undefined8 *)(&DAT_053feb40 + uVar14 * 0x2e8) = 0;
        *(undefined8 *)(&DAT_053feb50 + uVar14 * 0x2e8) = 0;
        *(undefined1 **)(&DAT_053feb0a + uVar14 * 0x5d0) = &LAB_01010000;
        *(undefined8 *)(&DAT_053feb14 + uVar14 * 0x2e8) = 0;
        *(undefined8 *)(&DAT_053feb1c + uVar14 * 0x2e8) = 0;
        *(undefined8 *)(&DAT_053feb24 + uVar14 * 0x2e8) = 0;
      }
      plVar16 = (long *)plVar16[1];
    } while (plVar16 + -1 != (long *)(param_1 + 0x430));
    plVar16 = *(long **)(param_1 + 0x440);
  }
  *(undefined8 *)(param_1 + 0x428) = 0;
  *(undefined1 *)(param_1 + 0x430) = 0;
  *(undefined8 *)(param_1 + 0x41c) = 0;
  *(undefined4 *)(param_1 + 0x434) = 0xffffffff;
  while (plVar16 != (long *)(param_1 + 0x438)) {
    plVar7 = (long *)plVar16[1];
    plVar20 = plVar7;
    if (*plVar16 != 0) {
      *(long **)(*plVar16 + 8) = plVar7;
      plVar20 = (long *)plVar16[1];
    }
    if (plVar20 != (long *)0x0) {
      *plVar20 = *plVar16;
    }
    *plVar16 = 0;
    plVar16[1] = 0;
    *(int *)(param_1 + 0x448) = *(int *)(param_1 + 0x448) + -1;
    plVar16[-1] = *(long *)(param_1 + 0x450);
    *(long **)(param_1 + 0x450) = plVar16 + -1;
    plVar16 = plVar7;
  }
  *(undefined4 *)(param_1 + 0x558) = 0;
  *(undefined1 **)(param_1 + 0x55c) = &LAB_01010000;
  *(undefined4 *)(param_1 + 0x564) = 0;
  *(undefined1 **)(param_1 + 0x570) = &LAB_01010000;
  local_a8 = local_a0;
  local_b0._0_4_ = 0;
  if (DAT_053fee41 != '\0') {
    if (DAT_053fe898 < 1) {
      iVar13 = 0;
    }
    else {
      iVar13 = 0;
      iVar9 = DAT_053fe898 + DAT_053fe894 + -1;
      iVar3 = 0;
      if (DAT_053fe890 <= iVar9) {
        iVar3 = DAT_053fe890;
      }
      piVar18 = (int *)(DAT_053fe888 + (long)(iVar9 - iVar3) * 0x14);
      if ((char)piVar18[4] == '\0') {
        iVar13 = *piVar18;
      }
    }
    if (0x1a < iVar13) {
      local_a0[0] = &DAT_053fe850;
      uVar14 = 1;
      local_b0._0_4_ = 1;
      goto LAB_01e34030;
    }
  }
  uVar14 = 0;
LAB_01e34030:
  if (DAT_053ff9e1 != '\0') {
    if (DAT_053ff438 < 1) {
      iVar13 = 0;
    }
    else {
      iVar13 = 0;
      iVar9 = DAT_053ff438 + DAT_053ff434 + -1;
      iVar3 = 0;
      if (DAT_053ff430 <= iVar9) {
        iVar3 = DAT_053ff430;
      }
      piVar18 = (int *)(DAT_053ff428 + (long)(iVar9 - iVar3) * 0x14);
      if ((char)piVar18[4] == '\0') {
        iVar13 = *piVar18;
      }
    }
    if (0x1a < iVar13) {
      local_a8[uVar14] = &DAT_053ff3f0;
      local_b0._0_4_ = (int)uVar14 + 1;
      uVar14 = (ulong)(uint)local_b0;
    }
  }
  local_b0._4_4_ = 10;
  uVar11 = (uint)uVar14;
  if (DAT_05400581 != '\0') {
    if (DAT_053fffd8 < 1) {
      iVar13 = 0;
    }
    else {
      iVar13 = 0;
      iVar9 = DAT_053fffd8 + DAT_053fffd4 + -1;
      iVar3 = 0;
      if (DAT_053fffd0 <= iVar9) {
        iVar3 = DAT_053fffd0;
      }
      piVar18 = (int *)(DAT_053fffc8 + (long)(iVar9 - iVar3) * 0x14);
      if ((char)piVar18[4] == '\0') {
        iVar13 = *piVar18;
      }
    }
    if (0x1a < iVar13) {
      local_a8[uVar14] = &DAT_053fff90;
      uVar11 = (uint)local_b0 + 1;
      local_b0._0_4_ = uVar11;
    }
  }
  if (DAT_05401121 != '\0') {
    if (DAT_05400b78 < 1) {
      iVar13 = 0;
    }
    else {
      iVar13 = 0;
      iVar9 = DAT_05400b78 + DAT_05400b74 + -1;
      iVar3 = 0;
      if (DAT_05400b70 <= iVar9) {
        iVar3 = DAT_05400b70;
      }
      piVar18 = (int *)(DAT_05400b68 + (long)(iVar9 - iVar3) * 0x14);
      if ((char)piVar18[4] == '\0') {
        iVar13 = *piVar18;
      }
    }
    if ((0x1a < iVar13) && (uVar11 < 10)) {
      local_a8[(int)uVar11] = &DAT_05400b30;
      uVar11 = (uint)local_b0 + 1;
      local_b0._0_4_ = uVar11;
    }
  }
  if (DAT_05401cc1 != '\0') {
    if (DAT_05401718 < 1) {
      iVar13 = 0;
    }
    else {
      iVar13 = 0;
      iVar9 = DAT_05401718 + DAT_05401714 + -1;
      iVar3 = 0;
      if (DAT_05401710 <= iVar9) {
        iVar3 = DAT_05401710;
      }
      piVar18 = (int *)(DAT_05401708 + (long)(iVar9 - iVar3) * 0x14);
      if ((char)piVar18[4] == '\0') {
        iVar13 = *piVar18;
      }
    }
    if ((0x1a < iVar13) && (uVar11 < 10)) {
      local_a8[(int)uVar11] = &DAT_054016d0;
      uVar11 = (uint)local_b0 + 1;
      local_b0._0_4_ = uVar11;
    }
  }
  if (DAT_05402861 != '\0') {
    if (DAT_054022b8 < 1) {
      iVar13 = 0;
    }
    else {
      iVar13 = 0;
      iVar9 = DAT_054022b8 + DAT_054022b4 + -1;
      iVar3 = 0;
      if (DAT_054022b0 <= iVar9) {
        iVar3 = DAT_054022b0;
      }
      piVar18 = (int *)(DAT_054022a8 + (long)(iVar9 - iVar3) * 0x14);
      if ((char)piVar18[4] == '\0') {
        iVar13 = *piVar18;
      }
    }
    if ((0x1a < iVar13) && (uVar11 < 10)) {
      local_a8[(int)uVar11] = &DAT_05402270;
      uVar11 = (uint)local_b0 + 1;
      local_b0._0_4_ = uVar11;
    }
  }
  if (DAT_05403401 != '\0') {
    if (DAT_05402e58 < 1) {
      iVar13 = 0;
    }
    else {
      iVar13 = 0;
      iVar9 = DAT_05402e58 + DAT_05402e54 + -1;
      iVar3 = 0;
      if (DAT_05402e50 <= iVar9) {
        iVar3 = DAT_05402e50;
      }
      piVar18 = (int *)(DAT_05402e48 + (long)(iVar9 - iVar3) * 0x14);
      if ((char)piVar18[4] == '\0') {
        iVar13 = *piVar18;
      }
    }
    if ((0x1a < iVar13) && (uVar11 < 10)) {
      local_a8[(int)uVar11] = &DAT_05402e10;
      uVar11 = (uint)local_b0 + 1;
      local_b0._0_4_ = uVar11;
    }
  }
  if (DAT_05403fa1 != '\0') {
    if (DAT_054039f8 < 1) {
      iVar13 = 0;
    }
    else {
      iVar13 = 0;
      iVar9 = DAT_054039f8 + DAT_054039f4 + -1;
      iVar3 = 0;
      if (DAT_054039f0 <= iVar9) {
        iVar3 = DAT_054039f0;
      }
      piVar18 = (int *)(DAT_054039e8 + (long)(iVar9 - iVar3) * 0x14);
      if ((char)piVar18[4] == '\0') {
        iVar13 = *piVar18;
      }
    }
    if ((0x1a < iVar13) && (uVar11 < 10)) {
      local_a8[(int)uVar11] = &DAT_054039b0;
      uVar11 = (uint)local_b0 + 1;
      local_b0._0_4_ = uVar11;
    }
  }
  if (DAT_05404b41 != '\0') {
    if (DAT_05404598 < 1) {
      iVar13 = 0;
    }
    else {
      iVar13 = 0;
      iVar9 = DAT_05404598 + DAT_05404594 + -1;
      iVar3 = 0;
      if (DAT_05404590 <= iVar9) {
        iVar3 = DAT_05404590;
      }
      piVar18 = (int *)(DAT_05404588 + (long)(iVar9 - iVar3) * 0x14);
      if ((char)piVar18[4] == '\0') {
        iVar13 = *piVar18;
      }
    }
    if ((0x1a < iVar13) && (uVar11 < 10)) {
      local_a8[(int)uVar11] = &DAT_05404550;
      uVar11 = (uint)local_b0 + 1;
      local_b0._0_4_ = uVar11;
    }
  }
  if (DAT_054056e1 != '\0') {
    if (DAT_05405138 < 1) {
      iVar13 = 0;
    }
    else {
      iVar13 = 0;
      iVar9 = DAT_05405138 + DAT_05405134 + -1;
      iVar3 = 0;
      if (DAT_05405130 <= iVar9) {
        iVar3 = DAT_05405130;
      }
      piVar18 = (int *)(DAT_05405128 + (long)(iVar9 - iVar3) * 0x14);
      if ((char)piVar18[4] == '\0') {
        iVar13 = *piVar18;
      }
    }
    if ((0x1a < iVar13) && (uVar11 < 10)) {
      local_a8[(int)uVar11] = &DAT_054050f0;
      local_b0._0_4_ = (uint)local_b0 + 1;
    }
  }
  uVar11 = nn::os::GetSystemTick();
  if (1 < (int)(uint)local_b0) {
    uVar11 = (uVar11 ^ uVar11 >> 0x1e) * 0x6c078965 + 1;
    uVar15 = (uVar11 ^ uVar11 >> 0x1e) * 0x6c078965 + 2;
    uVar17 = (uVar15 ^ uVar15 >> 0x1e) * 0x6c078965 + 3;
    uVar14 = (ulong)(uint)local_b0;
    uVar19 = (uVar17 ^ uVar17 >> 0x1e) * 0x6c078965 + 4;
    do {
      uVar11 = uVar11 ^ uVar11 << 0xb;
      uVar6 = uVar11 >> 8 ^ uVar19 >> 0x13 ^ uVar11 ^ uVar19;
      uVar12 = uVar14 - 1 & 0xffffffff;
      puVar21 = local_a8[uVar12];
      uVar22 = uVar14 * uVar6 >> 0x1d & 0x7fffffff8;
      local_a8[uVar12] = *(undefined **)((long)local_a8 + uVar22);
      *(undefined **)((long)local_a8 + uVar22) = puVar21;
      bVar1 = 2 < uVar14;
      uVar14 = uVar14 - 1;
      uVar11 = uVar15;
      uVar15 = uVar17;
      uVar17 = uVar19;
      uVar19 = uVar6;
    } while (bVar1);
  }
  puVar10 = PTR_DAT_04bb6298;
  puVar21 = PTR_DAT_04bb4760;
  if ((uint)local_b0 != 0) {
    lVar24 = (long)(int)(uint)local_b0 << 3;
    ppuVar23 = local_a8;
    do {
      uVar11 = *(uint *)(*ppuVar23 + 0xc);
      lVar5 = *(long *)puVar21 + (ulong)uVar11 * 0x15;
      if (0x6c < uVar11) {
        lVar5 = *(long *)puVar21;
      }
      uVar2 = (ushort)*(byte *)(lVar5 + 4) | (*(byte *)(lVar5 + 5) & 3) << 8;
      if (0x1ff < uVar2) {
        uVar2 = uVar2 | 0xfc00;
      }
      FUN_01e2caf8(param_1,*ppuVar23,*(ushort *)puVar10 != uVar2,param_2,0,0);
      lVar24 = lVar24 + -8;
      ppuVar23 = ppuVar23 + 1;
    } while (lVar24 != 0);
  }
  return;
}

