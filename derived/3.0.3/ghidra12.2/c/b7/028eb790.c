
uint FUN_028eb790(undefined2 *param_1,undefined4 *param_2,long param_3)

{
  undefined8 *puVar1;
  undefined8 *puVar2;
  undefined *puVar3;
  byte *pbVar4;
  undefined8 *puVar5;
  undefined8 *puVar6;
  undefined2 *puVar7;
  uint uVar8;
  short sVar9;
  uint *puVar10;
  undefined *puVar11;
  char *pcVar12;
  byte bVar13;
  bool bVar14;
  bool bVar15;
  undefined2 uVar16;
  undefined3 uVar17;
  undefined4 uVar18;
  uint uVar19;
  uint *puVar20;
  undefined **ppuVar21;
  long lVar22;
  long lVar23;
  long lVar24;
  int *piVar25;
  char cVar26;
  uint *puVar27;
  ulong uVar28;
  int iVar29;
  ulong uVar30;
  uint uVar31;
  ulong uVar32;
  undefined8 uVar33;
  uint uVar34;
  byte *pbVar35;
  float fVar36;
  float fVar37;
  uint local_184;
  undefined8 local_178;
  undefined1 *puStack_170;
  undefined4 local_168;
  undefined1 local_164 [7];
  undefined1 local_15d;
  undefined *local_158;
  undefined1 *puStack_150;
  undefined4 local_148;
  undefined1 local_144 [7];
  undefined1 local_13d;
  undefined *local_138;
  char *local_130;
  undefined4 local_128;
  char local_124 [7];
  undefined1 local_11d;
  undefined8 local_118;
  char *local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined8 uStack_f8;
  undefined8 local_f0;
  undefined8 uStack_e8;
  undefined8 local_e0;
  undefined8 uStack_d8;
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 local_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined4 local_90;
  uint local_78;
  byte local_74;
  byte local_73;
  undefined1 local_72;
  
  uVar31 = param_2[2];
  local_118 = (undefined *)CONCAT44(local_118._4_4_,uVar31);
  if (((uVar31 == 0x10) || (uVar31 == 0x12)) || (uVar31 == 10)) {
    bVar14 = true;
  }
  else {
    bVar14 = uVar31 == 0xc;
  }
  local_138 = (undefined *)CONCAT44(local_138._4_4_,uVar31);
  lVar22 = *(long *)PTR_DAT_04bb4960;
  if ((lVar22 != 0) && ((uVar31 & 0xffff) < 0x15)) {
    uVar18 = FUN_006bd550(*(undefined8 *)(PTR_DAT_04bc2558 + (ulong)(ushort)uVar31 * 8 + 0x150),0);
    local_118 = (undefined *)CONCAT44(local_118._4_4_,uVar18);
    puVar20 = (uint *)FUN_036c67d0(lVar22 + 0x800,&local_118);
    puVar11 = PTR_DAT_04bc11f0;
    puVar3 = PTR_DAT_04bc11e8;
    if ((puVar20 != (uint *)0x0) && (*puVar20 != 0)) {
      cVar26 = *PTR_DAT_04bc11e8;
      do {
        if (cVar26 == '\0') {
          cVar26 = '\x01';
          *(undefined8 *)puVar11 = 0xffffffffffffffff;
          *(undefined8 *)(puVar11 + 8) = 0xffffffffffffffff;
          *puVar3 = 1;
          *(undefined8 *)(puVar11 + 0x10) = 0xffffffffffffffff;
          *(undefined8 *)(puVar11 + 0x18) = 0xffffffffffffffff;
          *(undefined8 *)(puVar11 + 0x20) = 0xffffffffffffffff;
          *(undefined8 *)(puVar11 + 0x28) = 0xffffffffffffffff;
          *(undefined8 *)(puVar11 + 0x30) = 0xffffffffffffffff;
          *(undefined8 *)(puVar11 + 0x38) = 0xffffffffffffffff;
          *(undefined8 *)(puVar11 + 0x40) = 0xffffffffffffffff;
          *(undefined8 *)(puVar11 + 0x48) = 0xffffffffffffffff;
          *(undefined8 *)(puVar11 + 0x50) = 0xffffffffffffffff;
          *(undefined8 *)(puVar11 + 0x58) = 0xffffffffffffffff;
          *(undefined8 *)(puVar11 + 0x60) = 0xffffffffffffffff;
          *(undefined8 *)(puVar11 + 0x68) = 0xffffffffffffffff;
          *(undefined8 *)(puVar11 + 0x70) = 0xffffffffffffffff;
          *(undefined8 *)(puVar11 + 0x78) = 0xffffffffffffffff;
        }
        else {
          uVar31 = *(uint *)(puVar11 + 0x38);
          if (-1 < (int)uVar31) {
            if ((char *)((ulong)uVar31 + (long)puVar20) == (char *)0x0) break;
            bVar15 = *(char *)((ulong)uVar31 + (long)puVar20) != '\0';
            goto LAB_028eb968;
          }
          if (uVar31 != 0xffffffff) break;
        }
        puVar27 = (uint *)(ulong)*puVar20;
        bVar15 = false;
        if ((*puVar20 == 0) || (puVar20 == puVar27)) goto LAB_028eb968;
        lVar22 = 0xc;
        if (*(char *)((long)puVar20 + (10 - (long)puVar27)) != '\0') {
          lVar22 = 0x1c;
        }
        lVar22 = (long)puVar20 + (lVar22 - (long)puVar27);
        if (lVar22 == 0) break;
        uVar28 = (ulong)*(ushort *)((long)puVar20 + (8 - (long)puVar27));
        *(undefined4 *)(puVar11 + 0x38) = 0xfffffffe;
        if (uVar28 == 0) break;
        piVar25 = (int *)(lVar22 + 4);
        while (piVar25[-1] != -0x70cf5561) {
          piVar25 = piVar25 + 2;
          uVar28 = uVar28 - 1;
          if (uVar28 == 0) goto LAB_028eb964;
        }
        bVar15 = false;
        iVar29 = 0;
        if (*piVar25 != -1) {
          iVar29 = *piVar25;
        }
        *(int *)(puVar11 + 0x38) = iVar29;
        if (*puVar20 == 0) goto LAB_028eb968;
      } while( true );
    }
  }
LAB_028eb964:
  bVar15 = false;
LAB_028eb968:
  switch(param_2[4]) {
  case 1:
    puVar1 = (undefined8 *)(param_3 + 0x8c);
    local_90 = 0;
    puVar2 = (undefined8 *)(param_3 + 0x118);
    local_118 = (undefined *)0x0;
    local_a0 = 0;
    uStack_98 = 0;
    local_b0 = 0;
    uStack_a8 = 0;
    local_c0 = 0;
    uStack_b8 = 0;
    local_d0 = 0;
    uStack_c8 = 0;
    local_e0 = 0;
    uStack_d8 = 0;
    local_f0 = 0;
    uStack_e8 = 0;
    local_100 = 0;
    uStack_f8 = 0;
    local_110 = (char *)0x0;
    local_108 = 0;
    uVar31 = 0;
    do {
      local_138 = (undefined *)CONCAT44(local_138._4_4_,uVar31);
      uVar28 = (ulong)uVar31;
      if (0x22 < uVar31) {
        uVar28 = 0;
      }
      *(undefined4 *)((long)&local_118 + uVar28 * 4) = 0;
      uVar28 = (ulong)uVar31;
      puVar5 = (undefined8 *)((long)&local_118 + uVar28 * 4);
      if (0x22 < uVar31) {
        uVar28 = 0;
        puVar5 = &local_118;
      }
      uVar32 = (ulong)uVar31;
      puVar6 = (undefined8 *)((long)puVar1 + uVar32 * 4);
      if (0x22 < uVar31) {
        uVar32 = 0;
        puVar6 = puVar1;
      }
      if (puVar6 != puVar5) {
        *(undefined4 *)((long)&local_118 + uVar28 * 4) = *(undefined4 *)((long)puVar1 + uVar32 * 4);
      }
      uVar28 = (ulong)uVar31;
      puVar5 = (undefined8 *)((long)&local_118 + uVar28 * 4);
      if (0x22 < uVar31) {
        uVar28 = 0;
        puVar5 = &local_118;
      }
      uVar32 = (ulong)uVar31;
      puVar6 = (undefined8 *)((long)puVar2 + uVar32 * 4);
      if (0x22 < uVar31) {
        uVar32 = 0;
        puVar6 = puVar2;
      }
      if (puVar6 != puVar5) {
        *(undefined4 *)((long)&local_118 + uVar28 * 4) = *(undefined4 *)((long)puVar2 + uVar32 * 4);
      }
      uVar19 = 0x23;
      if ((int)uVar31 < 0x23) {
        uVar19 = uVar31 + 1;
      }
      uVar31 = uVar19;
    } while (uVar19 != 0x23);
    uVar19 = FUN_028ecc50(param_3,&local_118);
    local_138._0_3_ = (undefined3)uVar19;
    local_73 = (byte)(uVar19 >> 8);
    local_74 = (byte)uVar19;
    ppuVar21 = &local_138;
    break;
  case 2:
  case 4:
    lVar22 = param_3 + 0x8c;
    uVar28 = FUN_028ecc50(param_3,lVar22);
    uVar31 = (uint)uVar28 & 0xff;
    uVar30 = (ulong)uVar31;
    local_74 = (byte)uVar28;
    uVar32 = uVar28 >> 8 & 0xffffff;
    local_118._0_3_ = (undefined3)uVar28;
    local_73 = (byte)uVar32;
    local_72 = FUN_020fd7d8(&local_118);
    if (uVar31 < 0x23) {
      uVar31 = (uint)uVar28 >> 8 & 0xff;
      if (((byte)PTR_DAT_04bc27f0[uVar28 & 0xff] < uVar31) ||
         ((*(uint *)(PTR_DAT_04bc2a20 + (uVar28 & 0xff) * 4) >> (ulong)((uint)uVar32 & 0x1f) & 1) ==
          0)) goto LAB_028eba04;
    }
    else {
LAB_028eba04:
      if (bVar14) {
        lVar22 = param_3 + 0x118;
        goto LAB_028ebb5c;
      }
      puVar20 = (uint *)nn::os::GetTlsValue(*(undefined4 *)PTR_DAT_04bb39d8);
      local_184 = 0;
      iVar29 = 0;
      fVar36 = -3.4028235e+38;
      local_78 = 0x23;
      puVar3 = PTR_DAT_04bb3768 + 0x10;
      do {
        pbVar4 = &DAT_0545a400 + (long)iVar29 + (long)iVar29 * 2;
        uVar28 = (ulong)*pbVar4;
        if (uVar28 < 0x23) {
          pbVar35 = &DAT_0545a401 + (long)iVar29 * 3;
          if ((*pbVar35 <= (byte)PTR_DAT_04bc27f0[uVar28]) &&
             ((*(uint *)(PTR_DAT_04bc2a20 + uVar28 * 4) >> (ulong)(*pbVar35 & 0x1f) & 1) != 0)) {
            local_128 = 8;
            local_11d = 0;
            local_124[0] = '\0';
            local_138 = puVar3;
            local_130 = local_124;
            FUN_038d1270(&local_138,"-----");
            if ((ulong)*pbVar4 < 0x23) {
              FUN_038d1270(&local_138,"%s%02d",
                           *(undefined8 *)(PTR_DAT_04bb9e38 + (ulong)*pbVar4 * 8 + 0xb0),*pbVar35);
            }
            sVar9 = *(short *)PTR_DAT_04bb6298;
            if (sVar9 == -1) {
LAB_028ebdf8:
              local_100._0_4_ = (uint)(uint3)local_100;
              local_108 = CONCAT35(local_108._5_3_,8);
              local_118 = PTR_DAT_04bb3768 + 0x10;
              local_110 = (char *)((long)&local_108 + 4);
              FUN_02212c10(&DAT_0545a400,&local_118);
              (**(code **)(local_118 + 0x18))(&local_118);
              (**(code **)(local_118 + 0x18))(&local_118);
              pcVar12 = local_110;
              (**(code **)(local_138 + 0x18))(&local_138);
              if (pcVar12 != local_130) {
                if (*local_110 != *local_130) goto LAB_028ebef0;
                if (*local_110 != '\0') {
                  uVar28 = 0;
                  do {
                    uVar32 = uVar28;
                    if (local_110[uVar32 + 1] != local_130[uVar32 + 1]) goto LAB_028ebef0;
                    if (local_110[uVar32 + 1] == '\0') goto LAB_028ebf54;
                    if (local_110[uVar32 + 2] != local_130[uVar32 + 2]) goto LAB_028ebef0;
                    if (local_110[uVar32 + 2] == '\0') {
                      uVar32 = uVar32 + 1;
                      goto LAB_028ebf54;
                    }
                    if ((uVar32 == 0x7fffe) || (local_110[uVar32 + 3] != local_130[uVar32 + 3]))
                    goto LAB_028ebef0;
                    uVar28 = uVar32 + 3;
                  } while (local_110[uVar32 + 3] != '\0');
                  uVar32 = uVar32 + 2;
LAB_028ebf54:
                  if (uVar32 >> 0x13 != 0) goto LAB_028ebef0;
                }
              }
              local_78 = (uint)*pbVar4;
              local_184 = (uint)*pbVar35;
              FUN_020fd7d8(pbVar4);
            }
            else {
              local_118 = (undefined *)CONCAT44(local_118._4_4_,0x19);
              puVar27 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar9 * 8);
              if (0xff < (uint)(int)sVar9) {
                puVar27 = (uint *)PTR_DAT_04bc39f8;
              }
              if ((*puVar27 >> 0x19 & 1) == 0) goto LAB_028ebdf8;
LAB_028ebef0:
              uVar31 = *puVar20 ^ *puVar20 << 0xb;
              uVar19 = puVar20[3];
              *puVar20 = puVar20[1];
              puVar20[1] = puVar20[2];
              uVar31 = uVar31 >> 8 ^ uVar19 >> 0x13 ^ uVar31 ^ uVar19;
              puVar20[2] = uVar19;
              puVar20[3] = uVar31;
              fVar37 = (float)(uVar31 >> 9 | 0x3f800000) + -1.0;
              if (fVar36 < fVar37) {
                local_74 = *pbVar4;
                local_73 = *pbVar35;
                local_72 = FUN_020fd7d8(pbVar4);
                fVar36 = fVar37;
              }
            }
          }
        }
        bVar13 = local_73;
        iVar29 = iVar29 + 1;
      } while (iVar29 != 9);
      uVar28 = (ulong)local_74;
      if (uVar28 < 0x23) {
        uVar31 = (uint)(byte)PTR_DAT_04bc27f0[uVar28];
        if (local_73 <= (byte)PTR_DAT_04bc27f0[uVar28]) {
          uVar34 = (uint)local_73;
          uVar19 = 1 << (ulong)(uVar34 & 0x1f);
          if ((*(uint *)(PTR_DAT_04bc2a20 + uVar28 * 4) & uVar19) != 0) {
            local_100._0_4_ = (uint)(uint3)local_100;
            local_110 = (char *)((long)&local_108 + 4);
            local_108 = CONCAT35(local_108._5_3_,8);
            puVar3 = PTR_DAT_04bb3768 + 0x10;
            local_118 = puVar3;
            FUN_038d1270(&local_118,"-----");
            FUN_038d1270(&local_118,"%s%02d",*(undefined8 *)(PTR_DAT_04bb9e38 + uVar28 * 8 + 0xb0),
                         uVar34);
            local_130 = local_124;
            local_128 = 8;
            local_11d = 0;
            local_124[0] = '\0';
            local_138 = puVar3;
            FUN_0376b510(&local_138,*(undefined2 *)((long)param_2 + 0x16));
            puStack_150 = local_144;
            local_148 = 8;
            local_13d = 0;
            local_144[0] = 0;
            local_158 = puVar3;
            FUN_02213cf0(&DAT_0545a400,&local_118,&local_138,&local_158);
            lVar23 = uVar28 * 4;
            if (uVar34 < 0x20) {
              *(uint *)(lVar22 + lVar23) = *(uint *)(lVar22 + lVar23) & (uVar19 ^ 0xffffffff);
            }
            *(float *)(param_3 + lVar23) = *(float *)(param_3 + lVar23) + -1.0;
            uVar31 = (uint)(byte)PTR_DAT_04bc27f0[uVar28];
          }
        }
        if ((uVar31 < bVar13) ||
           ((*(uint *)(PTR_DAT_04bc2a20 + uVar28 * 4) >> (ulong)(bVar13 & 0x1f) & 1) == 0))
        goto LAB_028ec0a8;
      }
      else {
LAB_028ec0a8:
        lVar23 = 0;
        fVar36 = -3.4028235e+38;
        uVar31 = 0xffffffff;
        puVar3 = PTR_DAT_04bb3768 + 0x10;
        do {
          local_100._0_4_ = (uint)(uint3)local_100;
          local_108 = CONCAT35(local_108._5_3_,8);
          local_118 = puVar3;
          local_110 = (char *)((long)&local_108 + 4);
          FUN_0376b510(&local_118,param_1[lVar23 * 0x8bc]);
          local_178 = (undefined *)CONCAT53(local_178._3_5_,0x80023);
          FUN_020fd3a0(&local_178,&local_118);
          uVar28 = (ulong)local_178 & 0xff;
          if ((((uVar28 < 0x23) && (local_178._1_1_ <= (byte)PTR_DAT_04bc27f0[uVar28])) &&
              ((*(uint *)(PTR_DAT_04bc2a20 + uVar28 * 4) >> (ulong)(local_178._1_1_ & 0x1f) & 1) !=
               0)) && (uVar28 = FUN_0376f950(param_1[lVar23 * 0x8bc]), (uVar28 & 1) != 0)) {
            uVar19 = (uint)(ushort)param_1[lVar23 * 0x8bc + 3];
            if (0x14 < uVar19) {
              uVar19 = 0;
            }
            local_158 = (undefined *)CONCAT44(local_158._4_4_,uVar19);
            lVar24 = *(long *)PTR_DAT_04bb4960;
            if ((lVar24 != 0) && (uVar19 < 0x15)) {
              uVar18 = FUN_006bd550(*(undefined8 *)
                                     (PTR_DAT_04bc2558 + (ulong)(ushort)uVar19 * 8 + 0x150),0);
              local_138 = (undefined *)CONCAT44(local_138._4_4_,uVar18);
              puVar27 = (uint *)FUN_036c67d0(lVar24 + 0x800,&local_138);
              if ((puVar27 != (uint *)0x0) && (uVar19 = *puVar27, uVar19 != 0)) {
                cVar26 = *PTR_DAT_04bc11e8;
                do {
                  if (cVar26 == '\0') {
                    cVar26 = '\x01';
                    *PTR_DAT_04bc11e8 = 1;
                    puVar11 = PTR_DAT_04bc11f0;
                    *(undefined8 *)PTR_DAT_04bc11f0 = 0xffffffffffffffff;
                    *(undefined8 *)(puVar11 + 8) = 0xffffffffffffffff;
                    *(undefined8 *)(puVar11 + 0x10) = 0xffffffffffffffff;
                    *(undefined8 *)(puVar11 + 0x18) = 0xffffffffffffffff;
                    *(undefined8 *)(puVar11 + 0x20) = 0xffffffffffffffff;
                    *(undefined8 *)(puVar11 + 0x28) = 0xffffffffffffffff;
                    *(undefined8 *)(puVar11 + 0x30) = 0xffffffffffffffff;
                    *(undefined8 *)(puVar11 + 0x38) = 0xffffffffffffffff;
                    *(undefined8 *)(puVar11 + 0x40) = 0xffffffffffffffff;
                    *(undefined8 *)(puVar11 + 0x48) = 0xffffffffffffffff;
                    *(undefined8 *)(puVar11 + 0x50) = 0xffffffffffffffff;
                    *(undefined8 *)(puVar11 + 0x58) = 0xffffffffffffffff;
                    *(undefined8 *)(puVar11 + 0x60) = 0xffffffffffffffff;
                    *(undefined8 *)(puVar11 + 0x68) = 0xffffffffffffffff;
                    *(undefined8 *)(puVar11 + 0x70) = 0xffffffffffffffff;
                    *(undefined8 *)(puVar11 + 0x78) = 0xffffffffffffffff;
                    uVar19 = *puVar27;
                  }
                  else {
                    uVar34 = *(uint *)(PTR_DAT_04bc11f0 + 0x38);
                    if (-1 < (int)uVar34) {
                      if (((char *)((ulong)uVar34 + (long)puVar27) != (char *)0x0) &&
                         (*(char *)((ulong)uVar34 + (long)puVar27) != '\0')) {
                        uVar19 = *puVar20 ^ *puVar20 << 0xb;
                        uVar8 = puVar20[3];
                        *puVar20 = puVar20[1];
                        puVar20[1] = puVar20[2];
                        uVar34 = uVar19 >> 8 ^ uVar8 >> 0x13 ^ uVar19 ^ uVar8;
                        puVar20[2] = uVar8;
                        puVar20[3] = uVar34;
                        uVar19 = (uint)(ushort)param_1[lVar23 * 0x8bc + 3];
                        if (0x14 < uVar19) {
                          uVar19 = 0;
                        }
                        local_138 = (undefined *)CONCAT44(local_138._4_4_,uVar19);
                        fVar37 = (float)(uVar34 >> 9 | 0x3f800000) + -1.0;
                        if ((((uVar19 == 0x10) || (uVar19 == 0x12)) || (uVar19 == 10)) ||
                           (uVar19 == 0xc)) {
                          fVar37 = fVar37 + 1.0;
                        }
                        uVar19 = (uint)lVar23;
                        if (fVar37 <= fVar36) {
                          uVar19 = uVar31;
                          fVar37 = fVar36;
                        }
                        fVar36 = fVar37;
                        uVar31 = uVar19;
                      }
                      break;
                    }
                    if (uVar34 != 0xffffffff) break;
                  }
                  puVar10 = (uint *)(ulong)uVar19;
                  if ((puVar10 == (uint *)0x0) || (puVar27 == puVar10)) break;
                  lVar24 = 0xc;
                  if (*(char *)((long)puVar27 + (10 - (long)puVar10)) != '\0') {
                    lVar24 = 0x1c;
                  }
                  lVar24 = (long)puVar27 + (lVar24 - (long)puVar10);
                  if (lVar24 == 0) break;
                  uVar28 = (ulong)*(ushort *)((long)puVar27 + (8 - (long)puVar10));
                  *(undefined4 *)(PTR_DAT_04bc11f0 + 0x38) = 0xfffffffe;
                  if (uVar28 == 0) break;
                  piVar25 = (int *)(lVar24 + 4);
                  while (piVar25[-1] != -0x70cf5561) {
                    piVar25 = piVar25 + 2;
                    uVar28 = uVar28 - 1;
                    if (uVar28 == 0) goto LAB_028ec0f0;
                  }
                  iVar29 = 0;
                  if (*piVar25 != -1) {
                    iVar29 = *piVar25;
                  }
                  *(int *)(PTR_DAT_04bc11f0 + 0x38) = iVar29;
                  uVar19 = *puVar27;
                  if (uVar19 == 0) break;
                } while( true );
              }
            }
          }
LAB_028ec0f0:
          lVar23 = lVar23 + 1;
        } while (lVar23 != 0x26);
        if (-1 < (int)uVar31) {
          local_100._0_4_ = (uint)(uint3)local_100;
          local_108 = CONCAT35(local_108._5_3_,8);
          local_110 = (char *)((long)&local_108 + 4);
          local_128 = 8;
          local_11d = 0;
          puVar7 = param_1 + (ulong)uVar31 * 0x8bc;
          if (0x25 < uVar31) {
            puVar7 = param_1;
          }
          local_124[0] = '\0';
          local_138 = PTR_DAT_04bb3768 + 0x10;
          local_130 = local_124;
          local_118 = local_138;
          FUN_0376b510(&local_118,*puVar7);
          FUN_020fd3a0(&local_74,&local_118);
          uVar28 = (ulong)local_74;
          if ((uVar28 < 0x23) && (local_73 <= (byte)PTR_DAT_04bc27f0[uVar28])) {
            uVar31 = 1 << (ulong)(local_73 & 0x1f);
            if ((*(uint *)(PTR_DAT_04bc2a20 + uVar28 * 4) & uVar31) != 0) {
              lVar23 = uVar28 * 4;
              if (local_73 < 0x20) {
                *(uint *)(lVar22 + lVar23) = *(uint *)(lVar22 + lVar23) & (uVar31 ^ 0xffffffff);
              }
              *(float *)(param_3 + lVar23) = *(float *)(param_3 + lVar23) + -1.0;
            }
          }
          uVar31 = FUN_028ecc50(param_3,param_3 + 0x118);
          FUN_038d1270(&local_138,"-----");
          if ((uVar31 & 0xff) < 0x23) {
            FUN_038d1270(&local_138,"%s%02d",
                         *(undefined8 *)(PTR_DAT_04bb9e38 + (ulong)(byte)uVar31 * 8 + 0xb0),
                         uVar31 >> 8 & 0xff);
          }
          uVar16 = FUN_0376baa0(&local_138);
          *puVar7 = uVar16;
        }
      }
      if (bVar15) {
        uVar17 = FUN_028ecc50(param_3,param_3 + 0x118);
        local_74 = (byte)uVar17;
        local_118 = (undefined *)CONCAT53(local_118._3_5_,uVar17);
        local_73 = (byte)((uint3)uVar17 >> 8);
        local_72 = FUN_020fd7d8(&local_118);
      }
      uVar30 = (ulong)local_74;
      if (((0x22 < local_74) || (uVar31 = (uint)local_73, (byte)PTR_DAT_04bc27f0[uVar30] < uVar31))
         || ((*(uint *)(PTR_DAT_04bc2a20 + uVar30 * 4) >> (ulong)(uVar31 & 0x1f) & 1) == 0)) {
        if (0x22 < local_78) {
          return 0xffff;
        }
        uVar28 = (ulong)local_78;
        if ((byte)PTR_DAT_04bc27f0[uVar28] < local_184) {
          return 0xffff;
        }
        if ((*(uint *)(PTR_DAT_04bc2a20 + uVar28 * 4) >> (ulong)(local_184 & 0x1f) & 1) == 0) {
          return 0xffff;
        }
        local_100._0_4_ = (uint)(uint3)local_100;
        local_108 = CONCAT35(local_108._5_3_,8);
        local_110 = (char *)((long)&local_108 + 4);
        puVar3 = PTR_DAT_04bb3768 + 0x10;
        local_118 = puVar3;
        FUN_038d1270(&local_118,"-----");
        uVar33 = *(undefined8 *)(PTR_DAT_04bb9e38 + uVar28 * 8 + 0xb0);
        FUN_038d1270(&local_118,"%s%02d",uVar33,local_184);
        uVar31 = FUN_0376baa0(&local_118);
        local_128 = 8;
        local_130 = local_124;
        local_11d = 0;
        local_124[0] = '\0';
        local_138 = puVar3;
        FUN_038d1270(&local_138,"-----");
        FUN_038d1270(&local_138,"%s%02d",uVar33,local_184);
        puStack_150 = local_144;
        local_148 = 8;
        local_13d = 0;
        local_144[0] = 0;
        local_158 = puVar3;
        FUN_0376b510(&local_158,*(undefined2 *)((long)param_2 + 0x16));
        puStack_170 = local_164;
        local_168 = 8;
        local_15d = 0;
        local_164[0] = 0;
        local_178 = puVar3;
        FUN_02213cf0(&DAT_0545a400,&local_138,&local_158,&local_178);
        goto LAB_028ec674;
      }
    }
    goto LAB_028ebbc8;
  case 3:
    uVar28 = FUN_028ecc50(param_3,param_3 + 0x118);
    uVar31 = (uint)uVar28 & 0xff;
    uVar30 = (ulong)uVar31;
    local_74 = (byte)uVar28;
    uVar32 = uVar28 >> 8 & 0xffffff;
    local_118._0_3_ = (undefined3)uVar28;
    local_73 = (byte)uVar32;
    local_72 = FUN_020fd7d8(&local_118);
    if (uVar31 < 0x23) {
      uVar31 = (uint)uVar28 >> 8 & 0xff;
      if ((uVar31 <= (byte)PTR_DAT_04bc27f0[uVar28 & 0xff]) &&
         ((*(uint *)(PTR_DAT_04bc2a20 + (uVar28 & 0xff) * 4) >> (ulong)((uint)uVar32 & 0x1f) & 1) !=
          0)) goto LAB_028ebbc8;
    }
    lVar22 = param_3 + 0x8c;
LAB_028ebb5c:
    uVar19 = FUN_028ecc50(param_3,lVar22);
    local_74 = (byte)uVar19;
    local_118._0_3_ = (undefined3)uVar19;
    local_73 = (byte)(uVar19 >> 8);
    ppuVar21 = (undefined **)&local_118;
    break;
  default:
    goto switchD_028eb98c_default;
  }
  uVar31 = uVar19 >> 8 & 0xff;
  uVar30 = (ulong)(uVar19 & 0xff);
  local_72 = FUN_020fd7d8(ppuVar21);
  if ((uVar19 & 0xff) < 0x23) {
LAB_028ebbc8:
    if ((uVar31 <= (byte)PTR_DAT_04bc27f0[uVar30]) &&
       ((*(uint *)(PTR_DAT_04bc2a20 + uVar30 * 4) >> (ulong)(uVar31 & 0x1f) & 1) != 0)) {
      local_100._0_4_ = (uint)(uint3)local_100;
      local_110 = (char *)((long)&local_108 + 4);
      local_108 = CONCAT35(local_108._5_3_,8);
      local_118 = PTR_DAT_04bb3768 + 0x10;
      FUN_038d1270(&local_118,"-----");
      if ((ulong)local_74 < 0x23) {
        FUN_038d1270(&local_118,"%s%02d",
                     *(undefined8 *)(PTR_DAT_04bb9e38 + (ulong)local_74 * 8 + 0xb0),local_73);
      }
      uVar31 = FUN_0376baa0(&local_118);
      if (((uVar31 ^ 0xffffffff) & 0xffff) == 0) {
        return 0xffff;
      }
LAB_028ec674:
      local_110 = *(char **)(param_2 + 1);
      local_118 = (undefined *)CONCAT62(local_118._2_6_,(short)uVar31);
      local_118 = (undefined *)CONCAT44(*param_2,(undefined4)local_118);
      local_108._0_5_ = CONCAT14(*(undefined1 *)(param_2 + 5),param_2[3]);
      uVar28 = FUN_028eb200(param_1,&local_118);
      if ((uVar28 & 1) == 0) {
        uVar31 = 0xffffffff;
      }
      return uVar31;
    }
  }
switchD_028eb98c_default:
  return 0xffff;
}

