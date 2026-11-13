
/* WARNING: Removing unreachable block (ram,0x00edeba8) */
/* WARNING: Removing unreachable block (ram,0x00edec7c) */

void FUN_00ede4f8(long param_1,long param_2)

{
  long lVar1;
  byte bVar2;
  byte bVar3;
  uint uVar4;
  bool bVar5;
  undefined1 uVar6;
  int iVar7;
  undefined4 uVar8;
  ulong uVar9;
  uint *puVar10;
  ulong uVar11;
  undefined *puVar12;
  long lVar13;
  undefined8 *puVar14;
  float *pfVar15;
  uint uVar16;
  uint uVar17;
  int extraout_w13;
  int iVar18;
  int iVar19;
  byte *pbVar20;
  int iVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  uint local_9c;
  undefined8 local_98;
  float local_90;
  undefined8 local_88;
  undefined *local_80;
  undefined8 local_78;
  undefined *local_70;
  undefined8 local_68;
  
  if (*(int *)(param_2 + 0xc) == 0) {
    return;
  }
  local_90 = 0.0;
  local_98 = 0;
  uVar9 = FUN_02a8e598(param_2);
  if ((uVar9 & 1) == 0) {
    uVar9 = FUN_02a8e370(param_2);
    if ((uVar9 & 1) == 0) {
      uVar9 = FUN_02a8ec10(param_2);
      if ((uVar9 & 1) == 0) {
        return;
      }
      local_88 = (undefined *)((ulong)local_88._4_4_ << 0x20);
      uVar11 = FUN_02b677c0(&local_88,*(undefined4 *)(param_2 + 0xc));
      uVar9 = (ulong)local_88 & 0xffffffff;
      if ((uVar11 & 1) == 0) {
        uVar9 = 0;
      }
      uVar9 = FUN_02b60460(uVar9);
      if ((uVar9 & 1) != 0) {
        return;
      }
      FUN_02a8f1dc(param_2,&local_98);
      fVar22 = (float)DAT_04fa3e98 * 5.0 + 5.0;
      bVar5 = false;
      if (((float)DAT_04fa3e88 * 5.0 <= (float)local_98) &&
         (bVar5 = false, !NAN((float)local_98) && !NAN(fVar22))) {
        bVar5 = (float)local_98 < fVar22;
      }
      if (!bVar5) {
        return;
      }
      fVar22 = (float)DAT_04fa3e9c * 5.0 + 5.0;
      bVar5 = false;
      if (((float)DAT_04fa3e8c * 5.0 <= local_90) && (bVar5 = false, !NAN(local_90) && !NAN(fVar22))
         ) {
        bVar5 = local_90 < fVar22;
      }
      if (!bVar5) {
        return;
      }
      local_88 = (undefined *)((ulong)local_88 & 0xffffffff00000000);
      uVar9 = FUN_02b677c0(&local_88,*(undefined4 *)(param_2 + 0xc));
      uVar16 = (uint)local_88;
      if ((uVar9 & 1) == 0) {
        uVar16 = 0;
      }
      local_88 = (undefined *)CONCAT44(local_88._4_4_,uVar16);
      if (uVar16 < 6) {
                    /* WARNING: Could not recover jumptable at 0x00ede930. Too many branches */
                    /* WARNING: Treating indirect jump as call */
        (*(code *)((ulong)*(ushort *)(&DAT_0416a14c + (ulong)uVar16 * 2) * 4 + 0xede934))();
        return;
      }
      return;
    }
    FUN_02a8f1dc(param_2,&local_98);
    fVar24 = local_90;
    fVar22 = (float)local_98;
    fVar23 = (float)DAT_04fa3e98 * 5.0 + 5.0;
    bVar5 = false;
    if (((float)DAT_04fa3e88 * 5.0 <= (float)local_98) &&
       (bVar5 = false, !NAN((float)local_98) && !NAN(fVar23))) {
      bVar5 = (float)local_98 < fVar23;
    }
    if (!bVar5) {
      return;
    }
    fVar23 = (float)DAT_04fa3e9c * 5.0 + 5.0;
    bVar5 = false;
    if (((float)DAT_04fa3e8c * 5.0 <= local_90) && (bVar5 = false, !NAN(local_90) && !NAN(fVar23)))
    {
      bVar5 = local_90 < fVar23;
    }
    if (!bVar5) {
      return;
    }
    fVar23 = local_98._4_4_;
    local_88 = (undefined *)((ulong)local_88._4_4_ << 0x20);
    uVar9 = FUN_02b673a0(&local_88,*(undefined4 *)(param_2 + 0xc));
    iVar7 = (uint)local_88;
    if ((uVar9 & 1) == 0) {
      iVar7 = 0;
    }
    uVar8 = FUN_0266ca90();
    local_88 = (undefined *)CONCAT44(local_88._4_4_,uVar8);
    if (iVar7 == DAT_04c47e1c) {
      iVar21 = 4;
      iVar19 = -1;
    }
    else {
      iVar19 = FUN_0266ce40();
      iVar21 = 0xc;
    }
    uVar9 = FUN_02b5fa90(&local_9c,iVar7);
    if ((uVar9 & 1) == 0) {
      return;
    }
    uVar16 = local_9c & 0xffff;
    if (uVar16 == 0) {
      iVar7 = *(int *)PTR_DAT_04bb3238;
    }
    else {
      iVar7 = 0;
      do {
        uVar17 = (uint)*(ushort *)(*(long *)PTR_DAT_04bb5008 + 0x1fd0 + (long)iVar7 * 0x14 + 4);
        if (uVar17 != 0 && uVar17 == uVar16) {
          iVar18 = *(int *)(*(long *)PTR_DAT_04bb5008 + 0x1fd0 + (long)iVar7 * 0x14);
          break;
        }
        iVar7 = iVar7 + 1;
        iVar18 = extraout_w13;
      } while (iVar7 != 0x24);
      iVar7 = *(int *)PTR_DAT_04bb3238;
      if (uVar17 != 0 && uVar17 == uVar16) {
        iVar7 = iVar18;
      }
    }
    if (1 < (int)(uint)local_88) {
      iVar21 = iVar21 + (uint)local_88 + -1;
    }
    goto LAB_00ede6e0;
  }
  FUN_02a8f1dc(param_2,&local_98);
  fVar22 = (float)DAT_04fa3e98 * 5.0 + 5.0;
  bVar5 = false;
  if (((float)DAT_04fa3e88 * 5.0 <= (float)local_98) &&
     (bVar5 = false, !NAN((float)local_98) && !NAN(fVar22))) {
    bVar5 = (float)local_98 < fVar22;
  }
  if (bVar5) {
    fVar22 = (float)DAT_04fa3e9c * 5.0 + 5.0;
    bVar5 = false;
    if (((float)DAT_04fa3e8c * 5.0 <= local_90) && (bVar5 = false, !NAN(local_90) && !NAN(fVar22)))
    {
      bVar5 = local_90 < fVar22;
    }
    fVar22 = (float)local_98;
    if (!bVar5) goto LAB_00ede5bc;
  }
  else {
LAB_00ede5bc:
    local_78 = 0;
    local_88 = PTR_DAT_04bbc1a0 + 0x10;
    local_80 = PTR_DAT_04bb2010 + 0x10;
    local_68 = 0;
    local_70 = local_80;
    FUN_02a8f7b0(param_2,&local_88);
    fVar24 = (float)DAT_04fa3e98 * 5.0 + 5.0;
    fVar22 = ((float)(int)local_78 * 5.0 + (float)(int)local_68 * 5.0 + 5.0) * 0.5;
    bVar5 = false;
    if (((float)DAT_04fa3e88 * 5.0 <= fVar22) && (bVar5 = false, !NAN(fVar22) && !NAN(fVar24))) {
      bVar5 = fVar22 < fVar24;
    }
    if (!bVar5) {
      return;
    }
    fVar24 = (float)DAT_04fa3e9c * 5.0 + 5.0;
    fVar22 = ((float)local_78._4_4_ * 5.0 + (float)local_68._4_4_ * 5.0 + 5.0) * 0.5;
    bVar5 = false;
    if (((float)DAT_04fa3e8c * 5.0 <= fVar22) && (bVar5 = false, !NAN(fVar22) && !NAN(fVar24))) {
      bVar5 = fVar22 < fVar24;
    }
    if (!bVar5) {
      return;
    }
    fVar22 = (float)local_98;
  }
  fVar24 = local_90;
  fVar23 = local_98._4_4_;
  local_88 = (undefined *)((ulong)local_88 & 0xffffffff00000000);
  uVar9 = FUN_02b67620(&local_88,*(undefined4 *)(param_2 + 0xc));
  iVar7 = (uint)local_88;
  if ((uVar9 & 1) == 0) {
    iVar7 = 0;
  }
  if (iVar7 == DAT_04c47e18) {
    iVar7 = FUN_02b58250();
    iVar21 = 2;
    iVar19 = -1;
  }
  else {
    local_88 = (undefined *)CONCAT44(local_88._4_4_,iVar7);
    lVar13 = *(long *)PTR_DAT_04bb46b0;
    if (lVar13 == 0) {
      return;
    }
    puVar14 = *(undefined8 **)(lVar13 + 0x10);
    if ((*(byte *)(lVar13 + 0x453) & 1) == 0) {
      lVar13 = (**(code **)(*(long *)*puVar14 + 0x38))();
      if (lVar13 == 0) {
        return;
      }
      lVar13 = lVar13 + 0x70;
    }
    else {
      if (puVar14 == (undefined8 *)0x0) {
        return;
      }
      if ((long *)puVar14[0x26] == (long *)0x0) {
        return;
      }
      lVar13 = (**(code **)(*(long *)puVar14[0x26] + 0x38))();
      if (lVar13 == 0) {
        return;
      }
    }
    if (9 < (uint)local_88) {
      return;
    }
    lVar1 = lVar13 + 0x1962d8 + ((ulong)local_88 & 0xffffffff) * 0x10d8;
    if (9 < (uint)local_88) {
      lVar1 = lVar13 + 0x1962d8;
    }
    if ((*(long **)(lVar1 + 0x28) == (long *)0x0) ||
       (puVar14 = (undefined8 *)**(long **)(lVar1 + 0x28), puVar14 == (undefined8 *)0x0)) {
      uVar9 = 0;
    }
    else {
      uVar9 = (**(code **)*puVar14)();
      uVar9 = uVar9 & 0xffffffff;
    }
    local_88 = (undefined *)((ulong)local_88 & 0xffffffff00000000);
    iVar19 = (int)*(char *)(*(long *)(lVar1 + 0x10) + *(long *)(lVar1 + 8) + 0x1c4);
    lVar13 = FUN_0265c2a0(iVar19);
    if (lVar13 == 0) {
      pbVar20 = PTR_DAT_04bb9cf0;
    }
    else if ((*(long **)(lVar13 + 0x28) == (long *)0x0) ||
            (puVar14 = (undefined8 *)**(long **)(lVar13 + 0x28), puVar14 == (undefined8 *)0x0)) {
      pbVar20 = (byte *)(*(long *)(lVar13 + 0x10) + *(long *)(lVar13 + 8));
    }
    else {
      uVar11 = (**(code **)*puVar14)();
      pbVar20 = (byte *)(*(long *)(lVar13 + 0x10) + *(long *)(lVar13 + 8));
      if ((((uVar11 & 1) != 0) && (*(long *)(lVar13 + 0x28) != 0)) &&
         (puVar14 = *(undefined8 **)(*(long *)(lVar13 + 0x28) + 8), puVar14 != (undefined8 *)0x0)) {
        (**(code **)*puVar14)();
      }
    }
    uVar11 = (ulong)*pbVar20;
    bVar2 = pbVar20[1];
    FUN_020fd7d8(pbVar20);
    if (((0x22 < uVar11) || (bVar3 = PTR_DAT_04bc27f0[uVar11], bVar3 < bVar2)) ||
       ((*(uint *)(PTR_DAT_04bc2a20 + uVar11 * 4) >> (ulong)(bVar2 & 0x1f) & 1) == 0)) {
      local_88 = (undefined *)CONCAT44(local_88._4_4_,1);
      iVar19 = (int)*(char *)(*(long *)(lVar1 + 0x10) + *(long *)(lVar1 + 8) + 0x1c5);
      lVar13 = FUN_0265c2a0(iVar19);
      if (lVar13 == 0) {
        pbVar20 = PTR_DAT_04bb9cf0;
      }
      else if ((*(long **)(lVar13 + 0x28) == (long *)0x0) ||
              (puVar14 = (undefined8 *)**(long **)(lVar13 + 0x28), puVar14 == (undefined8 *)0x0)) {
        pbVar20 = (byte *)(*(long *)(lVar13 + 0x10) + *(long *)(lVar13 + 8));
      }
      else {
        uVar11 = (**(code **)*puVar14)();
        pbVar20 = (byte *)(*(long *)(lVar13 + 0x10) + *(long *)(lVar13 + 8));
        if ((((uVar11 & 1) != 0) && (*(long *)(lVar13 + 0x28) != 0)) &&
           (puVar14 = *(undefined8 **)(*(long *)(lVar13 + 0x28) + 8), puVar14 != (undefined8 *)0x0))
        {
          (**(code **)*puVar14)();
        }
      }
      uVar11 = (ulong)*pbVar20;
      bVar2 = pbVar20[1];
      FUN_020fd7d8(pbVar20);
      if (0x22 < uVar11) goto LAB_00eded58;
      bVar3 = PTR_DAT_04bc27f0[uVar11];
    }
    if (((uint)bVar3 < (uint)bVar2) ||
       ((*(uint *)(PTR_DAT_04bc2a20 + uVar11 * 4) >> (ulong)(bVar2 & 0x1f) & 1) == 0)) {
LAB_00eded58:
      if ((uVar9 & 1) == 0) {
        return;
      }
      if (*(long *)(lVar1 + 0x28) == 0) {
        return;
      }
      puVar14 = *(undefined8 **)(*(long *)(lVar1 + 0x28) + 8);
      if (puVar14 == (undefined8 *)0x0) {
        return;
      }
      (**(code **)*puVar14)();
      return;
    }
    if (*(int *)(*(long *)(lVar1 + 0x10) + *(long *)(lVar1 + 8) + 4) == 1) {
      iVar7 = FUN_02b58250(iVar7);
      iVar21 = 0x22;
    }
    else {
      puVar12 = (undefined *)FUN_0265c2a0(iVar19);
      if (puVar12 == (undefined *)0x0) {
        iVar21 = 0;
        iVar19 = -1;
        iVar7 = 0;
      }
      else {
        local_78 = CONCAT71(local_78._1_7_,1);
        local_80 = puVar12;
        if (*(long **)(puVar12 + 0x28) == (long *)0x0) {
          uVar6 = 0;
        }
        else {
          puVar14 = (undefined8 *)**(long **)(puVar12 + 0x28);
          uVar6 = 0;
          if (puVar14 != (undefined8 *)0x0) {
            uVar6 = (**(code **)*puVar14)();
          }
        }
        local_78 = CONCAT62(local_78._2_6_,CONCAT11(uVar6,(undefined1)local_78)) &
                   0xffffffffffff01ff;
        local_88 = PTR_DAT_04bb67a0 + 0x10;
        local_9c = (uint)*(char *)(*(long *)(puVar12 + 0x10) + *(long *)(puVar12 + 8) + 0x1267a);
        if (local_9c == 1) {
          iVar7 = 0;
          iVar21 = 0;
          iVar19 = -1;
        }
        else {
          iVar7 = FUN_02b58250(iVar7);
          iVar21 = 3;
        }
        FUN_02640184(&local_88);
      }
    }
    if ((((uVar9 & 1) != 0) && (*(long *)(lVar1 + 0x28) != 0)) &&
       (puVar14 = *(undefined8 **)(*(long *)(lVar1 + 0x28) + 8), puVar14 != (undefined8 *)0x0)) {
      (**(code **)*puVar14)();
    }
  }
LAB_00ede6e0:
  if ((1 < iVar21) && (iVar7 != 0)) {
    if ((fVar22 == 0.0) && ((fVar23 == 0.0 && (fVar24 == 0.0)))) {
      DAT_04fa3ea0 = DAT_04fa3ea0 + 1;
    }
    else {
      pfVar15 = *(float **)(param_1 + 0x10);
      fVar22 = SQRT((pfVar15[2] - fVar24) * (pfVar15[2] - fVar24) +
                    (*pfVar15 - fVar22) * (*pfVar15 - fVar22));
      if (pfVar15[3] < fVar22) {
        return;
      }
      if (fVar22 == pfVar15[3]) {
        puVar10 = (uint *)nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04bb39d8);
        uVar16 = *puVar10 ^ *puVar10 << 0xb;
        uVar17 = puVar10[3];
        *puVar10 = puVar10[1];
        puVar10[1] = puVar10[2];
        uVar16 = uVar16 >> 8 ^ uVar17 >> 0x13 ^ uVar16 ^ uVar17;
        puVar10[2] = uVar17;
        puVar10[3] = uVar16;
        if ((uVar16 & 1) != 0) {
          return;
        }
        pfVar15 = *(float **)(param_1 + 0x10);
      }
      pfVar15[3] = fVar22;
      if (*(char *)(*(long *)(param_1 + 0x10) + 0x10) == '\0') {
        DAT_04fa3ea0 = DAT_04fa3ea0 + 1;
        *(undefined1 *)(*(long *)(param_1 + 0x10) + 0x10) = 1;
      }
    }
    puVar10 = (uint *)nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04bb39d8);
    uVar4 = DAT_04fa3ea0;
    uVar16 = *puVar10 ^ *puVar10 << 0xb;
    uVar17 = puVar10[3];
    *puVar10 = puVar10[1];
    puVar10[1] = puVar10[2];
    uVar16 = uVar16 >> 8 ^ uVar17 >> 0x13 ^ uVar16 ^ uVar17;
    puVar10[2] = uVar17;
    puVar10[3] = uVar16;
    if (((ulong)uVar4 * (ulong)uVar16 & 0xffffffff00000000) == 0) {
      DAT_04c47e20 = iVar21;
      DAT_04c47e24 = iVar19;
      DAT_04fa3ea4 = iVar7;
    }
  }
  return;
}

