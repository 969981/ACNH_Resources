
uint FUN_023fea38(long param_1,ulong param_2)

{
  byte *pbVar1;
  undefined *puVar2;
  uint *puVar3;
  short sVar4;
  bool bVar5;
  uint uVar6;
  long lVar7;
  float *pfVar8;
  ulong uVar9;
  uint uVar10;
  byte bVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  undefined *local_110;
  undefined8 *puStack_108;
  undefined4 local_100;
  undefined4 uStack_fc;
  undefined8 *local_f8;
  undefined4 local_f0;
  undefined4 uStack_ec;
  byte local_e4 [4];
  float local_e0;
  float fStack_dc;
  float local_d8;
  float local_d4;
  float fStack_d0;
  float local_cc;
  undefined8 local_c8;
  float local_c0;
  float fStack_bc;
  undefined4 local_b8;
  undefined4 local_b4;
  undefined8 local_b0;
  undefined4 local_a8;
  undefined8 local_a4;
  undefined4 local_98;
  int local_94;
  undefined8 local_90;
  undefined4 local_88;
  undefined4 local_84;
  undefined8 local_80;
  undefined8 local_78;
  
  sVar4 = *(short *)PTR_DAT_04bb6298;
  if (sVar4 == -1) {
LAB_023feab4:
    pfVar8 = (float *)PTR_DAT_04bc3038;
    if (*(char *)(param_1 + 0x12f8) != '\0') {
      pfVar8 = (float *)(param_1 + 0xeec);
    }
    fVar13 = SQRT(pfVar8[1] * pfVar8[1] + *pfVar8 * *pfVar8);
    lVar7 = FUN_0251e98c(1);
    pfVar8 = (float *)(**(code **)(*(long *)(lVar7 + 0x120) + 0xf0))(lVar7 + 0x120);
    if (*pfVar8 <= fVar13) {
      lVar7 = FUN_0251e98c(1);
      pfVar8 = (float *)(**(code **)(*(long *)(lVar7 + 0x120) + 0xf0))(lVar7 + 0x120);
      fVar12 = *pfVar8;
      lVar7 = FUN_0251e98c(1);
      pfVar8 = (float *)(**(code **)(*(long *)(lVar7 + 0x120) + 0xf0))(lVar7 + 0x120);
      fVar12 = (fVar13 - *pfVar8) / (1.0 - fVar12);
      fVar13 = 0.9999;
      if (fVar12 <= 0.9999) {
        fVar13 = fVar12;
      }
      bVar5 = true;
      if ((0.0 <= fVar12) && (bVar5 = false, !NAN(fVar13))) {
        bVar5 = fVar13 < 0.7;
      }
      if (!bVar5) {
        fVar12 = (float)FUN_025692d8(param_1 + 0xec0);
        fVar13 = -fVar12;
        if (0.0 <= fVar12) {
          fVar13 = fVar12;
        }
        fVar12 = -fVar13;
        if (0.0 <= fVar13) {
          fVar12 = fVar13;
        }
        if (fVar12 <= 35.0) {
          lVar7 = *(long *)(param_1 + 0x68);
          local_80 = 0;
          local_78 = 0;
          local_88 = *(undefined4 *)(lVar7 + 0x280);
          local_90 = *(undefined8 *)(lVar7 + 0x278);
          local_84 = *(undefined4 *)(lVar7 + 0x2b4);
          local_94 = FUN_016f4908(&local_90);
          uVar10 = 0;
          if (local_94 == 0) goto LAB_023fee5c;
          local_98 = FUN_006f0400((float)local_80 - *(float *)(*(long *)(param_1 + 0x68) + 0x278),
                                  (float)local_78 - *(float *)(*(long *)(param_1 + 0x68) + 0x280));
          fVar12 = (float)FUN_0256a098(param_1 + 0xec0,&local_98);
          fVar13 = -fVar12;
          if (0.0 <= fVar12) {
            fVar13 = fVar12;
          }
          fVar12 = -fVar13;
          if (0.0 <= fVar13) {
            fVar12 = fVar13;
          }
          if (fVar12 <= 35.0) {
            lVar7 = FUN_0251e98c(1);
            pfVar8 = (float *)(**(code **)(*(long *)(lVar7 + 0x2a0) + 0xf0))(lVar7 + 0x2a0);
            fVar12 = *pfVar8;
            lVar7 = FUN_0251e98c(1);
            pfVar8 = (float *)(**(code **)(*(long *)(lVar7 + 0x210) + 0xf0))(lVar7 + 0x210);
            fVar13 = *pfVar8;
            uVar9 = FUN_016efacc(0x40a00000,&local_80);
            if ((uVar9 & 1) == 0) {
              pbVar1 = (byte *)(param_1 + 0x1ee8);
              local_a4 = 0x1000100000000;
              local_c8 = local_80;
              bVar11 = *pbVar1;
              local_b4 = *(undefined4 *)(param_1 + 0x230);
              local_a8 = CONCAT13(local_a8._3_1_,0x101);
              fStack_bc = fVar13 * 0.85;
              if (7 < bVar11) {
                bVar11 = 0xff;
              }
              local_b8 = CONCAT31(local_b8._1_3_,bVar11);
              local_b0 = 0xbf8000000000001d;
              local_c0 = (float)local_78;
              uVar9 = FUN_0251fad0(&local_c8,0);
              if (((uVar9 & 1) == 0) &&
                 (((((uVar9 = FUN_016e614c(), (uVar9 & 1) == 0 &&
                     (uVar9 = FUN_016e6244(), (uVar9 & 1) == 0)) &&
                    (uVar9 = FUN_0180c600(), (uVar9 & 1) == 0)) &&
                   (uVar9 = FUN_016cf9f0(), (uVar9 & 1) == 0)) ||
                  (uVar9 = FUN_023fefd0(pbVar1,&local_80), (uVar9 & 1) == 0)))) {
                local_b0 = CONCAT44(local_b0._4_4_,2);
                local_a8 = CONCAT22(local_a8._2_2_,0x100);
                uVar9 = FUN_0251fad0(&local_c8,0);
                if (((uVar9 & 1) == 0) &&
                   ((((uVar9 = FUN_016e614c(), (uVar9 & 1) == 0 &&
                      (uVar9 = FUN_016e6244(), (uVar9 & 1) == 0)) &&
                     ((uVar9 = FUN_0180c600(), (uVar9 & 1) == 0 &&
                      (uVar9 = FUN_016cf9f0(), (uVar9 & 1) == 0)))) ||
                    (uVar9 = FUN_023fefd0(pbVar1,*(long *)(param_1 + 0x68) + 0x278),
                    (uVar9 & 1) == 0)))) {
                  fVar13 = fVar12 * 1.25;
                  uVar9 = FUN_016e0e30(fVar13,*(long *)(param_1 + 0x68) + 0x278,1);
                  if (((uVar9 & 1) == 0) &&
                     (uVar9 = FUN_016e0e30(fVar13,&local_80,1), (uVar9 & 1) == 0)) {
                    lVar7 = *(long *)(param_1 + 0x68);
                    fVar14 = *(float *)(lVar7 + 0x278);
                    fVar15 = *(float *)(lVar7 + 0x27c);
                    fVar16 = *(float *)(lVar7 + 0x280);
                    local_c8._0_4_ = (fVar14 + (float)local_80) * 0.5;
                    local_c8._4_4_ = (fVar15 + local_80._4_4_) * 0.5;
                    local_c0 = (fVar16 + (float)local_78) * 0.5;
                    uVar9 = FUN_016e0e30(fVar13,&local_c8,1);
                    if ((uVar9 & 1) == 0) {
                      fStack_d0 = (fVar15 + local_c8._4_4_) * 0.5;
                      local_d4 = (fVar14 + (float)local_c8) * 0.5;
                      local_cc = (fVar16 + local_c0) * 0.5;
                      uVar9 = FUN_016e0e30(fVar13,&local_d4,1);
                      if ((uVar9 & 1) == 0) {
                        fStack_dc = (local_80._4_4_ + local_c8._4_4_) * 0.5;
                        local_e0 = ((float)local_80 + (float)local_c8) * 0.5;
                        local_d8 = ((float)local_78 + local_c0) * 0.5;
                        uVar6 = FUN_016e0e30(fVar12 * 1.05,&local_e0,1);
                        uVar10 = uVar6 ^ 1;
                        if (((uVar6 & 1) != 0) || ((param_2 & 1) != 0)) goto LAB_023fee5c;
                        lVar7 = *(long *)PTR_DAT_04bb4f78 + 0x20 + (ulong)(uint)*pbVar1 * 0x740;
                        if (7 < *pbVar1) {
                          lVar7 = *(long *)PTR_DAT_04bb4f78 + 0x20;
                        }
                        *(undefined8 *)(lVar7 + 0x420) = 0x100000000;
                        *(undefined4 *)(lVar7 + 0x4c0) = 0;
                        FUN_016e23f8(&local_c8,fVar12 * 0.98,&local_80);
                        local_e4[0] = *pbVar1;
                        if (7 < local_e4[0]) {
                          local_e4[0] = 0xff;
                        }
                        local_100 = local_b8;
                        uStack_fc = local_b4;
                        puVar2 = PTR_DAT_04bbc1a0 + 0x10;
                        local_f0 = local_a8;
                        uStack_ec = (undefined4)local_a4;
                        local_f8 = &DAT_048f9750;
                        puStack_108 = &DAT_048f9750;
                        local_110 = puVar2;
                        uVar9 = FUN_02300df0(lVar7 + 0x4c8,local_e4,&local_110);
                        if ((uVar9 & 1) != 0) {
                          if ((DAT_0537d558 == (long *)0x0) ||
                             (*(byte *)(*DAT_0537d558 + 0x476) < 2)) {
                            local_110 = puVar2;
                            FUN_023ff254(param_1,&local_80);
                            uVar10 = 1;
                          }
                          else {
                            local_110 = puVar2;
                            FUN_023ff0c8(param_1,&local_80);
                            uVar10 = 1;
                          }
                          goto LAB_023fee5c;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  else {
    local_c8 = CONCAT44(local_c8._4_4_,4);
    puVar3 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar4 * 8);
    if (0xff < (uint)(int)sVar4) {
      puVar3 = (uint *)PTR_DAT_04bc39f8;
    }
    if ((*puVar3 >> 4 & 1) == 0) goto LAB_023feab4;
  }
  uVar10 = 0;
LAB_023fee5c:
  return uVar10 & 1;
}

