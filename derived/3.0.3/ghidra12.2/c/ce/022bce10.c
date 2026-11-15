
uint FUN_022bce10(long param_1,float *param_2)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined4 *puVar3;
  undefined4 uVar4;
  byte bVar5;
  byte bVar6;
  short sVar7;
  short sVar8;
  bool bVar9;
  bool bVar10;
  int iVar11;
  uint uVar12;
  ulong uVar13;
  float *pfVar14;
  byte bVar15;
  long lVar16;
  byte *pbVar17;
  uint uVar18;
  byte *pbVar19;
  byte bVar20;
  undefined8 *puVar21;
  byte *pbVar22;
  float fVar23;
  float fVar24;
  undefined8 local_1c0;
  char *pcStack_1b8;
  undefined *local_1b0;
  undefined4 local_1a8;
  undefined4 uStack_1a4;
  byte local_1a0 [4];
  byte local_19c [4];
  byte local_198 [4];
  byte local_194 [4];
  byte local_190 [4];
  byte local_18c [4];
  byte local_188 [4];
  byte local_184 [4];
  undefined *local_180;
  undefined4 local_178;
  undefined4 uStack_174;
  float local_170;
  uint uStack_16c;
  undefined *local_168;
  undefined *puStack_160;
  undefined4 local_158;
  undefined4 uStack_154;
  undefined *local_150;
  undefined4 local_148;
  undefined4 uStack_144;
  undefined2 local_140;
  undefined4 local_13e;
  undefined1 local_13a;
  undefined8 local_138;
  undefined1 local_130;
  undefined8 local_12c;
  undefined2 local_124;
  byte local_120 [16];
  undefined4 local_110;
  undefined4 uStack_10c;
  undefined4 local_100;
  undefined4 uStack_fc;
  uint local_f4;
  undefined8 local_f0;
  short local_e8;
  short local_e6;
  undefined4 local_e4;
  undefined2 local_e0;
  undefined1 local_de;
  byte local_dd;
  byte local_dc;
  undefined1 local_db;
  char local_da;
  byte local_d9;
  byte local_d8 [2];
  undefined1 local_d6;
  undefined4 local_d4;
  undefined1 auStack_d0 [8];
  float local_c8;
  uint local_c4;
  undefined8 local_c0;
  float local_b8;
  uint uStack_b4;
  undefined *local_b0;
  undefined8 local_a8;
  undefined *puStack_a0;
  undefined4 local_98;
  undefined4 local_94;
  byte local_90;
  undefined *local_88;
  uint local_80;
  uint uStack_7c;
  
  puVar2 = PTR_DAT_04bb2010;
  fVar23 = *param_2;
  fVar24 = param_2[2];
  local_98 = 0;
  pbVar22 = (byte *)(param_1 + 0x5c);
  bVar20 = *(byte *)(param_2 + 3);
  bVar5 = *(byte *)((long)param_2 + 0xd);
  puVar1 = PTR_DAT_04bb2010 + 0x10;
  *pbVar22 = *pbVar22 & 0xfc;
  local_80 = (int)((float)(int)fVar23 / 5.0) - (uint)(fVar23 < 0.0) & 0xfffffffe;
  uStack_7c = (int)((float)(int)fVar24 / 5.0) - (uint)(fVar24 < 0.0) & 0xfffffffe;
  lVar16 = *(long *)PTR_DAT_04bb2720;
  local_88 = puVar1;
  if (lVar16 == 0) {
    puVar21 = &DAT_055c04a0;
  }
  else {
    puVar21 = &DAT_055c04a0;
    if (*(long *)(lVar16 + 0x330) != 0) {
      puVar21 = (undefined8 *)
                (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                          (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar16 + 0x338));
      iVar11 = FUN_006bd550(*puVar21,0);
      puVar21 = (undefined8 *)PTR_DAT_04bc3a80;
      if (iVar11 != 0x758f7eaf) {
        puVar21 = &DAT_055c04a0;
      }
    }
  }
  local_94 = *(undefined4 *)(puVar21 + 7);
  local_90 = FUN_017baf44();
  local_90 = local_90 & 1;
  puStack_a0 = PTR_DAT_04bb6268 + 0x10;
  local_a8 = 0;
  local_b0 = puVar1;
  FUN_01a5033c(&local_b8,&puStack_a0,0,&local_88,&local_b0);
  pbVar19 = (byte *)(param_1 + 0x10);
  local_120[0] = *pbVar19;
  if (7 < local_120[0]) {
    local_120[0] = 0xff;
  }
  local_170 = (float)(int)local_a8 * 5.0 + 5.0;
  local_168 = (undefined *)CONCAT44(local_168._4_4_,(float)local_a8._4_4_ * 5.0 + 5.0);
  lVar16 = FUN_0251b3b0(local_120,0);
  if ((lVar16 == 0) || (*(long *)PTR_DAT_04bb27c8 == 0)) goto LAB_022bd004;
  fVar23 = (float)FUN_0093a950(*(long *)PTR_DAT_04bb27c8 + 0x28,&local_170,0);
  uVar12 = 0;
  fVar23 = fVar23 - *(float *)(lVar16 + 4);
  if ((5.0 < fVar23) || (fVar23 < -5.0)) goto LAB_022bd008;
  uVar13 = FUN_022a9384(param_1,&local_b0);
  if ((uVar13 & 1) != 0) goto LAB_022bd004;
  lVar16 = *(long *)PTR_DAT_04bbbc68;
  uVar12 = 0;
  if (lVar16 == 0) goto LAB_022bd008;
  if (((((*(long *)(lVar16 + 0xb0) != 0) && (*(long *)(*(long *)(lVar16 + 0xb0) + 8) != 0)) &&
       (*(long *)(lVar16 + 0x488) != 0)) &&
      ((*(long *)(*(long *)(lVar16 + 0x488) + 8) != 0 && (*(long *)(lVar16 + 0x2b0) != 0)))) &&
     (*(long *)(*(long *)(lVar16 + 0x2b0) + 8) != 0)) {
    uVar12 = FUN_0277d6c4(&local_b8);
    uVar12 = (uVar12 & 0xffff) - (uint)*(ushort *)(lVar16 + 0x1f8);
    if ((uVar12 < *(uint *)(lVar16 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar16 + 0x1e0) + (long)(int)uVar12 * 8) != 0)) {
      FUN_0124c030(auStack_d0,&local_b8);
      local_f0 = CONCAT44(uStack_b4,local_b8);
      local_d4 = 0;
      local_dd = *pbVar19;
      local_db = 0;
      local_e0 = *(undefined2 *)PTR_DAT_04bb6298;
      sVar7 = (short)local_a8;
      sVar8 = (short)((ulong)local_a8 >> 0x20);
      if (7 < local_dd) {
        local_dd = 0xff;
      }
      local_e8 = sVar7;
      local_e6 = sVar8;
      lVar16 = FUN_0251b3b0(pbVar19,0);
      if (lVar16 == 0) {
        local_e4 = 0;
      }
      else {
        local_e4 = *(undefined4 *)(lVar16 + 4);
      }
      local_d9 = 0;
      local_d8[0] = 0;
      uVar12 = (uint)bVar5 << 2 | (uint)bVar20 << 1;
      local_da = -(*(int *)(PTR_DAT_04bc3a80 + 0x38) == -0x17df00c3);
      bVar6 = (byte)uVar12;
      bVar15 = *(char *)((long)param_2 + 0xe) << 5;
      local_dc = bVar6;
      if ((local_c4 & 0x180000) == 0) {
        local_d9 = bVar15;
        uVar13 = FUN_0123b5b0(local_c0);
        local_d9 = 0x10;
        if ((uVar13 & 1) == 0) {
          local_d9 = 0;
        }
      }
      local_d9 = bVar15 | local_d9;
      uVar18 = DAT_0514cb58 ^ DAT_0514cb58 << 0xb;
      local_f4 = uVar18 >> 8 ^ DAT_0514cb64 >> 0x13 ^ uVar18 ^ DAT_0514cb64;
      if (local_f4 == 0) {
        local_f4 = DAT_0514cb5c ^ DAT_0514cb5c << 0xb;
        local_f4 = local_f4 ^ local_f4 >> 8;
        if (local_f4 == 0) {
          local_f4 = DAT_0514cb60 ^ DAT_0514cb60 << 0xb;
          local_f4 = local_f4 ^ local_f4 >> 8;
          if (local_f4 == 0) {
            local_f4 = DAT_0514cb64 ^ DAT_0514cb64 << 0xb;
            local_f4 = local_f4 ^ local_f4 >> 8;
            if (local_f4 == 0) {
              do {
                    /* WARNING: Do nothing block with infinite loop */
              } while( true );
            }
            uVar18 = 0;
            DAT_0514cb60 = 0;
            DAT_0514cb5c = 0;
          }
          else {
            uVar18 = 0;
            DAT_0514cb60 = 0;
            DAT_0514cb5c = DAT_0514cb64;
          }
        }
        else {
          uVar18 = 0;
          DAT_0514cb5c = DAT_0514cb60;
          DAT_0514cb60 = DAT_0514cb64;
        }
      }
      else {
        uVar18 = DAT_0514cb64;
      }
      local_d6 = 0;
      DAT_0514cb58 = DAT_0514cb5c;
      DAT_0514cb5c = DAT_0514cb60;
      DAT_0514cb60 = uVar18;
      DAT_0514cb64 = local_f4;
      uVar13 = FUN_0123d890(local_c0,4);
      if ((uVar13 & 1) == 0) {
        iVar11 = FUN_0123db50(&local_c8,local_c0);
        if ((iVar11 == 0x2e) &&
           (pfVar14 = (float *)FUN_0251b3b0(pbVar19,0), pfVar14 != (float *)0x0)) {
          iVar11 = FUN_006f0400(((float)(int)sVar7 * 5.0 + 5.0) - *pfVar14,
                                ((float)(int)sVar8 * 5.0 + 5.0) - pfVar14[2]);
          local_dc = bVar6 | (byte)((iVar11 + 0x10000000U >> 0x1d) << 5);
          if (bVar20 == 0) {
            if (*(byte *)(**(long **)PTR_DAT_04bb27d0 + 0x476) < 2) {
              local_18c[0] = *pbVar19;
              if (7 < local_18c[0]) {
                local_18c[0] = 0xff;
              }
              uVar13 = FUN_01251760(auStack_d0,local_18c,&local_b0,1);
              if ((uVar13 & 1) != 0) goto LAB_022bd3d4;
              local_190[0] = *pbVar19;
              if (7 < local_190[0]) {
                local_190[0] = 0xff;
              }
              uVar13 = FUN_01251468(auStack_d0,local_190);
              bVar20 = *pbVar19;
              if (7 < bVar20) {
                bVar20 = 0xff;
              }
              if ((uVar13 & 1) != 0) {
                local_194[0] = bVar20;
                uVar13 = FUN_01251510(auStack_d0,local_194,1);
                if ((uVar13 & 1) == 0) {
                  local_198[0] = *pbVar19;
                  if (7 < local_198[0]) {
                    local_198[0] = 0xff;
                  }
                  uVar13 = FUN_01251510(auStack_d0,local_198,0);
                  if ((uVar13 & 1) == 0) {
                    uVar13 = FUN_022bc790(&local_88);
                    if ((uVar13 & 1) != 0) {
                      local_19c[0] = *pbVar19;
                      if (7 < local_19c[0]) {
                        local_19c[0] = 0xff;
                      }
                      FUN_01251910(auStack_d0,local_19c,0);
                      bVar9 = true;
                      local_b8 = local_c8;
                      uStack_b4 = local_c4;
                      local_f0 = CONCAT44(local_c4,local_c8);
                      FUN_011e2ef0(pbVar19,&local_88,1);
                      local_de = 0xb;
                      goto LAB_022bd3e4;
                    }
                  }
                  else {
                    uVar13 = FUN_011e32f0(&local_88);
                    if ((uVar13 & 1) == 0) goto LAB_022bd7a4;
                  }
                }
                goto LAB_022bd3d4;
              }
              local_1a0[0] = bVar20;
              uVar13 = FUN_01251510(auStack_d0,local_1a0,0);
              if ((uVar13 & 1) == 0) {
                uVar13 = FUN_022bc790(&local_88);
                if ((uVar13 & 1) != 0) {
                  if (bVar5 != 0) {
                    *pbVar22 = *pbVar22 | 1;
                  }
                  iVar11 = FUN_0123db50(&local_c8,local_c0);
                  if (iVar11 == 0x2e) {
                    local_c4 = local_c4 | 0x200;
                  }
                  local_b8 = local_c8;
                  local_f0 = CONCAT44(local_c4,local_c8);
                  local_de = 0xb;
                  uStack_b4 = local_c4;
                  FUN_011e2ef0(pbVar19,&local_88,0);
                  bVar9 = true;
                  goto LAB_022bd3e4;
                }
                goto LAB_022bd3d4;
              }
              uVar13 = FUN_011e32f0(&local_88);
              if ((uVar13 & 1) != 0) goto LAB_022bd3d4;
              if (bVar5 != 0) {
                *pbVar22 = *pbVar22 | 1;
              }
LAB_022bd7a4:
              local_de = 0xb;
            }
            else {
LAB_022bd3d4:
              local_de = 10;
            }
            bVar9 = false;
          }
          else {
            local_184[0] = *pbVar19;
            if (7 < local_184[0]) {
              local_184[0] = 0xff;
            }
            uVar13 = FUN_01251510(auStack_d0,local_184,0);
            local_de = 0xc;
            if ((uVar13 & 1) == 0) {
              local_de = 0xd;
            }
            local_188[0] = *pbVar19;
            if (7 < local_188[0]) {
              local_188[0] = 0xff;
            }
            FUN_01252688(&local_170,auStack_d0,local_188,0);
            bVar9 = false;
            local_b8 = local_170;
            uStack_b4 = uStack_16c;
            local_f0 = CONCAT44(uStack_16c,local_170);
          }
LAB_022bd3e4:
          FUN_01a50900(local_120,&local_b8,&local_b0);
          local_13e = 0;
          puVar2 = puVar2 + 0x10;
          local_138 = 0xffffffffffffffff;
          local_13a = 0;
          local_140 = 0xff00;
          local_168 = PTR_DAT_04bbc1a0 + 0x10;
          local_130 = 0;
          local_12c = 0x41200000;
          local_124 = 0xff00;
          local_170 = (float)CONCAT22(local_170._2_2_,*(undefined2 *)PTR_DAT_04bb6298);
          local_158 = local_110;
          uStack_154 = uStack_10c;
          local_148 = local_100;
          uStack_144 = uStack_fc;
          puStack_160 = puVar2;
          local_150 = puVar2;
          uVar12 = FUN_022ab010(param_1,&local_170,&local_f4);
          if ((uVar12 & 1) != 0) {
            local_1a8 = (int)local_a8;
            uStack_1a4 = local_a8._4_4_;
            local_1b0 = puVar2;
            FUN_022ab224(param_1,local_de,&local_b8,&local_1b0,0);
            FUN_0252d8f0(&local_1c0,pbVar19);
            puVar1 = PTR_DAT_04bc2ea0;
            *(undefined4 *)(param_1 + 0x1c) = (undefined4)local_1c0;
            *(undefined4 *)(param_1 + 0x20) = local_1c0._4_4_;
            bVar20 = *(byte *)(param_1 + 0x10);
            bVar10 = 7 < bVar20;
            if (bVar10) {
              bVar20 = 0xff;
            }
            puVar3 = (undefined4 *)(puVar1 + ((long)(char)bVar20 & 0xffffffffU) * 8);
            if (bVar10) {
              puVar3 = (undefined4 *)puVar1;
            }
            uVar4 = *(undefined4 *)(PTR_DAT_04bb37e0 + 4);
            *puVar3 = *(undefined4 *)PTR_DAT_04bb37e0;
            puVar3[1] = uVar4;
            if (bVar5 != 0) {
              *pbVar22 = *pbVar22 | 1;
            }
            if ((bVar9) && (uVar13 = FUN_0122449c(pbVar19,0), (uVar13 & 1) != 0)) {
              local_1c0 = PTR_DAT_04bb2020 + 0x10;
              pcStack_1b8 = "StrikeRock";
              FUN_00ad4d80(*(undefined8 *)PTR_DAT_04bb64a0,&local_1c0);
            }
          }
          goto LAB_022bd008;
        }
      }
      else {
        pfVar14 = (float *)FUN_0251b3b0(pbVar19,0);
        if (pfVar14 != (float *)0x0) {
          uVar12 = uVar12 | (uint)((float)(int)sVar7 * 5.0 + 5.0 <= *pfVar14) << 3;
        }
        bVar20 = (byte)uVar12;
        local_dc = bVar20;
        if (bVar5 == 0) {
          uVar13 = FUN_01250da8(auStack_d0,2);
          if (((uVar13 & 1) != 0) && (uVar13 = FUN_01957514(), (uVar13 & 1) != 0)) {
            if ((DAT_0547a508 & 1) != 0) {
              pbVar17 = local_d8;
              bVar15 = 0x10;
              goto LAB_022bd258;
            }
            uVar13 = FUN_022b8940(param_1,&local_b0,uVar12 >> 3 & 1);
            if ((uVar13 & 1) != 0) {
              bVar15 = 2;
              goto LAB_022bd254;
            }
          }
        }
        else {
          bVar15 = 1;
LAB_022bd254:
          pbVar17 = pbVar22;
LAB_022bd258:
          *pbVar17 = *pbVar17 | bVar15;
        }
        pfVar14 = (float *)FUN_0251b3b0(pbVar19,0);
        if (pfVar14 != (float *)0x0) {
          iVar11 = FUN_006f0400(((float)(int)sVar7 * 5.0 + 5.0) - *pfVar14,
                                ((float)(int)sVar8 * 5.0 + 5.0) - pfVar14[2]);
          local_dc = (byte)((uint)(iVar11 + 0x10000000) >> 0x18) & 0xe0 | bVar20 & 0x1f;
          local_de = 9;
          FUN_01a50900(local_120,&local_b8,&local_b0);
          puStack_160 = puVar2 + 0x10;
          local_13e = 0;
          local_13a = 0;
          local_168 = PTR_DAT_04bbc1a0 + 0x10;
          local_130 = 0;
          local_138 = 0xffffffffffffffff;
          local_140 = 0xff00;
          local_12c = 0x41200000;
          local_124 = 0xff00;
          local_170 = (float)CONCAT22(local_170._2_2_,*(undefined2 *)PTR_DAT_04bb6298);
          local_158 = local_110;
          uStack_154 = uStack_10c;
          local_148 = local_100;
          uStack_144 = uStack_fc;
          lVar16 = **(long **)PTR_DAT_04bb27d0;
          if (1 < *(byte *)(lVar16 + 0x476)) {
            bVar20 = *(byte *)(lVar16 + 0x473);
            if ((long)(char)bVar20 != 0xffffffffffffffff) {
              pbVar17 = (byte *)(lVar16 + 0x48) + ((long)(char)bVar20 & 0xffffffffU) * 0x80;
              if (7 < bVar20) {
                pbVar17 = (byte *)(lVar16 + 0x48);
              }
              if (((*pbVar17 >> 3 & 1) != 0) && (*(byte *)(lVar16 + 0x472) != bVar20))
              goto LAB_022bd670;
            }
            local_140 = 0xff01;
          }
LAB_022bd670:
          local_150 = puStack_160;
          uVar12 = FUN_022ab010(param_1,&local_170,&local_f4);
          if ((uVar12 & 1) != 0) {
            if ((*pbVar22 >> 1 & 1) != 0) {
              DAT_0547a508 = 1;
            }
            local_178 = (int)local_a8;
            uStack_174 = local_a8._4_4_;
            local_180 = puVar2 + 0x10;
            FUN_022ab224(param_1,9,&local_b8,&local_180,0);
            FUN_0252d8f0(&local_1c0,pbVar19);
            *(undefined4 *)(param_1 + 0x1c) = (undefined4)local_1c0;
            *(undefined4 *)(param_1 + 0x20) = local_1c0._4_4_;
            *(float *)(param_1 + 0x24) = local_b8;
            *(uint *)(param_1 + 0x28) = uStack_b4;
          }
          if (bVar5 == 0) {
            *pbVar22 = *pbVar22 & 0xfe;
          }
          goto LAB_022bd008;
        }
      }
    }
  }
LAB_022bd004:
  uVar12 = 0;
LAB_022bd008:
  return uVar12 & 1;
}

