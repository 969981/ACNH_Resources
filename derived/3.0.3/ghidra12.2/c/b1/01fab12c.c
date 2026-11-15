
uint FUN_01fab12c(undefined8 param_1,float *param_2,undefined4 *param_3,undefined8 param_4,
                 long param_5,float *param_6,undefined1 *param_7)

{
  int *piVar1;
  undefined1 *puVar2;
  int *piVar3;
  undefined *puVar4;
  undefined *puVar5;
  bool bVar6;
  bool bVar7;
  bool bVar8;
  uint uVar9;
  uint uVar10;
  uint uVar11;
  uint *puVar12;
  long lVar13;
  long lVar14;
  int iVar15;
  float fVar16;
  int iVar17;
  float fVar18;
  int iVar19;
  float fVar20;
  int iVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  undefined1 auStack_198 [8];
  int local_190 [2];
  undefined1 auStack_188 [8];
  int local_180 [2];
  undefined8 local_178;
  float *pfStack_170;
  undefined4 *local_168;
  undefined8 uStack_160;
  undefined **local_158;
  undefined *local_150;
  undefined8 uStack_148;
  undefined *local_140;
  undefined1 *puStack_138;
  undefined *local_130;
  undefined8 uStack_128;
  undefined *local_120;
  undefined8 uStack_118;
  undefined *local_110;
  undefined4 local_108;
  undefined4 uStack_104;
  long local_100;
  undefined *local_f8;
  undefined *puStack_f0;
  int local_e8;
  int iStack_e4;
  undefined *local_e0;
  int local_d8;
  int iStack_d4;
  undefined *local_d0;
  undefined *puStack_c8;
  undefined8 local_c0;
  undefined *local_b8;
  undefined8 local_b0;
  undefined1 local_98 [4];
  undefined1 local_94 [4];
  
  puVar5 = PTR_DAT_04bb43c0;
  lVar13 = *(long *)PTR_DAT_04bb43c0;
  uVar9 = FUN_0277d6c4(param_3);
  puVar4 = PTR_DAT_04bb2010;
  lVar14 = *(long *)puVar5;
  if (lVar14 != 0) {
    lVar13 = *(long *)(lVar13 + 0x57e58);
    uVar9 = (uVar9 & 0xffff) - (uint)*(ushort *)(lVar13 + 0x1f8);
    if ((uVar9 < *(uint *)(lVar13 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar13 + 0x1e0) + (long)(int)uVar9 * 8) != 0)) {
      local_c0 = 0;
      local_f8 = PTR_DAT_04bbc1a0 + 0x10;
      puStack_f0 = PTR_DAT_04bb2010 + 0x10;
      bVar6 = *param_2 != 0.0;
      bVar7 = param_2[1] != 0.0;
      local_b0 = 0;
      bVar8 = param_2[2] != 0.0;
      fVar16 = 1.0;
      if ((bVar7 || bVar6) || bVar8) {
        fVar16 = *param_2;
      }
      fVar18 = 1.0;
      if ((bVar7 || bVar6) || bVar8) {
        fVar18 = param_2[2];
      }
      iVar19 = *(int *)(param_5 + 0x20);
      iVar21 = *(int *)(param_5 + 0x24);
      fVar20 = 0.0;
      if ((bVar7 || bVar6) || bVar8) {
        fVar20 = param_2[1];
      }
      iVar15 = *(int *)(param_5 + 0x10);
      iVar17 = *(int *)(param_5 + 0x14);
      local_100 = 0;
      local_110 = PTR_DAT_04bc0510 + 0x10;
      local_108 = *param_3;
      uStack_104 = param_3[1];
      local_e0 = puStack_f0;
      local_d0 = local_f8;
      puStack_c8 = puStack_f0;
      local_b8 = puStack_f0;
      uVar9 = FUN_0277d6c4(&local_108);
      if (*(long *)puVar5 != 0) {
        lVar13 = *(long *)(lVar14 + 0x57e58);
        uVar9 = (uVar9 & 0xffff) - (uint)*(ushort *)(lVar13 + 0x1f8);
        if ((uVar9 < *(uint *)(lVar13 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar13 + 0x1e0) + (long)(int)uVar9 * 8) != 0)) {
          lVar13 = *(long *)PTR_DAT_04bc0428;
          uVar9 = FUN_0277d6c4(param_3);
          uVar9 = (uVar9 & 0xffff) - (uint)*(ushort *)(lVar13 + 0x1f8);
          if (uVar9 < *(uint *)(lVar13 + 0x1d8)) {
            lVar13 = *(long *)(*(long *)(lVar13 + 0x1e0) + (long)(int)uVar9 * 8);
            if (lVar13 != 0) {
              local_100 = lVar13;
            }
          }
        }
      }
      fVar23 = ((float)iVar15 * 5.0 + (float)iVar19 * 5.0 + 5.0) * 0.5;
      fVar24 = ((float)iVar17 * 5.0 + (float)iVar21 * 5.0 + 5.0) * 0.5;
      uVar9 = FUN_01ae98d0(&local_110);
      if ((uVar9 | 2) == 2) {
        fVar16 = fVar16 - fVar23;
        fVar20 = SQRT(fVar20 * fVar20 + fVar16 * fVar16);
        fVar18 = 0.0;
        if (0.0 < fVar20) {
          fVar18 = 5.0 / fVar20;
          fVar20 = 0.0;
          fVar16 = fVar16 * fVar18;
          goto LAB_01fab3a8;
        }
      }
      else {
        fVar18 = fVar18 - fVar24;
        fVar20 = SQRT(fVar20 * fVar20 + fVar18 * fVar18);
        fVar16 = 0.0;
        if (0.0 < fVar20) {
          fVar20 = 5.0 / fVar20;
          fVar16 = fVar20 * 0.0;
LAB_01fab3a8:
          fVar18 = fVar18 * fVar20;
        }
      }
      local_180[0] = 0;
      local_180[1] = 0;
      fVar20 = fVar23 + fVar16 + -2.5;
      fVar22 = fVar24 + fVar18 + -2.5;
      fVar16 = (fVar23 - fVar16) + -2.5;
      fVar18 = (fVar24 - fVar18) + -2.5;
      local_190[0] = 0;
      local_190[1] = 0;
      local_94[0] = 0;
      local_98[0] = 0;
      local_c0._0_4_ = (int)((float)(int)fVar20 / 5.0) - (uint)(fVar20 < 0.0);
      local_c0._4_4_ = (int)((float)(int)fVar22 / 5.0) - (uint)(fVar22 < 0.0);
      local_b0._0_4_ = (int)local_c0 + 1;
      local_b0._4_4_ = local_c0._4_4_ + 1;
      local_e8 = (int)((float)(int)fVar16 / 5.0) - (uint)(fVar16 < 0.0);
      iStack_e4 = (int)((float)(int)fVar18 / 5.0) - (uint)(fVar18 < 0.0);
      local_d8 = local_e8 + 1;
      iStack_d4 = iStack_e4 + 1;
      local_150 = puVar4 + 0x10;
      uStack_148 = 0x300000001;
      puStack_138 = &DAT_100000003;
      uStack_128 = 0xffffffff00000001;
      uStack_118 = 0x1ffffffff;
      local_158 = &local_150;
      local_178 = param_1;
      pfStack_170 = param_2;
      local_168 = param_3;
      uStack_160 = param_4;
      local_140 = local_150;
      local_130 = local_150;
      local_120 = local_150;
      uVar10 = FUN_01fc5b40(&local_178,auStack_188,local_94,&local_d0);
      uVar11 = FUN_01fc5b40(&local_178,auStack_198,local_98,&local_f8);
      uVar9 = uVar10 | uVar11;
      if ((uVar9 & 1) != 0) {
        if ((uVar10 & uVar11 & 1) == 0) {
          if ((uVar10 & 1) == 0) {
            if (param_6 != (float *)0x0) {
              *param_6 = (float)local_190[0] * 5.0 + 5.0;
              param_6[2] = (float)local_190[1] * 5.0 + 5.0;
            }
            local_94[0] = local_98[0];
          }
          else if (param_6 != (float *)0x0) {
            *param_6 = (float)local_180[0] * 5.0 + 5.0;
            param_6[2] = (float)local_180[1] * 5.0 + 5.0;
          }
        }
        else {
          fVar16 = *param_2;
          fVar18 = param_2[2];
          fVar22 = ((float)local_c0._4_4_ * 5.0 + (float)local_b0._4_4_ * 5.0 + 5.0) * 0.5;
          fVar24 = ((float)(int)local_c0 * 5.0 + (float)(int)local_b0 * 5.0 + 5.0) * 0.5;
          fVar20 = ((float)local_e8 * 5.0 + (float)local_d8 * 5.0 + 5.0) * 0.5;
          fVar23 = ((float)iStack_e4 * 5.0 + (float)iStack_d4 * 5.0 + 5.0) * 0.5;
          if (fVar16 == 0.0) {
            if (param_2[1] == 0.0) {
              if (fVar18 == 0.0) {
                puVar12 = (uint *)nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04bb39d8);
                uVar10 = *puVar12 ^ *puVar12 << 0xb;
                uVar11 = puVar12[3];
                *puVar12 = puVar12[1];
                puVar12[1] = puVar12[2];
                uVar10 = uVar10 >> 8 ^ uVar11 >> 0x13 ^ uVar10 ^ uVar11;
                puVar12[2] = uVar11;
                puVar12[3] = uVar10;
                fVar16 = fVar20;
                fVar18 = fVar23;
                if ((uVar10 & 2) != 0) {
                  fVar16 = fVar24;
                  fVar18 = fVar22;
                }
              }
            }
          }
          fVar24 = fVar24 - fVar16;
          fVar22 = fVar22 - fVar18;
          fVar20 = fVar20 - fVar16;
          fVar23 = fVar23 - fVar18;
          fVar18 = SQRT(fVar22 * fVar22 + fVar24 * fVar24);
          fVar16 = SQRT(fVar23 * fVar23 + fVar20 * fVar20);
          if (param_6 != (float *)0x0) {
            piVar1 = local_180;
            if (fVar16 <= fVar18) {
              piVar1 = local_190;
            }
            piVar3 = local_180;
            if (fVar16 <= fVar18) {
              piVar3 = local_190;
            }
            iVar19 = piVar3[1];
            *param_6 = (float)*piVar1 * 5.0 + 5.0;
            param_6[2] = (float)iVar19 * 5.0 + 5.0;
          }
          puVar2 = local_94;
          if (fVar16 <= fVar18) {
            puVar2 = local_98;
          }
          local_94[0] = *puVar2;
        }
        *param_7 = local_94[0];
      }
      goto LAB_01fab350;
    }
  }
  uVar9 = 0;
LAB_01fab350:
  return uVar9 & 1;
}

