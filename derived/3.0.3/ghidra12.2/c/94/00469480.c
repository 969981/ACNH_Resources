
undefined8 FUN_00469480(long *param_1,long *param_2,undefined8 param_3)

{
  long *plVar1;
  int iVar2;
  uint uVar3;
  ulong uVar4;
  bool bVar5;
  bool bVar6;
  int iVar7;
  long lVar8;
  undefined8 *puVar9;
  undefined8 *puVar10;
  byte *pbVar11;
  byte *pbVar12;
  byte *pbVar13;
  undefined8 *puVar14;
  undefined8 *puVar15;
  undefined8 uVar16;
  int iVar17;
  ulong uVar18;
  long lVar19;
  undefined8 *local_250;
  undefined8 local_248;
  undefined8 auStack_240 [64];
  
  iVar2 = *(int *)(*(long *)*param_1 + (long)(int)param_1[1] * 0x18 + 8);
  uVar18 = (ulong)(param_2[1] - *param_2) >> 4;
  iVar17 = (int)uVar18;
  if (0 < iVar2 && iVar2 < iVar17) {
    FUN_00423010(param_3,"Found %d elements for a %d-element array",uVar18 & 0xffffffff);
    return 0x80040200;
  }
  local_250 = auStack_240;
  local_248 = 0x8000002000000000;
  if (iVar17 < 0x21) {
    iVar7 = 0;
    bVar5 = SBORROW4(0,iVar17);
    iVar2 = -iVar17;
    bVar6 = iVar17 == 0;
    if (iVar17 < 1) goto LAB_00469524;
  }
  else {
    local_250 = (undefined8 *)
                FUN_00426720(PTR_DAT_048607b8,uVar18 & 0xffffffff,0x10,local_250,0,
                             (long)&local_248 + 4);
    bVar5 = SBORROW4((uint)local_248,iVar17);
    iVar2 = (uint)local_248 - iVar17;
    bVar6 = (uint)local_248 == iVar17;
    iVar7 = (uint)local_248;
    if (iVar17 <= (int)(uint)local_248) {
LAB_00469524:
      if (!bVar6 && iVar2 < 0 == bVar5) {
        local_248 = CONCAT44(local_248._4_4_,iVar17);
      }
      goto LAB_00469580;
    }
  }
  local_248 = CONCAT44(local_248._4_4_,iVar17);
  if (0 < iVar17 - iVar7) {
    memset(local_250 + (long)iVar7 * 2,0,(ulong)(uint)(iVar17 - iVar7) << 4);
  }
LAB_00469580:
  uVar18 = local_248;
  lVar19 = *param_2;
  if (0 < (int)((ulong)(param_2[1] - lVar19) >> 4)) {
    lVar8 = 0;
    do {
      plVar1 = (long *)(lVar19 + lVar8 * 0x10);
      pbVar11 = (byte *)*plVar1;
      pbVar12 = (byte *)plVar1[1];
      if (pbVar11 != pbVar12) {
        while (*pbVar11 < 0x21 && (1L << ((ulong)*pbVar11 & 0x3f) & 0x100000600U) != 0) {
          pbVar11 = pbVar11 + 1;
          if (pbVar12 == pbVar11) goto LAB_00469788;
        }
      }
      if (pbVar11 != pbVar12) {
        do {
          pbVar13 = pbVar12 + -1;
          if ((0x20 < *pbVar13) || ((1L << ((ulong)*pbVar13 & 0x3f) & 0x100000600U) == 0))
          goto LAB_0046961c;
          pbVar12 = pbVar13;
        } while (pbVar11 != pbVar13);
        pbVar12 = pbVar11;
      }
LAB_0046961c:
      if (pbVar12 == pbVar11) {
LAB_00469788:
        uVar16 = 0x80040200;
        FUN_00423010(param_3,"Found empty value");
        uVar3 = local_248._4_4_;
        if ((long)local_248 < 0) {
          return 0x80040200;
        }
        goto LAB_00469764;
      }
      lVar19 = lVar8 * 2;
      lVar8 = lVar8 + 1;
      local_250[lVar19] = pbVar11;
      (local_250 + lVar19)[1] = pbVar12;
      lVar19 = *param_2;
    } while (lVar8 < (int)((ulong)(param_2[1] - lVar19) >> 4));
  }
  uVar3 = (uint)local_248;
  *(int *)(*(long *)*param_1 + (long)(int)param_1[1] * 0x18 + 0x10) = (int)((long *)*param_1)[0x1b];
  *(uint *)(*(long *)*param_1 + (long)(int)param_1[1] * 0x18 + 0x14) =
       (int)((long *)*param_1)[0x1b] + (uint)local_248;
  lVar19 = *param_1;
  iVar17 = *(int *)(lVar19 + 0xd8);
  iVar2 = iVar17 + (uint)local_248;
  if ((int)(*(uint *)(lVar19 + 0xdc) & 0x3fffffff) < iVar2) {
    lVar8 = FUN_00426720(PTR_DAT_048607b8,iVar2,0x10,*(undefined8 *)(lVar19 + 0xd0),iVar17);
    *(long *)(lVar19 + 0xd0) = lVar8;
    uVar4 = local_248;
  }
  else {
    lVar8 = *(long *)(lVar19 + 0xd0);
    uVar4 = local_248;
  }
  if (0 < (int)uVar3) {
    puVar10 = (undefined8 *)(lVar8 + (long)iVar17 * 0x10);
    puVar15 = local_250;
    if (2 < uVar3 - 1) {
      iVar17 = (uVar3 & 3) - uVar3;
      puVar9 = puVar10;
      puVar14 = local_250;
      do {
        uVar16 = puVar14[1];
        puVar10 = puVar9 + 8;
        *puVar9 = *puVar14;
        puVar9[1] = uVar16;
        puVar15 = puVar14 + 8;
        uVar16 = puVar14[3];
        iVar17 = iVar17 + 4;
        puVar9[2] = puVar14[2];
        puVar9[3] = uVar16;
        uVar16 = puVar14[5];
        puVar9[4] = puVar14[4];
        puVar9[5] = uVar16;
        uVar16 = puVar14[7];
        puVar9[6] = puVar14[6];
        puVar9[7] = uVar16;
        puVar9 = puVar10;
        puVar14 = puVar15;
      } while (iVar17 != 0);
    }
    if ((uVar18 & 3) != 0) {
      iVar17 = -(uVar3 & 3);
      do {
        uVar16 = puVar15[1];
        *puVar10 = *puVar15;
        puVar10[1] = uVar16;
        iVar17 = iVar17 + 1;
        puVar10 = puVar10 + 2;
        puVar15 = puVar15 + 2;
      } while (iVar17 != 0);
    }
  }
  uVar16 = 0;
  *(int *)(lVar19 + 0xd8) = iVar2;
  local_248._4_4_ = (uint)(uVar4 >> 0x20);
  uVar3 = local_248._4_4_;
  if (-1 < (long)uVar4) {
LAB_00469764:
    local_248 = (ulong)uVar3 << 0x20;
    if (local_250 != (undefined8 *)0x0) {
      FUN_00421f90(PTR_DAT_048607b8,local_250,0x10,uVar3 & 0x3fffffff);
    }
  }
  return uVar16;
}

