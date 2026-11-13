
/* WARNING: Removing unreachable block (ram,0x01306780) */
/* WARNING: Removing unreachable block (ram,0x01307494) */
/* WARNING: Removing unreachable block (ram,0x01306798) */
/* WARNING: Removing unreachable block (ram,0x013074ac) */
/* WARNING: Removing unreachable block (ram,0x013067a8) */
/* WARNING: Removing unreachable block (ram,0x013074bc) */
/* WARNING: Removing unreachable block (ram,0x013067bc) */
/* WARNING: Removing unreachable block (ram,0x013074d0) */
/* WARNING: Removing unreachable block (ram,0x013067dc) */
/* WARNING: Removing unreachable block (ram,0x013074f0) */
/* WARNING: Removing unreachable block (ram,0x013067ec) */
/* WARNING: Removing unreachable block (ram,0x01307500) */
/* WARNING: Removing unreachable block (ram,0x01306800) */
/* WARNING: Removing unreachable block (ram,0x01307514) */
/* WARNING: Removing unreachable block (ram,0x0130680c) */
/* WARNING: Removing unreachable block (ram,0x01307520) */
/* WARNING: Removing unreachable block (ram,0x01306870) */
/* WARNING: Removing unreachable block (ram,0x01307578) */
/* WARNING: Removing unreachable block (ram,0x01306880) */
/* WARNING: Removing unreachable block (ram,0x01307588) */
/* WARNING: Removing unreachable block (ram,0x013068b8) */
/* WARNING: Removing unreachable block (ram,0x013075c0) */
/* WARNING: Heritage AFTER dead removal. Example location: s0xffffffffffffff2a : 0x01306890 */
/* WARNING: Removing unreachable block (ram,0x013068c8) */
/* WARNING: Removing unreachable block (ram,0x013075d0) */
/* WARNING: Restarted to delay deadcode elimination for space: stack */

void FUN_01305bb0(long param_1,int *param_2,uint param_3,uint param_4,uint param_5)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  int iVar4;
  int iVar5;
  undefined *puVar6;
  long lVar7;
  undefined *puVar8;
  uint uVar9;
  undefined *puVar10;
  ushort *puVar11;
  uint uVar12;
  uint uVar13;
  int iVar14;
  int iVar15;
  ushort uVar16;
  short sVar17;
  short sVar18;
  uint uVar19;
  int iVar20;
  uint uVar21;
  uint uVar22;
  uint uVar23;
  uint uVar24;
  uint uVar25;
  long lVar26;
  uint uVar27;
  undefined4 uVar28;
  int iVar29;
  int iVar30;
  ulong uVar31;
  long *plVar32;
  ulong uVar33;
  long lVar34;
  long lVar35;
  long lVar36;
  int iVar37;
  long lVar38;
  uint *puVar39;
  int iVar40;
  int iVar41;
  ushort *puVar42;
  uint uVar43;
  uint *puVar44;
  uint uVar45;
  int iVar46;
  uint uVar47;
  uint *puVar48;
  int iVar49;
  int iVar50;
  undefined *local_150;
  undefined8 uStack_148;
  undefined8 local_140;
  undefined4 local_138;
  int iStack_134;
  int local_130;
  undefined8 local_12c;
  int local_124;
  int iStack_120;
  undefined8 local_11c;
  undefined8 local_114;
  undefined4 local_10c;
  uint local_104;
  undefined *local_100;
  ulong local_f8;
  undefined *local_f0;
  int local_e8;
  int local_e4;
  long local_e0;
  uint local_d8;
  undefined8 local_d4;
  undefined1 local_cc;
  undefined *local_c8;
  long local_c0;
  undefined *local_b8;
  undefined8 local_b0;
  undefined8 local_a8;
  undefined4 uStack_a0;
  uint local_9c;
  uint uStack_98;
  undefined4 local_94;
  undefined4 uStack_90;
  undefined4 local_8c;
  undefined4 uStack_88;
  undefined4 local_84;
  int local_80;
  int local_7c;
  int local_78;
  undefined8 local_74;
  uint local_6c;
  
  puVar6 = PTR_DAT_04bbc2f8;
  iStack_134 = param_2[1];
  local_140 = 0x500000005;
  lVar35 = param_1 + 0x10;
  local_138 = 5;
  local_12c = 0x500000005;
  local_150 = PTR_DAT_04bbc328 + 0x10;
  local_11c = 0x500000005;
  local_114 = 0x500000005;
  local_10c = 5;
  uStack_148 = 0x500000005;
  local_130 = iStack_134;
  local_124 = iStack_134;
  iStack_120 = iStack_134;
  local_104 = param_4;
  if (param_2[3] == 1) {
    local_e8 = *(int *)(param_1 + 0x30);
    local_e4 = *(int *)(param_1 + 0x34);
    local_100 = (undefined *)(param_1 + 0x28);
    uVar31 = param_1 + 0x38;
    iVar29 = *(int *)(param_1 + 0x44) + 1;
    if ((local_e8 == *(int *)(param_1 + 0x18)) && (iVar29 == *(int *)(param_1 + 0x1c))) {
      if (*(int *)(param_1 + 0x40) <= local_e8) {
        iVar29 = *(int *)(param_1 + 0x44) + 2;
        goto LAB_01305eb4;
      }
      iVar49 = local_e8 + 1;
    }
    else {
LAB_01305eb4:
      iVar49 = local_e8;
    }
    local_f0 = PTR_DAT_04bb2018 + 0x10;
    local_f8 = uVar31;
    local_e0 = lVar35;
    if ((iVar49 != local_e8) || (local_6c = param_3, iVar29 != local_e4)) {
      lVar34 = param_1 + 0x110;
      puVar8 = PTR_DAT_04bbc328 + 0x10;
      local_6c = param_3;
      do {
        if (local_6c == 0) {
          local_c8 = (undefined *)((ulong)local_c8 & 0xffffffff00000000);
          lVar7 = param_1 + 0x1370 + (ulong)*(uint *)(param_1 + 0x50) * 0x28;
          if (1 < *(uint *)(param_1 + 0x50)) {
            lVar7 = param_1 + 0x1370;
          }
          iVar30 = *(int *)(lVar7 + 0x20);
          if (iVar30 <= local_e8 && local_e8 <= iVar30 + 3) {
            iVar40 = *(int *)(lVar7 + 0x24);
            if (((iVar40 <= local_e4 && local_e4 <= iVar40 + 3) &&
                ((uint)(local_e8 - iVar30) < 3 && (uint)(local_e4 - iVar40) < 3)) &&
               ((*(uint *)(lVar7 + 0x10) >>
                 (ulong)((local_e4 - iVar40) * 3 + (local_e8 - iVar30) & 0x1f) & 1) != 0))
            goto LAB_013060f8;
          }
        }
        else {
LAB_013060f8:
          sVar17 = *(short *)(param_1 + 0x84);
          if (*(short *)(param_1 + 0x88) <= *(short *)(param_1 + 0x84)) {
            sVar17 = *(short *)(param_1 + 0x88);
          }
          sVar18 = *(short *)(param_1 + 0x86);
          if (*(short *)(param_1 + 0x8a) <= *(short *)(param_1 + 0x86)) {
            sVar18 = *(short *)(param_1 + 0x8a);
          }
          puVar10 = (undefined *)
                    (param_1 + 0x8c +
                    (ulong)(uint)((local_e4 - sVar18) * 3 + (local_e8 - sVar17)) * 0xe);
          if (2 < (uint)(local_e4 - sVar18) || 2 < (uint)(local_e8 - sVar17)) {
            puVar10 = puVar6;
          }
          if ((byte)puVar10[0xc] != 4) {
            uVar27 = (byte)puVar10[0xc] - 1;
            iVar30 = 0;
            if (uVar27 < 3) {
              iVar30 = (uVar27 & 0xff) + 1;
            }
            local_74 = CONCAT44(iVar30,(int)local_74);
            if ((int)local_6c <= iVar30) {
              local_b8 = (undefined *)0x500000005;
              local_b0 = 0x500000005;
              local_a8._0_4_ = 5;
              local_a8._4_4_ = 5;
              uStack_a0 = 5;
              local_9c = 5;
              uStack_88 = 5;
              local_84 = 5;
              uStack_98 = 5;
              local_94 = 5;
              uStack_90 = 5;
              local_8c = 5;
              local_c0 = 0x500000005;
              local_d8 = *(uint *)(param_1 + 0x50);
              lVar7 = lVar34 + (ulong)local_d8 * 0x930;
              if (1 < local_d8) {
                lVar7 = lVar34;
              }
              local_c8 = puVar8;
              FUN_01302600(lVar7,&local_c8,local_6c,&local_f0);
              uVar31 = FUN_01312b3c(&local_c8,PTR_DAT_04bbc290);
              if ((uVar31 & 1) != 0) {
                local_d8 = *(uint *)(param_1 + 0x50);
                lVar7 = lVar34 + (ulong)local_d8 * 0x930;
                if (1 < local_d8) {
                  lVar7 = lVar34;
                }
                FUN_01302290(lVar7,PTR_DAT_04bbc2b8,local_6c,&local_f0);
              }
              uVar31 = local_f8;
            }
          }
        }
        if (local_e8 < *(int *)(uVar31 + 8)) {
          local_e8 = local_e8 + 1;
        }
        else {
          local_e4 = local_e4 + 1;
          local_e8 = *(int *)(local_100 + 8);
        }
        if ((local_e8 == *(int *)(local_e0 + 8)) && (local_e4 == *(int *)(local_e0 + 0xc))) {
          if (local_e8 < *(int *)(uVar31 + 8)) {
            local_e8 = local_e8 + 1;
          }
          else {
            local_e4 = local_e4 + 1;
            local_e8 = *(int *)(local_100 + 8);
          }
        }
      } while ((iVar49 != local_e8) || (iVar29 != local_e4));
    }
  }
  else if ((char)param_2[6] != '\0') {
    local_c8 = (undefined *)(param_1 + 0x28);
    lVar34 = param_1 + 0x38;
    local_b8 = PTR_DAT_04bb2018 + 0x10;
    lVar7 = param_1 + 0x110 + (ulong)*(uint *)(param_1 + 0x50) * 0x930;
    if (1 < *(uint *)(param_1 + 0x50)) {
      lVar7 = param_1 + 0x110;
    }
    iVar49 = *(int *)(param_1 + 0x30);
    local_b0 = *(undefined8 *)(param_1 + 0x30);
    iVar29 = *(int *)(param_1 + 0x44) + 1;
    local_c0 = lVar34;
    if (iVar29 != *(int *)(param_1 + 0x34)) {
      lVar36 = *(long *)PTR_DAT_04bb27a8;
      puVar39 = (uint *)PTR_DAT_04bbbe48;
      iVar40 = *(int *)(param_1 + 0x34);
      iVar30 = iVar49;
      do {
        uVar27 = *(uint *)(param_1 + 0x50);
        local_100 = (undefined *)CONCAT44(local_100._4_4_,uVar27);
        sVar17 = *(short *)(param_1 + 0x84);
        if (*(short *)(param_1 + 0x88) <= *(short *)(param_1 + 0x84)) {
          sVar17 = *(short *)(param_1 + 0x88);
        }
        sVar18 = *(short *)(param_1 + 0x86);
        if (*(short *)(param_1 + 0x8a) <= *(short *)(param_1 + 0x86)) {
          sVar18 = *(short *)(param_1 + 0x8a);
        }
        puVar11 = (ushort *)
                  (param_1 + 0x8c + (ulong)(uint)((iVar40 - sVar18) * 3 + (iVar30 - sVar17)) * 0xe);
        if (2 < (uint)(iVar40 - sVar18) || 2 < (uint)(iVar30 - sVar17)) {
          puVar11 = (ushort *)puVar6;
        }
        puVar42 = puVar11 + (ulong)uVar27 * 3;
        if (1 < uVar27) {
          puVar42 = puVar11;
        }
        uVar27 = (uint)*puVar42 - (uint)*(ushort *)(lVar36 + 0x408);
        if (uVar27 < *(uint *)(lVar36 + 1000)) {
          puVar44 = *(uint **)(*(long *)(lVar36 + 0x3f0) + (long)(int)uVar27 * 8);
          if (puVar44 != (uint *)0x0) {
            uVar27 = *puVar44;
            if (uVar27 != 0 && puVar44 != (uint *)(ulong)uVar27) {
              puVar48 = (uint *)((long)puVar44 - (long)(ulong)uVar27);
              if (*puVar48 != 0) {
                uVar27 = puVar48[1];
                if (uVar27 != 0) {
                  if ((ulong)(ushort)puVar48[2] != 0) {
                    lVar38 = 0xc;
                    if (*(char *)((long)puVar48 + 10) != '\0') {
                      lVar38 = 0x1c;
                    }
                    lVar38 = (long)puVar48 + lVar38 + (ulong)(ushort)puVar48[2] * 8;
                    if (lVar38 != 0) {
                      uVar43 = 0;
                      if ((ulong)uVar27 != 0) {
                        uVar43 = (uint)((ulong)((long)puVar44 - lVar38) / (ulong)uVar27);
                      }
                      if (*puVar48 <= uVar43) {
                        uVar43 = 0xffffffff;
                      }
                      if (uVar43 < *puVar39) {
                        if (*(short *)(*(long *)(puVar39 + 2) + (long)(int)uVar43 * 2) == 4) {
                          FUN_01302900(lVar7,param_3,&local_b8,3,0);
                          lVar36 = *(long *)PTR_DAT_04bb27a8;
                          puVar39 = (uint *)PTR_DAT_04bbbe48;
                          lVar34 = local_c0;
                          iVar30 = (int)local_b0;
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
        if (iVar30 < *(int *)(lVar34 + 8)) {
          iVar30 = iVar30 + 1;
        }
        else {
          local_b0._4_4_ = local_b0._4_4_ + 1;
          iVar30 = *(int *)(local_c8 + 8);
        }
        local_b0 = CONCAT44(local_b0._4_4_,iVar30);
        iVar40 = local_b0._4_4_;
      } while ((iVar49 != iVar30) || (iVar29 != local_b0._4_4_));
    }
  }
  local_c8._0_4_ = *(uint *)(param_1 + 0x50);
  lVar34 = param_1 + 0x110;
  lVar7 = lVar34 + (ulong)(uint)local_c8 * 0x930;
  if (1 < (uint)local_c8) {
    lVar7 = lVar34;
  }
  uVar27 = FUN_01302e18(lVar7,param_3,lVar35);
  local_c8._0_4_ = 0;
  if (uVar27 < 0xd) {
    local_c8._0_4_ = 1 << (ulong)(uVar27 & 0x1f);
  }
  if ((local_104 != 5) && (local_104 < 0xd)) {
    local_c8._0_4_ = 1 << (ulong)(local_104 & 0x1f) | (uint)local_c8;
  }
  FUN_01307fc0(param_1,&local_c8,PTR_DAT_04bbc2b0,param_3);
  uVar43 = *(uint *)(param_1 + 0x50);
  local_c8 = (undefined *)CONCAT44(local_c8._4_4_,uVar43);
  lVar7 = lVar34 + (ulong)uVar43 * 0x930;
  if (1 < uVar43) {
    lVar7 = lVar34;
  }
  FUN_01302290(lVar7,&local_150,param_3,lVar35);
  local_a8 = CONCAT44(local_a8._4_4_,(uint)local_a8);
  if (*param_2 == 0) {
    local_a8 = CONCAT44(local_a8._4_4_,(uint)local_a8);
    if ((param_5 & 1) == 0) {
      uVar43 = *(uint *)(param_1 + 0x13c8);
      local_c8 = (undefined *)CONCAT44(local_c8._4_4_,uVar43);
      lVar7 = param_1 + 0x1488 + (ulong)uVar43 * 0x930;
      if (1 < uVar43) {
        lVar7 = param_1 + 0x1488;
      }
      uVar28 = FUN_01302e18(lVar7,param_3,lVar35);
      puVar8 = PTR_DAT_04bbbe58;
      puVar6 = (undefined *)(param_1 + 0x28);
      lVar7 = param_1 + 0x38;
      local_f8 = local_f8 & 0xffffffff00000000;
      iVar30 = *(int *)(param_1 + 0x30);
      iVar40 = *(int *)(param_1 + 0x34);
      local_b0 = *(undefined8 *)(param_1 + 0x30);
      local_74 = CONCAT44(uVar28,(int)local_74);
      iVar46 = *(int *)(param_1 + 0x44);
      iVar29 = iVar46 + 1;
      iVar41 = *(int *)(param_1 + 0x18);
      iVar37 = *(int *)(param_1 + 0x1c);
      local_100 = PTR_DAT_04bbc240 + 0x10;
      local_f0 = PTR_DAT_04bb2e18 + 0x10;
      iVar14 = *(int *)(param_1 + 0x68);
      iVar15 = *(int *)(param_1 + 0x6c);
      iVar50 = iVar30;
      iVar49 = iVar29;
      if ((iVar30 == iVar41) && (iVar29 == iVar37)) {
        if (iVar30 < *(int *)(param_1 + 0x40)) {
          iVar50 = iVar30 + 1;
        }
        else {
          iVar49 = iVar46 + 2;
        }
      }
      iVar4 = iVar14 + 3;
      iVar5 = iVar15 + 3;
      local_b8 = PTR_DAT_04bb2018 + 0x10;
      local_e8 = iVar14;
      local_e4 = iVar15;
      if ((iVar50 == iVar30) && (iVar49 == iVar40)) {
        uVar43 = 0;
      }
      else {
        uVar43 = 0;
        lVar36 = param_1 + 0x1370;
        lVar38 = lVar7;
        local_c8 = puVar6;
        local_c0 = lVar7;
        local_a8 = lVar35;
        do {
          if (iVar30 == *(int *)(param_1 + 0x18) || iVar40 == *(int *)(param_1 + 0x1c)) {
            local_d8 = *(uint *)(param_1 + 0x50);
            lVar38 = lVar34 + (ulong)local_d8 * 0x930;
            if (1 < local_d8) {
              lVar38 = lVar34;
            }
            iVar29 = FUN_01302e18(lVar38,param_3,&local_b8);
            local_74 = CONCAT44(local_74._4_4_,iVar29);
            if (iVar29 == local_74._4_4_) {
              local_d8 = *(uint *)(param_1 + 0x13c8);
              sVar17 = *(short *)(param_1 + 0x13fc);
              if (*(short *)(param_1 + 0x1400) <= *(short *)(param_1 + 0x13fc)) {
                sVar17 = *(short *)(param_1 + 0x1400);
              }
              sVar18 = *(short *)(param_1 + 0x13fe);
              if (*(short *)(param_1 + 0x1402) <= *(short *)(param_1 + 0x13fe)) {
                sVar18 = *(short *)(param_1 + 0x1402);
              }
              puVar11 = (ushort *)
                        (param_1 + 0x1404 +
                        (ulong)((local_b0._4_4_ - (int)sVar18) * 3 + ((int)local_b0 - sVar17)) * 0xe
                        );
              if (2 < local_b0._4_4_ - (int)sVar18 || 2 < (uint)((int)local_b0 - sVar17)) {
                puVar11 = (ushort *)PTR_DAT_04bbc2f8;
              }
              puVar42 = puVar11 + (ulong)local_d8 * 3;
              if (1 < local_d8) {
                puVar42 = puVar11;
              }
              lVar38 = *(long *)PTR_DAT_04bb27a8;
              uVar13 = (uint)*puVar42 - (uint)*(ushort *)(lVar38 + 0x408);
              if (*(uint *)(lVar38 + 1000) <= uVar13) goto LAB_01306a00;
              puVar39 = *(uint **)(*(long *)(lVar38 + 0x3f0) + (long)(int)uVar13 * 8);
              if (puVar39 != (uint *)0x0) {
                uVar13 = *puVar39;
                if (uVar13 == 0 || puVar39 == (uint *)(ulong)uVar13) {
LAB_01306540:
                  local_d8 = 0;
                }
                else {
                  puVar44 = (uint *)((long)puVar39 - (long)(ulong)uVar13);
                  if (((*puVar44 == 0) || (uVar13 = puVar44[1], uVar13 == 0)) ||
                     ((ulong)(ushort)puVar44[2] == 0)) goto LAB_01306540;
                  lVar38 = 0xc;
                  if (*(char *)((long)puVar44 + 10) != '\0') {
                    lVar38 = 0x1c;
                  }
                  lVar38 = (long)puVar44 + lVar38 + (ulong)(ushort)puVar44[2] * 8;
                  if (lVar38 == 0) goto LAB_01306540;
                  uVar9 = 0;
                  if ((ulong)uVar13 != 0) {
                    uVar9 = (uint)((ulong)((long)puVar39 - lVar38) / (ulong)uVar13);
                  }
                  if (*puVar44 <= uVar9) {
                    uVar9 = 0xffffffff;
                  }
                  if (((*(uint *)puVar8 <= uVar9) ||
                      (uVar16 = *(ushort *)(*(long *)(puVar8 + 8) + (long)(int)uVar9 * 2),
                      4 < uVar16)) || (uVar16 == 0)) goto LAB_01306540;
                  local_6c = (uint)(byte)puVar42[2];
                  uVar13 = local_6c + uVar16;
                  local_d8 = uVar13 - 4;
                  if (uVar13 - 4 == 0 || uVar13 < 4) {
                    local_d8 = uVar13;
                  }
                }
                if ((local_d8 != 0) &&
                   (uVar13 = *puVar39, uVar13 != 0 && puVar39 != (uint *)(ulong)uVar13)) {
                  puVar44 = (uint *)((long)puVar39 - (long)(ulong)uVar13);
                  if ((*puVar44 != 0) &&
                     ((uVar13 = puVar44[1], uVar13 != 0 && ((ulong)(ushort)puVar44[2] != 0)))) {
                    lVar38 = 0xc;
                    if (*(char *)((long)puVar44 + 10) != '\0') {
                      lVar38 = 0x1c;
                    }
                    lVar38 = (long)puVar44 + lVar38 + (ulong)(ushort)puVar44[2] * 8;
                    if (lVar38 != 0) {
                      uVar9 = 0;
                      if ((ulong)uVar13 != 0) {
                        uVar9 = (uint)((ulong)((long)puVar39 - lVar38) / (ulong)uVar13);
                      }
                      if (*puVar44 <= uVar9) {
                        uVar9 = 0xffffffff;
                      }
                      if ((uVar9 < *(uint *)PTR_DAT_04bbbe30) &&
                         (*(short *)(*(long *)(PTR_DAT_04bbbe30 + 8) + (long)(int)uVar9 * 2) == 2))
                      {
                        local_d8 = *(uint *)(param_1 + 0x50);
                        lVar38 = lVar34 + (ulong)local_d8 * 0x930;
                        if (1 < local_d8) {
                          lVar38 = lVar34;
                        }
                        FUN_01302290(lVar38,PTR_DAT_04bbc2b0,param_3,&local_b8);
                        if (((((iVar14 <= (int)local_b0) && ((int)local_b0 <= iVar4)) &&
                             (iVar15 <= (int)local_b0._4_4_)) &&
                            (((int)local_b0._4_4_ <= iVar5 && ((uint)((int)local_b0 - iVar14) < 3)))
                            ) && (local_b0._4_4_ - iVar15 < 3)) {
                          uVar43 = 1 << (ulong)((local_b0._4_4_ - iVar15) * 3 +
                                                ((int)local_b0 - iVar14) & 0x1f) | uVar43;
                        }
                        if (((param_2[2] != 0) && (uVar13 = *puVar39, uVar13 != 0)) &&
                           (puVar39 != (uint *)(ulong)uVar13)) {
                          puVar44 = (uint *)((long)puVar39 - (long)(ulong)uVar13);
                          if (((*puVar44 != 0) && (uVar13 = puVar44[1], uVar13 != 0)) &&
                             ((ulong)(ushort)puVar44[2] != 0)) {
                            lVar38 = 0xc;
                            if (*(char *)((long)puVar44 + 10) != '\0') {
                              lVar38 = 0x1c;
                            }
                            lVar38 = (long)puVar44 + lVar38 + (ulong)(ushort)puVar44[2] * 8;
                            if (lVar38 != 0) {
                              uVar9 = 0;
                              if ((ulong)uVar13 != 0) {
                                uVar9 = (uint)((ulong)((long)puVar39 - lVar38) / (ulong)uVar13);
                              }
                              if (*puVar44 <= uVar9) {
                                uVar9 = 0xffffffff;
                              }
                              if ((uVar9 < *(uint *)PTR_DAT_04bbbe48) &&
                                 (*(short *)(*(long *)(PTR_DAT_04bbbe48 + 8) + (long)(int)uVar9 * 2)
                                  == 3)) {
                                sVar17 = *(short *)(param_1 + 0x84);
                                if (*(short *)(param_1 + 0x88) <= *(short *)(param_1 + 0x84)) {
                                  sVar17 = *(short *)(param_1 + 0x88);
                                }
                                uVar13 = (int)local_b0 - sVar17;
                                sVar17 = *(short *)(param_1 + 0x86);
                                if (*(short *)(param_1 + 0x8a) <= *(short *)(param_1 + 0x86)) {
                                  sVar17 = *(short *)(param_1 + 0x8a);
                                }
                                uVar19 = local_b0._4_4_ - (int)sVar17;
                                uVar9 = uVar19 * 3 + uVar13;
                                puVar42 = (ushort *)(param_1 + 0x8c + (ulong)uVar9 * 0xe);
                                local_d4 = 0xffff0000;
                                local_d8 = 0xffff;
                                puVar11 = puVar42;
                                if (2 < uVar13 || 2 < uVar19) {
                                  puVar11 = (ushort *)PTR_DAT_04bbc2f8;
                                }
                                local_d8 = (uint)*puVar11;
                                uVar16 = puVar11[2];
                                local_d4._0_2_ = CONCAT11((char)puVar11[5],(char)uVar16);
                                local_d4 = (ulong)(ushort)local_d4;
                                uVar45 = (byte)puVar11[6] - 1;
                                if (5 < uVar45) {
                                  uVar45 = 4;
                                }
                                local_cc = (char)uVar45;
                                if (2 >= uVar13 && 2 >= uVar19) {
                                  local_6c = 1;
                                  *puVar42 = *puVar11;
                                  puVar42[1] = 0;
                                  *(char *)(puVar42 + 2) = (char)uVar16;
                                  puVar42[3] = 0;
                                  puVar42[4] = 0;
                                  *(undefined1 *)(puVar42 + 5) = 0;
                                  *(char *)(param_1 + 0x8c + (ulong)uVar9 * 0xe + 0xc) =
                                       (char)uVar45;
                                }
                                lVar38 = lVar36 + (ulong)*(uint *)(param_1 + 0x50) * 0x28;
                                if (1 < *(uint *)(param_1 + 0x50)) {
                                  lVar38 = lVar36;
                                }
                                iVar29 = *(int *)(lVar38 + 0x20);
                                if ((iVar29 <= (int)local_b0) && ((int)local_b0 <= iVar29 + 3)) {
                                  iVar30 = *(int *)(lVar38 + 0x24);
                                  if (((iVar30 <= (int)local_b0._4_4_) &&
                                      ((((int)local_b0._4_4_ <= iVar30 + 3 &&
                                        ((uint)((int)local_b0 - iVar29) < 3)) &&
                                       (local_b0._4_4_ - iVar30 < 3)))) &&
                                     ((*(uint *)(lVar38 + 0x10) >>
                                       (ulong)((local_b0._4_4_ - iVar30) * 3 +
                                               ((int)local_b0 - iVar29) & 0x1f) & 1) != 0)) {
                                    lVar38 = lVar36 + (ulong)*(uint *)(param_1 + 0x50) * 0x28;
                                    if (1 < *(uint *)(param_1 + 0x50)) {
                                      lVar38 = lVar36;
                                    }
                                    iVar29 = *(int *)(lVar38 + 0x20);
                                    if ((iVar29 <= (int)local_b0) && ((int)local_b0 <= iVar29 + 3))
                                    {
                                      iVar30 = *(int *)(lVar38 + 0x24);
                                      if (((iVar30 <= (int)local_b0._4_4_) &&
                                          (((int)local_b0._4_4_ <= iVar30 + 3 &&
                                           ((uint)((int)local_b0 - iVar29) < 3)))) &&
                                         (local_b0._4_4_ - iVar30 < 3)) {
                                        *(uint *)(lVar38 + 0x10) =
                                             *(uint *)(lVar38 + 0x10) &
                                             (1 << (ulong)((local_b0._4_4_ - iVar30) * 3 +
                                                           ((int)local_b0 - iVar29) & 0x1f) ^
                                             0xffffffffU);
                                      }
                                    }
                                  }
                                }
                                local_6c = 0;
                                goto LAB_01306a00;
                              }
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
              iVar30 = (int)local_b0;
            }
            else {
LAB_01306a00:
              iVar30 = (int)local_b0;
            }
            lVar38 = local_c0;
          }
          if (iVar30 < *(int *)(lVar38 + 8)) {
            iVar30 = iVar30 + 1;
          }
          else {
            local_b0._4_4_ = local_b0._4_4_ + 1;
            iVar30 = *(int *)(local_c8 + 8);
          }
          if (iVar30 == *(int *)(local_a8 + 8) && local_b0._4_4_ == *(int *)(local_a8 + 0xc)) {
            if (iVar30 < *(int *)(lVar38 + 8)) {
              iVar30 = iVar30 + 1;
              goto LAB_01306388;
            }
            iVar40 = local_b0._4_4_ + 1;
            iVar30 = *(int *)(local_c8 + 8);
            local_b0 = CONCAT44(iVar40,iVar30);
          }
          else {
LAB_01306388:
            local_b0 = CONCAT44(local_b0._4_4_,iVar30);
            iVar40 = local_b0._4_4_;
          }
        } while ((iVar50 != iVar30) || (iVar49 != iVar40));
        iVar46 = *(int *)(param_1 + 0x44);
        iVar29 = iVar46 + 1;
        iVar41 = *(int *)(param_1 + 0x18);
        iVar37 = *(int *)(param_1 + 0x1c);
        iVar30 = *(int *)(param_1 + 0x30);
        iVar40 = *(int *)(param_1 + 0x34);
      }
      local_f8 = CONCAT44(local_f8._4_4_,uVar43);
      iVar49 = iVar41 + 1;
      if ((iVar30 == iVar41) && (iVar29 == iVar37)) {
        iVar50 = iVar49;
        if (*(int *)(param_1 + 0x40) <= iVar30) {
          iVar29 = iVar46 + 2;
          iVar50 = iVar30;
        }
      }
      else {
        iVar50 = iVar30;
      }
      local_b0 = CONCAT44(iVar40,iVar30);
      local_b8 = PTR_DAT_04bb2018 + 0x10;
      if (iVar50 == iVar30) {
        local_c8 = puVar6;
        local_c0 = lVar7;
        local_a8 = lVar35;
        if (iVar29 == iVar40) goto LAB_01306af4;
      }
      iVar46 = iVar37 + 1;
      iVar20 = iVar37 + -1;
      uVar45 = iVar46 - iVar15;
      uVar21 = iVar41 - iVar14;
      uVar43 = uVar45 * 3 + uVar21;
      uVar31 = (ulong)(uVar43 >> 5);
      uVar19 = 1 << (ulong)(uVar43 & 0x1f);
      uVar22 = iVar37 - iVar15;
      uVar23 = (iVar41 + -1) - iVar14;
      uVar43 = uVar23 + uVar22 * 3;
      uVar13 = (iVar49 - iVar14) + uVar22 * 3;
      uVar24 = iVar20 - iVar15;
      uVar9 = uVar24 * 3 + uVar21;
      bVar2 = uVar21 < 3;
      uVar33 = (ulong)(uVar9 >> 5);
      uVar9 = 1 << (ulong)(uVar9 & 0x1f);
      bVar3 = iVar14 <= iVar41;
      bVar1 = iVar41 <= iVar4;
      lVar36 = param_1 + 0x1370;
      local_c8 = puVar6;
      local_c0 = lVar7;
      local_a8 = lVar35;
      do {
        iVar30 = FUN_006f0400((float)iVar30 - (float)*(int *)(param_1 + 0x18),
                              (float)iVar40 - (float)*(int *)(param_1 + 0x1c));
        uVar21 = iVar30 + 0x10000000U >> 0x1d;
        local_d8 = uVar21;
        if ((uVar21 & 1) == 0) goto LAB_01307700;
        local_d8 = *(uint *)(param_1 + 0x50);
        lVar35 = lVar34 + (ulong)local_d8 * 0x930;
        if (1 < local_d8) {
          lVar35 = lVar34;
        }
        iVar30 = FUN_01302e18(lVar35,param_3,&local_b8);
        local_74 = CONCAT44(local_74._4_4_,iVar30);
        if (iVar30 != local_74._4_4_) goto LAB_01307700;
        switch(uVar21) {
        case 1:
          if (((bVar1 && bVar3) && (iVar15 <= iVar46 && iVar37 < iVar5)) && (uVar45 < 3 && bVar2)) {
            uVar21 = *(uint *)((long)&local_f8 + uVar31 * 4) & uVar19;
joined_r0x01307188:
            if (uVar21 != 0) goto switchD_01307144_caseD_2;
          }
          break;
        default:
          goto switchD_01307144_caseD_2;
        case 3:
          if (((bVar1 && bVar3) && (iVar20 <= iVar5 && iVar15 < iVar37)) && (uVar24 < 3 && bVar2)) {
            uVar21 = *(uint *)((long)&local_f8 + uVar33 * 4) & uVar9;
            goto joined_r0x01307188;
          }
          break;
        case 5:
          if (((bVar1 && bVar3) && (iVar20 <= iVar5 && iVar15 < iVar37)) && (uVar24 < 3 && bVar2)) {
            uVar21 = *(uint *)((long)&local_f8 + uVar33 * 4) & uVar9;
joined_r0x013071f0:
            if (uVar21 != 0) goto switchD_01307144_caseD_2;
          }
          goto LAB_013071f4;
        case 7:
          if (((bVar1 && bVar3) && (iVar15 <= iVar46 && iVar37 < iVar5)) && (uVar45 < 3 && bVar2)) {
            uVar21 = *(uint *)((long)&local_f8 + uVar31 * 4) & uVar19;
            goto joined_r0x013071f0;
          }
LAB_013071f4:
          if (((iVar41 + -1 <= iVar4 && iVar14 < iVar41) && (iVar37 <= iVar5 && iVar15 <= iVar37))
              && (uVar23 < 3 && uVar22 < 3)) {
            uVar21 = *(uint *)((long)&local_f8 + (ulong)(uVar43 >> 5) * 4) &
                     1 << (ulong)(uVar43 & 0x1f);
            goto joined_r0x01307210;
          }
          goto LAB_01307700;
        }
        if (((iVar14 <= iVar49 && iVar41 < iVar4) && (iVar37 <= iVar5 && iVar15 <= iVar37)) &&
            ((uint)(iVar49 - iVar14) < 3 && uVar22 < 3)) {
          uVar21 = *(uint *)((long)&local_f8 + (ulong)(uVar13 >> 5) * 4) &
                   1 << (ulong)(uVar13 & 0x1f);
joined_r0x01307210:
          if (uVar21 != 0) {
switchD_01307144_caseD_2:
            local_d8 = *(uint *)(param_1 + 0x13c8);
            sVar17 = *(short *)(param_1 + 0x13fc);
            if (*(short *)(param_1 + 0x1400) <= *(short *)(param_1 + 0x13fc)) {
              sVar17 = *(short *)(param_1 + 0x1400);
            }
            sVar18 = *(short *)(param_1 + 0x13fe);
            if (*(short *)(param_1 + 0x1402) <= *(short *)(param_1 + 0x13fe)) {
              sVar18 = *(short *)(param_1 + 0x1402);
            }
            puVar11 = (ushort *)
                      (param_1 + 0x1404 +
                      (ulong)((local_b0._4_4_ - (int)sVar18) * 3 + ((int)local_b0 - sVar17)) * 0xe);
            if (2 < local_b0._4_4_ - (int)sVar18 || 2 < (uint)((int)local_b0 - sVar17)) {
              puVar11 = (ushort *)PTR_DAT_04bbc2f8;
            }
            puVar42 = puVar11 + (ulong)local_d8 * 3;
            if (1 < local_d8) {
              puVar42 = puVar11;
            }
            lVar35 = *(long *)PTR_DAT_04bb27a8;
            uVar21 = (uint)*puVar42 - (uint)*(ushort *)(lVar35 + 0x408);
            if (((uVar21 < *(uint *)(lVar35 + 1000)) &&
                (puVar39 = *(uint **)(*(long *)(lVar35 + 0x3f0) + (long)(int)uVar21 * 8),
                puVar39 != (uint *)0x0)) &&
               (uVar21 = *puVar39, uVar21 != 0 && puVar39 != (uint *)(ulong)uVar21)) {
              puVar44 = (uint *)((long)puVar39 - (long)(ulong)uVar21);
              if (((*puVar44 != 0) && (uVar21 = puVar44[1], uVar21 != 0)) &&
                 ((ulong)(ushort)puVar44[2] != 0)) {
                lVar35 = 0xc;
                if (*(char *)((long)puVar44 + 10) != '\0') {
                  lVar35 = 0x1c;
                }
                lVar35 = (long)puVar44 + lVar35 + (ulong)(ushort)puVar44[2] * 8;
                if (lVar35 != 0) {
                  uVar12 = 0;
                  if ((ulong)uVar21 != 0) {
                    uVar12 = (uint)((ulong)((long)puVar39 - lVar35) / (ulong)uVar21);
                  }
                  if (*puVar44 <= uVar12) {
                    uVar12 = 0xffffffff;
                  }
                  if ((uVar12 < *(uint *)PTR_DAT_04bbbe30) &&
                     (*(short *)(*(long *)(PTR_DAT_04bbbe30 + 8) + (long)(int)uVar12 * 2) == 2)) {
                    local_d8 = *(uint *)(param_1 + 0x50);
                    lVar35 = lVar34 + (ulong)local_d8 * 0x930;
                    if (1 < local_d8) {
                      lVar35 = lVar34;
                    }
                    FUN_01302290(lVar35,PTR_DAT_04bbc2b0,param_3,&local_b8);
                    if (((param_2[2] != 0) && (uVar21 = *puVar39, uVar21 != 0)) &&
                       (puVar39 != (uint *)(ulong)uVar21)) {
                      puVar44 = (uint *)((long)puVar39 - (long)(ulong)uVar21);
                      if (((*puVar44 != 0) && (uVar21 = puVar44[1], uVar21 != 0)) &&
                         ((ulong)(ushort)puVar44[2] != 0)) {
                        lVar35 = 0xc;
                        if (*(char *)((long)puVar44 + 10) != '\0') {
                          lVar35 = 0x1c;
                        }
                        lVar35 = (long)puVar44 + lVar35 + (ulong)(ushort)puVar44[2] * 8;
                        if (lVar35 != 0) {
                          uVar12 = 0;
                          if ((ulong)uVar21 != 0) {
                            uVar12 = (uint)((ulong)((long)puVar39 - lVar35) / (ulong)uVar21);
                          }
                          if (*puVar44 <= uVar12) {
                            uVar12 = 0xffffffff;
                          }
                          if ((uVar12 < *(uint *)PTR_DAT_04bbbe48) &&
                             (*(short *)(*(long *)(PTR_DAT_04bbbe48 + 8) + (long)(int)uVar12 * 2) ==
                              3)) {
                            sVar17 = *(short *)(param_1 + 0x84);
                            if (*(short *)(param_1 + 0x88) <= *(short *)(param_1 + 0x84)) {
                              sVar17 = *(short *)(param_1 + 0x88);
                            }
                            sVar18 = *(short *)(param_1 + 0x86);
                            if (*(short *)(param_1 + 0x8a) <= *(short *)(param_1 + 0x86)) {
                              sVar18 = *(short *)(param_1 + 0x8a);
                            }
                            uVar12 = (int)local_b0 - sVar17;
                            uVar25 = local_b0._4_4_ - (int)sVar18;
                            uVar21 = uVar25 * 3 + uVar12;
                            puVar42 = (ushort *)(param_1 + 0x8c + (ulong)uVar21 * 0xe);
                            local_d4 = 0xffff0000;
                            local_d8 = 0xffff;
                            puVar11 = puVar42;
                            if (2 < uVar12 || 2 < uVar25) {
                              puVar11 = (ushort *)PTR_DAT_04bbc2f8;
                            }
                            local_d8 = (uint)*puVar11;
                            uVar16 = puVar11[2];
                            local_d4._0_2_ = CONCAT11((char)puVar11[5],(char)uVar16);
                            local_d4 = (ulong)(ushort)local_d4;
                            uVar47 = (byte)puVar11[6] - 1;
                            if (5 < uVar47) {
                              uVar47 = 4;
                            }
                            local_cc = (char)uVar47;
                            if (2 >= uVar12 && 2 >= uVar25) {
                              local_6c = 1;
                              *puVar42 = *puVar11;
                              puVar42[1] = 0;
                              *(char *)(puVar42 + 2) = (char)uVar16;
                              puVar42[3] = 0;
                              puVar42[4] = 0;
                              *(undefined1 *)(puVar42 + 5) = 0;
                              *(char *)(param_1 + 0x8c + (ulong)uVar21 * 0xe + 0xc) = (char)uVar47;
                            }
                            lVar35 = lVar36 + (ulong)*(uint *)(param_1 + 0x50) * 0x28;
                            if (1 < *(uint *)(param_1 + 0x50)) {
                              lVar35 = lVar36;
                            }
                            iVar30 = *(int *)(lVar35 + 0x20);
                            if ((iVar30 <= (int)local_b0) && ((int)local_b0 <= iVar30 + 3)) {
                              iVar40 = *(int *)(lVar35 + 0x24);
                              if ((iVar40 <= (int)local_b0._4_4_) &&
                                 (((((int)local_b0._4_4_ <= iVar40 + 3 &&
                                    ((uint)((int)local_b0 - iVar30) < 3)) &&
                                   (local_b0._4_4_ - iVar40 < 3)) &&
                                  ((*(uint *)(lVar35 + 0x10) >>
                                    (ulong)((local_b0._4_4_ - iVar40) * 3 + ((int)local_b0 - iVar30)
                                           & 0x1f) & 1) != 0)))) {
                                lVar35 = lVar36 + (ulong)*(uint *)(param_1 + 0x50) * 0x28;
                                if (1 < *(uint *)(param_1 + 0x50)) {
                                  lVar35 = lVar36;
                                }
                                iVar30 = *(int *)(lVar35 + 0x20);
                                if ((iVar30 <= (int)local_b0) && ((int)local_b0 <= iVar30 + 3)) {
                                  iVar40 = *(int *)(lVar35 + 0x24);
                                  if (((iVar40 <= (int)local_b0._4_4_) &&
                                      (((int)local_b0._4_4_ <= iVar40 + 3 &&
                                       ((uint)((int)local_b0 - iVar30) < 3)))) &&
                                     (local_b0._4_4_ - iVar40 < 3)) {
                                    *(uint *)(lVar35 + 0x10) =
                                         *(uint *)(lVar35 + 0x10) &
                                         (1 << (ulong)((local_b0._4_4_ - iVar40) * 3 +
                                                       ((int)local_b0 - iVar30) & 0x1f) ^
                                         0xffffffffU);
                                  }
                                }
                              }
                            }
                            local_6c = 0;
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
LAB_01307700:
        if ((int)local_b0 < *(int *)(local_c0 + 8)) {
          iVar30 = (int)local_b0 + 1;
          iVar40 = local_b0._4_4_;
        }
        else {
          iVar40 = local_b0._4_4_ + 1;
          iVar30 = *(int *)(local_c8 + 8);
          local_b0 = CONCAT44(iVar40,(int)local_b0);
        }
        local_b0 = CONCAT44(local_b0._4_4_,iVar30);
        if ((iVar30 == *(int *)(local_a8 + 8)) && (iVar40 == *(int *)(local_a8 + 0xc))) {
          if (iVar30 < *(int *)(local_c0 + 8)) {
            iVar30 = iVar30 + 1;
            local_b0 = CONCAT44(local_b0._4_4_,iVar30);
          }
          else {
            iVar40 = iVar40 + 1;
            iVar30 = *(int *)(local_c8 + 8);
            local_b0 = CONCAT44(iVar40,iVar30);
          }
        }
      } while ((iVar50 != iVar30) || (iVar29 != iVar40));
    }
  }
LAB_01306af4:
  uVar31 = (ulong)local_c8 >> 0x20;
  local_c8 = (undefined *)((ulong)local_c8 & 0xffffffff00000000);
  uVar43 = 0;
  if ((uint)param_2[1] < 0xd) {
    uVar43 = 1 << (ulong)(param_2[1] & 0x1f);
    local_c8 = (undefined *)CONCAT44((int)uVar31,uVar43);
  }
  if ((local_104 != 5) && (local_104 < 0xd)) {
    local_c8 = (undefined *)CONCAT44(local_c8._4_4_,1 << (ulong)(local_104 & 0x1f) | uVar43);
  }
  FUN_01307fc0(param_1,&local_c8,&local_150,param_3);
  uVar43 = 0;
  local_84 = 5;
  uVar31 = (ulong)local_100 >> 0x20;
  local_100 = (undefined *)((ulong)local_100 & 0xffffffff00000000);
  local_b0._0_4_ = 5;
  local_c8 = PTR_DAT_04bbc328 + 0x10;
  local_c0 = 0x500000005;
  local_b8 = (undefined *)0x500000005;
  local_a8._4_4_ = 5;
  uStack_a0 = 5;
  local_94 = 5;
  uStack_90 = 5;
  local_8c = 5;
  uStack_88 = 5;
  if (uVar27 < 0xd) {
    uVar43 = 1 << (ulong)(uVar27 & 0x1f);
    local_100 = (undefined *)CONCAT44((int)uVar31,uVar43);
  }
  if ((local_104 != 5) && (local_104 < 0xd)) {
    local_100 = (undefined *)CONCAT44(local_100._4_4_,1 << (ulong)(local_104 & 0x1f) | uVar43);
  }
  local_a8._0_4_ = uVar27;
  local_9c = uVar27;
  uStack_98 = uVar27;
  local_b0._4_4_ = uVar27;
  FUN_01307fc0(param_1,&local_100,&local_c8,param_3);
  puVar8 = PTR_DAT_04bbc2f8;
  puVar6 = PTR_DAT_04bbbe48;
  if (param_2[3] == 1) {
    iVar49 = *(int *)(param_1 + 0x30);
    local_e4 = *(int *)(param_1 + 0x34);
    local_100 = (undefined *)(param_1 + 0x28);
    uVar31 = param_1 + 0x38;
    local_f0 = PTR_DAT_04bb2018 + 0x10;
    iVar29 = *(int *)(param_1 + 0x44) + 1;
    if (iVar29 != local_e4) {
      puVar6 = PTR_DAT_04bbc328 + 0x10;
      local_f8 = uVar31;
      local_e8 = iVar49;
      do {
        sVar17 = *(short *)(param_1 + 0x84);
        if (*(short *)(param_1 + 0x88) <= *(short *)(param_1 + 0x84)) {
          sVar17 = *(short *)(param_1 + 0x88);
        }
        sVar18 = *(short *)(param_1 + 0x86);
        if (*(short *)(param_1 + 0x8a) <= *(short *)(param_1 + 0x86)) {
          sVar18 = *(short *)(param_1 + 0x8a);
        }
        puVar10 = (undefined *)
                  (param_1 + 0x8c +
                  (ulong)(uint)((local_e4 - sVar18) * 3 + (local_e8 - sVar17)) * 0xe);
        if (2 < (uint)(local_e4 - sVar18) || 2 < (uint)(local_e8 - sVar17)) {
          puVar10 = puVar8;
        }
        if ((byte)puVar10[0xc] - 1 < 3) {
          iVar30 = ((byte)puVar10[0xc] - 1 & 0xff) + 1;
          local_c0 = 0x500000005;
          uStack_88 = 5;
          local_84 = 5;
          local_b8 = (undefined *)0x500000005;
          local_b0._0_4_ = 5;
          local_b0._4_4_ = 5;
          local_a8._0_4_ = 5;
          local_a8._4_4_ = 5;
          uStack_a0 = 5;
          local_9c = 5;
          uStack_98 = 5;
          local_94 = 5;
          uStack_90 = 5;
          local_8c = 5;
          local_d8 = *(uint *)(param_1 + 0x50);
          lVar35 = lVar34 + (ulong)local_d8 * 0x930;
          if (1 < local_d8) {
            lVar35 = lVar34;
          }
          local_c8 = puVar6;
          FUN_01302600(lVar35,&local_c8,iVar30,&local_f0);
          uVar31 = FUN_01312b3c(&local_c8,PTR_DAT_04bbc2b8);
          if ((uVar31 & 1) != 0) {
            local_d8 = *(uint *)(param_1 + 0x50);
            lVar35 = lVar34 + (ulong)local_d8 * 0x930;
            if (1 < local_d8) {
              lVar35 = lVar34;
            }
            FUN_01302290(lVar35,PTR_DAT_04bbc290,iVar30);
            lVar35 = param_1 + 0x1370 + (ulong)*(uint *)(param_1 + 0x50) * 0x28;
            if (1 < *(uint *)(param_1 + 0x50)) {
              lVar35 = param_1 + 0x1370;
            }
            iVar30 = *(int *)(lVar35 + 0x20);
            if ((iVar30 <= local_e8) && (local_e8 <= iVar30 + 3)) {
              iVar40 = *(int *)(lVar35 + 0x24);
              if ((iVar40 <= local_e4) &&
                 (((local_e4 <= iVar40 + 3 && ((uint)(local_e8 - iVar30) < 3)) &&
                  ((uint)(local_e4 - iVar40) < 3)))) {
                *(uint *)(lVar35 + 0x10) =
                     *(uint *)(lVar35 + 0x10) &
                     (1 << (ulong)((local_e4 - iVar40) * 3 + (local_e8 - iVar30) & 0x1f) ^
                     0xffffffffU);
              }
            }
          }
          uVar31 = local_f8;
        }
        if (local_e8 < *(int *)(uVar31 + 8)) {
          local_e8 = local_e8 + 1;
        }
        else {
          local_e4 = local_e4 + 1;
          local_e8 = *(int *)(local_100 + 8);
        }
      } while ((iVar49 != local_e8) || (iVar29 != local_e4));
    }
  }
  else if ((char)param_2[6] != '\0') {
    uVar27 = *(uint *)(param_1 + 0x50);
    local_c8 = (undefined *)(param_1 + 0x28);
    local_c0 = param_1 + 0x38;
    iVar29 = *(int *)(param_1 + 0x30);
    local_b0._4_4_ = *(int *)(param_1 + 0x34);
    lVar35 = lVar34 + (ulong)uVar27 * 0x930;
    if (1 < uVar27) {
      lVar35 = lVar34;
    }
    local_b8 = PTR_DAT_04bb2018 + 0x10;
    iVar49 = *(int *)(param_1 + 0x44) + 1;
    if (iVar49 != local_b0._4_4_) {
      lVar7 = param_1 + 0x1488 + (ulong)uVar27 * 0x930;
      if (1 < uVar27) {
        lVar7 = param_1 + 0x1488;
      }
      lVar36 = lVar35 + 0x30;
      plVar32 = (long *)PTR_DAT_04bb27a8;
      local_6c = param_3;
      local_b0._0_4_ = iVar29;
      do {
        uVar27 = *(uint *)(param_1 + 0x50);
        sVar17 = *(short *)(param_1 + 0x84);
        if (*(short *)(param_1 + 0x88) <= *(short *)(param_1 + 0x84)) {
          sVar17 = *(short *)(param_1 + 0x88);
        }
        sVar18 = *(short *)(param_1 + 0x86);
        if (*(short *)(param_1 + 0x8a) <= *(short *)(param_1 + 0x86)) {
          sVar18 = *(short *)(param_1 + 0x8a);
        }
        puVar11 = (ushort *)
                  (param_1 + 0x8c +
                  (ulong)((local_b0._4_4_ - (int)sVar18) * 3 + ((int)local_b0 - sVar17)) * 0xe);
        if (2 < local_b0._4_4_ - (int)sVar18 || 2 < (uint)((int)local_b0 - sVar17)) {
          puVar11 = (ushort *)puVar8;
        }
        puVar42 = puVar11 + (ulong)uVar27 * 3;
        if (1 < uVar27) {
          puVar42 = puVar11;
        }
        lVar38 = *plVar32;
        uVar43 = (uint)*puVar42 - (uint)*(ushort *)(lVar38 + 0x408);
        if (((uVar43 < *(uint *)(lVar38 + 1000)) &&
            (puVar39 = *(uint **)(*(long *)(lVar38 + 0x3f0) + (long)(int)uVar43 * 8),
            puVar39 != (uint *)0x0)) &&
           (uVar43 = *puVar39, uVar43 != 0 && puVar39 != (uint *)(ulong)uVar43)) {
          puVar44 = (uint *)((long)puVar39 - (long)(ulong)uVar43);
          if (((*puVar44 == 0) || (uVar43 = puVar44[1], uVar43 == 0)) ||
             ((ulong)(ushort)puVar44[2] == 0)) goto LAB_013078d0;
          lVar38 = 0xc;
          if (*(char *)((long)puVar44 + 10) != '\0') {
            lVar38 = 0x1c;
          }
          lVar38 = (long)puVar44 + lVar38 + (ulong)(ushort)puVar44[2] * 8;
          if (lVar38 == 0) goto LAB_013078d0;
          uVar13 = 0;
          if ((ulong)uVar43 != 0) {
            uVar13 = (uint)((ulong)((long)puVar39 - lVar38) / (ulong)uVar43);
          }
          if (*puVar44 <= uVar13) {
            uVar13 = 0xffffffff;
          }
          if ((*(uint *)puVar6 <= uVar13) ||
             (uVar16 = *(ushort *)(*(long *)(puVar6 + 8) + (long)(int)uVar13 * 2),
             uVar43 = (uint)uVar16, 4 < uVar16)) goto LAB_013078d0;
        }
        else {
LAB_013078d0:
          uVar43 = 0;
        }
        local_100 = (undefined *)CONCAT44(local_100._4_4_,uVar43);
        if ((uVar43 == 4) && (local_6c != 0)) {
          uVar43 = (byte)puVar11[6] - 1;
          iVar30 = 0;
          if (uVar43 < 3) {
            iVar30 = (uVar43 & 0xff) + 1;
          }
          local_100 = (undefined *)CONCAT44(local_100._4_4_,iVar30);
          if (local_6c != iVar30 - 1U) {
            local_d8 = 1;
            lVar38 = lVar34 + (ulong)uVar27 * 0x930;
            if (1 < uVar27) {
              lVar38 = lVar34;
            }
            local_100._0_4_ = uVar27;
            uVar27 = FUN_01302e18(lVar38,local_6c,&local_b8);
            local_100 = (undefined *)CONCAT44(local_100._4_4_,uVar27);
            plVar32 = (long *)PTR_DAT_04bb27a8;
            if (uVar27 == local_d8) {
              local_d8 = 0;
              local_74 = 0;
              local_78 = 0;
              uVar31 = FUN_01302c88(lVar35,&local_d8,(long)&local_74 + 4,&local_74,&local_78,
                                    &local_b8);
              if ((((uVar31 & 1) != 0) && ((int)local_74._4_4_ <= local_78)) &&
                 ((int)local_d8 <= (int)local_74)) {
                iVar30 = local_74._4_4_ * 0xc;
                uVar27 = local_74._4_4_;
                do {
                  uVar43 = local_d8;
                  if ((int)local_d8 <= (int)local_74) {
                    do {
                      if (0xb < uVar27 || 0xb < uVar43) {
                        local_7c = 5;
                        local_80 = 5;
                      }
                      else {
                        lVar38 = lVar36 + (ulong)local_6c * 0x240;
                        if (3 < local_6c) {
                          lVar38 = lVar36;
                        }
                        lVar26 = (ulong)(iVar30 + uVar43) * 4;
                        local_7c = *(int *)(lVar38 + lVar26);
                        lVar38 = lVar7 + 0x30 + (ulong)local_6c * 0x240;
                        if (3 < local_6c) {
                          lVar38 = lVar7 + 0x30;
                        }
                        local_80 = *(int *)(lVar38 + lVar26);
                      }
                      if (((local_7c != local_80) && (local_7c != 1)) &&
                         ((local_80 != 0 && (0xb >= uVar27 && 0xb >= uVar43)))) {
                        lVar38 = lVar36 + (ulong)local_6c * 0x240;
                        if (3 < local_6c) {
                          lVar38 = lVar36;
                        }
                        *(undefined4 *)(lVar38 + (ulong)(iVar30 + uVar43) * 4) = 3;
                      }
                      local_100 = (undefined *)CONCAT44(local_100._4_4_,local_6c);
                      bVar1 = (int)uVar43 < (int)local_74;
                      uVar43 = uVar43 + 1;
                    } while (bVar1);
                  }
                  iVar30 = iVar30 + 0xc;
                  bVar1 = (int)uVar27 < local_78;
                  uVar27 = uVar27 + 1;
                } while (bVar1);
              }
              plVar32 = (long *)PTR_DAT_04bb27a8;
            }
          }
        }
        if ((int)local_b0 < *(int *)(local_c0 + 8)) {
          local_b0._0_4_ = (int)local_b0 + 1;
        }
        else {
          local_b0._0_4_ = *(int *)(local_c8 + 8);
          local_b0._4_4_ = local_b0._4_4_ + 1;
        }
      } while ((iVar29 != (int)local_b0) || (iVar49 != local_b0._4_4_));
    }
  }
  return;
}

