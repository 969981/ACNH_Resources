
/* WARNING: Type propagation algorithm not settling */

long FUN_0250a6b0(long param_1,uint param_2,undefined1 param_3,byte param_4)

{
  byte *pbVar1;
  byte *pbVar2;
  byte *pbVar3;
  byte *pbVar4;
  byte *pbVar5;
  byte *pbVar6;
  byte *pbVar7;
  byte *pbVar8;
  undefined4 uVar9;
  byte bVar10;
  byte bVar11;
  int iVar12;
  int iVar13;
  byte bVar14;
  byte bVar15;
  uint uVar16;
  byte bVar17;
  byte bVar18;
  uint uVar19;
  ulong uVar20;
  ulong uVar21;
  ulong uVar22;
  long lVar23;
  long *plVar24;
  undefined4 *puVar25;
  undefined4 *puVar26;
  long lVar27;
  long lVar28;
  byte *local_c0;
  uint local_b8;
  long local_a8 [4];
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  
  pbVar1 = (byte *)(param_1 + 0x9f64);
  pbVar2 = (byte *)(param_1 + 0x13d4);
  pbVar3 = (byte *)(param_1 + 0x8b74);
  pbVar4 = (byte *)(param_1 + 0x7784);
  pbVar5 = (byte *)(param_1 + 0x6394);
  pbVar6 = (byte *)(param_1 + 0x27c4);
  pbVar7 = (byte *)(param_1 + 0x3bb4);
  pbVar8 = (byte *)(param_1 + 0x4fa4);
  if (7 < (uint)*pbVar6 + (uint)*pbVar2 + (uint)*pbVar7 + (uint)*pbVar8 +
          (uint)*pbVar5 + (uint)*pbVar4 + (uint)*pbVar3 + (uint)*pbVar1) {
    return 0xffffffff;
  }
  if (*pbVar2 == 0) {
    lVar28 = 0;
    local_c0 = pbVar2;
  }
  else if (*pbVar6 == 0) {
    lVar28 = 1;
    local_c0 = pbVar6;
  }
  else if (*pbVar7 == 0) {
    lVar28 = 2;
    local_c0 = pbVar7;
  }
  else if (*pbVar8 == 0) {
    lVar28 = 3;
    local_c0 = pbVar8;
  }
  else {
    if (*pbVar5 == 0) {
      lVar28 = 4;
      local_c0 = pbVar5;
    }
    else if (*pbVar4 == 0) {
      lVar28 = 5;
      local_c0 = pbVar4;
    }
    else {
      lVar28 = 6;
      local_c0 = pbVar3;
      if (*pbVar3 != 0) {
        lVar28 = 7;
        local_c0 = pbVar1;
      }
    }
  }
  lVar27 = param_1 + lVar28 * 0x13f0;
  *(undefined4 *)(lVar27 + 8) = 0;
  puVar26 = (undefined4 *)(lVar27 + 0x14);
  *puVar26 = 0xffffffff;
  FUN_0257a320(lVar27 + 0x18);
  *(undefined4 *)(lVar27 + 0x4f0) = 0;
  *(undefined8 *)(lVar27 + 0x4c8) = 0;
  *(undefined8 *)(lVar27 + 0x4d0) = 0;
  *(undefined2 *)(lVar27 + 0x4d8) = 0;
  FUN_0250d580(lVar27 + 0x4f8);
  *(undefined4 *)(lVar27 + 0x13e0) = 0;
  *(undefined4 *)(lVar27 + 0x13d0) = 3;
  *(undefined8 *)(lVar27 + 0x4dc) = 0;
  *(undefined8 *)(lVar27 + 0x13d8) = 0xffffffff;
  *puVar26 = 0xffffffff;
  *local_c0 = 0;
  *(undefined2 *)(lVar27 + 0x13d5) = 0x100;
  if (param_2 < 3) {
    *(undefined4 *)(lVar27 + 8) = 0;
    puVar25 = (undefined4 *)(param_1 + lVar28 * 0x13f0);
    *(undefined4 *)(lVar27 + 0x14) = 0xffffffff;
    FUN_0257a320(lVar27 + 0x18);
    *(undefined8 *)(lVar27 + 0x4c8) = 0;
    *(undefined8 *)(lVar27 + 0x4d0) = 0;
    *(undefined2 *)(lVar27 + 0x4d8) = 0;
    *(undefined4 *)(lVar27 + 0x4f0) = 0;
    FUN_0250d580(lVar27 + 0x4f8);
    *(undefined8 *)(lVar27 + 0x4dc) = 0;
    *(uint *)(lVar27 + 0x13d0) = param_2;
    *local_c0 = *(uint *)(lVar27 + 0x13d0) < 3;
    *(undefined1 *)(lVar27 + 0x13d5) = param_3;
    *(byte *)(lVar27 + 0x13d6) = param_4 & 1;
    *puVar26 = *puVar25;
    if (*(char *)(puVar25 + 0x4f5) == '\0') goto LAB_0250a964;
    param_4 = param_4 & 1;
  }
  else {
    param_4 = *(byte *)(param_1 + lVar28 * 0x13f0 + 0x13d4);
  }
  if ((param_4 == 0) || (-1 < *(int *)(lVar27 + 0x13d8))) goto LAB_0250a964;
  iVar13 = *(int *)(param_1 + 0x13d8);
  bVar10 = *pbVar2;
  bVar11 = *pbVar6;
  if ((bVar10 == 0) || (iVar13 != 0)) {
    iVar12 = *(int *)(param_1 + 0x27c8);
    if (((((bVar11 == 0) || (iVar12 != 0)) &&
         ((bVar14 = *pbVar7, bVar14 == 0 || (*(int *)(param_1 + 0x3bb8) != 0)))) &&
        ((((bVar15 = *pbVar8, bVar15 == 0 || (*(int *)(param_1 + 0x4fa8) != 0)) &&
          ((bVar17 = *pbVar5, bVar17 == 0 || (*(int *)(param_1 + 0x6398) != 0)))) &&
         ((bVar18 = *pbVar4, bVar18 == 0 || (*(int *)(param_1 + 0x7788) != 0)))))) &&
       (((*pbVar3 == 0 || (*(int *)(param_1 + 0x8b78) != 0)) &&
        ((*pbVar1 == 0 || (*(int *)(param_1 + 0x9f68) != 0)))))) {
      iVar13 = 0;
    }
    else {
      if ((bVar10 == 0) || (iVar13 != 1)) goto LAB_0250a9b8;
LAB_0250aaa0:
      if (((((bVar11 != 0) && (iVar12 == 2)) ||
           ((bVar14 = *pbVar7, bVar14 != 0 && (*(int *)(param_1 + 0x3bb8) == 2)))) ||
          (((bVar15 = *pbVar8, bVar15 != 0 && (*(int *)(param_1 + 0x4fa8) == 2)) ||
           (((bVar17 = *pbVar5, bVar17 != 0 && (*(int *)(param_1 + 0x6398) == 2)) ||
            ((bVar18 = *pbVar4, bVar18 != 0 && (*(int *)(param_1 + 0x7788) == 2)))))))) ||
         (((*pbVar3 != 0 && (*(int *)(param_1 + 0x8b78) == 2)) ||
          ((*pbVar1 != 0 && (*(int *)(param_1 + 0x9f68) == 2)))))) {
        if ((bVar10 != 0) && (iVar13 == 3)) goto LAB_0250a964;
        goto LAB_0250ab54;
      }
      iVar13 = 2;
    }
  }
  else {
    iVar12 = *(int *)(param_1 + 0x27c8);
LAB_0250a9b8:
    if (((((bVar11 == 0) || (iVar12 != 1)) &&
         ((bVar14 = *pbVar7, bVar14 == 0 || (*(int *)(param_1 + 0x3bb8) != 1)))) &&
        (((bVar15 = *pbVar8, bVar15 == 0 || (*(int *)(param_1 + 0x4fa8) != 1)) &&
         ((bVar17 = *pbVar5, bVar17 == 0 || (*(int *)(param_1 + 0x6398) != 1)))))) &&
       ((((bVar18 = *pbVar4, bVar18 == 0 || (*(int *)(param_1 + 0x7788) != 1)) &&
         ((*pbVar3 == 0 || (*(int *)(param_1 + 0x8b78) != 1)))) &&
        ((*pbVar1 == 0 || (*(int *)(param_1 + 0x9f68) != 1)))))) {
      iVar13 = 1;
    }
    else {
      if ((bVar10 == 0) || (iVar13 != 2)) goto LAB_0250aaa0;
LAB_0250ab54:
      if (((((bVar11 != 0) && (iVar12 == 3)) ||
           ((bVar14 = *pbVar7, bVar14 != 0 && (*(int *)(param_1 + 0x3bb8) == 3)))) ||
          (((bVar15 = *pbVar8, bVar15 != 0 && (*(int *)(param_1 + 0x4fa8) == 3)) ||
           ((bVar17 = *pbVar5, bVar17 != 0 && (*(int *)(param_1 + 0x6398) == 3)))))) ||
         ((((bVar18 = *pbVar4, bVar18 != 0 && (*(int *)(param_1 + 0x7788) == 3)) ||
           ((*pbVar3 != 0 && (*(int *)(param_1 + 0x8b78) == 3)))) ||
          ((*pbVar1 != 0 && (*(int *)(param_1 + 0x9f68) == 3)))))) goto LAB_0250a964;
      iVar13 = 3;
    }
  }
  *(int *)(lVar27 + 0x13d8) = iVar13;
  local_88 = 0xffffffff;
  uStack_80 = 0xffffffff;
  uVar21 = 0;
  local_78 = 0xffffffff;
  uStack_70 = 0xffffffff;
  *(int *)(lVar27 + 0x13dc) = DAT_054ee3f8;
  local_b8 = 0;
  if ((bVar10 != 0) && (*(char *)(param_1 + 0x13d6) != '\0')) {
    uVar21 = 1;
    local_b8 = 1;
    local_88 = (ulong)*(uint *)(param_1 + 0x13dc) << 0x20;
  }
  if ((bVar11 != 0) && (*(char *)(param_1 + 0x27c6) != '\0')) {
    uVar9 = *(undefined4 *)(param_1 + 0x27cc);
    local_a8[uVar21] = (long)&local_88;
    local_b8 = (int)uVar21 + 1;
    uVar21 = (ulong)local_b8;
    local_88 = CONCAT44(uVar9,1);
  }
  if ((bVar14 != 0) && (*(char *)(param_1 + 0x3bb6) != '\0')) {
    uVar9 = *(undefined4 *)(param_1 + 0x3bbc);
    local_a8[uVar21] = (long)&local_88;
    local_b8 = (int)uVar21 + 1;
    uVar21 = (ulong)local_b8;
    local_88 = CONCAT44(uVar9,2);
  }
  uVar16 = (uint)uVar21;
  if ((bVar15 != 0) && (*(char *)(param_1 + 0x4fa6) != '\0')) {
    local_88 = CONCAT44(*(undefined4 *)(param_1 + 0x4fac),3);
    local_a8[uVar21] = (long)&local_88;
    uVar16 = local_b8 + 1;
    local_b8 = uVar16;
  }
  if ((bVar17 != 0) && (*(char *)(param_1 + 0x6396) != '\0')) {
    local_88 = CONCAT44(*(undefined4 *)(param_1 + 0x639c),4);
    if (uVar16 < 4) {
      local_a8[(int)uVar16] = (long)&local_88;
      bVar18 = *pbVar4;
      uVar16 = local_b8 + 1;
      local_b8 = uVar16;
    }
  }
  if ((bVar18 != 0) && (*(char *)(param_1 + 0x7786) != '\0')) {
    local_88 = CONCAT44(*(undefined4 *)(param_1 + 0x778c),5);
    if (uVar16 < 4) {
      local_a8[(int)uVar16] = (long)&local_88;
      uVar16 = local_b8 + 1;
      local_b8 = uVar16;
    }
  }
  if ((*pbVar3 != 0) && (*(char *)(param_1 + 0x8b76) != '\0')) {
    local_88 = CONCAT44(*(undefined4 *)(param_1 + 0x8b7c),6);
    if (uVar16 < 4) {
      local_a8[(int)uVar16] = (long)&local_88;
      uVar16 = local_b8 + 1;
      local_b8 = uVar16;
    }
  }
  if ((*pbVar1 != 0) && (*(char *)(param_1 + 0x9f66) != '\0')) {
    local_88 = CONCAT44(*(undefined4 *)(param_1 + 0x9f6c),7);
    if (uVar16 < 4) {
      local_a8[(int)uVar16] = (long)&local_88;
      uVar16 = local_b8 + 1;
      local_b8 = uVar16;
    }
  }
  if (1 < uVar16) {
    uVar19 = 0;
    uVar16 = uVar16 - 1;
    do {
      if ((int)uVar16 <= (int)uVar19) break;
      lVar27 = local_a8[uVar19];
      uVar21 = (ulong)uVar19;
      if ((uVar16 - uVar19 & 1) == 0) {
        lVar23 = lVar27;
        uVar20 = uVar21;
      }
      else {
        uVar20 = uVar21 + 1;
        lVar23 = local_a8[uVar21 + 1];
        if (*(uint *)(lVar23 + 4) < *(uint *)(lVar27 + 4)) {
          local_a8[uVar21 + 1] = lVar27;
          local_a8[uVar21] = lVar23;
          lVar23 = lVar27;
        }
      }
      uVar22 = (ulong)uVar16;
      uVar16 = uVar19;
      if (~uVar21 + uVar22 != 0) {
        plVar24 = local_a8 + uVar20 + 1;
        do {
          lVar27 = *plVar24;
          if (*(uint *)(lVar27 + 4) < *(uint *)(lVar23 + 4)) {
            plVar24[-1] = lVar27;
            *plVar24 = lVar23;
            uVar16 = (uint)uVar20;
          }
          else {
            lVar23 = lVar27;
          }
          lVar27 = plVar24[1];
          if (*(uint *)(lVar27 + 4) < *(uint *)(lVar23 + 4)) {
            uVar16 = (uint)uVar20 + 1;
            *plVar24 = lVar27;
            plVar24[1] = lVar23;
          }
          else {
            lVar23 = lVar27;
          }
          uVar20 = uVar20 + 2;
          plVar24 = plVar24 + 2;
        } while (uVar22 != uVar20);
      }
      if ((int)uVar16 <= (int)uVar19) break;
      lVar27 = local_a8[uVar16];
      uVar20 = (ulong)uVar16;
      uVar19 = uVar16;
      do {
        lVar23 = local_a8[uVar20 - 1];
        if (*(uint *)(lVar27 + 4) < *(uint *)(lVar23 + 4)) {
          uVar19 = (uint)uVar20;
          local_a8[uVar20 - 1] = lVar27;
          local_a8[uVar20] = lVar23;
        }
        else {
          lVar27 = lVar23;
        }
        uVar20 = uVar20 - 1;
      } while ((long)uVar21 < (long)uVar20);
    } while (uVar19 != uVar16);
    uVar16 = local_b8;
  }
  if (uVar16 != 0) {
    uVar19 = 0;
    do {
      if (*(uint *)local_a8[(int)uVar19] < 8) {
        *(uint *)(param_1 + (ulong)*(uint *)local_a8[(int)uVar19] * 0x13f0 + 0x13e0) = uVar19;
      }
      uVar19 = uVar19 + 1;
    } while (uVar16 != uVar19);
  }
  DAT_054ee3f8 = DAT_054ee3f8 + 1;
LAB_0250a964:
  FUN_02582400();
  *(int *)(param_1 + 0x9f80) = *(int *)(param_1 + 0x9f80) + 1;
  return lVar28;
}

