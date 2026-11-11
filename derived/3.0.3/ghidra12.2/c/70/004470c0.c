
void FUN_004470c0(undefined8 *param_1)

{
  uint uVar1;
  undefined *puVar2;
  uint uVar3;
  uint uVar4;
  int iVar5;
  long lVar6;
  ulong uVar7;
  ulong uVar8;
  long *plVar9;
  int *piVar10;
  uint *puVar11;
  undefined1 local_98 [4];
  undefined4 local_94;
  undefined8 local_90;
  undefined1 *puStack_88;
  undefined8 *local_80;
  undefined1 local_78;
  undefined *local_70;
  undefined1 local_68;
  
  FUN_0046b750();
  *param_1 = &PTR_LAB_04861500;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[5] = 0x8000000000000000;
  FUN_0043cbe0(param_1 + 6);
  param_1[10] = 0;
  param_1[0xb] = 0x8000000000000000;
  param_1[0xc] = 0;
  param_1[0xd] = 0x8000000000000000;
  plVar9 = param_1 + 0xe;
  *plVar9 = 0;
  piVar10 = (int *)(param_1 + 0xf);
  piVar10[0] = 0;
  piVar10[1] = -1;
  FUN_0043ce50(param_1 + 0x10);
  local_94 = 0x3fff;
  local_98[0] = 1;
  local_80 = (undefined8 *)0x0;
  local_90 = 0x1fffffff;
  puStack_88 = (undefined1 *)0x1;
  local_78 = 0;
  local_70 = (undefined *)0x0;
  local_68 = 1;
  FUN_0046b780(param_1 + 0x12,local_98);
  param_1[0x1e] = param_1;
  param_1[0x1f] = param_1 + 0x10;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  puVar2 = PTR_DAT_04bd6400;
  uVar3 = FUN_00428440(PTR_DAT_04bd6400);
  puVar11 = (uint *)((long)param_1 + 0x7c);
  uVar4 = *puVar11;
  if ((int)uVar4 < *piVar10 * 2) {
    FUN_0044bb30(plVar9,PTR_DAT_048607b8,uVar4 * 2 + 2);
    uVar4 = *puVar11;
  }
  uVar1 = (uVar3 * -0x61c8864f & 0xff00ff00) >> 8 | (uVar3 * -0x61c8864f & 0xff00ff) << 8;
  uVar1 = uVar1 >> 0x10 | uVar1 << 0x10;
  uVar7 = (ulong)(uVar4 & uVar1 + (uVar1 >> 2) + 0x9e3779b9);
  lVar6 = *plVar9;
  uVar8 = *(ulong *)(lVar6 + uVar7 * 0x10);
  while (uVar8 != 0xffffffffffffffff) {
    if (uVar8 == uVar3) {
      iVar5 = 0;
      goto LAB_00447224;
    }
    uVar7 = (ulong)((int)uVar7 + 1U & uVar4);
    uVar8 = *(ulong *)(lVar6 + uVar7 * 0x10);
  }
  iVar5 = 1;
LAB_00447224:
  *piVar10 = *piVar10 + iVar5;
  uVar7 = -(uVar7 >> 0x1f) & 0xfffffff000000000 | uVar7 << 4;
  *(ulong *)(lVar6 + uVar7) = (ulong)uVar3;
  *(undefined **)(*plVar9 + uVar7 + 8) = puVar2;
  uVar3 = FUN_00428440(&DAT_04c20198);
  uVar4 = *puVar11;
  if ((int)uVar4 < *piVar10 * 2) {
    FUN_0044bb30(plVar9,PTR_DAT_048607b8,uVar4 * 2 + 2);
    uVar4 = *puVar11;
  }
  uVar1 = (uVar3 * -0x61c8864f & 0xff00ff00) >> 8 | (uVar3 * -0x61c8864f & 0xff00ff) << 8;
  uVar1 = uVar1 >> 0x10 | uVar1 << 0x10;
  uVar7 = (ulong)(uVar4 & uVar1 + (uVar1 >> 2) + 0x9e3779b9);
  lVar6 = *plVar9;
  uVar8 = *(ulong *)(lVar6 + uVar7 * 0x10);
  while (uVar8 != 0xffffffffffffffff) {
    if (uVar8 == uVar3) {
      iVar5 = 0;
      goto LAB_004472e8;
    }
    uVar7 = (ulong)((int)uVar7 + 1U & uVar4);
    uVar8 = *(ulong *)(lVar6 + uVar7 * 0x10);
  }
  iVar5 = 1;
LAB_004472e8:
  uVar7 = -(uVar7 >> 0x1f) & 0xfffffff000000000 | uVar7 << 4;
  *piVar10 = *piVar10 + iVar5;
  *(ulong *)(lVar6 + uVar7) = (ulong)uVar3;
  *(undefined **)(*plVar9 + uVar7 + 8) = &DAT_04c20198;
  uVar3 = FUN_00428440(&DAT_04c20248);
  uVar4 = *puVar11;
  if ((int)uVar4 < *piVar10 * 2) {
    FUN_0044bb30(plVar9,PTR_DAT_048607b8,uVar4 * 2 + 2);
    uVar4 = *puVar11;
  }
  uVar1 = (uVar3 * -0x61c8864f & 0xff00ff00) >> 8 | (uVar3 * -0x61c8864f & 0xff00ff) << 8;
  uVar1 = uVar1 >> 0x10 | uVar1 << 0x10;
  uVar7 = (ulong)(uVar4 & uVar1 + (uVar1 >> 2) + 0x9e3779b9);
  lVar6 = *plVar9;
  uVar8 = *(ulong *)(lVar6 + uVar7 * 0x10);
  while (uVar8 != 0xffffffffffffffff) {
    if (uVar8 == uVar3) {
      iVar5 = 0;
      goto LAB_004473ac;
    }
    uVar7 = (ulong)((int)uVar7 + 1U & uVar4);
    uVar8 = *(ulong *)(lVar6 + uVar7 * 0x10);
  }
  iVar5 = 1;
LAB_004473ac:
  uVar7 = -(uVar7 >> 0x1f) & 0xfffffff000000000 | uVar7 << 4;
  *piVar10 = *piVar10 + iVar5;
  *(ulong *)(lVar6 + uVar7) = (ulong)uVar3;
  *(undefined **)(*plVar9 + uVar7 + 8) = &DAT_04c20248;
  uVar3 = FUN_00428440(&DAT_04c202f8);
  uVar4 = *puVar11;
  if ((int)uVar4 < *piVar10 * 2) {
    FUN_0044bb30(plVar9,PTR_DAT_048607b8,uVar4 * 2 + 2);
    uVar4 = *puVar11;
  }
  uVar1 = (uVar3 * -0x61c8864f & 0xff00ff00) >> 8 | (uVar3 * -0x61c8864f & 0xff00ff) << 8;
  uVar1 = uVar1 >> 0x10 | uVar1 << 0x10;
  uVar7 = (ulong)(uVar4 & uVar1 + (uVar1 >> 2) + 0x9e3779b9);
  lVar6 = *plVar9;
  uVar8 = *(ulong *)(lVar6 + uVar7 * 0x10);
  while (uVar8 != 0xffffffffffffffff) {
    if (uVar8 == uVar3) {
      iVar5 = 0;
      goto LAB_00447470;
    }
    uVar7 = (ulong)((int)uVar7 + 1U & uVar4);
    uVar8 = *(ulong *)(lVar6 + uVar7 * 0x10);
  }
  iVar5 = 1;
LAB_00447470:
  uVar7 = -(uVar7 >> 0x1f) & 0xfffffff000000000 | uVar7 << 4;
  *piVar10 = *piVar10 + iVar5;
  *(ulong *)(lVar6 + uVar7) = (ulong)uVar3;
  *(undefined **)(*plVar9 + uVar7 + 8) = &DAT_04c202f8;
  uVar3 = FUN_00428440(&DAT_04c203a8);
  uVar4 = *puVar11;
  if ((int)uVar4 < *piVar10 * 2) {
    FUN_0044bb30(plVar9,PTR_DAT_048607b8,uVar4 * 2 + 2);
    uVar4 = *puVar11;
  }
  uVar1 = (uVar3 * -0x61c8864f & 0xff00ff00) >> 8 | (uVar3 * -0x61c8864f & 0xff00ff) << 8;
  uVar1 = uVar1 >> 0x10 | uVar1 << 0x10;
  uVar7 = (ulong)(uVar4 & uVar1 + (uVar1 >> 2) + 0x9e3779b9);
  lVar6 = *plVar9;
  uVar8 = *(ulong *)(lVar6 + uVar7 * 0x10);
  while (uVar8 != 0xffffffffffffffff) {
    if (uVar8 == uVar3) {
      iVar5 = 0;
      goto LAB_00447534;
    }
    uVar7 = (ulong)((int)uVar7 + 1U & uVar4);
    uVar8 = *(ulong *)(lVar6 + uVar7 * 0x10);
  }
  iVar5 = 1;
LAB_00447534:
  uVar7 = -(uVar7 >> 0x1f) & 0xfffffff000000000 | uVar7 << 4;
  *piVar10 = *piVar10 + iVar5;
  *(ulong *)(lVar6 + uVar7) = (ulong)uVar3;
  *(undefined **)(*plVar9 + uVar7 + 8) = &DAT_04c203a8;
  uVar3 = FUN_00428440(&DAT_04c20458);
  uVar4 = *puVar11;
  if ((int)uVar4 < *piVar10 * 2) {
    FUN_0044bb30(plVar9,PTR_DAT_048607b8,uVar4 * 2 + 2);
    uVar4 = *puVar11;
  }
  uVar1 = (uVar3 * -0x61c8864f & 0xff00ff00) >> 8 | (uVar3 * -0x61c8864f & 0xff00ff) << 8;
  uVar1 = uVar1 >> 0x10 | uVar1 << 0x10;
  uVar7 = (ulong)(uVar4 & uVar1 + (uVar1 >> 2) + 0x9e3779b9);
  lVar6 = *plVar9;
  uVar8 = *(ulong *)(lVar6 + uVar7 * 0x10);
  while (uVar8 != 0xffffffffffffffff) {
    if (uVar8 == uVar3) {
      iVar5 = 0;
      goto LAB_004475f8;
    }
    uVar7 = (ulong)((int)uVar7 + 1U & uVar4);
    uVar8 = *(ulong *)(lVar6 + uVar7 * 0x10);
  }
  iVar5 = 1;
LAB_004475f8:
  uVar7 = -(uVar7 >> 0x1f) & 0xfffffff000000000 | uVar7 << 4;
  *piVar10 = *piVar10 + iVar5;
  *(ulong *)(lVar6 + uVar7) = (ulong)uVar3;
  *(undefined **)(*plVar9 + uVar7 + 8) = &DAT_04c20458;
  uVar3 = FUN_00428440(&DAT_04c20508);
  uVar4 = *puVar11;
  if ((int)uVar4 < *piVar10 * 2) {
    FUN_0044bb30(plVar9,PTR_DAT_048607b8,uVar4 * 2 + 2);
    uVar4 = *puVar11;
  }
  uVar1 = (uVar3 * -0x61c8864f & 0xff00ff00) >> 8 | (uVar3 * -0x61c8864f & 0xff00ff) << 8;
  uVar1 = uVar1 >> 0x10 | uVar1 << 0x10;
  uVar7 = (ulong)(uVar4 & uVar1 + (uVar1 >> 2) + 0x9e3779b9);
  lVar6 = *plVar9;
  uVar8 = *(ulong *)(lVar6 + uVar7 * 0x10);
  while (uVar8 != 0xffffffffffffffff) {
    if (uVar8 == uVar3) {
      iVar5 = 0;
      goto LAB_004476bc;
    }
    uVar7 = (ulong)((int)uVar7 + 1U & uVar4);
    uVar8 = *(ulong *)(lVar6 + uVar7 * 0x10);
  }
  iVar5 = 1;
LAB_004476bc:
  uVar7 = -(uVar7 >> 0x1f) & 0xfffffff000000000 | uVar7 << 4;
  *piVar10 = *piVar10 + iVar5;
  *(ulong *)(lVar6 + uVar7) = (ulong)uVar3;
  *(undefined **)(*plVar9 + uVar7 + 8) = &DAT_04c20508;
  uVar3 = FUN_00428440(&DAT_04c205b8);
  uVar4 = *puVar11;
  if ((int)uVar4 < *piVar10 * 2) {
    FUN_0044bb30(plVar9,PTR_DAT_048607b8,uVar4 * 2 + 2);
    uVar4 = *puVar11;
  }
  uVar1 = (uVar3 * -0x61c8864f & 0xff00ff00) >> 8 | (uVar3 * -0x61c8864f & 0xff00ff) << 8;
  uVar1 = uVar1 >> 0x10 | uVar1 << 0x10;
  uVar7 = (ulong)(uVar4 & uVar1 + (uVar1 >> 2) + 0x9e3779b9);
  lVar6 = *plVar9;
  uVar8 = *(ulong *)(lVar6 + uVar7 * 0x10);
  while (uVar8 != 0xffffffffffffffff) {
    if (uVar8 == uVar3) {
      iVar5 = 0;
      goto LAB_00447780;
    }
    uVar7 = (ulong)((int)uVar7 + 1U & uVar4);
    uVar8 = *(ulong *)(lVar6 + uVar7 * 0x10);
  }
  iVar5 = 1;
LAB_00447780:
  uVar7 = -(uVar7 >> 0x1f) & 0xfffffff000000000 | uVar7 << 4;
  *piVar10 = *piVar10 + iVar5;
  *(ulong *)(lVar6 + uVar7) = (ulong)uVar3;
  *(undefined **)(*plVar9 + uVar7 + 8) = &DAT_04c205b8;
  uVar3 = FUN_00428440(&DAT_04c20140);
  uVar4 = *puVar11;
  if ((int)uVar4 < *piVar10 * 2) {
    FUN_0044bb30(plVar9,PTR_DAT_048607b8,uVar4 * 2 + 2);
    uVar4 = *puVar11;
  }
  uVar1 = (uVar3 * -0x61c8864f & 0xff00ff00) >> 8 | (uVar3 * -0x61c8864f & 0xff00ff) << 8;
  uVar1 = uVar1 >> 0x10 | uVar1 << 0x10;
  uVar7 = (ulong)(uVar4 & uVar1 + (uVar1 >> 2) + 0x9e3779b9);
  lVar6 = *plVar9;
  uVar8 = *(ulong *)(lVar6 + uVar7 * 0x10);
  while (uVar8 != 0xffffffffffffffff) {
    if (uVar8 == uVar3) {
      iVar5 = 0;
      goto LAB_00447844;
    }
    uVar7 = (ulong)((int)uVar7 + 1U & uVar4);
    uVar8 = *(ulong *)(lVar6 + uVar7 * 0x10);
  }
  iVar5 = 1;
LAB_00447844:
  uVar7 = -(uVar7 >> 0x1f) & 0xfffffff000000000 | uVar7 << 4;
  *piVar10 = *piVar10 + iVar5;
  *(ulong *)(lVar6 + uVar7) = (ulong)uVar3;
  *(undefined **)(*plVar9 + uVar7 + 8) = &DAT_04c20140;
  uVar3 = FUN_00428440(&DAT_04c201f0);
  uVar4 = *puVar11;
  if ((int)uVar4 < *piVar10 * 2) {
    FUN_0044bb30(plVar9,PTR_DAT_048607b8,uVar4 * 2 + 2);
    uVar4 = *puVar11;
  }
  uVar1 = (uVar3 * -0x61c8864f & 0xff00ff00) >> 8 | (uVar3 * -0x61c8864f & 0xff00ff) << 8;
  uVar1 = uVar1 >> 0x10 | uVar1 << 0x10;
  uVar7 = (ulong)(uVar4 & uVar1 + (uVar1 >> 2) + 0x9e3779b9);
  lVar6 = *plVar9;
  uVar8 = *(ulong *)(lVar6 + uVar7 * 0x10);
  while (uVar8 != 0xffffffffffffffff) {
    if (uVar8 == uVar3) {
      iVar5 = 0;
      goto LAB_00447908;
    }
    uVar7 = (ulong)((int)uVar7 + 1U & uVar4);
    uVar8 = *(ulong *)(lVar6 + uVar7 * 0x10);
  }
  iVar5 = 1;
LAB_00447908:
  uVar7 = -(uVar7 >> 0x1f) & 0xfffffff000000000 | uVar7 << 4;
  *piVar10 = *piVar10 + iVar5;
  *(ulong *)(lVar6 + uVar7) = (ulong)uVar3;
  *(undefined **)(*plVar9 + uVar7 + 8) = &DAT_04c201f0;
  uVar3 = FUN_00428440(&DAT_04c202a0);
  uVar4 = *puVar11;
  if ((int)uVar4 < *piVar10 * 2) {
    FUN_0044bb30(plVar9,PTR_DAT_048607b8,uVar4 * 2 + 2);
    uVar4 = *puVar11;
  }
  uVar1 = (uVar3 * -0x61c8864f & 0xff00ff00) >> 8 | (uVar3 * -0x61c8864f & 0xff00ff) << 8;
  uVar1 = uVar1 >> 0x10 | uVar1 << 0x10;
  uVar7 = (ulong)(uVar4 & uVar1 + (uVar1 >> 2) + 0x9e3779b9);
  lVar6 = *plVar9;
  uVar8 = *(ulong *)(lVar6 + uVar7 * 0x10);
  while (uVar8 != 0xffffffffffffffff) {
    if (uVar8 == uVar3) {
      iVar5 = 0;
      goto LAB_004479cc;
    }
    uVar7 = (ulong)((int)uVar7 + 1U & uVar4);
    uVar8 = *(ulong *)(lVar6 + uVar7 * 0x10);
  }
  iVar5 = 1;
LAB_004479cc:
  uVar7 = -(uVar7 >> 0x1f) & 0xfffffff000000000 | uVar7 << 4;
  *piVar10 = *piVar10 + iVar5;
  *(ulong *)(lVar6 + uVar7) = (ulong)uVar3;
  *(undefined **)(*plVar9 + uVar7 + 8) = &DAT_04c202a0;
  uVar3 = FUN_00428440(&DAT_04c20350);
  uVar4 = *puVar11;
  if ((int)uVar4 < *piVar10 * 2) {
    FUN_0044bb30(plVar9,PTR_DAT_048607b8,uVar4 * 2 + 2);
    uVar4 = *puVar11;
  }
  uVar1 = (uVar3 * -0x61c8864f & 0xff00ff00) >> 8 | (uVar3 * -0x61c8864f & 0xff00ff) << 8;
  uVar1 = uVar1 >> 0x10 | uVar1 << 0x10;
  uVar7 = (ulong)(uVar4 & uVar1 + (uVar1 >> 2) + 0x9e3779b9);
  lVar6 = *plVar9;
  uVar8 = *(ulong *)(lVar6 + uVar7 * 0x10);
  while (uVar8 != 0xffffffffffffffff) {
    if (uVar8 == uVar3) {
      iVar5 = 0;
      goto LAB_00447a90;
    }
    uVar7 = (ulong)((int)uVar7 + 1U & uVar4);
    uVar8 = *(ulong *)(lVar6 + uVar7 * 0x10);
  }
  iVar5 = 1;
LAB_00447a90:
  uVar7 = -(uVar7 >> 0x1f) & 0xfffffff000000000 | uVar7 << 4;
  *piVar10 = *piVar10 + iVar5;
  *(ulong *)(lVar6 + uVar7) = (ulong)uVar3;
  *(undefined **)(*plVar9 + uVar7 + 8) = &DAT_04c20350;
  uVar3 = FUN_00428440(&DAT_04c20400);
  uVar4 = *puVar11;
  if ((int)uVar4 < *piVar10 * 2) {
    FUN_0044bb30(plVar9,PTR_DAT_048607b8,uVar4 * 2 + 2);
    uVar4 = *puVar11;
  }
  uVar1 = (uVar3 * -0x61c8864f & 0xff00ff00) >> 8 | (uVar3 * -0x61c8864f & 0xff00ff) << 8;
  uVar1 = uVar1 >> 0x10 | uVar1 << 0x10;
  uVar7 = (ulong)(uVar4 & uVar1 + (uVar1 >> 2) + 0x9e3779b9);
  lVar6 = *plVar9;
  uVar8 = *(ulong *)(lVar6 + uVar7 * 0x10);
  while (uVar8 != 0xffffffffffffffff) {
    if (uVar8 == uVar3) {
      iVar5 = 0;
      goto LAB_00447b54;
    }
    uVar7 = (ulong)((int)uVar7 + 1U & uVar4);
    uVar8 = *(ulong *)(lVar6 + uVar7 * 0x10);
  }
  iVar5 = 1;
LAB_00447b54:
  uVar7 = -(uVar7 >> 0x1f) & 0xfffffff000000000 | uVar7 << 4;
  *piVar10 = *piVar10 + iVar5;
  *(ulong *)(lVar6 + uVar7) = (ulong)uVar3;
  *(undefined **)(*plVar9 + uVar7 + 8) = &DAT_04c20400;
  uVar3 = FUN_00428440(&DAT_04c204b0);
  uVar4 = *puVar11;
  if ((int)uVar4 < *piVar10 * 2) {
    FUN_0044bb30(plVar9,PTR_DAT_048607b8,uVar4 * 2 + 2);
    uVar4 = *puVar11;
  }
  uVar1 = (uVar3 * -0x61c8864f & 0xff00ff00) >> 8 | (uVar3 * -0x61c8864f & 0xff00ff) << 8;
  uVar1 = uVar1 >> 0x10 | uVar1 << 0x10;
  uVar7 = (ulong)(uVar4 & uVar1 + (uVar1 >> 2) + 0x9e3779b9);
  lVar6 = *plVar9;
  uVar8 = *(ulong *)(lVar6 + uVar7 * 0x10);
  while (uVar8 != 0xffffffffffffffff) {
    if (uVar8 == uVar3) {
      iVar5 = 0;
      goto LAB_00447c18;
    }
    uVar7 = (ulong)((int)uVar7 + 1U & uVar4);
    uVar8 = *(ulong *)(lVar6 + uVar7 * 0x10);
  }
  iVar5 = 1;
LAB_00447c18:
  uVar7 = -(uVar7 >> 0x1f) & 0xfffffff000000000 | uVar7 << 4;
  *piVar10 = *piVar10 + iVar5;
  *(ulong *)(lVar6 + uVar7) = (ulong)uVar3;
  *(undefined **)(*plVar9 + uVar7 + 8) = &DAT_04c204b0;
  uVar3 = FUN_00428440(&DAT_04c20560);
  uVar4 = *puVar11;
  if ((int)uVar4 < *piVar10 * 2) {
    FUN_0044bb30(plVar9,PTR_DAT_048607b8,uVar4 * 2 + 2);
    uVar4 = *puVar11;
  }
  uVar1 = (uVar3 * -0x61c8864f & 0xff00ff00) >> 8 | (uVar3 * -0x61c8864f & 0xff00ff) << 8;
  uVar1 = uVar1 >> 0x10 | uVar1 << 0x10;
  uVar7 = (ulong)(uVar4 & uVar1 + (uVar1 >> 2) + 0x9e3779b9);
  lVar6 = *plVar9;
  uVar8 = *(ulong *)(lVar6 + uVar7 * 0x10);
  while (uVar8 != 0xffffffffffffffff) {
    if (uVar8 == uVar3) {
      iVar5 = 0;
      goto LAB_00447cdc;
    }
    uVar7 = (ulong)((int)uVar7 + 1U & uVar4);
    uVar8 = *(ulong *)(lVar6 + uVar7 * 0x10);
  }
  iVar5 = 1;
LAB_00447cdc:
  uVar7 = -(uVar7 >> 0x1f) & 0xfffffff000000000 | uVar7 << 4;
  *piVar10 = *piVar10 + iVar5;
  *(ulong *)(lVar6 + uVar7) = (ulong)uVar3;
  *(undefined **)(*plVar9 + uVar7 + 8) = &DAT_04c20560;
  uVar3 = FUN_00428440(&DAT_04c20610);
  uVar4 = *puVar11;
  if ((int)uVar4 < *piVar10 * 2) {
    FUN_0044bb30(plVar9,PTR_DAT_048607b8,uVar4 * 2 + 2);
    uVar4 = *puVar11;
  }
  uVar1 = (uVar3 * -0x61c8864f & 0xff00ff00) >> 8 | (uVar3 * -0x61c8864f & 0xff00ff) << 8;
  uVar1 = uVar1 >> 0x10 | uVar1 << 0x10;
  uVar7 = (ulong)(uVar4 & uVar1 + (uVar1 >> 2) + 0x9e3779b9);
  lVar6 = *plVar9;
  uVar8 = *(ulong *)(lVar6 + uVar7 * 0x10);
  while (uVar8 != 0xffffffffffffffff) {
    if (uVar8 == uVar3) {
      iVar5 = 0;
      goto LAB_00447da0;
    }
    uVar7 = (ulong)((int)uVar7 + 1U & uVar4);
    uVar8 = *(ulong *)(lVar6 + uVar7 * 0x10);
  }
  iVar5 = 1;
LAB_00447da0:
  uVar7 = -(uVar7 >> 0x1f) & 0xfffffff000000000 | uVar7 << 4;
  *piVar10 = *piVar10 + iVar5;
  *(ulong *)(lVar6 + uVar7) = (ulong)uVar3;
  *(undefined **)(*plVar9 + uVar7 + 8) = &DAT_04c20610;
  uVar3 = FUN_00428440(&DAT_04c20718);
  uVar4 = *puVar11;
  if ((int)uVar4 < *piVar10 * 2) {
    FUN_0044bb30(plVar9,PTR_DAT_048607b8,uVar4 * 2 + 2);
    uVar4 = *puVar11;
  }
  uVar1 = (uVar3 * -0x61c8864f & 0xff00ff00) >> 8 | (uVar3 * -0x61c8864f & 0xff00ff) << 8;
  uVar1 = uVar1 >> 0x10 | uVar1 << 0x10;
  uVar7 = (ulong)(uVar4 & uVar1 + (uVar1 >> 2) + 0x9e3779b9);
  lVar6 = *plVar9;
  uVar8 = *(ulong *)(lVar6 + uVar7 * 0x10);
  while (uVar8 != 0xffffffffffffffff) {
    if (uVar8 == uVar3) {
      iVar5 = 0;
      goto LAB_00447e64;
    }
    uVar7 = (ulong)((int)uVar7 + 1U & uVar4);
    uVar8 = *(ulong *)(lVar6 + uVar7 * 0x10);
  }
  iVar5 = 1;
LAB_00447e64:
  uVar7 = -(uVar7 >> 0x1f) & 0xfffffff000000000 | uVar7 << 4;
  *piVar10 = *piVar10 + iVar5;
  *(ulong *)(lVar6 + uVar7) = (ulong)uVar3;
  *(undefined **)(*plVar9 + uVar7 + 8) = &DAT_04c20718;
  uVar3 = FUN_00428440(&DAT_04c207c8);
  uVar4 = *puVar11;
  if ((int)uVar4 < *piVar10 * 2) {
    FUN_0044bb30(plVar9,PTR_DAT_048607b8,uVar4 * 2 + 2);
    uVar4 = *puVar11;
  }
  uVar1 = (uVar3 * -0x61c8864f & 0xff00ff00) >> 8 | (uVar3 * -0x61c8864f & 0xff00ff) << 8;
  uVar1 = uVar1 >> 0x10 | uVar1 << 0x10;
  uVar7 = (ulong)(uVar4 & uVar1 + (uVar1 >> 2) + 0x9e3779b9);
  lVar6 = *plVar9;
  uVar8 = *(ulong *)(lVar6 + uVar7 * 0x10);
  while (uVar8 != 0xffffffffffffffff) {
    if (uVar8 == uVar3) {
      iVar5 = 0;
      goto LAB_00447f28;
    }
    uVar7 = (ulong)((int)uVar7 + 1U & uVar4);
    uVar8 = *(ulong *)(lVar6 + uVar7 * 0x10);
  }
  iVar5 = 1;
LAB_00447f28:
  uVar7 = -(uVar7 >> 0x1f) & 0xfffffff000000000 | uVar7 << 4;
  *piVar10 = *piVar10 + iVar5;
  *(ulong *)(lVar6 + uVar7) = (ulong)uVar3;
  *(undefined **)(*plVar9 + uVar7 + 8) = &DAT_04c207c8;
  uVar3 = FUN_00428440(&DAT_04c20770);
  uVar4 = *puVar11;
  if ((int)uVar4 < *piVar10 * 2) {
    FUN_0044bb30(plVar9,PTR_DAT_048607b8,uVar4 * 2 + 2);
    uVar4 = *puVar11;
  }
  uVar1 = (uVar3 * -0x61c8864f & 0xff00ff00) >> 8 | (uVar3 * -0x61c8864f & 0xff00ff) << 8;
  uVar1 = uVar1 >> 0x10 | uVar1 << 0x10;
  uVar7 = (ulong)(uVar4 & uVar1 + (uVar1 >> 2) + 0x9e3779b9);
  lVar6 = *plVar9;
  uVar8 = *(ulong *)(lVar6 + uVar7 * 0x10);
  while (uVar8 != 0xffffffffffffffff) {
    if (uVar8 == uVar3) {
      iVar5 = 0;
      goto LAB_00447fec;
    }
    uVar7 = (ulong)((int)uVar7 + 1U & uVar4);
    uVar8 = *(ulong *)(lVar6 + uVar7 * 0x10);
  }
  iVar5 = 1;
LAB_00447fec:
  uVar7 = -(uVar7 >> 0x1f) & 0xfffffff000000000 | uVar7 << 4;
  *piVar10 = *piVar10 + iVar5;
  *(ulong *)(lVar6 + uVar7) = (ulong)uVar3;
  *(undefined **)(*plVar9 + uVar7 + 8) = &DAT_04c20770;
  uVar3 = FUN_00428440(&DAT_04c20820);
  uVar4 = *puVar11;
  if ((int)uVar4 < *piVar10 * 2) {
    FUN_0044bb30(plVar9,PTR_DAT_048607b8,uVar4 * 2 + 2);
    uVar4 = *puVar11;
  }
  uVar1 = (uVar3 * -0x61c8864f & 0xff00ff00) >> 8 | (uVar3 * -0x61c8864f & 0xff00ff) << 8;
  uVar1 = uVar1 >> 0x10 | uVar1 << 0x10;
  uVar7 = (ulong)(uVar4 & uVar1 + (uVar1 >> 2) + 0x9e3779b9);
  lVar6 = *plVar9;
  uVar8 = *(ulong *)(lVar6 + uVar7 * 0x10);
  while (uVar8 != 0xffffffffffffffff) {
    if (uVar8 == uVar3) {
      iVar5 = 0;
      goto LAB_004480b0;
    }
    uVar7 = (ulong)((int)uVar7 + 1U & uVar4);
    uVar8 = *(ulong *)(lVar6 + uVar7 * 0x10);
  }
  iVar5 = 1;
LAB_004480b0:
  uVar7 = -(uVar7 >> 0x1f) & 0xfffffff000000000 | uVar7 << 4;
  *piVar10 = *piVar10 + iVar5;
  *(ulong *)(lVar6 + uVar7) = (ulong)uVar3;
  *(undefined **)(*plVar9 + uVar7 + 8) = &DAT_04c20820;
  uVar3 = FUN_00428440(&DAT_04c20668);
  uVar4 = *puVar11;
  if ((int)uVar4 < *piVar10 * 2) {
    FUN_0044bb30(plVar9,PTR_DAT_048607b8,uVar4 * 2 + 2);
    uVar4 = *puVar11;
  }
  uVar1 = (uVar3 * -0x61c8864f & 0xff00ff00) >> 8 | (uVar3 * -0x61c8864f & 0xff00ff) << 8;
  uVar1 = uVar1 >> 0x10 | uVar1 << 0x10;
  uVar7 = (ulong)(uVar4 & uVar1 + (uVar1 >> 2) + 0x9e3779b9);
  lVar6 = *plVar9;
  uVar8 = *(ulong *)(lVar6 + uVar7 * 0x10);
  while (uVar8 != 0xffffffffffffffff) {
    if (uVar8 == uVar3) {
      iVar5 = 0;
      goto LAB_00448174;
    }
    uVar7 = (ulong)((int)uVar7 + 1U & uVar4);
    uVar8 = *(ulong *)(lVar6 + uVar7 * 0x10);
  }
  iVar5 = 1;
LAB_00448174:
  uVar7 = -(uVar7 >> 0x1f) & 0xfffffff000000000 | uVar7 << 4;
  *piVar10 = *piVar10 + iVar5;
  *(ulong *)(lVar6 + uVar7) = (ulong)uVar3;
  *(undefined **)(*plVar9 + uVar7 + 8) = &DAT_04c20668;
  uVar3 = FUN_00428440(&DAT_04c206c0);
  uVar4 = *puVar11;
  if ((int)uVar4 < *piVar10 * 2) {
    FUN_0044bb30(plVar9,PTR_DAT_048607b8,uVar4 * 2 + 2);
    uVar4 = *puVar11;
  }
  uVar1 = (uVar3 * -0x61c8864f & 0xff00ff00) >> 8 | (uVar3 * -0x61c8864f & 0xff00ff) << 8;
  uVar1 = uVar1 >> 0x10 | uVar1 << 0x10;
  uVar7 = (ulong)(uVar4 & uVar1 + (uVar1 >> 2) + 0x9e3779b9);
  lVar6 = *plVar9;
  uVar8 = *(ulong *)(lVar6 + uVar7 * 0x10);
  while (uVar8 != 0xffffffffffffffff) {
    if (uVar8 == uVar3) {
      iVar5 = 0;
      goto LAB_00448238;
    }
    uVar7 = (ulong)((int)uVar7 + 1U & uVar4);
    uVar8 = *(ulong *)(lVar6 + uVar7 * 0x10);
  }
  iVar5 = 1;
LAB_00448238:
  uVar7 = -(uVar7 >> 0x1f) & 0xfffffff000000000 | uVar7 << 4;
  *piVar10 = *piVar10 + iVar5;
  *(ulong *)(lVar6 + uVar7) = (ulong)uVar3;
  *(undefined **)(*plVar9 + uVar7 + 8) = &DAT_04c206c0;
  uVar3 = FUN_00428440(&DAT_04c189f8);
  uVar4 = *puVar11;
  if ((int)uVar4 < *piVar10 * 2) {
    FUN_0044bb30(plVar9,PTR_DAT_048607b8,uVar4 * 2 + 2);
    uVar4 = *puVar11;
  }
  uVar1 = (uVar3 * -0x61c8864f & 0xff00ff00) >> 8 | (uVar3 * -0x61c8864f & 0xff00ff) << 8;
  uVar1 = uVar1 >> 0x10 | uVar1 << 0x10;
  uVar7 = (ulong)(uVar4 & uVar1 + (uVar1 >> 2) + 0x9e3779b9);
  lVar6 = *plVar9;
  uVar8 = *(ulong *)(lVar6 + uVar7 * 0x10);
  while (uVar8 != 0xffffffffffffffff) {
    if (uVar8 == uVar3) {
      iVar5 = 0;
      goto LAB_004482fc;
    }
    uVar7 = (ulong)((int)uVar7 + 1U & uVar4);
    uVar8 = *(ulong *)(lVar6 + uVar7 * 0x10);
  }
  iVar5 = 1;
LAB_004482fc:
  uVar7 = -(uVar7 >> 0x1f) & 0xfffffff000000000 | uVar7 << 4;
  *piVar10 = *piVar10 + iVar5;
  *(ulong *)(lVar6 + uVar7) = (ulong)uVar3;
  *(undefined **)(*plVar9 + uVar7 + 8) = &DAT_04c189f8;
  uVar3 = FUN_00428440(&DAT_04c18a58);
  uVar4 = *puVar11;
  if ((int)uVar4 < *piVar10 * 2) {
    FUN_0044bb30(plVar9,PTR_DAT_048607b8,uVar4 * 2 + 2);
    uVar4 = *puVar11;
  }
  uVar1 = (uVar3 * -0x61c8864f & 0xff00ff00) >> 8 | (uVar3 * -0x61c8864f & 0xff00ff) << 8;
  uVar1 = uVar1 >> 0x10 | uVar1 << 0x10;
  uVar7 = (ulong)(uVar4 & uVar1 + (uVar1 >> 2) + 0x9e3779b9);
  lVar6 = *plVar9;
  uVar8 = *(ulong *)(lVar6 + uVar7 * 0x10);
  while (uVar8 != 0xffffffffffffffff) {
    if (uVar8 == uVar3) {
      iVar5 = 0;
      goto LAB_004483c0;
    }
    uVar7 = (ulong)((int)uVar7 + 1U & uVar4);
    uVar8 = *(ulong *)(lVar6 + uVar7 * 0x10);
  }
  iVar5 = 1;
LAB_004483c0:
  uVar7 = -(uVar7 >> 0x1f) & 0xfffffff000000000 | uVar7 << 4;
  *piVar10 = *piVar10 + iVar5;
  *(ulong *)(lVar6 + uVar7) = (ulong)uVar3;
  *(undefined **)(*plVar9 + uVar7 + 8) = &DAT_04c18a58;
  uVar3 = FUN_00428440(&DAT_04c18ab8);
  uVar4 = *puVar11;
  if ((int)uVar4 < *piVar10 * 2) {
    FUN_0044bb30(plVar9,PTR_DAT_048607b8,uVar4 * 2 + 2);
    uVar4 = *puVar11;
  }
  uVar1 = (uVar3 * -0x61c8864f & 0xff00ff00) >> 8 | (uVar3 * -0x61c8864f & 0xff00ff) << 8;
  uVar1 = uVar1 >> 0x10 | uVar1 << 0x10;
  uVar7 = (ulong)(uVar4 & uVar1 + (uVar1 >> 2) + 0x9e3779b9);
  lVar6 = *plVar9;
  uVar8 = *(ulong *)(lVar6 + uVar7 * 0x10);
  while (uVar8 != 0xffffffffffffffff) {
    if (uVar8 == uVar3) {
      iVar5 = 0;
      goto LAB_00448484;
    }
    uVar7 = (ulong)((int)uVar7 + 1U & uVar4);
    uVar8 = *(ulong *)(lVar6 + uVar7 * 0x10);
  }
  iVar5 = 1;
LAB_00448484:
  uVar7 = -(uVar7 >> 0x1f) & 0xfffffff000000000 | uVar7 << 4;
  *piVar10 = *piVar10 + iVar5;
  *(ulong *)(lVar6 + uVar7) = (ulong)uVar3;
  *(undefined **)(*plVar9 + uVar7 + 8) = &DAT_04c18ab8;
  uVar3 = FUN_00428440(&DAT_04c18b18);
  uVar4 = *puVar11;
  if ((int)uVar4 < *piVar10 * 2) {
    FUN_0044bb30(plVar9,PTR_DAT_048607b8,uVar4 * 2 + 2);
    uVar4 = *puVar11;
  }
  uVar1 = (uVar3 * -0x61c8864f & 0xff00ff00) >> 8 | (uVar3 * -0x61c8864f & 0xff00ff) << 8;
  uVar1 = uVar1 >> 0x10 | uVar1 << 0x10;
  uVar7 = (ulong)(uVar4 & uVar1 + (uVar1 >> 2) + 0x9e3779b9);
  lVar6 = *plVar9;
  uVar8 = *(ulong *)(lVar6 + uVar7 * 0x10);
  while (uVar8 != 0xffffffffffffffff) {
    if (uVar8 == uVar3) {
      iVar5 = 0;
      goto LAB_00448548;
    }
    uVar7 = (ulong)((int)uVar7 + 1U & uVar4);
    uVar8 = *(ulong *)(lVar6 + uVar7 * 0x10);
  }
  iVar5 = 1;
LAB_00448548:
  uVar7 = -(uVar7 >> 0x1f) & 0xfffffff000000000 | uVar7 << 4;
  *piVar10 = *piVar10 + iVar5;
  *(ulong *)(lVar6 + uVar7) = (ulong)uVar3;
  *(undefined **)(*plVar9 + uVar7 + 8) = &DAT_04c18b18;
  uVar3 = FUN_00428440(&DAT_04c11f18);
  uVar4 = *puVar11;
  if ((int)uVar4 < *piVar10 * 2) {
    FUN_0044bb30(plVar9,PTR_DAT_048607b8,uVar4 * 2 + 2);
    uVar4 = *puVar11;
  }
  uVar1 = (uVar3 * -0x61c8864f & 0xff00ff00) >> 8 | (uVar3 * -0x61c8864f & 0xff00ff) << 8;
  uVar1 = uVar1 >> 0x10 | uVar1 << 0x10;
  lVar6 = *plVar9;
  uVar7 = (ulong)(uVar4 & uVar1 + (uVar1 >> 2) + 0x9e3779b9);
  uVar8 = *(ulong *)(lVar6 + uVar7 * 0x10);
  do {
    if (uVar8 == 0xffffffffffffffff) {
      iVar5 = 1;
LAB_00448614:
      uVar7 = -(uVar7 >> 0x1f) & 0xfffffff000000000 | uVar7 << 4;
      *(int *)(param_1 + 0xf) = *(int *)(param_1 + 0xf) + iVar5;
      *(ulong *)(lVar6 + uVar7) = (ulong)uVar3;
      *(undefined **)(param_1[0xe] + uVar7 + 8) = &DAT_04c11f18;
      *(undefined4 *)(param_1 + 0x22) = 0;
      local_94 = 0x3fff;
      local_78 = 0;
      local_90 = 0x1fffffff;
      puStack_88 = &LAB_00446f90;
      local_68 = 1;
      local_98[0] = 0;
      local_70 = &DAT_04c6f678;
      local_80 = param_1 + 0x1e;
      FUN_0046b830(param_1 + 0x12,local_98);
      return;
    }
    if (uVar8 == uVar3) {
      iVar5 = 0;
      goto LAB_00448614;
    }
    uVar7 = (ulong)((int)uVar7 + 1U & uVar4);
    uVar8 = *(ulong *)(lVar6 + uVar7 * 0x10);
  } while( true );
}

