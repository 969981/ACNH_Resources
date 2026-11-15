
undefined8
FUN_022b6bb0(undefined4 param_1,undefined8 *param_2,undefined4 *param_3,byte *param_4,
            undefined8 *param_5,uint param_6,long param_7,uint param_8,undefined4 param_9,
            byte param_10)

{
  undefined8 *puVar1;
  int *piVar2;
  uint *puVar3;
  undefined4 uVar4;
  undefined *puVar5;
  short sVar6;
  short sVar7;
  undefined4 *puVar8;
  bool bVar9;
  bool bVar10;
  undefined1 uVar11;
  int iVar12;
  int iVar13;
  ulong uVar14;
  ulong uVar15;
  float *pfVar16;
  byte bVar17;
  short sVar18;
  uint uVar19;
  undefined8 *puVar20;
  int iVar21;
  uint uVar22;
  ulong uVar23;
  long lVar24;
  float fVar25;
  ulong local_158;
  ulong local_138;
  float local_130;
  float local_12c;
  float local_128;
  float afStack_124 [2];
  float local_11c;
  undefined **local_118;
  undefined8 local_110;
  undefined *local_108;
  undefined8 local_100;
  undefined *puStack_f8;
  undefined8 local_f0;
  undefined2 local_e8;
  undefined4 local_e6;
  undefined1 local_e2;
  undefined8 local_e0;
  undefined1 local_d8;
  undefined8 local_d4;
  undefined2 local_cc;
  undefined4 local_c4;
  undefined8 local_c0;
  short local_b8;
  short local_b6;
  short local_b0;
  undefined1 local_ae;
  byte local_ad;
  undefined2 local_ab;
  undefined1 local_a7;
  undefined1 local_a6;
  undefined4 local_a4;
  undefined4 local_a0 [2];
  undefined1 auStack_98 [8];
  undefined8 local_90;
  undefined2 local_74;
  undefined1 local_72;
  
  local_ae = 0xe;
  local_c0 = *param_5;
  local_a4 = 0;
  sVar18 = (short)param_6;
  local_ab = 0;
  local_b8 = (short)*(undefined4 *)(param_7 + 8);
  local_ad = *param_4;
  local_b6 = (short)*(undefined4 *)(param_7 + 0xc);
  if (7 < local_ad) {
    local_ad = 0xff;
  }
  local_c4 = param_9;
  local_b0 = sVar18;
  if (((DAT_0547a4d0 & 1) == 0) && (iVar13 = __cxa_guard_acquire(&DAT_0547a4d0), iVar13 != 0)) {
    DAT_0547a4c8 = 0;
    DAT_0547a4c0 = 0;
    __cxa_guard_release(&DAT_0547a4d0);
  }
  if (((DAT_0547a4e8 & 1) == 0) && (iVar13 = __cxa_guard_acquire(&DAT_0547a4e8), iVar13 != 0)) {
    DAT_0547a4e0 = 0;
    DAT_0547a4d8 = 0;
    __cxa_guard_release(&DAT_0547a4e8);
  }
  DAT_0547a4c8 = 0;
  DAT_0547a4c0 = 0;
  DAT_0547a4d8 = 0;
  DAT_0547a4e0 = 0;
  uVar14 = FUN_0122a4e0(param_6);
  local_158 = 0;
  if ((uVar14 & 1) == 0) {
    bVar10 = DAT_055c1b60 == &DAT_055c1b58;
    puVar20 = DAT_055c1b60 + -8;
    if (((param_6 & 0xffff) != 0) && (puVar20 != &DAT_055c1b18)) {
      puVar20 = DAT_055c1b60;
      do {
        puVar20 = (undefined8 *)puVar20[1];
        param_6 = param_6 - 1;
        bVar10 = puVar20 == &DAT_055c1b58;
      } while (!bVar10 && (param_6 & 0xffff) != 0);
      puVar20 = puVar20 + -8;
    }
    puVar1 = &DAT_055c04a0;
    if (!bVar10) {
      puVar1 = puVar20;
    }
    local_158 = 0;
    do {
      uVar19 = (uint)local_158;
      piVar2 = (int *)((long)(PTR_DAT_04bbbf90 + 8) + local_158 * 4);
      if (0x38 < uVar19) {
        piVar2 = (int *)(PTR_DAT_04bbbf90 + 8);
      }
      if (*piVar2 == *(int *)(puVar1 + 7)) goto LAB_022b6d34;
      uVar22 = 0x39;
      if ((int)uVar19 < 0x39) {
        uVar22 = uVar19 + 1;
      }
      local_158 = (ulong)uVar22;
    } while (uVar22 != 0x39);
    local_158 = 0;
  }
LAB_022b6d34:
  local_72 = 0;
  local_74 = 0;
  if (0 < (int)param_8) {
    bVar10 = false;
    iVar13 = 0;
    uVar19 = (uint)local_158;
    puVar8 = (undefined4 *)((long)(PTR_DAT_04bbbf90 + 8) + local_158 * 4);
    if (0x38 < uVar19) {
      puVar8 = (undefined4 *)(PTR_DAT_04bbbf90 + 8);
    }
    do {
      uVar23 = 0;
      do {
        if ((*(char *)((long)&local_74 + uVar23) == '\0') &&
           ((local_a6 = (undefined1)param_3[uVar23], iVar13 != 7 || (uVar23 == 2)))) {
          if ((uVar14 & 1) == 0) {
            local_110 = (undefined **)CONCAT44(*puVar8,uVar19);
            uVar11 = FUN_017baf44();
            uVar15 = CONCAT71(local_108._1_7_,uVar11);
          }
          else {
            local_110 = (undefined **)((ulong)local_110 & 0xffffffff00000000);
            if ((DAT_05aed670 == 0) || (*(long *)(DAT_05aed670 + 0x330) == 0)) {
              puVar20 = &DAT_055c04a0;
            }
            else {
              puVar20 = (undefined8 *)
                        (**(code **)(*DAT_05aed668 + 0x18))
                                  (DAT_05aed668,*(undefined4 *)(DAT_05aed670 + 0x338));
              iVar12 = FUN_006bd550(*puVar20,0);
              puVar20 = &DAT_055cdaf8;
              if (iVar12 != 0x758f7eaf) {
                puVar20 = &DAT_055c04a0;
              }
            }
            local_110 = (undefined **)CONCAT44(*(undefined4 *)(puVar20 + 7),(uint)local_110);
            uVar11 = FUN_017baf44();
            uVar15 = CONCAT71(local_108._1_7_,uVar11);
          }
          local_118 = &PTR_LAB_0492e760;
          local_108 = (undefined *)(uVar15 & 0xffffffffffffff01);
          uVar15 = FUN_022b76c0(param_1,param_2[uVar23],&local_c4,&local_118,param_7,
                                uVar23 & 0xffffffff,iVar13);
          sVar7 = local_b6;
          sVar6 = local_b8;
          if ((uVar15 & 1) != 0) {
            lVar24 = param_2[uVar23];
            puVar20 = (undefined8 *)(lVar24 + 0x14);
            *puVar20 = 0xfffe;
            FUN_0277d4ac(puVar20);
            *(undefined8 *)(lVar24 + 0x1c) = 0xfffe;
            FUN_0277d4ac((undefined8 *)(lVar24 + 0x1c));
            *(undefined8 *)(lVar24 + 0x48) = 0;
            *(undefined8 *)(lVar24 + 0x50) = 0xe00000000;
            *(undefined4 *)(lVar24 + 0x58) = 0;
            *(undefined8 *)(lVar24 + 0x2c) = 0;
            *(undefined8 *)(lVar24 + 0x34) = 0;
            *(undefined2 *)puVar20 = *(undefined2 *)param_5;
            *(undefined1 *)(lVar24 + 0x16) = *(undefined1 *)((long)param_5 + 2);
            *(undefined1 *)(lVar24 + 0x17) = *(undefined1 *)((long)param_5 + 3);
            uVar4 = *(undefined4 *)((long)param_5 + 4);
            *(int *)(lVar24 + 0x48) = (int)sVar6;
            *(int *)(lVar24 + 0x4c) = (int)sVar7;
            *(undefined4 *)(lVar24 + 0x50) = 0;
            *(undefined4 *)(lVar24 + 0x18) = uVar4;
            FUN_01392d64(param_2[uVar23]);
            bVar10 = true;
            *(undefined1 *)((long)&local_74 + uVar23) = 1;
          }
        }
        uVar23 = uVar23 + 1;
      } while (param_8 != uVar23);
      iVar13 = iVar13 + 1;
    } while (iVar13 != 8);
    if (bVar10) {
      if ((uVar14 & 1) == 0) {
        if ((char)local_74 == '\0') {
          local_a6 = (undefined1)*param_3;
          local_110 = (undefined **)CONCAT44(*puVar8,uVar19);
          uVar11 = FUN_017baf44();
          local_108 = (undefined *)(CONCAT71(local_108._1_7_,uVar11) & 0xffffffffffffff01);
          local_118 = (undefined **)(PTR_DAT_04bb6268 + 0x10);
          uVar14 = FUN_022b76c0(param_1,*param_2,&local_c4,&local_118,param_7,0,7);
          if ((uVar14 & 1) != 0) goto LAB_022b70bc;
        }
        if (local_74._1_1_ != '\0') goto LAB_022b7220;
        local_a6 = (undefined1)param_3[1];
        uVar4 = *puVar8;
        local_110._0_4_ = uVar19;
LAB_022b7148:
        local_110 = (undefined **)CONCAT44(uVar4,(uint)local_110);
        uVar11 = FUN_017baf44();
        local_108 = (undefined *)(CONCAT71(local_108._1_7_,uVar11) & 0xffffffffffffff01);
        uVar23 = 1;
        local_118 = (undefined **)(PTR_DAT_04bb6268 + 0x10);
        uVar14 = FUN_022b76c0(param_1,param_2[1],&local_c4,&local_118,param_7,1,7);
        if ((uVar14 & 1) == 0) goto LAB_022b7220;
      }
      else {
        if ((char)local_74 != '\0') {
LAB_022b70c4:
          if (local_74._1_1_ != '\0') goto LAB_022b7220;
          local_110 = (undefined **)((ulong)local_110 & 0xffffffff00000000);
          local_a6 = (undefined1)param_3[1];
          if (DAT_05aed670 == 0) {
            puVar20 = &DAT_055c04a0;
          }
          else {
            puVar20 = &DAT_055c04a0;
            if (*(long *)(DAT_05aed670 + 0x330) != 0) {
              puVar20 = (undefined8 *)
                        (**(code **)(*DAT_05aed668 + 0x18))
                                  (DAT_05aed668,*(undefined4 *)(DAT_05aed670 + 0x338));
              iVar13 = FUN_006bd550(*puVar20,0);
              puVar20 = &DAT_055cdaf8;
              if (iVar13 != 0x758f7eaf) {
                puVar20 = &DAT_055c04a0;
              }
            }
          }
          uVar4 = *(undefined4 *)(puVar20 + 7);
          goto LAB_022b7148;
        }
        local_110 = (undefined **)((ulong)local_110 & 0xffffffff00000000);
        local_a6 = (undefined1)*param_3;
        if (DAT_05aed670 == 0) {
          puVar20 = &DAT_055c04a0;
        }
        else {
          puVar20 = &DAT_055c04a0;
          if (*(long *)(DAT_05aed670 + 0x330) != 0) {
            puVar20 = (undefined8 *)
                      (**(code **)(*DAT_05aed668 + 0x18))
                                (DAT_05aed668,*(undefined4 *)(DAT_05aed670 + 0x338));
            iVar13 = FUN_006bd550(*puVar20,0);
            puVar20 = &DAT_055cdaf8;
            if (iVar13 != 0x758f7eaf) {
              puVar20 = &DAT_055c04a0;
            }
          }
        }
        local_110 = (undefined **)CONCAT44(*(undefined4 *)(puVar20 + 7),(uint)local_110);
        uVar11 = FUN_017baf44();
        local_108 = (undefined *)(CONCAT71(local_108._1_7_,uVar11) & 0xffffffffffffff01);
        local_118 = (undefined **)(PTR_DAT_04bb6268 + 0x10);
        uVar14 = FUN_022b76c0(param_1,*param_2,&local_c4,&local_118,param_7,0,7);
        if ((uVar14 & 1) == 0) goto LAB_022b70c4;
LAB_022b70bc:
        uVar23 = 0;
      }
      sVar7 = local_b6;
      sVar6 = local_b8;
      lVar24 = param_2[uVar23];
      puVar20 = (undefined8 *)(lVar24 + 0x14);
      *puVar20 = 0xfffe;
      FUN_0277d4ac(puVar20);
      *(undefined8 *)(lVar24 + 0x1c) = 0xfffe;
      FUN_0277d4ac((undefined8 *)(lVar24 + 0x1c));
      *(undefined8 *)(lVar24 + 0x48) = 0;
      *(undefined8 *)(lVar24 + 0x50) = 0xe00000000;
      *(undefined4 *)(lVar24 + 0x58) = 0;
      *(undefined8 *)(lVar24 + 0x2c) = 0;
      *(undefined8 *)(lVar24 + 0x34) = 0;
      *(undefined2 *)puVar20 = *(undefined2 *)param_5;
      *(undefined1 *)(lVar24 + 0x16) = *(undefined1 *)((long)param_5 + 2);
      *(undefined1 *)(lVar24 + 0x17) = *(undefined1 *)((long)param_5 + 3);
      uVar4 = *(undefined4 *)((long)param_5 + 4);
      *(int *)(lVar24 + 0x48) = (int)sVar6;
      *(int *)(lVar24 + 0x4c) = (int)sVar7;
      *(undefined4 *)(lVar24 + 0x50) = 0;
      *(undefined4 *)(lVar24 + 0x18) = uVar4;
      FUN_01392d64(param_2[uVar23]);
      *(undefined1 *)((ulong)&local_74 | uVar23) = 1;
      goto LAB_022b7220;
    }
  }
  if ((param_10 & 1) != 0) {
    return 0;
  }
LAB_022b7220:
  puVar5 = PTR_DAT_04bb27c8;
  local_f0 = 0;
  local_ae = 0xf;
  local_e8 = 0xff00;
  local_e6 = 0;
  local_e2 = 0;
  local_d8 = 0;
  local_108 = PTR_DAT_04bb2010 + 0x10;
  local_cc = 0xff00;
  local_118 = (undefined **)CONCAT62(local_118._2_6_,sVar18);
  local_110 = &PTR_FUN_0498d548;
  local_e0 = 0xffffffffffffffff;
  local_d4 = 0x41200000;
  local_100 = 0;
  if (0 < (int)param_8) {
    uVar14 = 0;
    puStack_f8 = local_108;
    do {
      if (*(char *)((long)&local_74 + uVar14) == '\0') {
        uVar19 = (uint)uVar14;
        iVar12 = (int)local_b8;
        local_ab = CONCAT11(local_ab._1_1_ & 0xfc | (byte)uVar14 & 3,(undefined1)local_ab);
        local_a6 = (undefined1)param_3[uVar14];
        iVar13 = (int)local_b6;
        if (uVar19 == 1) {
          local_a7 = 0x8a;
          iVar21 = iVar12 + 2;
        }
        else if (uVar19 == 0) {
          local_a7 = 0x86;
          iVar21 = iVar12 + -2;
        }
        else {
          iVar13 = local_b6 + 2;
          local_a7 = 0xa8;
          iVar21 = iVar12;
        }
        afStack_124[0] = (float)iVar21 * 5.0 + 5.0;
        local_11c = (float)iVar13 * 5.0 + 5.0;
        local_130 = (float)iVar12 * 5.0 + 5.0;
        local_128 = (float)(int)local_b6 * 5.0 + 5.0;
        iVar13 = FUN_0277d6c4(param_5);
        if (iVar13 != 0x8f0) {
          local_138 = 0xea61;
          FUN_0277d4ac(&local_138);
          FUN_0124c030(local_a0,&local_138);
          iVar13 = FUN_0123db50(auStack_98,local_90);
          if (iVar13 == 5) {
            if ((uVar19 & 0xff) < 2) {
              pfVar16 = (float *)(&DAT_041746a8 + (uVar14 & 0xff) * 0xc);
              goto LAB_022b7458;
            }
          }
          else {
            if (2 < (uVar19 & 0xff)) goto LAB_022b7490;
            pfVar16 = (float *)(&DAT_041746c0 + (uVar14 & 0xff) * 0xc);
LAB_022b7458:
            local_130 = *pfVar16 + local_130;
            local_12c = pfVar16[1] + local_12c;
            local_128 = pfVar16[2] + local_128;
          }
          if (uVar14 == 2) {
            local_128 = local_128 + 3.0;
          }
        }
LAB_022b7490:
        if (DAT_055c1b60 != &DAT_055c1b58) {
          sVar18 = 0;
          puVar20 = DAT_055c1b60;
          do {
            if (*(int *)(puVar20 + -1) == 0x6622bd46) goto LAB_022b74d4;
            puVar20 = (undefined8 *)puVar20[1];
            sVar18 = sVar18 + 1;
          } while (puVar20 != &DAT_055c1b58);
        }
        sVar18 = -1;
LAB_022b74d4:
        lVar24 = *(long *)puVar5;
        if (local_b0 == sVar18) {
          if (lVar24 == 0) {
            local_12c = -500.0;
            fVar25 = -500.0;
          }
          else {
            if (*(long *)(lVar24 + 0x90) == 0) {
              local_12c = -500.0;
              lVar24 = *(long *)(lVar24 + 0x90);
joined_r0x022b7608:
              if (lVar24 != 0) {
                local_138 = local_138 & 0xffffffffffffff00;
                if (DAT_04c487d4 == -1) {
                  local_a0[0] = 7;
                }
                else {
                  puVar3 = (uint *)((long)PTR_DAT_04bc39f8 + (ulong)(uint)(int)DAT_04c487d4 * 2 * 4)
                  ;
                  if (0xff < (uint)(int)DAT_04c487d4) {
                    puVar3 = (uint *)PTR_DAT_04bc39f8;
                  }
                  local_a0[0] = 7;
                  if ((*puVar3 & 2) != 0) {
                    local_a0[0] = 5;
                  }
                }
                fVar25 = (float)FUN_00962700(lVar24,afStack_124,local_a0,0,&local_138);
                goto LAB_022b72e4;
              }
            }
            else {
              local_138 = local_138 & 0xffffffffffffff00;
              sVar18 = *(short *)PTR_DAT_04bb6298;
              if (sVar18 == -1) {
                local_a0[0] = 7;
              }
              else {
                puVar3 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar18 * 8);
                if (0xff < (uint)(int)sVar18) {
                  puVar3 = (uint *)PTR_DAT_04bc39f8;
                }
                local_a0[0] = 7;
                if ((*puVar3 & 2) != 0) {
                  local_a0[0] = 5;
                }
              }
              local_12c = (float)FUN_00962700(*(long *)(lVar24 + 0x90),&local_130,local_a0,0,
                                              &local_138);
              if (*(long *)puVar5 != 0) {
                lVar24 = *(long *)(*(long *)puVar5 + 0x90);
                goto joined_r0x022b7608;
              }
            }
            fVar25 = -500.0;
          }
        }
        else {
          local_12c = (float)FUN_0093a950(lVar24 + 0x28,&local_130,0);
          fVar25 = (float)FUN_0093a950(*(long *)puVar5 + 0x28,afStack_124,0);
        }
LAB_022b72e4:
        fVar25 = local_12c - fVar25;
        bVar10 = true;
        bVar9 = false;
        if (fVar25 <= 5.0) {
          bVar10 = false;
          bVar9 = true;
          if (!NAN(fVar25)) {
            bVar10 = fVar25 < -5.0;
            bVar9 = false;
          }
        }
        bVar17 = 4;
        if (bVar10 != bVar9) {
          bVar17 = 0;
        }
        local_ab = CONCAT11(bVar17 | local_ab._1_1_ & 0xfb,(undefined1)local_ab);
        FUN_022b1cb0(param_2[uVar14],&local_118,&local_c4);
        FUN_01392d64(param_2[uVar14]);
      }
      uVar14 = uVar14 + 1;
    } while (uVar14 != param_8);
  }
  return 1;
}

