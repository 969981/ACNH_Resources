
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8 FUN_0054b880(long param_1,undefined1 (*param_2) [16])

{
  int iVar1;
  uint uVar2;
  float *pfVar3;
  undefined1 auVar4 [16];
  undefined1 auVar5 [16];
  undefined *puVar6;
  long lVar7;
  uint uVar8;
  char cVar9;
  ulong uVar10;
  long lVar11;
  int *piVar13;
  int *piVar12;
  uint uVar14;
  long lVar15;
  undefined8 uVar16;
  long lVar17;
  undefined1 auVar18 [16];
  undefined1 auVar19 [16];
  undefined1 auVar20 [16];
  undefined1 auVar21 [16];
  undefined1 auVar22 [16];
  float fVar24;
  undefined1 auVar23 [16];
  undefined8 uVar25;
  undefined1 auVar26 [16];
  undefined1 auVar27 [16];
  undefined1 auVar28 [16];
  float fVar29;
  float fVar30;
  undefined8 uVar31;
  long local_88;
  undefined8 local_80;
  undefined4 local_78;
  long local_70;
  undefined8 local_68;
  undefined4 local_60;
  int *local_58;
  undefined8 local_50;
  int local_48;
  
  uVar16 = DAT_0413f500;
  auVar21._0_8_ = CONCAT44(-(float)((ulong)DAT_0413f500 >> 0x20),-(float)DAT_0413f500);
  auVar21._8_4_ = -(float)_DAT_0413f508;
  auVar21._12_4_ = -(float)((ulong)_DAT_0413f508 >> 0x20);
  *(undefined8 *)(*param_2 + 8) = _DAT_0413f508;
  *(undefined8 *)*param_2 = uVar16;
  *(long *)(param_2[1] + 8) = auVar21._8_8_;
  *(undefined8 *)param_2[1] = auVar21._0_8_;
  cVar9 = FUN_00514650(param_1,param_2,0);
  if (cVar9 == '\0') {
    if (*(int *)(param_1 + 0x38) == 0) {
LAB_0054ba64:
      local_58 = (int *)0x0;
      local_50 = -0x8000000000000000;
      uVar10 = FUN_00515e00(*(undefined8 *)(param_1 + 0x18),*(undefined4 *)(param_1 + 0x134),4,
                            &local_58);
      lVar7 = local_50;
      if ((uVar10 & 1) == 0) {
        auVar19._8_8_ = _UNK_0413f318;
        auVar19._0_8_ = DAT_0413f310;
        auVar28 = NEON_fmin(*param_2,auVar19,4);
        auVar26._12_4_ = (int)((ulong)*(undefined8 *)(param_2[1] + 8) >> 0x20);
        auVar26._0_12_ = *(undefined1 (*) [12])param_2[1];
        auVar21 = NEON_fmax(auVar26,auVar19,4);
        *(long *)(*param_2 + 8) = auVar28._8_8_;
        *(long *)*param_2 = auVar28._0_8_;
        *(long *)(param_2[1] + 8) = auVar21._8_8_;
        *(long *)param_2[1] = auVar21._0_8_;
        uVar16 = 0;
      }
      else {
        if ((int)local_50 == 0) {
          auVar20 = ZEXT816(0);
        }
        else {
          lVar11 = *(long *)(param_1 + 0x20);
          lVar17 = (long)(int)local_50 * 4 + -4;
          if (((uint)lVar17 >> 2 & 1) == 0) {
            piVar12 = local_58 + 1;
            lVar15 = *(long *)(lVar11 + (long)*(int *)(*(long *)(lVar11 + (long)*local_58 * 8) +
                                                      0x110) * 8);
            auVar28._0_4_ = *(float *)(lVar15 + 0xc0) + 0.0;
            auVar28._4_4_ = *(float *)(lVar15 + 0xc4) + 0.0;
            auVar28._8_4_ = *(float *)(lVar15 + 200) + 0.0;
            auVar28._12_4_ = *(float *)(lVar15 + 0xcc) + 0.0;
          }
          else {
            auVar28 = ZEXT816(0);
            piVar12 = local_58;
          }
          if (lVar17 != 0) {
            do {
              piVar13 = piVar12 + 2;
              lVar17 = *(long *)(lVar11 + (long)*(int *)(*(long *)(lVar11 + (long)*piVar12 * 8) +
                                                        0x110) * 8);
              fVar29 = auVar28._4_4_;
              fVar30 = auVar28._8_4_;
              fVar24 = auVar28._12_4_;
              lVar15 = *(long *)(lVar11 + (long)*(int *)(*(long *)(lVar11 + (long)piVar12[1] * 8) +
                                                        0x110) * 8);
              auVar28._0_4_ = auVar28._0_4_ + *(float *)(lVar17 + 0xc0) + *(float *)(lVar15 + 0xc0);
              auVar28._4_4_ = fVar29 + *(float *)(lVar17 + 0xc4) + *(float *)(lVar15 + 0xc4);
              auVar28._8_4_ = fVar30 + *(float *)(lVar17 + 200) + *(float *)(lVar15 + 200);
              auVar28._12_4_ = fVar24 + *(float *)(lVar17 + 0xcc) + *(float *)(lVar15 + 0xcc);
              piVar12 = piVar13;
            } while (piVar13 != local_58 + (int)local_50);
          }
          auVar20 = auVar28;
          if (1 < (int)local_50) {
            uVar25 = NEON_scvtf(CONCAT44((int)local_50,(int)local_50),4);
            uVar16 = NEON_frecpe(uVar25,4);
            uVar31 = NEON_frecps(uVar25,uVar16,4);
            fVar29 = (float)uVar16 * (float)uVar31;
            fVar30 = (float)((ulong)uVar16 >> 0x20) * (float)((ulong)uVar31 >> 0x20);
            uVar16 = NEON_frecps(uVar25,CONCAT44(fVar30,fVar29),4);
            fVar29 = fVar29 * (float)uVar16;
            fVar30 = fVar30 * (float)((ulong)uVar16 >> 0x20);
            auVar20._0_4_ = auVar28._0_4_ * fVar29;
            auVar20._4_4_ = auVar28._4_4_ * fVar30;
            auVar20._8_4_ = auVar28._8_4_ * fVar29;
            auVar20._12_4_ = auVar28._12_4_ * fVar30;
          }
        }
        auVar28 = NEON_fmin(*param_2,auVar20,4);
        auVar5._12_4_ = (int)((ulong)*(undefined8 *)(param_2[1] + 8) >> 0x20);
        auVar5._0_12_ = *(undefined1 (*) [12])param_2[1];
        auVar21 = NEON_fmax(auVar5,auVar20,4);
        uVar16 = 1;
        *(long *)(*param_2 + 8) = auVar28._8_8_;
        *(long *)*param_2 = auVar28._0_8_;
        *(long *)(param_2[1] + 8) = auVar21._8_8_;
        *(long *)param_2[1] = auVar21._0_8_;
      }
      fVar29 = *(float *)(param_1 + 100);
      *(float *)(param_2[1] + 8) = auVar21._8_4_ + fVar29;
      *(float *)(param_2[1] + 0xc) = auVar21._12_4_ + fVar29;
      *(float *)param_2[1] = auVar21._0_4_ + fVar29;
      *(float *)(param_2[1] + 4) = auVar21._4_4_ + fVar29;
      auVar23._0_8_ = CONCAT44(auVar28._4_4_ - fVar29,auVar28._0_4_ - fVar29);
      auVar23._8_4_ = auVar28._8_4_ - fVar29;
      auVar23._12_4_ = auVar28._12_4_ - fVar29;
      *(long *)(*param_2 + 8) = auVar23._8_8_;
      *(undefined8 *)*param_2 = auVar23._0_8_;
      uVar14 = local_50._4_4_;
      local_50 = (ulong)local_50._4_4_ << 0x20;
      if (lVar7 < 0) {
        return uVar16;
      }
      if (local_58 == (int *)0x0) {
        return uVar16;
      }
      FUN_00421f90(PTR_DAT_048607b8,local_58,4,uVar14 & 0x3fffffff);
      return uVar16;
    }
    lVar17 = **(long **)(param_1 + 0x30);
    iVar1 = *(int *)(lVar17 + 0x20);
    local_58 = (int *)0x0;
    local_50 = -0x8000000000000000;
    local_48 = 0;
    FUN_005161d0(&local_58,0,iVar1,0);
    local_70 = 0;
    local_68 = -0x8000000000000000;
    local_60 = 0;
    FUN_005161d0(&local_70,0,iVar1,0);
    local_88 = 0;
    local_80 = -0x8000000000000000;
    local_78 = 0;
    FUN_005161d0(&local_88,0,iVar1,0);
    FUN_0054b370(param_1,0,&local_58,&local_70,&local_88);
    lVar7 = local_80;
    puVar6 = PTR_DAT_048607b8;
    uVar14 = (-2 << (ulong)(local_48 - 1U & 0x1f) | 1U) ^ 0xfffffffe;
    lVar11 = (long)(int)local_50;
    do {
      uVar8 = local_80._4_4_;
      if (lVar11 < 1) {
        local_80 = (ulong)local_80._4_4_ << 0x20;
        if ((-1 < lVar7) && (local_88 != 0)) {
          FUN_00421f90(PTR_DAT_048607b8,local_88,4,uVar8 & 0x3fffffff);
        }
        lVar7 = local_68;
        uVar14 = local_68._4_4_;
        local_68 = (ulong)local_68._4_4_ << 0x20;
        if ((-1 < lVar7) && (local_70 != 0)) {
          FUN_00421f90(puVar6,local_70,4,uVar14 & 0x3fffffff);
        }
        lVar7 = local_50;
        uVar14 = local_50._4_4_;
        local_50 = (ulong)local_50._4_4_ << 0x20;
        if ((-1 < lVar7) && (local_58 != (int *)0x0)) {
          FUN_00421f90(puVar6,local_58,4,uVar14 & 0x3fffffff);
        }
        goto LAB_0054ba64;
      }
      uVar2 = local_58[lVar11 + -1] & uVar14;
      uVar14 = 0xffffffff;
      lVar11 = lVar11 + -1;
    } while (uVar2 == 0);
    auVar18 = ZEXT816(0);
    if (0 < iVar1) {
      uVar10 = 0;
      lVar11 = 0x30;
      do {
        if ((local_58[uVar10 >> 5] & 1 << (ulong)((uint)uVar10 & 0x1f)) != 0) {
          pfVar3 = (float *)(*(long *)(lVar17 + 0x18) + lVar11);
          auVar18._0_4_ = *pfVar3 + 0.0;
          auVar18._4_4_ = pfVar3[1] + 0.0;
          auVar18._8_4_ = pfVar3[2] + 0.0;
          auVar18._12_4_ = pfVar3[3] + 0.0;
          break;
        }
        uVar14 = (uint)uVar10 + 1;
        uVar10 = (ulong)uVar14;
        lVar11 = lVar11 + 0x40;
      } while ((int)uVar14 < iVar1);
    }
    auVar26 = NEON_fmin(*param_2,auVar18,4);
    auVar4._12_4_ = (int)((ulong)*(undefined8 *)(param_2[1] + 8) >> 0x20);
    auVar4._0_12_ = *(undefined1 (*) [12])param_2[1];
    auVar21 = NEON_fmax(auVar4,auVar18,4);
    *(long *)(*param_2 + 8) = auVar26._8_8_;
    *(long *)*param_2 = auVar26._0_8_;
    *(long *)(param_2[1] + 8) = auVar21._8_8_;
    *(long *)param_2[1] = auVar21._0_8_;
    fVar29 = *(float *)(param_1 + 100);
    auVar22._0_8_ = CONCAT44(auVar21._4_4_ + fVar29,auVar21._0_4_ + fVar29);
    auVar22._8_4_ = auVar21._8_4_ + fVar29;
    auVar22._12_4_ = auVar21._12_4_ + fVar29;
    auVar27._0_8_ = CONCAT44(auVar26._4_4_ - fVar29,auVar26._0_4_ - fVar29);
    auVar27._8_4_ = auVar26._8_4_ - fVar29;
    auVar27._12_4_ = auVar26._12_4_ - fVar29;
    *(long *)(*param_2 + 8) = auVar27._8_8_;
    *(undefined8 *)*param_2 = auVar27._0_8_;
    *(long *)(param_2[1] + 8) = auVar22._8_8_;
    *(undefined8 *)param_2[1] = auVar22._0_8_;
    uVar16 = *(undefined8 *)PTR_PTR_04bd4d20;
    local_80 = (ulong)local_80._4_4_ << 0x20;
    if ((-1 < lVar7) && (local_88 != 0)) {
      FUN_00421f90(uVar16,local_88,4,uVar8 & 0x3fffffff);
    }
    lVar7 = local_68;
    uVar14 = local_68._4_4_;
    local_68 = (ulong)local_68._4_4_ << 0x20;
    if ((-1 < lVar7) && (local_70 != 0)) {
      FUN_00421f90(uVar16,local_70,4,uVar14 & 0x3fffffff);
    }
    lVar7 = local_50;
    uVar14 = local_50._4_4_;
    local_50 = (ulong)local_50._4_4_ << 0x20;
    if ((-1 < lVar7) && (local_58 != (int *)0x0)) {
      FUN_00421f90(uVar16,local_58,4,uVar14 & 0x3fffffff);
    }
  }
  return 1;
}

