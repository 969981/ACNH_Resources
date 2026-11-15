
/* WARNING: Removing unreachable block (ram,0x022b0474) */
/* WARNING: Removing unreachable block (ram,0x022b0484) */
/* WARNING: Removing unreachable block (ram,0x022b0490) */
/* WARNING: Removing unreachable block (ram,0x022afcc8) */
/* WARNING: Removing unreachable block (ram,0x022afcd8) */
/* WARNING: Removing unreachable block (ram,0x022b05f4) */
/* WARNING: Removing unreachable block (ram,0x022b0604) */
/* WARNING: Removing unreachable block (ram,0x022b0610) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

undefined8
FUN_022af980(long param_1,long param_2,float *param_3,int *param_4,undefined4 *param_5,
            undefined4 *param_6,uint param_7)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  uint *puVar4;
  char cVar5;
  short sVar6;
  int iVar7;
  bool bVar8;
  undefined *puVar9;
  undefined *puVar10;
  int iVar11;
  bool bVar12;
  char cVar13;
  char cVar14;
  undefined1 uVar15;
  int iVar16;
  uint uVar17;
  int iVar18;
  int iVar19;
  int iVar20;
  undefined8 *puVar21;
  ulong uVar22;
  undefined8 uVar23;
  byte bVar24;
  uint uVar25;
  ulong uVar26;
  long lVar27;
  undefined8 *puVar28;
  uint uVar29;
  uint uVar30;
  uint uVar31;
  uint uVar32;
  byte bVar33;
  uint uVar34;
  int iVar35;
  int iVar36;
  float fVar37;
  float fVar38;
  undefined4 uVar39;
  float fVar40;
  float fVar41;
  float fVar42;
  float fVar43;
  float fVar44;
  float fVar45;
  float local_288;
  int local_1f4;
  undefined *local_1f0;
  undefined *local_1e8;
  int local_1e0;
  undefined *local_1d8;
  int local_1d0;
  int iStack_1cc;
  undefined *local_1c8;
  undefined8 local_1c0;
  undefined8 local_1b8;
  undefined8 local_1b0;
  undefined8 local_1a8;
  int local_1a0;
  int iStack_19c;
  undefined2 local_198;
  undefined4 local_196;
  undefined1 local_192;
  undefined8 local_190;
  undefined1 local_188;
  undefined4 local_184;
  undefined1 uStack_17d;
  undefined1 local_17c;
  undefined1 local_17b;
  undefined4 local_178;
  byte local_174 [4];
  undefined *local_170;
  int local_168;
  int local_164;
  byte local_160 [4];
  undefined4 local_15c;
  byte local_158 [4];
  byte local_154 [4];
  undefined *local_150;
  uint local_148;
  uint uStack_144;
  undefined4 local_140;
  undefined *local_13c;
  short local_134;
  short local_132;
  undefined2 local_12c;
  char local_12a;
  byte local_129;
  byte local_127;
  undefined1 local_122;
  undefined4 local_120;
  int local_11c;
  undefined *local_118;
  undefined4 local_110;
  undefined4 local_10c;
  byte local_108;
  undefined *local_100;
  uint local_f8;
  uint local_f4;
  undefined *local_f0;
  undefined *puStack_e8;
  uint local_e0;
  uint uStack_dc;
  undefined *local_d8;
  uint local_d0;
  uint uStack_cc;
  int local_c8;
  undefined4 local_c4;
  undefined *local_c0;
  int local_b8;
  int iStack_b4;
  undefined8 local_b0;
  
  if (param_5 != (undefined4 *)0x0) {
    *param_5 = 3;
  }
  puVar28 = (undefined8 *)PTR_DAT_04bc3a80;
  sVar6 = *(short *)PTR_DAT_04bb6298;
  if (sVar6 == -1) {
    return 0;
  }
  puVar4 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar6 * 8);
  if (0xff < (uint)(int)sVar6) {
    puVar4 = (uint *)PTR_DAT_04bc39f8;
  }
  if ((*puVar4 >> 1 & 1) == 0) {
    return 0;
  }
  local_d0 = (int)((float)(int)*param_3 / 5.0) - (uint)(*param_3 < 0.0);
  uVar34 = local_d0 & 0xfffffffe;
  local_d0 = local_d0 | 1;
  local_f0 = PTR_DAT_04bbc1a0 + 0x10;
  uVar17 = (int)((float)(int)param_3[2] / 5.0) - (uint)(param_3[2] < 0.0);
  uVar29 = uVar17 | 1;
  uVar17 = uVar17 & 0xfffffffe;
  local_100 = PTR_DAT_04bb2010 + 0x10;
  uVar25 = *param_4 + 0x10000000U >> 0x1d;
  local_1c8 = (undefined *)CONCAT44(local_1c8._4_4_,uVar25);
  uVar25 = uVar25 - 1;
  if (uVar25 < 7) {
    uVar26 = -(ulong)(uVar25 >> 0x1f) & 0xfffffffc00000000 | (ulong)uVar25 << 2;
    local_1f0 = &DAT_0417a3fc + *(int *)(&DAT_0417a3fc + uVar26);
    local_1e0 = *(int *)(&DAT_0417a434 + uVar26);
    local_1e8 = &DAT_0417a418 + *(int *)(&DAT_0417a418 + uVar26);
    local_1f4 = *(int *)(&DAT_0417a450 + uVar26);
  }
  else {
    local_1e0 = 1;
    local_1f4 = 1;
    local_1f0 = &DAT_0417a1ee;
    local_1e8 = &DAT_0417a1f5;
  }
  local_110 = 0;
  lVar27 = *(long *)PTR_DAT_04bb2720;
  puVar21 = &DAT_055c04a0;
  local_f8 = uVar34;
  local_f4 = uVar17;
  puStack_e8 = local_100;
  local_e0 = uVar34;
  uStack_dc = uVar17;
  local_d8 = local_100;
  uStack_cc = uVar29;
  if ((lVar27 != 0) && (*(long *)(lVar27 + 0x330) != 0)) {
    puVar21 = (undefined8 *)
              (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                        (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar27 + 0x338));
    iVar16 = FUN_006bd550(*puVar21,0);
    if (iVar16 != 0x758f7eaf) {
      puVar28 = &DAT_055c04a0;
    }
    puVar21 = puVar28;
  }
  local_10c = *(undefined4 *)(puVar21 + 7);
  fVar42 = (float)(int)uVar17;
  local_108 = FUN_017baf44();
  puVar9 = PTR_DAT_04bb6268;
  local_108 = local_108 & 1;
  local_118 = PTR_DAT_04bb6268 + 0x10;
  if (uVar29 + 1 == uVar17) {
    bVar12 = false;
  }
  else {
    puVar1 = PTR_DAT_04bb2010 + 0x10;
    uVar25 = uVar34;
    do {
      local_1c0 = (undefined *)CONCAT44(uVar17,uVar25);
      local_1c8 = puVar1;
      uVar26 = FUN_01a4f798(&local_118,0,&local_1c8);
      if ((uVar26 & 1) == 0) {
        bVar12 = true;
        break;
      }
      FUN_01a50240(&local_140,&local_118,0,&local_1c8);
      bVar12 = (short)local_140 != -2;
      if (bVar12) break;
      if ((int)uVar25 < (int)local_d0) {
        uVar25 = uVar25 + 1;
      }
      else {
        uVar17 = uVar17 + 1;
        uVar25 = local_e0;
      }
    } while ((uVar34 != uVar25) || (uVar29 + 1 != uVar17));
  }
  fVar37 = (float)(int)uVar34 * 0.5;
  fVar40 = fVar42 * 0.5;
  uVar17 = 0;
  if (fVar37 != (float)(int)fVar37) {
    uVar17 = (uint)(fVar37 < 0.0);
  }
  uVar25 = 0;
  if (fVar40 != (float)(int)fVar40) {
    uVar25 = (uint)(fVar40 < 0.0);
  }
  local_11c = 0;
  if (*(long *)(*(long *)PTR_DAT_04bb27a8 + 0x1f8) == 0) goto LAB_022afd88;
  lVar27 = *(long *)(*(long *)(*(long *)PTR_DAT_04bb27a8 + 0x1f8) + 0xb0);
  local_11c = 0;
  if (lVar27 == 0) goto LAB_022afd88;
  uVar29 = ((int)fVar37 - uVar17) - *(int *)(lVar27 + 0x28);
  uVar30 = *(uint *)(lVar27 + 0x18);
  uVar32 = ((int)fVar40 - uVar25) - *(int *)(lVar27 + 0x2c);
  if ((uVar29 < uVar30 && uVar32 <= *(uint *)(lVar27 + 0x1c)) &&
      (uVar30 <= uVar29 || *(uint *)(lVar27 + 0x1c) != uVar32)) {
    uVar29 = uVar29 + uVar30 * uVar32;
LAB_022afd6c:
    if (*(uint *)(lVar27 + 0x30) <= uVar29) {
      uVar29 = 0;
    }
    puVar28 = (undefined8 *)(*(long *)(lVar27 + 0x38) + (long)(int)uVar29 * 0x68);
  }
  else {
    if (*(char *)(lVar27 + 0x88) != '\0') {
      uVar29 = ((int)fVar37 - uVar17) - *(int *)(lVar27 + 0x98);
      uVar25 = ((int)fVar40 - uVar25) - *(int *)(lVar27 + 0x9c);
      uVar17 = *(uint *)(lVar27 + 0xa0);
      if ((uVar29 < uVar17 && uVar25 <= *(uint *)(lVar27 + 0xa4)) &&
          (uVar17 <= uVar29 || *(uint *)(lVar27 + 0xa4) != uVar25)) {
        uVar29 = uVar29 + uVar17 * uVar25 + *(int *)(lVar27 + 0x8c);
        goto LAB_022afd6c;
      }
    }
    puVar28 = &DAT_051a50f0;
  }
  local_11c = (int)*(char *)(puVar28 + 2);
LAB_022afd88:
  local_1c8 = PTR_DAT_04bb2018 + 0x10;
  local_1c0 = (undefined *)
              CONCAT44((int)((float)(int)param_3[2] / 10.0) - (uint)(param_3[2] < 0.0),
                       (int)((float)(int)*param_3 / 10.0) - (uint)(*param_3 < 0.0));
  uVar17 = FUN_01318310(&local_1c8);
  puVar28 = (undefined8 *)(param_2 + 8);
  local_120 = 0;
  local_140 = 0;
  local_122 = 0;
  local_12a = '\0';
  iVar16 = FUN_0123db50(puVar28,*(undefined8 *)(param_2 + 0x10));
  if (iVar16 == 0x21) {
    local_12a = '\x05';
  }
  iVar16 = FUN_0123db50(puVar28,*(undefined8 *)(param_2 + 0x10));
  if (iVar16 == 0x22) {
    local_12a = '\x06';
  }
  else if (local_12a == '\0') {
    return 0;
  }
  uVar26 = 0;
  puVar1 = PTR_DAT_04bb2010 + 0x10;
  fVar37 = (float)(int)uVar34 * 5.0 + 5.0;
  fVar42 = fVar42 * 5.0 + 5.0;
  puVar2 = PTR_DAT_04bb2018 + 0x10;
  local_127 = local_127 & 0xf8;
  local_129 = *(byte *)(param_1 + 0x10);
  local_12c = *(undefined2 *)PTR_DAT_04bb6298;
  if (7 < local_129) {
    local_129 = 0xff;
  }
  puVar3 = PTR_DAT_04bbc1a0 + 0x10;
  do {
    uVar32 = local_f4;
    uVar30 = local_f8;
    local_b8 = 0;
    local_c0 = (undefined *)0x0;
    cVar14 = local_1f0[uVar26];
    cVar5 = local_1e8[uVar26];
    uVar25 = local_f8 + local_1e0 * cVar14;
    fVar45 = (float)(int)uVar25;
    uVar29 = local_f4 + local_1f4 * cVar5;
    fVar43 = (float)(int)uVar29;
    fVar40 = fVar45 * 0.5;
    fVar38 = fVar43 * 0.5;
    uVar34 = 0;
    if (fVar40 != (float)(int)fVar40) {
      uVar34 = (uint)(fVar40 < 0.0);
    }
    iVar16 = (int)fVar40 - uVar34;
    uVar34 = 0;
    if (fVar38 != (float)(int)fVar38) {
      uVar34 = (uint)(fVar38 < 0.0);
    }
    iVar20 = (int)fVar38 - uVar34;
    local_1c0 = (undefined *)CONCAT44(iVar20,iVar16);
    local_b0 = CONCAT44(local_b0._4_4_,1);
    local_c0 = (undefined *)0x2;
    local_b8 = 0;
    local_1c8 = puVar2;
    local_150 = puVar1;
    local_148 = uVar25;
    uStack_144 = uVar29;
    uVar22 = FUN_00977f70(&local_1c8,&local_c0);
    if ((uVar22 & 1) != 0) goto LAB_022afef0;
    if (!bVar12 && (uVar26 == 0 && ((uVar17 ^ 0xffffffff) & 1) == 0)) {
      fVar40 = (float)FUN_01317db0(param_3);
      uVar34 = *param_4 + 0x10000000U >> 0x1d;
      fVar38 = param_3[1];
      local_1c8._0_4_ = uVar34;
      iVar20 = FUN_022af654(&local_100,fVar40 - fVar38 <= 10.0);
      local_1c8 = (undefined *)CONCAT44(local_1c8._4_4_,iVar20);
      iVar20 = uVar34 - iVar20;
      iVar16 = iVar20 + 8;
      if (-4 < iVar20) {
        iVar16 = iVar20;
      }
      iVar7 = iVar20 + -8;
      if (iVar20 < 4) {
        iVar7 = iVar16;
      }
      if (0xfffffffc < iVar7 - 2U) {
        local_134 = (short)uVar30;
        local_132 = (short)uVar32;
        cVar14 = FUN_022af654(&local_100,1);
        iVar16 = FUN_0123db50(puVar28,*(undefined8 *)(param_2 + 0x10));
        if ((iVar16 == 0x21) ||
           (iVar16 = FUN_0123db50(puVar28,*(undefined8 *)(param_2 + 0x10)), iVar16 == 0x22)) {
          *(byte *)(param_2 + 10) = *(byte *)(param_2 + 10) & 0xe3 | cVar14 << 2;
        }
        iVar16 = FUN_022af654(&local_150,1);
        iVar20 = FUN_0123db50(puVar28,*(undefined8 *)(param_2 + 0x10));
        fVar40 = 0.0;
        if (iVar20 == 0x21) {
          FUN_0124fa64(0,param_2,&local_150);
          fVar40 = fVar38;
        }
        iVar20 = FUN_0123db50(puVar28,*(undefined8 *)(param_2 + 0x10));
        if (iVar20 == 0x22) {
          FUN_0124fa64(0,param_2,&local_150);
          fVar40 = fVar38;
        }
        local_154[0] = *(byte *)(param_1 + 0x10);
        if (7 < local_154[0]) {
          local_154[0] = 0xff;
        }
        lVar27 = FUN_0251b3b0(local_154,0);
        if (lVar27 != 0) {
          fVar38 = *(float *)(lVar27 + 4);
          lVar27 = FUN_0251bdc4(local_154,0);
          if (lVar27 != 0) {
            uVar34 = *(uint *)(lVar27 + 4);
            uVar30 = (uint)(long)((float)iVar16 * 45.0 * 11930465.0);
            if (uVar34 == uVar30) {
              uVar34 = 0;
            }
            else {
              uVar32 = uVar30 - uVar34;
              if (uVar30 <= uVar34) {
                uVar32 = uVar34 - uVar30;
              }
              uVar34 = -uVar32;
              if (uVar32 < 0x80000001) {
                uVar34 = uVar32;
              }
            }
            fVar38 = fVar40 - fVar38;
            if (60.0 <= (float)uVar34 * 8.381903e-08) {
              if (2.0 <= fVar38) goto LAB_022afef0;
              fVar41 = -2.0;
LAB_022b04f4:
              if (fVar38 <= fVar41) goto LAB_022afef0;
              goto LAB_022b0ad4;
            }
            if (fVar38 < -13.0) {
              fVar41 = -17.0;
              goto LAB_022b04f4;
            }
          }
        }
      }
      goto LAB_022afef0;
    }
    if (uVar26 == 0) goto LAB_022afef0;
    fVar41 = fVar43 * 5.0;
    fVar40 = fVar45 * 5.0 + 5.0;
    fVar38 = fVar41 + 5.0;
    local_1c8 = PTR_DAT_04bb2018 + 0x10;
    iVar7 = (int)((float)(int)fVar40 / 10.0) - (uint)(fVar40 < 0.0);
    iVar36 = (int)((float)(int)fVar38 / 10.0) - (uint)(fVar38 < 0.0);
    local_1c0 = (undefined *)CONCAT44(iVar36,iVar7);
    uVar22 = FUN_01318310(&local_1c8);
    if ((uVar22 & 1) != 0) {
      uVar34 = uVar29;
      uVar30 = uVar25;
      do {
        local_1c0 = (undefined *)CONCAT44(uVar34,uVar30);
        local_1c8 = PTR_DAT_04bb2010 + 0x10;
        uVar22 = FUN_01a4f798(&local_118,0,&local_1c8);
        if ((uVar22 & 1) == 0) goto LAB_022b0438;
        FUN_01a50240(&local_c0,&local_118,0,&local_1c8);
        if ((short)local_c0 != -2) goto LAB_022b0438;
        if ((int)uVar30 < (int)(uVar25 + 1)) {
          uVar30 = uVar30 + 1;
        }
        else {
          uVar34 = uVar34 + 1;
          uVar30 = uVar25;
        }
      } while ((uVar25 != uVar30) || (uVar29 + 2 != uVar34));
      iVar18 = FUN_022af654(&local_150,0);
      fVar41 = 11930465.0;
      local_158[0] = *(byte *)(param_1 + 0x10);
      if (7 < local_158[0]) {
        local_158[0] = 0xff;
      }
      local_15c = (undefined4)(long)((float)iVar18 * 45.0 * 11930465.0);
      uVar22 = FUN_022a6bb0(param_3,&local_100,&local_150,1,local_158,&local_15c);
      if ((uVar22 & 1) != 0) {
        local_134 = (short)uVar25;
        local_132 = (short)uVar29;
        cVar13 = FUN_022af654(&local_150,1);
        iVar18 = FUN_0123db50(puVar28,*(undefined8 *)(param_2 + 0x10));
        if ((iVar18 == 0x21) ||
           (iVar18 = FUN_0123db50(puVar28,*(undefined8 *)(param_2 + 0x10)), iVar18 == 0x22)) {
          *(byte *)(param_2 + 10) = *(byte *)(param_2 + 10) & 0xe3 | cVar13 << 2;
        }
        iVar18 = FUN_022af654(&local_150,1);
        iVar19 = FUN_0123db50(puVar28,*(undefined8 *)(param_2 + 0x10));
        if (iVar19 == 0x21) {
          FUN_0124fa64(0,param_2,&local_150);
          local_288 = fVar41;
        }
        iVar19 = FUN_0123db50(puVar28,*(undefined8 *)(param_2 + 0x10));
        if (iVar19 == 0x22) {
          FUN_0124fa64(0,param_2,&local_150);
          local_288 = fVar41;
        }
        local_160[0] = *(byte *)(param_1 + 0x10);
        if (7 < local_160[0]) {
          local_160[0] = 0xff;
        }
        lVar27 = FUN_0251b3b0(local_160,0);
        if (lVar27 != 0) {
          fVar44 = *(float *)(lVar27 + 4);
          lVar27 = FUN_0251bdc4(local_160,0);
          if (lVar27 != 0) {
            uVar34 = *(uint *)(lVar27 + 4);
            uVar30 = (uint)(long)((float)iVar18 * 45.0 * 11930465.0);
            if (uVar34 == uVar30) {
              uVar34 = 0;
            }
            else {
              uVar32 = uVar30 - uVar34;
              if (uVar30 <= uVar34) {
                uVar32 = uVar34 - uVar30;
              }
              uVar34 = -uVar32;
              if (uVar32 < 0x80000001) {
                uVar34 = uVar32;
              }
            }
            fVar44 = local_288 - fVar44;
            if (60.0 <= (float)uVar34 * 8.381903e-08) {
              fVar41 = 2.0;
              if (fVar44 < 2.0) {
                fVar41 = -2.0;
                goto LAB_022b0acc;
              }
            }
            else {
              fVar41 = -13.0;
              if (fVar44 < -13.0) {
                fVar41 = -17.0;
LAB_022b0acc:
                if (fVar41 < fVar44) goto LAB_022b0ad4;
              }
            }
          }
        }
      }
    }
LAB_022b0438:
    if ((uVar17 & 1) != 0) goto LAB_022afef0;
    if ((cVar14 == '\0') || (cVar5 == '\0')) {
      local_c8 = 0;
      if (*(long *)(*(long *)PTR_DAT_04bb27a8 + 0x1f8) != 0) {
        lVar27 = *(long *)(*(long *)(*(long *)PTR_DAT_04bb27a8 + 0x1f8) + 0xb0);
        local_c8 = 0;
        if (lVar27 != 0) {
          uVar34 = iVar16 - *(int *)(lVar27 + 0x28);
          uVar30 = *(uint *)(lVar27 + 0x18);
          uVar32 = iVar20 - *(int *)(lVar27 + 0x2c);
          if ((uVar34 < uVar30 && uVar32 <= *(uint *)(lVar27 + 0x1c)) &&
              (uVar30 <= uVar34 || *(uint *)(lVar27 + 0x1c) != uVar32)) {
            uVar34 = uVar34 + uVar30 * uVar32;
LAB_022b0580:
            if (*(uint *)(lVar27 + 0x30) <= uVar34) {
              uVar34 = 0;
            }
            puVar21 = (undefined8 *)(*(long *)(lVar27 + 0x38) + (long)(int)uVar34 * 0x68);
          }
          else if (*(char *)(lVar27 + 0x88) == '\0') {
            puVar21 = &DAT_051a50f0;
          }
          else {
            uVar34 = iVar16 - *(int *)(lVar27 + 0x98);
            uVar30 = iVar20 - *(int *)(lVar27 + 0x9c);
            puVar21 = &DAT_051a50f0;
            if (uVar34 < *(uint *)(lVar27 + 0xa0) && uVar30 < *(uint *)(lVar27 + 0xa4)) {
              uVar34 = uVar34 + *(uint *)(lVar27 + 0xa0) * uVar30 + *(int *)(lVar27 + 0x8c);
              goto LAB_022b0580;
            }
          }
          local_c8 = (int)*(char *)(puVar21 + 2);
        }
      }
      local_1c0 = (undefined *)CONCAT44(iVar36,iVar7);
      local_1c8 = PTR_DAT_04bb2018 + 0x10;
      uVar22 = FUN_01318310(&local_1c8);
      if ((uVar22 & 1) != 0) {
LAB_022b05cc:
        bVar8 = false;
LAB_022b05d0:
        if ((uVar26 != 2) || (bVar8)) {
          if (bVar8) goto LAB_022b0ad4;
          goto LAB_022afef0;
        }
        goto LAB_022b05dc;
      }
      bVar8 = bVar12;
      if (local_c8 <= local_11c) {
        bVar8 = true;
      }
      if ((bVar8) || (uVar22 = FUN_00978be0(&local_f0), (uVar22 & 1) == 0)) {
        bVar8 = false;
        if ((uVar26 != 2) && ((uVar26 < 5 && (local_c8 < local_11c)))) {
          local_1c0 = PTR_DAT_04bb2010 + 0x10;
          local_1b8 = (undefined *)CONCAT44(uVar29,uVar25);
          local_1a8 = (undefined *)CONCAT44(uVar29 + 1,uVar25 + 1);
          local_1c8 = puVar3;
          local_1b0 = local_1c0;
          uVar22 = FUN_00978be0(&local_1c8);
          if ((uVar22 & 1) == 0) goto LAB_022b05cc;
          iVar18 = local_1a8._4_4_ + 1;
          if (iVar18 != local_1b8._4_4_) {
            iVar11 = (int)local_1b8;
            iVar19 = local_1b8._4_4_;
            iVar35 = (int)local_1b8;
            do {
              local_c0 = PTR_DAT_04bb2010 + 0x10;
              local_b8 = iVar35;
              iStack_b4 = iVar19;
              uVar22 = FUN_01a4f798(&local_118,0,&local_c0);
              if ((uVar22 & 1) == 0) goto LAB_022b05cc;
              FUN_01a50240(&local_b0,&local_118,0,&local_c0);
              if ((short)local_b0 != -2) goto LAB_022b05cc;
              if (iVar35 < (int)local_1a8) {
                iVar35 = iVar35 + 1;
              }
              else {
                iVar19 = iVar19 + 1;
                iVar35 = (int)local_1b8;
              }
            } while ((iVar11 != iVar35) || (iVar18 != iVar19));
          }
          fVar41 = fVar38 - fVar42;
          local_134 = (short)uVar25;
          local_132 = (short)uVar29;
          iVar18 = FUN_006f0400(fVar40 - fVar37);
          iVar19 = FUN_0123db50(puVar28,*(undefined8 *)(param_2 + 0x10));
          if ((iVar19 == 0x21) ||
             (iVar19 = FUN_0123db50(puVar28,*(undefined8 *)(param_2 + 0x10)), iVar19 == 0x22)) {
            *(byte *)(param_2 + 10) =
                 *(byte *)(param_2 + 10) & 0xe3 | (byte)((iVar18 + 0x10000000U >> 0x1d) << 2);
          }
          bVar8 = true;
        }
        goto LAB_022b05d0;
      }
      if (uVar26 == 2) {
LAB_022b0650:
        uVar34 = local_f8 + local_1e0 * (char)local_1f0[1];
        uVar30 = local_f4 + local_1f4 * (char)local_1e8[1];
        uVar31 = uVar34;
        uVar32 = uVar30;
        do {
          local_1c0 = (undefined *)CONCAT44(uVar32,uVar31);
          local_1c8 = PTR_DAT_04bb2010 + 0x10;
          uVar22 = FUN_01a4f798(&local_118,0,&local_1c8);
          if ((uVar22 & 1) == 0) goto LAB_022afef0;
          FUN_01a50240(&local_c0,&local_118,0,&local_1c8);
          if ((short)local_c0 != -2) goto LAB_022afef0;
          if ((int)uVar31 < (int)(uVar34 + 1)) {
            uVar31 = uVar31 + 1;
          }
          else {
            uVar32 = uVar32 + 1;
            uVar31 = uVar34;
          }
        } while ((uVar34 != uVar31) || (uVar30 + 2 != uVar32));
      }
      else {
        uVar34 = local_f8;
        uVar30 = local_f4;
        if (4 < uVar26) goto LAB_022b0650;
      }
      local_134 = (short)uVar34;
      local_132 = (short)uVar30;
      fVar41 = fVar42 - fVar38;
      iVar20 = FUN_006f0400(fVar37 - fVar40);
      iVar16 = FUN_0123db50(puVar28,*(undefined8 *)(param_2 + 0x10));
      if (iVar16 != 0x21) {
        uVar23 = *(undefined8 *)(param_2 + 0x10);
        goto LAB_022b0a34;
      }
    }
    else {
      if (uVar26 != 2) goto LAB_022afef0;
LAB_022b05dc:
      iVar18 = 0;
      if (*(long *)(*(long *)PTR_DAT_04bb27a8 + 0x1f8) != 0) {
        lVar27 = *(long *)(*(long *)(*(long *)PTR_DAT_04bb27a8 + 0x1f8) + 0xb0);
        iVar18 = 0;
        if (lVar27 != 0) {
          uVar34 = iVar16 - *(int *)(lVar27 + 0x28);
          uVar30 = *(uint *)(lVar27 + 0x18);
          uVar32 = iVar20 - *(int *)(lVar27 + 0x2c);
          if ((uVar34 < uVar30 && uVar32 <= *(uint *)(lVar27 + 0x1c)) &&
              (uVar30 <= uVar34 || *(uint *)(lVar27 + 0x1c) != uVar32)) {
            uVar34 = uVar34 + uVar30 * uVar32;
LAB_022b0900:
            if (*(uint *)(lVar27 + 0x30) <= uVar34) {
              uVar34 = 0;
            }
            puVar21 = (undefined8 *)(*(long *)(lVar27 + 0x38) + (long)(int)uVar34 * 0x68);
          }
          else if (*(char *)(lVar27 + 0x88) == '\0') {
            puVar21 = &DAT_051a50f0;
          }
          else {
            uVar34 = iVar16 - *(int *)(lVar27 + 0x98);
            uVar30 = iVar20 - *(int *)(lVar27 + 0x9c);
            puVar21 = &DAT_051a50f0;
            if (uVar34 < *(uint *)(lVar27 + 0xa0) && uVar30 < *(uint *)(lVar27 + 0xa4)) {
              uVar34 = uVar34 + *(uint *)(lVar27 + 0xa0) * uVar30 + *(int *)(lVar27 + 0x8c);
              goto LAB_022b0900;
            }
          }
          iVar18 = (int)*(char *)(puVar21 + 2);
        }
      }
      local_b0 = CONCAT44(local_b0._4_4_,iVar18);
      local_1c0 = (undefined *)CONCAT44(iVar36,iVar7);
      local_1c8 = PTR_DAT_04bb2018 + 0x10;
      uVar22 = FUN_01318310(&local_1c8);
      if (((uVar22 & 1) != 0) || ((int)local_b0 <= local_11c)) goto LAB_022afef0;
      iVar20 = local_f8 + local_1e0 * (char)local_1f0[1];
      iVar7 = local_f4 + local_1f4 * (char)local_1e8[1];
      iVar36 = iVar20;
      iVar16 = iVar7;
      do {
        local_1c0 = (undefined *)CONCAT44(iVar16,iVar36);
        local_1c8 = PTR_DAT_04bb2010 + 0x10;
        uVar22 = FUN_01a4f798(&local_118,0,&local_1c8);
        if ((uVar22 & 1) == 0) goto LAB_022afef0;
        FUN_01a50240(&local_c0,&local_118,0,&local_1c8);
        if ((short)local_c0 != -2) goto LAB_022afef0;
        if (iVar36 < iVar20 + 1) {
          iVar36 = iVar36 + 1;
        }
        else {
          iVar16 = iVar16 + 1;
          iVar36 = iVar20;
        }
      } while ((iVar20 != iVar36) || (iVar7 + 2 != iVar16));
      local_134 = (short)iVar20;
      local_132 = (short)iVar7;
      fVar41 = fVar42 - fVar38;
      iVar20 = FUN_006f0400(fVar37 - fVar40);
      iVar16 = FUN_0123db50(puVar28,*(undefined8 *)(param_2 + 0x10));
      if (iVar16 != 0x21) {
        uVar23 = *(undefined8 *)(param_2 + 0x10);
LAB_022b0a34:
        iVar16 = FUN_0123db50(puVar28,uVar23);
        if (iVar16 != 0x22) goto LAB_022b0ad4;
      }
    }
    *(byte *)(param_2 + 10) =
         *(byte *)(param_2 + 10) & 0xe3 | (byte)((iVar20 + 0x10000000U >> 0x1d) << 2);
LAB_022b0ad4:
    uVar30 = (uint)local_134;
    uVar34 = (uint)local_132;
    iVar16 = FUN_0123db50(puVar28,*(undefined8 *)(param_2 + 0x10));
    if ((iVar16 != 0x21) &&
       (iVar16 = FUN_0123db50(puVar28,*(undefined8 *)(param_2 + 0x10)), iVar16 != 0x22)) {
switchD_022b0b30_caseD_0:
      uVar34 = uVar34 - 2;
      goto LAB_022b0b50;
    }
    uVar32 = 1;
    switch(*(byte *)(param_2 + 10) >> 2 & 7) {
    case 0:
      goto switchD_022b0b30_caseD_0;
    default:
      goto switchD_022b0b30_caseD_1;
    case 2:
      uVar30 = uVar30 - 2;
      break;
    case 4:
      uVar34 = uVar34 + 2;
      break;
    case 6:
      uVar30 = uVar30 + 2;
    }
LAB_022b0b50:
    if (*(long *)PTR_DAT_04bb27c8 == 0) {
      uVar32 = 0;
    }
    else {
      lVar27 = *(long *)(*(long *)PTR_DAT_04bb27c8 + 0xa8);
      uVar32 = 0;
      if ((((lVar27 != 0) && (-1 < (int)uVar30)) && (uVar32 = 0, -1 < (int)uVar34)) &&
         ((uVar30 < *(uint *)(lVar27 + 0x38) && (uVar34 < *(uint *)(lVar27 + 0x3c))))) {
        uVar30 = uVar30 + *(uint *)(lVar27 + 0x38) * uVar34;
        uVar32 = 0;
        if ((uVar30 < *(uint *)(lVar27 + 0x68)) && (*(long *)(lVar27 + 0x70) != 0)) {
          local_1c8 = (undefined *)CONCAT44(local_1c8._4_4_,5);
          uVar32 = *(uint *)(*(long *)(lVar27 + 0x70) + (long)(int)uVar30 * 4) >> 5 & 1;
        }
      }
    }
    uVar32 = uVar32 ^ 1;
switchD_022b0b30_caseD_1:
    local_168 = (int)local_134;
    local_164 = (int)local_132;
    bVar24 = *(byte *)(param_1 + 0x10);
    local_170 = PTR_DAT_04bb2010 + 0x10;
    iVar16 = FUN_0123db50(puVar28,*(undefined8 *)(param_2 + 0x10));
    if ((iVar16 == 0x21) ||
       (iVar16 = FUN_0123db50(puVar28,*(undefined8 *)(param_2 + 0x10)), iVar16 == 0x22)) {
      bVar33 = *(byte *)(param_2 + 10) >> 2 & 7;
    }
    else {
      bVar33 = 0;
    }
    iVar16 = FUN_0123db50(puVar28,*(undefined8 *)(param_2 + 0x10));
    if (iVar16 == 0x21) {
      FUN_0124fa64(0,param_2,&local_170);
      fVar40 = fVar41;
    }
    iVar16 = FUN_0123db50(puVar28,*(undefined8 *)(param_2 + 0x10));
    if (iVar16 == 0x22) {
      FUN_0124fa64(0,param_2,&local_170);
      fVar40 = fVar41;
    }
    if (7 < bVar24) {
      bVar24 = 0xff;
    }
    local_1c8 = (undefined *)CONCAT71(local_1c8._1_7_,bVar24);
    lVar27 = FUN_0251b3b0(&local_1c8,0);
    if (lVar27 != 0) {
      fVar38 = *(float *)(lVar27 + 4);
      lVar27 = FUN_0251bdc4(&local_1c8,0);
      if (lVar27 == 0) goto LAB_022afef0;
      uVar34 = *(uint *)(lVar27 + 4);
      uVar30 = (uint)(long)((float)bVar33 * 45.0 * 11930465.0);
      if (uVar34 == uVar30) {
        uVar34 = 0;
      }
      else {
        uVar31 = uVar30 - uVar34;
        if (uVar30 <= uVar34) {
          uVar31 = uVar34 - uVar30;
        }
        uVar34 = -uVar31;
        if (uVar31 < 0x80000001) {
          uVar34 = uVar31;
        }
      }
      fVar40 = fVar40 - fVar38;
      fVar38 = 60.0;
      if (60.0 <= (float)uVar34 * 8.381903e-08) {
        if (fVar40 < 2.0) {
          fVar41 = -2.0;
          goto LAB_022b0d48;
        }
        goto LAB_022afef0;
      }
      if (-13.0 <= fVar40) goto LAB_022afef0;
      fVar41 = -17.0;
LAB_022b0d48:
      if ((fVar40 <= fVar41) || (uVar32 == 0)) goto LAB_022afef0;
      local_174[0] = *(byte *)(param_1 + 0x10);
      local_178 = 0;
      if (7 < local_174[0]) {
        local_174[0] = 0xff;
      }
      uVar22 = FUN_022a6bb0(param_3,&local_100,&local_150,0,local_174,&local_178);
      puVar10 = PTR_DAT_04bc3a80;
      if ((uVar22 & 1) == 0) goto LAB_022afef0;
      if ((uVar25 != local_f8) && (uVar29 != local_f4)) {
        fVar38 = *param_3;
        fVar41 = (fVar43 * 5.0 + 5.0) - param_3[2];
        iVar16 = FUN_006f0400((fVar45 * 5.0 + 5.0) - fVar38);
        local_1c0 = (undefined *)((ulong)local_1c0 & 0xffffffff00000000);
        lVar27 = *(long *)PTR_DAT_04bb2720;
        if (lVar27 == 0) {
          puVar21 = &DAT_055c04a0;
        }
        else if (*(long *)(lVar27 + 0x330) == 0) {
          puVar21 = &DAT_055c04a0;
        }
        else {
          puVar21 = (undefined8 *)
                    (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                              (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar27 + 0x338));
          iVar20 = FUN_006bd550(*puVar21,0);
          puVar21 = (undefined8 *)puVar10;
          if (iVar20 != 0x758f7eaf) {
            puVar21 = &DAT_055c04a0;
          }
        }
        local_1c0 = (undefined *)CONCAT44(*(undefined4 *)(puVar21 + 7),(undefined4)local_1c0);
        uVar15 = FUN_017baf44();
        local_1b8 = (undefined *)(CONCAT71(local_1b8._1_7_,uVar15) & 0xffffffffffffff01);
        local_c0 = PTR_DAT_04bb2010 + 0x10;
        local_b0 = 0xfffe;
        local_1c8 = puVar9 + 0x10;
        FUN_0277d4ac(&local_b0);
        switch(iVar16 + 0x10000000U >> 0x1d) {
        case 1:
          local_b8 = uVar25 - 1;
          iStack_b4 = uVar29 - 1;
          goto LAB_022b0ee4;
        default:
          goto switchD_022b0ebc_caseD_2;
        case 3:
        case 7:
          local_b8 = uVar25 - 1;
          break;
        case 5:
          local_b8 = uVar25 + 2;
        }
        iStack_b4 = uVar29 + 2;
LAB_022b0ee4:
        FUN_01a5033c(&local_c8,&local_1c8,0,&local_c0,0);
        local_b0 = CONCAT44(local_c4,local_c8);
        if (((short)local_c8 != -2) && (local_c8 = FUN_0277ebd0(&local_b0), local_c8 != 0))
        goto LAB_022afef0;
      }
switchD_022b0ebc_caseD_2:
      iVar16 = (int)local_134;
      iVar20 = (int)local_132;
      if ((*(int *)(puVar10 + 0x38) != -0x17df00c3) ||
         ((((lVar27 = *(long *)PTR_DAT_04bb59d8, *(int *)(lVar27 + 0x28) <= (int)local_134 &&
            (iVar16 < *(int *)(lVar27 + 0x38))) && (*(int *)(lVar27 + 0x2c) <= (int)local_132)) &&
          (iVar20 < *(int *)(lVar27 + 0x3c))))) {
        local_13c = (undefined *)*puVar28;
        local_198 = 0xff00;
        local_188 = 0;
        local_1c0 = PTR_DAT_04bbc1a0 + 0x10;
        local_1b8 = PTR_DAT_04bb2010 + 0x10;
        iStack_19c = iVar20 + 1;
        local_196 = 0;
        local_192 = 0;
        local_190 = 0xffffffffffffffff;
        local_184 = 0x41200000;
        local_17c = 0;
        local_17b = 0xff;
        local_1b0 = (undefined *)CONCAT44(iVar20,iVar16);
        local_1c8 = (undefined *)CONCAT62(local_1c8._2_6_,*(undefined2 *)PTR_DAT_04bb6298);
        uStack_17d = 1;
        local_1a0 = iVar16 + 1;
        if ((param_7 & 1) != 0) {
          return 1;
        }
        local_1a8 = local_1b8;
        uVar22 = FUN_022ab010(param_1,&local_1c8,&local_140);
        cVar14 = local_12a;
        if ((uVar22 & 1) != 0) {
          local_c0 = (undefined *)0xfffe;
          FUN_0277d4ac(&local_c0);
          local_c0 = local_13c;
          local_1d0 = (int)local_134;
          iStack_1cc = (int)local_132;
          local_1d8 = PTR_DAT_04bb2010 + 0x10;
          FUN_022ab224(param_1,cVar14,&local_c0,&local_1d8,0);
          if (param_5 != (undefined4 *)0x0) {
            *param_5 = 0;
          }
          if (param_6 == (undefined4 *)0x0) {
            return 1;
          }
          if (local_12a == '\x05') {
            local_b8 = (int)local_134;
            iStack_b4 = (int)local_132;
            local_c0 = PTR_DAT_04bb2010 + 0x10;
            uVar39 = FUN_0124fa64(0,param_2,&local_c0);
            *param_6 = uVar39;
            param_6[1] = fVar41;
            param_6[2] = fVar38;
          }
          if (local_12a == '\x06') {
            local_b8 = (int)local_134;
            iStack_b4 = (int)local_132;
            local_c0 = PTR_DAT_04bb2010 + 0x10;
            uVar39 = FUN_0124fa64(0,param_2,&local_c0);
            *param_6 = uVar39;
            param_6[1] = fVar41;
            param_6[2] = fVar38;
            return 1;
          }
          return 1;
        }
      }
    }
LAB_022afef0:
    uVar26 = uVar26 + 1;
    if (uVar26 == 7) {
      return 0;
    }
  } while( true );
}

