
/* WARNING: Removing unreachable block (ram,0x02607db0) */
/* WARNING: Removing unreachable block (ram,0x02607d14) */
/* WARNING: Removing unreachable block (ram,0x02607aac) */
/* WARNING: Removing unreachable block (ram,0x02607974) */
/* WARNING: Removing unreachable block (ram,0x02607be4) */
/* WARNING: Removing unreachable block (ram,0x02607a10) */
/* WARNING: Removing unreachable block (ram,0x02607b48) */
/* WARNING: Removing unreachable block (ram,0x0260790c) */
/* WARNING: Removing unreachable block (ram,0x02607c80) */

void FUN_02607490(long param_1,undefined4 param_2)

{
  undefined *puVar1;
  int *piVar2;
  undefined *puVar3;
  undefined4 *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  undefined *puVar7;
  long *plVar8;
  undefined4 *puVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined1 uVar12;
  int iVar13;
  ulong uVar14;
  long lVar15;
  long *plVar16;
  undefined8 *puVar17;
  ulong uVar18;
  undefined8 uVar19;
  long lVar20;
  long lVar21;
  undefined8 *puVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  long lVar26;
  uint uVar27;
  int local_1a0;
  undefined4 local_194;
  undefined *local_190;
  int *local_188;
  undefined *local_180;
  undefined *local_178;
  undefined4 local_170;
  int local_16c;
  undefined *local_168;
  undefined8 local_160;
  undefined8 local_158;
  undefined4 local_150;
  undefined8 local_148;
  char *local_140;
  int local_124;
  long *local_120;
  undefined *local_118;
  undefined *puStack_110;
  undefined8 local_108;
  undefined *local_100;
  undefined8 local_f8;
  uint local_f0;
  undefined8 local_ec;
  undefined1 local_e4;
  undefined4 local_e0 [2];
  undefined8 local_d8;
  undefined1 local_d0;
  undefined2 local_cc;
  undefined8 local_c4;
  undefined1 local_bc;
  undefined2 local_b8;
  undefined8 local_b0;
  undefined1 local_a8;
  undefined2 local_a4;
  undefined8 local_9c;
  undefined1 local_94;
  undefined2 local_90;
  undefined8 local_88;
  undefined1 local_80;
  undefined2 local_7c;
  int local_74;
  undefined4 local_70;
  undefined4 auStack_6c [3];
  
  local_70 = 0;
  auStack_6c[0] = param_2;
  uVar14 = FUN_02b5e950(&local_70);
  puVar10 = PTR_DAT_04bb46b0;
  if ((uVar14 & 1) == 0) {
    return;
  }
  local_e4 = 0;
  local_ec = 0xffffffff00000000;
  local_e0[0]._0_2_ = 0;
  local_d8 = 0xffffffff00000000;
  local_d0 = 0;
  local_cc = 0;
  local_c4 = 0xffffffff00000000;
  local_bc = 0;
  local_b8 = 0;
  local_b0 = 0xffffffff00000000;
  local_a8 = 0;
  local_a4 = 0;
  local_9c = 0xffffffff00000000;
  local_94 = 0;
  local_90 = 0;
  local_88 = 0xffffffff00000000;
  local_80 = 0;
  local_7c = 0;
  local_74 = 0;
  if ((*(long *)PTR_DAT_04bb46b0 == 0) ||
     (lVar15 = FUN_026eec4c(*(long *)PTR_DAT_04bb46b0,param_2), lVar15 == 0)) {
    local_194 = 0;
  }
  else {
    lVar26 = lVar15 + 0x194b0;
    lVar20 = lVar26;
    if (*(long *)(lVar15 + 0x194b8) == 0) {
      lVar20 = *(long *)(*(long *)puVar10 + 0x20);
    }
    lVar21 = *(long *)(lVar20 + 0x2a840);
    if (lVar21 == 0) {
      uVar14 = 0;
    }
    else {
      if (*(undefined8 **)(lVar21 + 0x10) == (undefined8 *)0x0) {
        uVar14 = 0;
      }
      else {
        uVar14 = (**(code **)**(undefined8 **)(lVar21 + 0x10))();
        lVar21 = *(long *)(lVar20 + 0x2a840);
        uVar14 = uVar14 & 0xffffffff;
        if (lVar21 == 0) goto LAB_026075cc;
      }
      plVar16 = *(long **)(lVar21 + 0x20);
      if (plVar16 != (long *)0x0) {
        local_190 = *(undefined **)(lVar20 + 0x2a820);
        local_188 = *(int **)(lVar20 + 0x2a828);
        local_180 = (undefined *)0x400;
        (**(code **)(*plVar16 + 0x20))(plVar16,&local_190);
      }
    }
LAB_026075cc:
    lVar21 = *(long *)(lVar20 + 0x2a828) + *(long *)(lVar20 + 0x2a820);
    *(int *)(lVar21 + 0x10) = *(int *)(lVar21 + 0x10) + 1;
    if ((((uVar14 & 1) != 0) && (*(long *)(lVar20 + 0x2a840) != 0)) &&
       (puVar17 = *(undefined8 **)(*(long *)(lVar20 + 0x2a840) + 0x18), puVar17 != (undefined8 *)0x0
       )) {
      (**(code **)*puVar17)();
    }
    if (*(long *)(lVar15 + 0x194b8) == 0) {
      lVar26 = *(long *)(*(long *)puVar10 + 0x20);
    }
    if ((*(long **)(lVar26 + 0x2a840) == (long *)0x0) ||
       (puVar17 = (undefined8 *)**(long **)(lVar26 + 0x2a840), puVar17 == (undefined8 *)0x0)) {
      local_194 = *(undefined4 *)(*(long *)(lVar26 + 0x2a828) + *(long *)(lVar26 + 0x2a820) + 0x10);
    }
    else {
      uVar14 = (**(code **)*puVar17)();
      local_194 = *(undefined4 *)(*(long *)(lVar26 + 0x2a828) + *(long *)(lVar26 + 0x2a820) + 0x10);
      if ((((uVar14 & 1) != 0) && (*(long *)(lVar26 + 0x2a840) != 0)) &&
         (puVar17 = *(undefined8 **)(*(long *)(lVar26 + 0x2a840) + 8), puVar17 != (undefined8 *)0x0)
         ) {
        (**(code **)*puVar17)();
      }
    }
  }
  uVar14 = FUN_01383880(local_70);
  puVar10 = PTR_DAT_04bb2268;
  uVar24 = (uint)(uVar14 >> 0x20);
  if ((uint)uVar14 == uVar24) {
    local_1a0 = 0;
  }
  else {
    local_1a0 = 0;
    piVar2 = (int *)(param_1 + 8);
    lVar15 = param_1 + 0x28;
    puVar1 = PTR_DAT_04bb2020 + 0x10;
    puVar3 = PTR_DAT_04bbfe68 + 0x10;
    puVar4 = (undefined4 *)(PTR_DAT_04bbbf90 + 8);
    puVar5 = PTR_DAT_04bbc1a0 + 0x10;
    puVar6 = PTR_DAT_04bb2010 + 0x10;
    puVar7 = PTR_DAT_04bc3390 + 0x10;
    do {
      uVar23 = (uint)uVar14;
      uVar18 = FUN_01810cd0(uVar14 & 0xffffffff);
      if ((uVar18 & 1) != 0) {
        if (0 < *piVar2) {
          lVar26 = 0;
          puVar17 = *(undefined8 **)(param_1 + 0x18);
          do {
            puVar22 = *(undefined8 **)(*(long *)(param_1 + 0x10) + lVar26 * 8);
            lVar26 = lVar26 + 1;
            *puVar22 = puVar17;
            *(undefined8 **)(param_1 + 0x18) = puVar22;
            puVar17 = puVar22;
          } while (lVar26 < *(int *)(param_1 + 8));
        }
        *(undefined4 *)(param_1 + 8) = 0;
        *(undefined4 *)(param_1 + 0x94) = 0;
        *(undefined4 *)(param_1 + 0x88) = 0;
        *(uint *)(param_1 + 0x8c) = uVar23;
        puVar9 = puVar4 + (uVar14 & 0xffffffff);
        if (0x38 < uVar23) {
          puVar9 = puVar4;
        }
        local_188 = (int *)CONCAT44(*puVar9,uVar23);
        local_190 = puVar3;
        uVar12 = FUN_017baf44();
        *(undefined4 *)(param_1 + 0x90) = 0;
        local_180 = (undefined *)(CONCAT71(local_180._1_7_,uVar12) & 0xffffffffffffff01);
        uVar19 = FUN_01a4fa00(&local_190);
        puVar11 = PTR_DAT_04bb27a8;
        lVar26 = *(long *)PTR_DAT_04bb27a8;
        if (uVar23 == 0) {
          local_148 = (undefined *)((ulong)local_148._4_4_ << 0x20);
          lVar26 = *(long *)(lVar26 + 0x1f8);
joined_r0x0260795c:
          if (lVar26 != 0) {
LAB_02607960:
            local_148 = (undefined *)((ulong)local_148 & 0xffffffff00000000);
            if (*(long *)(lVar26 + 0xd0) != 0) {
              FUN_012e6150(*(long *)(lVar26 + 0xd0),lVar15,uVar19);
            }
          }
        }
        else {
          local_118 = (undefined *)CONCAT44(local_118._4_4_,uVar23);
          if (uVar23 != 0) {
            local_148 = (undefined *)CONCAT44(local_148._4_4_,uVar23);
            if (uVar23 != 0) {
              plVar16 = (long *)(lVar26 + 0x30) + (uVar14 & 0xffffffff);
              if (0x38 < uVar23) {
                plVar16 = (long *)(lVar26 + 0x30);
              }
              lVar26 = *plVar16;
              goto joined_r0x0260795c;
            }
            lVar26 = *(long *)(lVar26 + 0x1f8);
            if (lVar26 == 0) goto LAB_02607988;
            goto LAB_02607960;
          }
        }
LAB_02607988:
        *(undefined4 *)(param_1 + 0x90) = 1;
        uVar19 = FUN_01a4fa00(&local_190);
        if (uVar23 == 0) {
          local_148 = (undefined *)((ulong)local_148._4_4_ << 0x20);
LAB_026079e0:
          plVar16 = (long *)(*(long *)puVar11 + 0x1f8);
LAB_026079e4:
          if (*plVar16 != 0) {
            local_148 = (undefined *)CONCAT44(local_148._4_4_,1);
            lVar26 = *(long *)(*plVar16 + 0xe0);
            if (lVar26 != 0) {
              FUN_012e6150(lVar26,lVar15,uVar19);
            }
          }
        }
        else {
          local_118 = (undefined *)CONCAT44(local_118._4_4_,uVar23);
          if (uVar23 != 0) {
            local_148 = (undefined *)CONCAT44(local_148._4_4_,uVar23);
            if (uVar23 == 0) goto LAB_026079e0;
            plVar8 = (long *)(*(long *)puVar11 + 0x30);
            plVar16 = plVar8 + (uVar14 & 0xffffffff);
            if (0x38 < uVar23) {
              plVar16 = plVar8;
            }
            goto LAB_026079e4;
          }
        }
        *(undefined4 *)(param_1 + 0x90) = 2;
        uVar19 = FUN_01a4fa00(&local_190);
        if (uVar23 == 0) {
          local_148 = (undefined *)((ulong)local_148._4_4_ << 0x20);
LAB_02607a7c:
          plVar16 = (long *)(*(long *)puVar11 + 0x1f8);
LAB_02607a80:
          if (*plVar16 != 0) {
            local_148 = (undefined *)CONCAT44(local_148._4_4_,2);
            lVar26 = *(long *)(*plVar16 + 0xf0);
            if (lVar26 != 0) {
              FUN_012e6150(lVar26,lVar15,uVar19);
            }
          }
        }
        else {
          local_118 = (undefined *)CONCAT44(local_118._4_4_,uVar23);
          if (uVar23 != 0) {
            local_148 = (undefined *)CONCAT44(local_148._4_4_,uVar23);
            if (uVar23 == 0) goto LAB_02607a7c;
            plVar8 = (long *)(*(long *)puVar11 + 0x30);
            plVar16 = plVar8 + (uVar14 & 0xffffffff);
            if (0x38 < uVar23) {
              plVar16 = plVar8;
            }
            goto LAB_02607a80;
          }
        }
        *(undefined4 *)(param_1 + 0x90) = 3;
        uVar19 = FUN_01a4fa00(&local_190);
        if (uVar23 == 0) {
          local_148 = (undefined *)((ulong)local_148._4_4_ << 0x20);
LAB_02607b18:
          plVar16 = (long *)(*(long *)puVar11 + 0x1f8);
LAB_02607b1c:
          if (*plVar16 != 0) {
            local_148 = (undefined *)CONCAT44(local_148._4_4_,3);
            lVar26 = *(long *)(*plVar16 + 0x100);
            if (lVar26 != 0) {
              FUN_012e6150(lVar26,lVar15,uVar19);
            }
          }
        }
        else {
          local_118 = (undefined *)CONCAT44(local_118._4_4_,uVar23);
          if (uVar23 != 0) {
            local_148 = (undefined *)CONCAT44(local_148._4_4_,uVar23);
            if (uVar23 == 0) goto LAB_02607b18;
            plVar8 = (long *)(*(long *)puVar11 + 0x30);
            plVar16 = plVar8 + (uVar14 & 0xffffffff);
            if (0x38 < uVar23) {
              plVar16 = plVar8;
            }
            goto LAB_02607b1c;
          }
        }
        *(undefined4 *)(param_1 + 0x90) = 4;
        uVar19 = FUN_01a4fa00(&local_190);
        if (uVar23 == 0) {
          local_148 = (undefined *)((ulong)local_148._4_4_ << 0x20);
LAB_02607bb4:
          plVar16 = (long *)(*(long *)puVar11 + 0x1f8);
LAB_02607bb8:
          if (*plVar16 != 0) {
            local_148 = (undefined *)CONCAT44(local_148._4_4_,4);
            lVar26 = *(long *)(*plVar16 + 0x110);
            if (lVar26 != 0) {
              FUN_012e6150(lVar26,lVar15,uVar19);
            }
          }
        }
        else {
          local_118 = (undefined *)CONCAT44(local_118._4_4_,uVar23);
          if (uVar23 != 0) {
            local_148 = (undefined *)CONCAT44(local_148._4_4_,uVar23);
            if (uVar23 == 0) goto LAB_02607bb4;
            plVar8 = (long *)(*(long *)puVar11 + 0x30);
            plVar16 = plVar8 + (uVar14 & 0xffffffff);
            if (0x38 < uVar23) {
              plVar16 = plVar8;
            }
            goto LAB_02607bb8;
          }
        }
        *(undefined4 *)(param_1 + 0x90) = 5;
        uVar19 = FUN_01a4fa00(&local_190);
        if (uVar23 == 0) {
          local_148 = (undefined *)((ulong)local_148._4_4_ << 0x20);
LAB_02607c50:
          plVar16 = (long *)(*(long *)puVar11 + 0x1f8);
LAB_02607c54:
          if (*plVar16 != 0) {
            local_148 = (undefined *)CONCAT44(local_148._4_4_,5);
            lVar26 = *(long *)(*plVar16 + 0x120);
            if (lVar26 != 0) {
              FUN_012e6150(lVar26,lVar15,uVar19);
            }
          }
        }
        else {
          local_118 = (undefined *)CONCAT44(local_118._4_4_,uVar23);
          if (uVar23 != 0) {
            local_148 = (undefined *)CONCAT44(local_148._4_4_,uVar23);
            if (uVar23 == 0) goto LAB_02607c50;
            plVar8 = (long *)(*(long *)puVar11 + 0x30);
            plVar16 = plVar8 + (uVar14 & 0xffffffff);
            if (0x38 < uVar23) {
              plVar16 = plVar8;
            }
            goto LAB_02607c54;
          }
        }
        *(undefined4 *)(param_1 + 0x90) = 6;
        uVar19 = FUN_01a4fa00(&local_190);
        if (uVar23 == 0) {
          local_148 = (undefined *)((ulong)local_148._4_4_ << 0x20);
LAB_02607ce8:
          plVar16 = (long *)(*(long *)puVar11 + 0x1f8);
LAB_02607cec:
          if (*plVar16 != 0) {
            local_148 = (undefined *)CONCAT44(local_148._4_4_,6);
            lVar26 = *(long *)(*plVar16 + 0x130);
            if (lVar26 != 0) {
              FUN_012e6150(lVar26,lVar15,uVar19);
            }
          }
        }
        else {
          local_118 = (undefined *)CONCAT44(local_118._4_4_,uVar23);
          if (uVar23 != 0) {
            local_148 = (undefined *)CONCAT44(local_148._4_4_,uVar23);
            if (uVar23 == 0) goto LAB_02607ce8;
            plVar8 = (long *)(*(long *)puVar11 + 0x30);
            plVar16 = plVar8 + (uVar14 & 0xffffffff);
            if (0x38 < uVar23) {
              plVar16 = plVar8;
            }
            goto LAB_02607cec;
          }
        }
        *(undefined4 *)(param_1 + 0x90) = 7;
        uVar19 = FUN_01a4fa00(&local_190);
        if (uVar23 == 0) {
          local_148 = (undefined *)((ulong)local_148._4_4_ << 0x20);
LAB_02607d80:
          plVar16 = (long *)(*(long *)puVar11 + 0x1f8);
LAB_02607d84:
          if (*plVar16 != 0) {
            local_148 = (undefined *)CONCAT44(local_148._4_4_,7);
            lVar26 = *(long *)(*plVar16 + 0x140);
            if (lVar26 != 0) {
              FUN_012e6150(lVar26,lVar15,uVar19);
            }
          }
        }
        else {
          local_118 = (undefined *)CONCAT44(local_118._4_4_,uVar23);
          if (uVar23 != 0) {
            local_148 = (undefined *)CONCAT44(local_148._4_4_,uVar23);
            if (uVar23 == 0) goto LAB_02607d80;
            plVar8 = (long *)(*(long *)puVar11 + 0x30);
            plVar16 = plVar8 + (uVar14 & 0xffffffff);
            if (0x38 < uVar23) {
              plVar16 = plVar8;
            }
            goto LAB_02607d84;
          }
        }
        local_f0 = (int)(uVar23 - 2) % 6;
        local_f0 = local_f0 & ((int)local_f0 >> 0x1f ^ 0xffffffffU);
        puVar17 = (undefined8 *)((long)&local_ec + (ulong)local_f0 * 0x14);
        if (5 < local_f0) {
          puVar17 = &local_ec;
        }
        local_190._0_4_ = uVar23;
        FUN_01811af0(param_2,local_f0,puVar17);
        puVar9 = local_e0 + (ulong)local_f0 * 5;
        if (5 < local_f0) {
          puVar9 = local_e0;
        }
        *(undefined2 *)puVar9 = *(undefined2 *)(param_1 + 0x8a);
        local_108 = 0;
        local_148 = (undefined *)CONCAT44(local_148._4_4_,uVar23);
        puVar9 = local_e0 + (ulong)local_f0 * 5 + 1;
        if (5 < local_f0) {
          puVar9 = local_e0 + 1;
        }
        *puVar9 = *(undefined4 *)(param_1 + 0x94);
        local_1a0 = local_74 + 1;
        local_f8 = 0;
        local_118 = puVar5;
        puStack_110 = puVar6;
        local_100 = puVar6;
        local_74 = local_1a0;
        if ((1 < (int)uVar23) && ((int)uVar23 < 0x39)) {
          local_190 = (undefined *)CONCAT44(local_190._4_4_,uVar23);
          uVar27 = uVar23;
          if (0x38 < uVar23) {
            uVar27 = 0;
          }
          FUN_017ba710((&DAT_041771a4)[(int)uVar27],&local_118);
        }
        if (*piVar2 < 1) {
          uVar27 = 1;
        }
        else {
          uVar27 = (*piVar2 + 499U) / 500;
        }
        uVar25 = 0;
        do {
          local_188 = (int *)0x40cb141;
          local_190 = puVar1;
          FUN_026012f4(&local_148,&local_190,auStack_6c);
          local_120 = (long *)0x0;
          local_148 = puVar7;
          if (*(char *)(*(long *)puVar10 + 0xb1) == '\0') {
            local_120 = (long *)FUN_0260d56c(*(long *)puVar10,local_140,500);
          }
          local_178 = PTR_DAT_04bb2010 + 0x10;
          local_158 = CONCAT44(uVar25,uVar27);
          local_190 = (undefined *)CONCAT44(local_190._4_4_,local_f0);
          local_180 = PTR_DAT_04bbc1a0 + 0x10;
          local_170 = (undefined4)local_108;
          local_16c = local_108._4_4_;
          local_160 = local_f8;
          local_150 = local_194;
          local_188 = piVar2;
          local_168 = local_178;
          FUN_025c28bc(&local_148,&local_190);
          lVar20 = *(long *)puVar10;
          lVar21 = *(long *)PTR_DAT_04bb3350;
          lVar26 = nn::os::GetTlsValue(*(undefined4 *)(lVar21 + 0x68));
          if ((*(long *)(lVar21 + 0x60) != lVar26) &&
             (uVar14 = FUN_03f26e50(*(undefined8 *)PTR_DAT_04bc3578,5000), (uVar14 & 1) == 0)) {
            *(undefined1 *)(lVar20 + 0xb1) = 1;
          }
          local_148 = PTR_DAT_04bc3390 + 0x10;
          if (local_120 != (long *)0x0) {
            (**(code **)(*local_120 + 8))();
          }
          iVar13 = (**(code **)(local_148 + 0x20))(&local_148);
          if (iVar13 == -1) {
LAB_02608038:
            if (local_124 == 0) {
              local_124 = 1;
            }
          }
          else {
            iVar13 = (**(code **)(local_148 + 0x20))(&local_148);
            local_190 = (undefined *)CONCAT44(local_190._4_4_,iVar13);
            if (0xc < iVar13) goto LAB_02608038;
          }
          FUN_02601530(&local_148);
          uVar25 = uVar25 + 1;
        } while (uVar27 != uVar25);
        lVar20 = *(long *)puVar10;
        lVar21 = *(long *)PTR_DAT_04bb3350;
        lVar26 = nn::os::GetTlsValue(*(undefined4 *)(lVar21 + 0x68));
        if ((*(long *)(lVar21 + 0x60) != lVar26) &&
           (uVar14 = FUN_03f26e50(*(undefined8 *)PTR_DAT_04bc3578,5000), (uVar14 & 1) == 0)) {
          *(undefined1 *)(lVar20 + 0xb1) = 1;
        }
      }
      uVar27 = 0x39;
      if ((int)uVar23 < 0x39) {
        uVar27 = uVar23 + 1;
      }
      uVar14 = (ulong)uVar27;
    } while (uVar27 != uVar24);
  }
  puVar1 = PTR_DAT_04bb2020 + 0x10;
  local_140 = "growup_player_house_interia";
  local_148 = puVar1;
  FUN_026012f4(&local_190,&local_148,auStack_6c);
  puVar3 = PTR_DAT_04bc3300;
  local_158 = 0;
  local_168 = (undefined *)0x0;
  local_160 = 0;
  local_190 = PTR_DAT_04bc3300 + 0x10;
  if (*(char *)(*(long *)puVar10 + 0xb1) == '\0') {
    FUN_025af570(&local_190);
  }
  FUN_02602950(&local_190,0x66);
  local_140 = "RoomNum";
  local_148 = puVar1;
  if (local_188 != (int *)0x0) {
    FUN_026054d0(local_188,&local_148,(long)local_1a0);
  }
  FUN_025af9f0(&local_190,&local_ec);
  local_190 = puVar3 + 0x10;
  iVar13 = FUN_025aff58(&local_190);
  if (iVar13 != -1) {
    iVar13 = (**(code **)(local_190 + 0x20))(&local_190);
    local_148 = (undefined *)CONCAT44(local_148._4_4_,iVar13);
    if (iVar13 < 0xd) goto LAB_0260777c;
  }
  if (local_16c == 0) {
    local_16c = 1;
  }
LAB_0260777c:
  FUN_02601530(&local_190);
  return;
}

