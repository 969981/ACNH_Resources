
/* WARNING: Removing unreachable block (ram,0x02b26be8) */
/* WARNING: Removing unreachable block (ram,0x02b26bf8) */
/* WARNING: Removing unreachable block (ram,0x02b26c04) */
/* WARNING: Removing unreachable block (ram,0x02b26f18) */
/* WARNING: Removing unreachable block (ram,0x02b26f28) */
/* WARNING: Removing unreachable block (ram,0x02b26f34) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

bool FUN_02b26110(long param_1,long param_2)

{
  long lVar1;
  undefined *puVar2;
  undefined *puVar3;
  undefined *puVar4;
  uint *puVar5;
  short sVar6;
  int iVar7;
  int iVar8;
  uint uVar9;
  bool bVar10;
  undefined *puVar11;
  bool bVar12;
  bool bVar13;
  int iVar14;
  ulong uVar15;
  ulong uVar16;
  long lVar17;
  uint uVar18;
  undefined4 *puVar19;
  undefined8 *puVar20;
  int iVar21;
  undefined *puVar22;
  int iVar23;
  ulong uVar24;
  float fVar25;
  float fVar26;
  float fVar27;
  undefined4 uVar28;
  float fVar29;
  float fVar30;
  float fVar31;
  undefined *local_118;
  int local_110;
  int iStack_10c;
  int local_104;
  undefined **local_100;
  undefined **local_f8;
  undefined *local_f0;
  int local_e8;
  int local_e4;
  undefined8 local_e0;
  undefined *local_d8;
  int local_d0;
  int iStack_cc;
  undefined *local_c8;
  int local_c0;
  int iStack_bc;
  ulong local_b8;
  undefined4 local_b0;
  undefined4 local_ac;
  
  puVar11 = PTR_DAT_04bb27c8;
  lVar1 = param_1 + 0x20;
  uVar16 = 0;
  puVar2 = PTR_DAT_04bb2018 + 0x10;
  puVar3 = PTR_DAT_04bbc1a0 + 0x10;
  puVar4 = PTR_DAT_04bb2010 + 0x10;
  bVar13 = true;
  puVar22 = PTR_DAT_04bb2018;
  do {
    FUN_02b274d8(param_1,param_2 + 0xc);
    local_104 = 4;
    puVar19 = (undefined4 *)PTR_DAT_04bb2ce8;
    if (*(uint *)(param_1 + 0xc) < 4) {
      puVar19 = (undefined4 *)(&PTR_DAT_04aa1c08)[(int)*(uint *)(param_1 + 0xc)];
    }
    uVar24 = 0;
    fVar25 = (float)NEON_ucvtf(*puVar19);
    fVar25 = fVar25 * 1.4629181e-09;
    do {
      fVar26 = DAT_0417fa64;
      if (uVar24 == 0) {
        fVar29 = sinf(fVar25);
        fVar27 = cosf(fVar25);
        fVar30 = -(fVar29 * fVar26) - fVar27;
        fVar29 = fVar26 * fVar27 - fVar29;
        fVar26 = 0.5;
        if (fVar30 < 0.0) {
          fVar26 = -0.5;
        }
        fVar27 = 0.5;
        if (fVar29 < 0.0) {
          fVar27 = -0.5;
        }
        local_110 = *(int *)(param_1 + 0x18) + (int)(fVar30 + fVar26);
        iStack_10c = *(int *)(param_1 + 0x1c) + (int)(fVar29 + fVar27);
        lVar17 = *(long *)puVar11;
        local_e0 = (undefined *)CONCAT44(local_e0._4_4_,(float)local_110 * 10.0 + 5.0);
        local_d8 = (undefined *)CONCAT44(local_d8._4_4_,(float)iStack_10c * 10.0 + 5.0);
        local_118 = puVar2;
        if ((lVar17 == 0) || (*(long *)(lVar17 + 0xa8) == 0)) {
          uVar28 = 0xc3fa0000;
        }
        else if (*(char *)(lVar17 + 0x11c8) == '\0') {
          local_b8 = local_b8 & 0xffffffffffffff00;
          sVar6 = *(short *)PTR_DAT_04bb6298;
          if (sVar6 == -1) {
            uVar28 = 7;
          }
          else {
            local_100 = (undefined **)CONCAT44(local_100._4_4_,1);
            puVar5 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar6 * 8);
            if (0xff < (uint)(int)sVar6) {
              puVar5 = (uint *)PTR_DAT_04bc39f8;
            }
            uVar28 = 7;
            if ((*puVar5 & 2) != 0) {
              uVar28 = 5;
            }
          }
          local_100 = (undefined **)CONCAT44(local_100._4_4_,uVar28);
          uVar28 = FUN_00962700(*(long *)(lVar17 + 0xa8),&local_e0,&local_100,1,&local_b8);
        }
        else {
          uVar28 = 0xc3fa0000;
        }
        *(undefined4 *)(param_1 + 0x738) = uVar28;
        uVar15 = FUN_01317ff0(&local_118,3);
        if (((uVar15 & 1) == 0) && (0 < local_104)) {
          local_104 = 0;
        }
        fVar27 = (float)iStack_10c * 10.0 + 2.5;
        fVar26 = (float)local_110 * 10.0 + 2.5;
        fVar30 = (float)iStack_10c * 10.0 + 10.0 + -2.5;
        fVar29 = (float)local_110 * 10.0 + 10.0 + -2.5;
        local_c0 = (int)((float)(int)fVar26 / 5.0) - (uint)(fVar26 < 0.0);
        iStack_bc = (int)((float)(int)fVar27 / 5.0) - (uint)(fVar27 < 0.0);
        iVar21 = (int)((float)(int)fVar29 / 5.0) - (uint)(fVar29 < 0.0);
        iVar14 = (int)((float)(int)fVar30 / 5.0) - (uint)(fVar30 < 0.0);
        local_d0 = local_c0;
        if (iVar21 <= local_c0) {
          local_d0 = iVar21;
        }
        if (local_c0 <= iVar21) {
          local_c0 = iVar21;
        }
        iStack_cc = iStack_bc;
        if (iVar14 <= iStack_bc) {
          iStack_cc = iVar14;
        }
        if (iStack_bc <= iVar14) {
          iStack_bc = iVar14;
        }
        local_e0 = puVar3;
        local_d8 = puVar4;
        local_c8 = puVar4;
        if ((((*(long *)puVar11 == 0) || (lVar17 = *(long *)(*(long *)puVar11 + 0xa8), lVar17 == 0))
            || (uVar15 = FUN_00971f80(lVar17,&local_e0,1), (uVar15 & 1) == 0)) && (0 < local_104)) {
          local_104 = 0;
        }
        uVar15 = FUN_02b29830(param_1,&local_118);
        fVar26 = DAT_0417fa6c;
        if (((uVar15 & 1) == 0) && (0 < local_104)) {
          local_104 = 0;
        }
        local_e0 = (undefined *)((ulong)local_e0 & 0xffffffff00000000);
        iVar21 = 0;
        if (*(long *)(*(long *)PTR_DAT_04bb27a8 + 0x1f8) != 0) {
          lVar17 = *(long *)(*(long *)(*(long *)PTR_DAT_04bb27a8 + 0x1f8) + 0xb0);
          iVar21 = 0;
          if (lVar17 != 0) {
            uVar18 = local_110 - *(int *)(lVar17 + 0x28);
            if ((uVar18 < *(uint *)(lVar17 + 0x18)) &&
               (uVar9 = iStack_10c - *(int *)(lVar17 + 0x2c), uVar9 < *(uint *)(lVar17 + 0x1c))) {
              uVar18 = uVar18 + *(uint *)(lVar17 + 0x18) * uVar9;
LAB_02b26c94:
              if (*(uint *)(lVar17 + 0x30) <= uVar18) {
                uVar18 = 0;
              }
              puVar20 = (undefined8 *)(*(long *)(lVar17 + 0x38) + (long)(int)uVar18 * 0x68);
            }
            else {
              if (*(char *)(lVar17 + 0x88) != '\0') {
                uVar18 = local_110 - *(int *)(lVar17 + 0x98);
                if (uVar18 < *(uint *)(lVar17 + 0xa0)) {
                  uVar9 = iStack_10c - *(int *)(lVar17 + 0x9c);
                  puVar20 = &DAT_051a50f0;
                  if (uVar9 < *(uint *)(lVar17 + 0xa4)) {
                    uVar18 = uVar18 + *(uint *)(lVar17 + 0xa0) * uVar9 + *(int *)(lVar17 + 0x8c);
                    goto LAB_02b26c94;
                  }
                  goto LAB_02b26d1c;
                }
              }
              puVar20 = &DAT_051a50f0;
            }
LAB_02b26d1c:
            iVar21 = (int)*(char *)(puVar20 + 2);
          }
        }
        local_100 = (undefined **)CONCAT44(local_100._4_4_,iVar21);
        if ((DAT_05629b90 < iVar21) && (1 < local_104)) {
          local_104 = 1;
        }
        fVar27 = sinf(fVar25);
        fVar29 = cosf(fVar25);
        local_118 = puVar22 + 0x10;
        fVar30 = -(fVar27 * fVar26) + fVar29 * 0.0;
        fVar26 = fVar26 * fVar29 + fVar27 * 0.0;
        fVar27 = 0.5;
        if (fVar30 < 0.0) {
          fVar27 = -0.5;
        }
        fVar29 = 0.5;
        if (fVar26 < 0.0) {
          fVar29 = -0.5;
        }
        local_110 = *(int *)(param_1 + 0x18) + (int)(fVar30 + fVar27);
        iStack_10c = *(int *)(param_1 + 0x1c) + (int)(fVar26 + fVar29);
        uVar15 = FUN_01317ff0(&local_118,3);
        if (((uVar15 & 1) == 0) && (0 < local_104)) {
          local_104 = 0;
        }
        local_e0 = PTR_DAT_04bbc1a0 + 0x10;
        local_d8 = PTR_DAT_04bb2010 + 0x10;
        fVar27 = (float)iStack_10c * 10.0 + 2.5;
        fVar26 = (float)local_110 * 10.0 + 2.5;
        fVar30 = (float)iStack_10c * 10.0 + 10.0 + -2.5;
        fVar29 = (float)local_110 * 10.0 + 10.0 + -2.5;
        local_c0 = (int)((float)(int)fVar26 / 5.0) - (uint)(fVar26 < 0.0);
        iStack_bc = (int)((float)(int)fVar27 / 5.0) - (uint)(fVar27 < 0.0);
        iVar21 = (int)((float)(int)fVar29 / 5.0) - (uint)(fVar29 < 0.0);
        iVar14 = (int)((float)(int)fVar30 / 5.0) - (uint)(fVar30 < 0.0);
        local_d0 = local_c0;
        if (iVar21 <= local_c0) {
          local_d0 = iVar21;
        }
        if (local_c0 <= iVar21) {
          local_c0 = iVar21;
        }
        iStack_cc = iStack_bc;
        if (iVar14 <= iStack_bc) {
          iStack_cc = iVar14;
        }
        if (iStack_bc <= iVar14) {
          iStack_bc = iVar14;
        }
        local_c8 = local_d8;
        if ((((*(long *)puVar11 == 0) || (lVar17 = *(long *)(*(long *)puVar11 + 0xa8), lVar17 == 0))
            || (uVar15 = FUN_00971f80(lVar17,&local_e0,1), (uVar15 & 1) == 0)) && (0 < local_104)) {
          local_104 = 0;
        }
        uVar15 = FUN_02b29830(param_1,&local_118);
        if (((uVar15 & 1) == 0) && (0 < local_104)) {
          local_104 = 0;
        }
        local_e0 = (undefined *)((ulong)local_e0 & 0xffffffff00000000);
        iVar21 = 0;
        if (*(long *)(*(long *)PTR_DAT_04bb27a8 + 0x1f8) != 0) {
          lVar17 = *(long *)(*(long *)(*(long *)PTR_DAT_04bb27a8 + 0x1f8) + 0xb0);
          iVar21 = 0;
          if (lVar17 != 0) {
            uVar18 = local_110 - *(int *)(lVar17 + 0x28);
            if ((uVar18 < *(uint *)(lVar17 + 0x18)) &&
               (uVar9 = iStack_10c - *(int *)(lVar17 + 0x2c), uVar9 < *(uint *)(lVar17 + 0x1c))) {
              uVar18 = uVar18 + *(uint *)(lVar17 + 0x18) * uVar9;
LAB_02b26fc4:
              if (*(uint *)(lVar17 + 0x30) <= uVar18) {
                uVar18 = 0;
              }
              puVar20 = (undefined8 *)(*(long *)(lVar17 + 0x38) + (long)(int)uVar18 * 0x68);
            }
            else {
              if (*(char *)(lVar17 + 0x88) != '\0') {
                uVar18 = local_110 - *(int *)(lVar17 + 0x98);
                if (uVar18 < *(uint *)(lVar17 + 0xa0)) {
                  uVar9 = iStack_10c - *(int *)(lVar17 + 0x9c);
                  puVar20 = &DAT_051a50f0;
                  if (uVar9 < *(uint *)(lVar17 + 0xa4)) {
                    uVar18 = uVar18 + *(uint *)(lVar17 + 0xa0) * uVar9 + *(int *)(lVar17 + 0x8c);
                    goto LAB_02b26fc4;
                  }
                  goto LAB_02b26fe8;
                }
              }
              puVar20 = &DAT_051a50f0;
            }
LAB_02b26fe8:
            iVar21 = (int)*(char *)(puVar20 + 2);
          }
        }
        local_100 = (undefined **)CONCAT44(local_100._4_4_,iVar21);
        if ((DAT_05629b90 < iVar21) && (1 < local_104)) {
          local_104 = 1;
        }
      }
      else {
        lVar17 = 0;
        bVar12 = true;
        do {
          bVar10 = bVar12;
          fVar31 = *(float *)(&DAT_0417fa60 + lVar17 * 8 + uVar24 * 0x10);
          fVar30 = *(float *)((long)(&DAT_0417fa60 + lVar17 * 8 + uVar24 * 0x10) + 4);
          fVar26 = sinf(fVar25);
          fVar27 = cosf(fVar25);
          fVar29 = -(fVar26 * fVar30) + fVar31 * fVar27;
          local_118 = puVar22 + 0x10;
          fVar26 = fVar30 * fVar27 + fVar31 * fVar26;
          fVar27 = 0.5;
          if (fVar29 < 0.0) {
            fVar27 = -0.5;
          }
          fVar30 = 0.5;
          if (fVar26 < 0.0) {
            fVar30 = -0.5;
          }
          local_110 = *(int *)(param_1 + 0x18) + (int)(fVar29 + fVar27);
          iStack_10c = *(int *)(param_1 + 0x1c) + (int)(fVar26 + fVar30);
          if (uVar24 < 4) {
            if (uVar24 == 1 && bVar10) {
              fVar29 = (float)local_110 * 10.0 + 2.5;
              fVar30 = (float)iStack_10c * 10.0 + 2.5;
              fVar26 = (float)local_110 * 10.0 + 10.0 + -2.5;
              fVar27 = (float)iStack_10c * 10.0 + 10.0 + -2.5;
              iVar7 = (int)((float)(int)fVar29 / 5.0) - (uint)(fVar29 < 0.0);
              iVar21 = (int)((float)(int)fVar30 / 5.0) - (uint)(fVar30 < 0.0);
              iVar8 = (int)((float)(int)fVar26 / 5.0) - (uint)(fVar26 < 0.0);
              iVar14 = iVar7;
              if (iVar8 <= iVar7) {
                iVar14 = iVar8;
              }
              if (iVar7 <= iVar8) {
                iVar7 = iVar8;
              }
              iVar23 = (int)((float)(int)fVar27 / 5.0) - (uint)(fVar27 < 0.0);
              iVar8 = iVar21;
              if (iVar21 <= iVar23) {
                iVar8 = iVar23;
              }
              if (iVar23 <= iVar21) {
                iVar21 = iVar23;
              }
              if (iVar8 + 1 != iVar21) {
                lVar17 = *(long *)puVar11;
                iVar23 = iVar14;
                do {
                  local_e0 = (undefined *)CONCAT44(local_e0._4_4_,(float)iVar23 * 5.0 + 2.5);
                  local_d8 = (undefined *)CONCAT44(local_d8._4_4_,(float)iVar21 * 5.0 + 2.5);
                  if (((lVar17 == 0) || (*(long *)(lVar17 + 0xa8) == 0)) ||
                     (*(char *)(lVar17 + 0x11c8) != '\0')) {
                    fVar26 = -500.0;
                  }
                  else {
                    local_b8 = local_b8 & 0xffffffffffffff00;
                    sVar6 = *(short *)PTR_DAT_04bb6298;
                    if (sVar6 == -1) {
                      uVar28 = 7;
                    }
                    else {
                      local_100 = (undefined **)CONCAT44(local_100._4_4_,1);
                      puVar5 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar6 * 8);
                      if (0xff < (uint)(int)sVar6) {
                        puVar5 = (uint *)PTR_DAT_04bc39f8;
                      }
                      uVar28 = 7;
                      if ((*puVar5 & 2) != 0) {
                        uVar28 = 5;
                      }
                    }
                    local_100 = (undefined **)CONCAT44(local_100._4_4_,uVar28);
                    fVar26 = (float)FUN_00962700(*(long *)(lVar17 + 0xa8),&local_e0,&local_100,1,
                                                 &local_b8);
                    lVar17 = *(long *)puVar11;
                  }
                  if (fVar26 < *(float *)(param_1 + 0x738)) goto LAB_02b263cc;
                  if (iVar23 < iVar7) {
                    iVar23 = iVar23 + 1;
                  }
                  else {
                    iVar21 = iVar21 + 1;
                    iVar23 = iVar14;
                  }
                } while ((iVar14 != iVar23) || (iVar8 + 1 != iVar21));
              }
              if (0 < local_104) {
                local_104 = 0;
              }
LAB_02b263cc:
              puVar22 = PTR_DAT_04bb2018;
              lVar17 = *(long *)puVar11;
              local_d8 = (undefined *)CONCAT44(local_d8._4_4_,(float)iStack_10c * 10.0 + 5.0);
              local_e0 = (undefined *)CONCAT44(local_e0._4_4_,(float)local_110 * 10.0 + 5.0);
              if ((lVar17 == 0) || (*(long *)(lVar17 + 0xa8) == 0)) {
                uVar28 = 0xc3fa0000;
              }
              else if (*(char *)(lVar17 + 0x11c8) == '\0') {
                local_b8 = local_b8 & 0xffffffffffffff00;
                sVar6 = *(short *)PTR_DAT_04bb6298;
                if (sVar6 == -1) {
                  uVar28 = 7;
                }
                else {
                  local_100 = (undefined **)CONCAT44(local_100._4_4_,1);
                  puVar5 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar6 * 8);
                  if (0xff < (uint)(int)sVar6) {
                    puVar5 = (uint *)PTR_DAT_04bc39f8;
                  }
                  uVar28 = 7;
                  if ((*puVar5 & 2) != 0) {
                    uVar28 = 5;
                  }
                }
                local_100 = (undefined **)CONCAT44(local_100._4_4_,uVar28);
                uVar28 = FUN_00962700(*(long *)(lVar17 + 0xa8),&local_e0,&local_100,1,&local_b8);
              }
              else {
                uVar28 = 0xc3fa0000;
              }
              *(undefined4 *)(param_1 + 0x738) = uVar28;
            }
            uVar15 = FUN_01317ff0(&local_118,3);
            if ((uVar15 & 1) == 0) {
LAB_02b265a0:
              uVar15 = FUN_02b29830(param_1,&local_118);
              if ((uVar15 & 1) == 0) {
                local_e0 = PTR_DAT_04bbc1a0 + 0x10;
                local_f0 = PTR_DAT_04bb2010 + 0x10;
                fVar27 = (float)iStack_10c * 10.0 + 2.5;
                fVar26 = (float)local_110 * 10.0 + 2.5;
                fVar30 = (float)iStack_10c * 10.0 + 10.0 + -2.5;
                fVar29 = (float)local_110 * 10.0 + 10.0 + -2.5;
                local_c0 = (int)((float)(int)fVar26 / 5.0) - (uint)(fVar26 < 0.0);
                iStack_bc = (int)((float)(int)fVar27 / 5.0) - (uint)(fVar27 < 0.0);
                iVar14 = (int)((float)(int)fVar29 / 5.0) - (uint)(fVar29 < 0.0);
                iVar21 = local_c0;
                if (iVar14 <= local_c0) {
                  iVar21 = iVar14;
                }
                if (local_c0 <= iVar14) {
                  local_c0 = iVar14;
                }
                iVar14 = (int)((float)(int)fVar30 / 5.0) - (uint)(fVar30 < 0.0);
                local_e4 = iStack_bc;
                if (iVar14 <= iStack_bc) {
                  local_e4 = iVar14;
                }
                if (iStack_bc <= iVar14) {
                  iStack_bc = iVar14;
                }
                iVar14 = iStack_bc + 1;
                local_100 = &local_d8;
                local_f8 = &local_c8;
                local_e8 = iVar21;
                local_d8 = local_f0;
                local_d0 = iVar21;
                iStack_cc = local_e4;
                local_c8 = local_f0;
                while (iVar14 != local_e4) {
                  do {
                    local_b8 = 0;
                    local_b0 = 0;
                    local_ac = 5;
                    local_b8 = 0x20;
                    local_ac = 5;
                    local_b0 = 0;
                    lVar17 = *(long *)puVar11;
                    if (((lVar17 != 0) && (*(long *)(lVar17 + 0xa8) != 0)) &&
                       (uVar15 = FUN_00949898(lVar17 + 0x28,&local_f0,&local_b8), (uVar15 & 1) != 0)
                       ) goto joined_r0x02b26468;
                    local_b8 = 0;
                    local_b0 = 0;
                    local_ac = 0x2e;
                    local_ac = 0x2e;
                    local_b0 = 0;
                    local_b8 = 0x400000000000;
                    lVar17 = *(long *)puVar11;
                    if (((lVar17 != 0) && (*(long *)(lVar17 + 0xa8) != 0)) &&
                       (uVar15 = FUN_00949898(lVar17 + 0x28,&local_f0,&local_b8), (uVar15 & 1) != 0)
                       ) goto joined_r0x02b26468;
                    if (local_e8 < *(int *)(local_f8 + 1)) {
                      local_e8 = local_e8 + 1;
                    }
                    else {
                      local_e4 = local_e4 + 1;
                      local_e8 = *(int *)(local_100 + 1);
                    }
                  } while (iVar21 != local_e8);
                }
                uVar15 = FUN_02b29a80(&local_118);
                if ((((uVar15 & 1) != 0) || (uVar15 = FUN_02b29ca0(&local_118), (uVar15 & 1) != 0))
                   || (fVar26 = (float)FUN_02b29fb0(param_1,&local_118), fVar26 < 10.0))
                goto joined_r0x02b26468;
                if (0 < local_104) goto LAB_02b267d0;
              }
            }
            else {
              local_e0 = PTR_DAT_04bbc1a0 + 0x10;
              local_d8 = PTR_DAT_04bb2010 + 0x10;
              fVar27 = (float)iStack_10c * 10.0 + 2.5;
              fVar26 = (float)local_110 * 10.0 + 2.5;
              fVar30 = (float)iStack_10c * 10.0 + 10.0 + -2.5;
              fVar29 = (float)local_110 * 10.0 + 10.0 + -2.5;
              local_c0 = (int)((float)(int)fVar26 / 5.0) - (uint)(fVar26 < 0.0);
              iStack_bc = (int)((float)(int)fVar27 / 5.0) - (uint)(fVar27 < 0.0);
              iVar21 = (int)((float)(int)fVar29 / 5.0) - (uint)(fVar29 < 0.0);
              iVar14 = (int)((float)(int)fVar30 / 5.0) - (uint)(fVar30 < 0.0);
              local_d0 = local_c0;
              if (iVar21 <= local_c0) {
                local_d0 = iVar21;
              }
              if (local_c0 <= iVar21) {
                local_c0 = iVar21;
              }
              iStack_cc = iStack_bc;
              if (iVar14 <= iStack_bc) {
                iStack_cc = iVar14;
              }
              if (iStack_bc <= iVar14) {
                iStack_bc = iVar14;
              }
              local_c8 = local_d8;
              if (((*(long *)puVar11 != 0) &&
                  (lVar17 = *(long *)(*(long *)puVar11 + 0xa8), lVar17 != 0)) &&
                 (uVar15 = FUN_00971f80(lVar17,&local_e0,1), (uVar15 & 1) != 0)) goto LAB_02b265a0;
              if (local_104 < 1) goto LAB_02b26264;
LAB_02b267d0:
              local_104 = 0;
            }
          }
          else {
            uVar15 = FUN_02b29830(param_1,&local_118);
            if ((uVar15 & 1) == 0) {
              uVar15 = FUN_02b29ca0(&local_118);
              if ((((uVar15 & 1) != 0) || (uVar15 = FUN_02b29a80(&local_118), (uVar15 & 1) != 0)) ||
                 ((uVar15 = FUN_02b29ca0(&local_118), (uVar15 & 1) != 0 ||
                  (fVar26 = (float)FUN_02b29fb0(param_1,&local_118), fVar26 < 10.0)))) {
joined_r0x02b26468:
                if (2 < local_104) {
                  local_104 = 2;
                }
              }
              else if (3 < local_104) {
                local_104 = 3;
              }
            }
          }
LAB_02b26264:
          lVar17 = 1;
          bVar12 = false;
        } while (bVar10);
      }
      iVar21 = local_104;
      uVar24 = uVar24 + 1;
    } while (uVar24 != 5);
    uVar28 = 3;
    switch(local_104) {
    case 1:
      uVar28 = 2;
    case 0:
switchD_02b27070_caseD_0:
      *(undefined4 *)(param_1 + 0x73c + uVar16 * 4) = uVar28;
      break;
    case 2:
      goto switchD_02b27070_caseD_2;
    default:
      *(undefined4 *)(param_1 + 0x73c + uVar16 * 4) = 0;
    case 4:
      sVar6 = *(short *)PTR_DAT_04bb6298;
      if (sVar6 != -1) {
        local_e0 = (undefined *)CONCAT44(local_e0._4_4_,3);
        puVar5 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar6 * 8);
        if (0xff < (uint)(int)sVar6) {
          puVar5 = (uint *)PTR_DAT_04bc39f8;
        }
        if ((*puVar5 >> 3 & 1) != 0) {
          iVar14 = FUN_02b1e180(param_1,lVar1);
          local_e0 = (undefined *)CONCAT44(local_e0._4_4_,iVar14);
          if (iVar14 != 0) {
switchD_02b27070_caseD_2:
            uVar28 = 1;
            goto switchD_02b27070_caseD_0;
          }
        }
      }
      iVar14 = FUN_02b1d200(param_1,lVar1,0);
      local_e0 = (undefined *)CONCAT44(local_e0._4_4_,iVar14);
      if ((iVar14 != 0) && (iVar14 != 4)) {
LAB_02b27160:
        uVar28 = 1;
        puVar22 = PTR_DAT_04bb2018;
        goto switchD_02b27070_caseD_0;
      }
      local_e0 = (undefined *)((ulong)local_e0._4_4_ << 0x20);
      uVar24 = FUN_02b1dc50(param_1,&local_e0,lVar1,0);
      if ((uVar24 & 1) != 0) goto LAB_02b27160;
      iVar14 = FUN_02b1e490(param_1,lVar1,param_2 + 0x28);
      local_e0 = (undefined *)CONCAT44(local_e0._4_4_,iVar14);
      if (iVar14 != 0) goto LAB_02b27160;
      puVar22 = PTR_DAT_04bb2018;
      if (iVar21 == 4) {
        return bVar13;
      }
    }
    bVar13 = uVar16 < 7;
    uVar16 = uVar16 + 1;
    if (uVar16 == 8) {
      return bVar13;
    }
  } while( true );
}

