
void FUN_01e27720(long param_1)

{
  bool bVar1;
  ushort uVar2;
  int iVar3;
  long lVar4;
  uint uVar5;
  long *plVar6;
  int iVar7;
  undefined *puVar8;
  uint uVar9;
  ulong uVar10;
  uint uVar11;
  long *plVar12;
  uint uVar13;
  int *piVar14;
  uint uVar15;
  long *plVar16;
  ulong uVar17;
  undefined *puVar18;
  ulong uVar19;
  undefined **ppuVar20;
  long lVar21;
  uint local_b0;
  undefined *local_a0 [10];
  int local_34;
  
  plVar12 = *(long **)(param_1 + 0x440);
  if (plVar12 != (long *)(param_1 + 0x438)) {
    do {
      uVar9 = *(uint *)(plVar12 + -1);
      if ((uVar9 < 10) && ((&DAT_053fee41)[(ulong)uVar9 * 0xba0] != '\0')) {
        uVar10 = (ulong)uVar9;
        *(undefined8 *)(&DAT_053feb40 + uVar10 * 0x2e8) = 0;
        *(undefined8 *)(&DAT_053feb50 + uVar10 * 0x2e8) = 0;
        *(undefined1 **)(&DAT_053feb0a + uVar10 * 0x5d0) = &LAB_01010000;
        *(undefined8 *)(&DAT_053feb14 + uVar10 * 0x2e8) = 0;
        *(undefined8 *)(&DAT_053feb1c + uVar10 * 0x2e8) = 0;
        *(undefined8 *)(&DAT_053feb24 + uVar10 * 0x2e8) = 0;
      }
      plVar12 = (long *)plVar12[1];
    } while (plVar12 + -1 != (long *)(param_1 + 0x430));
    plVar12 = *(long **)(param_1 + 0x440);
  }
  *(undefined8 *)(param_1 + 0x428) = 0;
  *(undefined1 *)(param_1 + 0x430) = 0;
  *(undefined8 *)(param_1 + 0x41c) = 0;
  *(undefined4 *)(param_1 + 0x434) = 0xffffffff;
  while (plVar12 != (long *)(param_1 + 0x438)) {
    plVar6 = (long *)plVar12[1];
    plVar16 = plVar6;
    if (*plVar12 != 0) {
      *(long **)(*plVar12 + 8) = plVar6;
      plVar16 = (long *)plVar12[1];
    }
    if (plVar16 != (long *)0x0) {
      *plVar16 = *plVar12;
    }
    *plVar12 = 0;
    plVar12[1] = 0;
    *(int *)(param_1 + 0x448) = *(int *)(param_1 + 0x448) + -1;
    plVar12[-1] = *(long *)(param_1 + 0x450);
    *(long **)(param_1 + 0x450) = plVar12 + -1;
    plVar12 = plVar6;
  }
  *(undefined4 *)(param_1 + 0x558) = 0;
  *(undefined1 **)(param_1 + 0x55c) = &LAB_01010000;
  *(undefined4 *)(param_1 + 0x564) = 0;
  *(undefined1 **)(param_1 + 0x568) = &LAB_01010000;
  *(undefined1 **)(param_1 + 0x570) = &LAB_01010000;
  local_b0 = 0;
  if (DAT_053fee41 != '\0') {
    if (DAT_053fe898 < 1) {
      local_34 = 0;
    }
    else {
      local_34 = 0;
      iVar7 = DAT_053fe898 + DAT_053fe894 + -1;
      iVar3 = 0;
      if (DAT_053fe890 <= iVar7) {
        iVar3 = DAT_053fe890;
      }
      piVar14 = (int *)(DAT_053fe888 + (long)(iVar7 - iVar3) * 0x14);
      if ((char)piVar14[4] == '\0') {
        local_34 = *piVar14;
      }
    }
    if (0x1a < local_34) {
      local_a0[0] = &DAT_053fe850;
      uVar10 = 1;
      local_b0 = 1;
      goto LAB_01e278ec;
    }
  }
  uVar10 = 0;
LAB_01e278ec:
  if (DAT_053ff9e1 != '\0') {
    if (DAT_053ff438 < 1) {
      local_34 = 0;
    }
    else {
      local_34 = 0;
      iVar7 = DAT_053ff438 + DAT_053ff434 + -1;
      iVar3 = 0;
      if (DAT_053ff430 <= iVar7) {
        iVar3 = DAT_053ff430;
      }
      piVar14 = (int *)(DAT_053ff428 + (long)(iVar7 - iVar3) * 0x14);
      if ((char)piVar14[4] == '\0') {
        local_34 = *piVar14;
      }
    }
    if (0x1a < local_34) {
      local_a0[uVar10] = &DAT_053ff3f0;
      local_b0 = (int)uVar10 + 1;
      uVar10 = (ulong)local_b0;
    }
  }
  uVar9 = (uint)uVar10;
  if (DAT_05400581 != '\0') {
    if (DAT_053fffd8 < 1) {
      local_34 = 0;
    }
    else {
      local_34 = 0;
      iVar7 = DAT_053fffd8 + DAT_053fffd4 + -1;
      iVar3 = 0;
      if (DAT_053fffd0 <= iVar7) {
        iVar3 = DAT_053fffd0;
      }
      piVar14 = (int *)(DAT_053fffc8 + (long)(iVar7 - iVar3) * 0x14);
      if ((char)piVar14[4] == '\0') {
        local_34 = *piVar14;
      }
    }
    if (0x1a < local_34) {
      local_a0[uVar10] = &DAT_053fff90;
      uVar9 = local_b0 + 1;
      local_b0 = uVar9;
    }
  }
  if (DAT_05401121 != '\0') {
    if (DAT_05400b78 < 1) {
      local_34 = 0;
    }
    else {
      local_34 = 0;
      iVar7 = DAT_05400b78 + DAT_05400b74 + -1;
      iVar3 = 0;
      if (DAT_05400b70 <= iVar7) {
        iVar3 = DAT_05400b70;
      }
      piVar14 = (int *)(DAT_05400b68 + (long)(iVar7 - iVar3) * 0x14);
      if ((char)piVar14[4] == '\0') {
        local_34 = *piVar14;
      }
    }
    if ((0x1a < local_34) && (uVar9 < 10)) {
      local_a0[(int)uVar9] = &DAT_05400b30;
      uVar9 = local_b0 + 1;
      local_b0 = uVar9;
    }
  }
  if (DAT_05401cc1 != '\0') {
    if (DAT_05401718 < 1) {
      local_34 = 0;
    }
    else {
      local_34 = 0;
      iVar7 = DAT_05401718 + DAT_05401714 + -1;
      iVar3 = 0;
      if (DAT_05401710 <= iVar7) {
        iVar3 = DAT_05401710;
      }
      piVar14 = (int *)(DAT_05401708 + (long)(iVar7 - iVar3) * 0x14);
      if ((char)piVar14[4] == '\0') {
        local_34 = *piVar14;
      }
    }
    if ((0x1a < local_34) && (uVar9 < 10)) {
      local_a0[(int)uVar9] = &DAT_054016d0;
      uVar9 = local_b0 + 1;
      local_b0 = uVar9;
    }
  }
  if (DAT_05402861 != '\0') {
    if (DAT_054022b8 < 1) {
      local_34 = 0;
    }
    else {
      local_34 = 0;
      iVar7 = DAT_054022b8 + DAT_054022b4 + -1;
      iVar3 = 0;
      if (DAT_054022b0 <= iVar7) {
        iVar3 = DAT_054022b0;
      }
      piVar14 = (int *)(DAT_054022a8 + (long)(iVar7 - iVar3) * 0x14);
      if ((char)piVar14[4] == '\0') {
        local_34 = *piVar14;
      }
    }
    if ((0x1a < local_34) && (uVar9 < 10)) {
      local_a0[(int)uVar9] = &DAT_05402270;
      uVar9 = local_b0 + 1;
      local_b0 = uVar9;
    }
  }
  if (DAT_05403401 != '\0') {
    if (DAT_05402e58 < 1) {
      local_34 = 0;
    }
    else {
      local_34 = 0;
      iVar7 = DAT_05402e58 + DAT_05402e54 + -1;
      iVar3 = 0;
      if (DAT_05402e50 <= iVar7) {
        iVar3 = DAT_05402e50;
      }
      piVar14 = (int *)(DAT_05402e48 + (long)(iVar7 - iVar3) * 0x14);
      if ((char)piVar14[4] == '\0') {
        local_34 = *piVar14;
      }
    }
    if ((0x1a < local_34) && (uVar9 < 10)) {
      local_a0[(int)uVar9] = &DAT_05402e10;
      uVar9 = local_b0 + 1;
      local_b0 = uVar9;
    }
  }
  if (DAT_05403fa1 != '\0') {
    if (DAT_054039f8 < 1) {
      local_34 = 0;
    }
    else {
      local_34 = 0;
      iVar7 = DAT_054039f8 + DAT_054039f4 + -1;
      iVar3 = 0;
      if (DAT_054039f0 <= iVar7) {
        iVar3 = DAT_054039f0;
      }
      piVar14 = (int *)(DAT_054039e8 + (long)(iVar7 - iVar3) * 0x14);
      if ((char)piVar14[4] == '\0') {
        local_34 = *piVar14;
      }
    }
    if ((0x1a < local_34) && (uVar9 < 10)) {
      local_a0[(int)uVar9] = &DAT_054039b0;
      uVar9 = local_b0 + 1;
      local_b0 = uVar9;
    }
  }
  if (DAT_05404b41 != '\0') {
    if (DAT_05404598 < 1) {
      local_34 = 0;
    }
    else {
      local_34 = 0;
      iVar7 = DAT_05404598 + DAT_05404594 + -1;
      iVar3 = 0;
      if (DAT_05404590 <= iVar7) {
        iVar3 = DAT_05404590;
      }
      piVar14 = (int *)(DAT_05404588 + (long)(iVar7 - iVar3) * 0x14);
      if ((char)piVar14[4] == '\0') {
        local_34 = *piVar14;
      }
    }
    if ((0x1a < local_34) && (uVar9 < 10)) {
      local_a0[(int)uVar9] = &DAT_05404550;
      uVar9 = local_b0 + 1;
      local_b0 = uVar9;
    }
  }
  if (DAT_054056e1 != '\0') {
    if (DAT_05405138 < 1) {
      local_34 = 0;
    }
    else {
      local_34 = 0;
      iVar7 = DAT_05405138 + DAT_05405134 + -1;
      iVar3 = 0;
      if (DAT_05405130 <= iVar7) {
        iVar3 = DAT_05405130;
      }
      piVar14 = (int *)(DAT_05405128 + (long)(iVar7 - iVar3) * 0x14);
      if ((char)piVar14[4] == '\0') {
        local_34 = *piVar14;
      }
    }
    if ((0x1a < local_34) && (uVar9 < 10)) {
      local_a0[(int)uVar9] = &DAT_054050f0;
      local_b0 = local_b0 + 1;
    }
  }
  uVar9 = nn::os::GetSystemTick();
  if (1 < local_b0) {
    uVar9 = (uVar9 ^ uVar9 >> 0x1e) * 0x6c078965 + 1;
    uVar11 = (uVar9 ^ uVar9 >> 0x1e) * 0x6c078965 + 2;
    uVar13 = (uVar11 ^ uVar11 >> 0x1e) * 0x6c078965 + 3;
    uVar10 = (ulong)local_b0;
    uVar15 = (uVar13 ^ uVar13 >> 0x1e) * 0x6c078965 + 4;
    do {
      uVar9 = uVar9 ^ uVar9 << 0xb;
      uVar5 = uVar9 >> 8 ^ uVar15 >> 0x13 ^ uVar9 ^ uVar15;
      uVar17 = uVar10 - 1 & 0xffffffff;
      puVar18 = local_a0[uVar17];
      uVar19 = uVar10 * uVar5 >> 0x1d & 0x7fffffff8;
      local_a0[uVar17] = *(undefined **)((long)local_a0 + uVar19);
      *(undefined **)((long)local_a0 + uVar19) = puVar18;
      bVar1 = 2 < uVar10;
      uVar10 = uVar10 - 1;
      uVar9 = uVar11;
      uVar11 = uVar13;
      uVar13 = uVar15;
      uVar15 = uVar5;
    } while (bVar1);
  }
  puVar8 = PTR_DAT_04bb6298;
  puVar18 = PTR_DAT_04bb4760;
  if (local_b0 != 0) {
    lVar21 = (long)(int)local_b0 << 3;
    ppuVar20 = local_a0;
    do {
      uVar9 = *(uint *)(*ppuVar20 + 0xc);
      local_34 = 2;
      lVar4 = *(long *)puVar18 + (ulong)uVar9 * 0x15;
      if (0x6c < uVar9) {
        lVar4 = *(long *)puVar18;
      }
      uVar2 = (ushort)*(byte *)(lVar4 + 4) | (*(byte *)(lVar4 + 5) & 3) << 8;
      if (0x1ff < uVar2) {
        uVar2 = uVar2 | 0xfc00;
      }
      FUN_01e2caf8(param_1,*ppuVar20,*(ushort *)puVar8 != uVar2,&local_34,0,0);
      lVar21 = lVar21 + -8;
      ppuVar20 = ppuVar20 + 1;
    } while (lVar21 != 0);
  }
  return;
}

