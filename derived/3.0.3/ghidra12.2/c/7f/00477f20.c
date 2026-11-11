
/* WARNING: Type propagation algorithm not settling */

undefined8 FUN_00477f20(long param_1)

{
  undefined4 *puVar1;
  long *plVar2;
  ulong *puVar3;
  uint uVar4;
  undefined *puVar5;
  undefined *puVar6;
  bool bVar7;
  int iVar8;
  uint uVar10;
  undefined4 uVar11;
  int iVar9;
  long lVar12;
  long lVar13;
  long lVar14;
  long lVar15;
  uint uVar16;
  undefined8 uVar17;
  undefined8 *puVar18;
  undefined4 *puVar19;
  ulong uVar20;
  ulong uVar21;
  undefined4 *puVar22;
  long *plVar23;
  long *plVar24;
  ulong *puVar25;
  undefined4 *puVar26;
  int *piVar27;
  long *plVar28;
  uint *puVar29;
  undefined1 auVar30 [16];
  uint local_1c8;
  undefined4 *local_1b0;
  long local_1a8;
  long lStack_1a0;
  undefined8 local_198;
  int local_18c;
  long local_188;
  undefined8 local_180;
  long local_178;
  undefined8 local_170;
  long local_168;
  undefined8 local_160;
  ulong local_158;
  undefined8 local_150;
  long local_148;
  undefined8 local_140;
  undefined1 auStack_138 [16];
  long local_128;
  undefined8 local_120;
  undefined1 auStack_118 [16];
  long local_108;
  undefined8 local_100;
  undefined1 auStack_f8 [16];
  undefined1 local_e8 [16];
  undefined1 auStack_d8 [48];
  long local_a8;
  undefined8 local_a0;
  undefined8 local_98 [2];
  long local_88;
  undefined8 local_80;
  undefined8 local_78 [3];
  
  if (*(char *)(param_1 + 0x1b8) != '\0') {
    *(undefined1 *)(param_1 + 0x1b9) = 1;
    return 0;
  }
  local_88 = 0;
  local_80 = -0x8000000000000000;
  FUN_0043d3a0(local_78);
  uVar17 = *(undefined8 *)(param_1 + 0x90);
  local_a8 = 0;
  local_a0 = -0x8000000000000000;
  FUN_0043d3a0(local_98);
  if (*(int *)(param_1 + 0xb0) != 0) {
    *(undefined4 *)(param_1 + 0xb0) = 0;
    FUN_0043d590(param_1 + 0xb8);
  }
  if (*(int *)(param_1 + 0xd0) != 0) {
    *(undefined4 *)(param_1 + 0xd0) = 0;
    FUN_0043d590(param_1 + 0xd8);
  }
  puVar6 = PTR_DAT_04bd5b68;
  puVar5 = PTR_DAT_048607b8;
  auVar30._8_8_ = local_e8._8_8_;
  auVar30._0_8_ = local_e8._0_8_;
  plVar28 = (long *)(param_1 + 0xa8);
  plVar23 = (long *)(param_1 + 200);
  puVar3 = (ulong *)(param_1 + 0x98);
  if (0 < *(int *)(param_1 + 0xa0)) {
    bVar7 = false;
    iVar9 = 0;
    local_1b0 = (undefined4 *)PTR_DAT_048607b8;
LAB_00478418:
    do {
      plVar24 = *(long **)(*puVar3 + (long)iVar9 * 8);
      if (plVar24 != (long *)0x0) {
        local_e8 = auVar30;
        iVar8 = FUN_00477b40(plVar24);
        if (iVar8 == 0) {
          if (DAT_04c70968 == '\0') {
            bVar7 = true;
            local_e8._0_8_ = *plVar24;
            local_e8._8_8_ = plVar24[1];
            if (local_e8._0_8_ == local_e8._8_8_) goto LAB_00478580;
            goto LAB_00478440;
          }
          bVar7 = true;
          FUN_00444bc0(local_e8,&DAT_04c70918,1);
          lVar12 = FUN_004446b0(local_e8,"Invalid patch registered {}",puVar6,plVar24);
          *(char **)(lVar12 + 0x28) =
               "E:/Havok/Build/.tmp/d20190725-23496-zzy48q/105_hk2019_1_0_Park/Source/Common/Base/Reflect/Version/hkReflectPatchRegistry.cpp"
          ;
          *(undefined8 *)(lVar12 + 0x30) = 0x17c;
          FUN_00444c00(local_e8);
          local_e8._0_8_ = *plVar24;
          local_e8._8_8_ = plVar24[1];
          if (local_e8._0_8_ != local_e8._8_8_) goto LAB_00478440;
LAB_00478580:
          local_e8._0_8_ = plVar24[2];
          local_e8._8_8_ = plVar24[3];
          local_108 = FUN_004771b0(*(undefined8 *)(param_1 + 0x90),local_e8,
                                   *(undefined4 *)((long)plVar24 + 0x24));
          lVar12 = FUN_0047c500(plVar23,&local_108);
          if ((lVar12 != 0) &&
             (-1 < (int)(*(uint *)(lVar12 + 4) |
                        ((int)lVar12 - (int)*(undefined8 *)(param_1 + 0xd8)) * 0x20000000))) {
            if (DAT_04c70968 != '\0') {
              FUN_00444bc0(local_e8,&DAT_04c70918,1);
              lVar12 = FUN_004446b0(local_e8,
                                    "Found duplicated patch {}. The second definition will be ignored\n"
                                    ,puVar6,plVar24);
              *(char **)(lVar12 + 0x28) =
                   "E:/Havok/Build/.tmp/d20190725-23496-zzy48q/105_hk2019_1_0_Park/Source/Common/Base/Reflect/Version/hkReflectPatchRegistry.cpp"
              ;
              *(undefined8 *)(lVar12 + 0x30) = 0x19b;
              FUN_00444c00(local_e8);
            }
            iVar8 = *(int *)(param_1 + 0xa0) + -1;
            uVar16 = iVar8 - iVar9;
            *(int *)(param_1 + 0xa0) = iVar8;
            if (0 < (int)uVar16) {
              lVar12 = 0;
              puVar18 = (undefined8 *)(*(long *)(param_1 + 0x98) + (long)iVar9 * 8);
              do {
                lVar12 = (lVar12 << 0x20) + 0x800000000 >> 0x20;
                *puVar18 = puVar18[1];
                puVar18 = puVar18 + 1;
              } while (lVar12 < (long)(-(ulong)(uVar16 >> 0x1f) & 0xfffffff800000000 |
                                      (ulong)uVar16 << 3));
            }
            goto LAB_0047865c;
          }
          uVar16 = FUN_0047c940(plVar23,&local_108);
          auVar30._8_8_ = local_e8._8_8_;
          auVar30._0_8_ = local_e8._0_8_;
          if (*(uint *)(param_1 + 0xd0) == uVar16) {
            if ((*(uint *)(param_1 + 0xd4) & 0x3fffffff) == uVar16) {
              FUN_00426990(puVar5,plVar23,0x10);
              uVar16 = *(uint *)(param_1 + 0xd0);
            }
            auVar30._8_8_ = local_e8._8_8_;
            auVar30._0_8_ = local_e8._0_8_;
            plVar2 = (long *)(*(long *)(param_1 + 200) + (long)(int)uVar16 * 0x10);
            *plVar2 = local_108;
            *(int *)(plVar2 + 1) = iVar9;
            *(uint *)(param_1 + 0xd0) = uVar16 + 1;
            iVar8 = *(int *)((long)plVar24 + 0x24);
          }
          else {
            *(int *)(*plVar23 + ((long)((ulong)uVar16 << 0x20) >> 0x1c) + 8) = iVar9;
            iVar8 = *(int *)((long)plVar24 + 0x24);
          }
        }
        else {
          local_e8._0_8_ = *plVar24;
          local_e8._8_8_ = plVar24[1];
          if (local_e8._0_8_ == local_e8._8_8_) goto LAB_00478580;
LAB_00478440:
          local_108 = FUN_004771b0(*(undefined8 *)(param_1 + 0x90),local_e8,(int)plVar24[4]);
          lVar12 = FUN_0047c500(plVar28,&local_108);
          if ((lVar12 != 0) &&
             (-1 < (int)(*(uint *)(lVar12 + 4) |
                        ((int)lVar12 - (int)*(undefined8 *)(param_1 + 0xb8)) * 0x20000000))) {
            if (DAT_04c70968 != '\0') {
              FUN_00444bc0(local_e8,&DAT_04c70918,1);
              lVar12 = FUN_004446b0(local_e8,
                                    "Found duplicated patch {}. The second definition will be ignored\n"
                                    ,puVar6,plVar24);
              *(char **)(lVar12 + 0x28) =
                   "E:/Havok/Build/.tmp/d20190725-23496-zzy48q/105_hk2019_1_0_Park/Source/Common/Base/Reflect/Version/hkReflectPatchRegistry.cpp"
              ;
              *(undefined8 *)(lVar12 + 0x30) = 0x188;
              FUN_00444c00(local_e8);
            }
            iVar8 = *(int *)(param_1 + 0xa0) + -1;
            uVar16 = iVar8 - iVar9;
            *(int *)(param_1 + 0xa0) = iVar8;
            if (0 < (int)uVar16) {
              lVar12 = 0;
              puVar18 = (undefined8 *)(*(long *)(param_1 + 0x98) + (long)iVar9 * 8);
              do {
                lVar12 = (lVar12 << 0x20) + 0x800000000 >> 0x20;
                *puVar18 = puVar18[1];
                puVar18 = puVar18 + 1;
              } while (lVar12 < (long)(-(ulong)(uVar16 >> 0x1f) & 0xfffffff800000000 |
                                      (ulong)uVar16 << 3));
            }
LAB_0047865c:
            auVar30._8_8_ = local_e8._8_8_;
            auVar30._0_8_ = local_e8._0_8_;
            iVar9 = iVar9 + -1;
            goto LAB_00478660;
          }
          uVar16 = FUN_0047c940(plVar28,&local_108);
          if (*(uint *)(param_1 + 0xb0) == uVar16) {
            if ((*(uint *)(param_1 + 0xb4) & 0x3fffffff) == uVar16) {
              FUN_00426990(puVar5,plVar28,0x10);
              uVar16 = *(uint *)(param_1 + 0xb0);
            }
            plVar2 = (long *)(*(long *)(param_1 + 0xa8) + (long)(int)uVar16 * 0x10);
            *plVar2 = local_108;
            *(int *)(plVar2 + 1) = iVar9;
            *(uint *)(param_1 + 0xb0) = uVar16 + 1;
            if (plVar24[2] != plVar24[3]) goto LAB_00478300;
LAB_00478310:
            local_e8._0_8_ = *plVar24;
            local_e8._8_8_ = plVar24[1];
            lVar12 = FUN_0047ca40(&local_a8,local_e8);
            uVar16 = (uint)lVar12;
            if ((uint)local_a0 == uVar16) {
              if ((local_a0._4_4_ & 0x3fffffff) == uVar16) {
                FUN_00426990(puVar5,&local_a8,0x18);
                lVar12 = local_a0;
              }
              lVar13 = local_a8 + (long)(int)lVar12 * 0x18;
              FUN_0043bd90(lVar13,local_e8._0_8_,local_e8._8_8_);
              *(undefined8 *)(lVar13 + 8) = 0;
              *(undefined8 *)(lVar13 + 0x10) = 0x8000000000000000;
              local_a0 = CONCAT44(local_a0._4_4_,(int)lVar12 + 1);
            }
            lVar12 = local_a8 + (long)(int)uVar16 * 0x18;
            puVar29 = (uint *)(lVar12 + 0x10);
            uVar16 = *puVar29;
            if (uVar16 == (*(uint *)(lVar12 + 0x14) & 0x3fffffff)) {
              FUN_00426990(puVar5,(long *)(lVar12 + 8),4);
              uVar16 = *puVar29;
            }
            *(int *)(*(long *)(lVar12 + 8) + (long)(int)uVar16 * 4) = iVar9;
            *puVar29 = uVar16 + 1;
          }
          else {
            *(int *)(*plVar28 + ((long)((ulong)uVar16 << 0x20) >> 0x1c) + 8) = iVar9;
            if (plVar24[2] == plVar24[3]) goto LAB_00478310;
LAB_00478300:
            uVar21 = FUN_00429cb0(plVar24,plVar24 + 2);
            if ((uVar21 & 1) == 0) goto LAB_00478310;
          }
          auVar30._8_8_ = local_e8._8_8_;
          auVar30._0_8_ = local_e8._0_8_;
          iVar8 = *(int *)((long)plVar24 + 0x24);
        }
        if (iVar8 != -1) {
          local_108 = plVar24[2];
          local_100 = plVar24[3];
          if (local_108 == local_100) {
            local_108 = *plVar24;
            local_100 = plVar24[1];
          }
          local_e8 = FUN_004771b0(uVar17,&local_108);
          lVar12 = FUN_0047cb50(&local_88,local_e8);
          uVar16 = (uint)lVar12;
          if ((uint)local_80 == uVar16) {
            if ((local_80._4_4_ & 0x3fffffff) == uVar16) {
              FUN_00426990(puVar5,&local_88,0x18);
              lVar12 = local_80;
            }
            puVar18 = (undefined8 *)(local_88 + (long)(int)lVar12 * 0x18);
            *puVar18 = local_e8._0_8_;
            puVar18[1] = 0;
            puVar18[2] = 0x8000000000000000;
            local_80 = CONCAT44(local_80._4_4_,(int)lVar12 + 1);
          }
          lVar12 = local_88 + (long)(int)uVar16 * 0x18;
          puVar29 = (uint *)(lVar12 + 0x10);
          uVar16 = *puVar29;
          if (uVar16 == (*(uint *)(lVar12 + 0x14) & 0x3fffffff)) {
            FUN_00426990(puVar5,(long *)(lVar12 + 8),4);
            uVar16 = *puVar29;
          }
          *(int *)(*(long *)(lVar12 + 8) + (long)(int)uVar16 * 4) = iVar9;
          *puVar29 = uVar16 + 1;
          auVar30 = local_e8;
          if (local_e8._0_8_ != local_e8._8_8_) {
            lVar12 = FUN_0047cb50(&local_88,local_e8 + 8);
            uVar16 = (uint)lVar12;
            if ((uint)local_80 == uVar16) {
              if ((local_80._4_4_ & 0x3fffffff) == uVar16) {
                FUN_00426990(puVar5,&local_88,0x18);
                lVar12 = local_80;
              }
              puVar18 = (undefined8 *)(local_88 + (long)(int)lVar12 * 0x18);
              *puVar18 = local_e8._8_8_;
              puVar18[1] = 0;
              puVar18[2] = 0x8000000000000000;
              local_80 = CONCAT44(local_80._4_4_,(int)lVar12 + 1);
            }
            lVar12 = local_88 + (long)(int)uVar16 * 0x18;
            puVar29 = (uint *)(lVar12 + 0x10);
            uVar16 = *puVar29;
            auVar30 = local_e8;
            if (uVar16 == (*(uint *)(lVar12 + 0x14) & 0x3fffffff)) {
              FUN_00426990(puVar5,(long *)(lVar12 + 8),4);
              uVar16 = *puVar29;
              auVar30 = local_e8;
            }
            *(int *)(*(long *)(lVar12 + 8) + (long)(int)uVar16 * 4) = iVar9;
            *puVar29 = uVar16 + 1;
            iVar9 = iVar9 + 1;
            if (*(int *)(param_1 + 0xa0) <= iVar9) break;
            goto LAB_00478418;
          }
        }
      }
LAB_00478660:
      iVar9 = iVar9 + 1;
    } while (iVar9 < *(int *)(param_1 + 0xa0));
    if (bVar7) {
      uVar17 = 0x80040200;
      local_e8 = auVar30;
      goto LAB_00479928;
    }
  }
  local_108 = 0;
  local_100 = -0x8000000000000000;
  local_e8 = auVar30;
  FUN_0043d3a0();
  local_128 = 0;
  local_120 = -0x8000000000000000;
  FUN_0043d3a0();
  local_148 = 0;
  local_140 = -0x8000000000000000;
  FUN_0043d3a0();
  puVar5 = PTR_DAT_048607b8;
  if (0 < *(int *)(param_1 + 0xa0)) {
    lVar12 = 0;
    local_1b0 = (undefined4 *)PTR_DAT_048607b8;
    do {
      puVar25 = *(ulong **)(*puVar3 + lVar12 * 8);
      local_158 = *puVar25;
      local_150 = puVar25[1];
      iVar9 = (int)puVar25[4];
      if (iVar9 == -1) {
        local_158 = puVar25[2];
        local_150 = puVar25[3];
        iVar9 = *(int *)((long)puVar25 + 0x24);
      }
      local_188 = CONCAT44(local_188._4_4_,iVar9);
      local_168 = FUN_004771b0(uVar17,&local_158);
      if ((int)puVar25[4] == -1) {
        lVar13 = FUN_0047c500(plVar23,&local_168);
        if (lVar13 != 0) {
          iVar9 = *(int *)(*plVar23 + (long)*(int *)(lVar13 + 4) * 0x10 + 8);
          local_1a8 = CONCAT44(local_1a8._4_4_,iVar9);
          goto joined_r0x004789f4;
        }
        local_1a8 = CONCAT44(local_1a8._4_4_,0xffffffff);
      }
      else {
        lVar13 = FUN_0047c500(plVar28,&local_168);
        if (lVar13 == 0) {
          uVar11 = 0xffffffff;
        }
        else {
          uVar11 = *(undefined4 *)(*plVar28 + (long)*(int *)(lVar13 + 4) * 0x10 + 8);
        }
        local_1a8 = CONCAT44(local_1a8._4_4_,uVar11);
        lVar13 = FUN_0047cc50(&local_88,&local_168);
        if ((lVar13 != 0) &&
           (uVar16 = *(uint *)(lVar13 + 4) | ((int)lVar13 - (int)local_78[0]) * 0x20000000,
           -1 < (int)uVar16)) {
          lVar13 = local_88 + (long)(int)uVar16 * 0x18;
          iVar9 = *(int *)(lVar13 + 0x10);
          if (iVar9 != 0) {
            puVar26 = *(undefined4 **)(lVar13 + 8);
            lVar13 = (long)iVar9 << 2;
            do {
              uVar11 = *puVar26;
              lVar14 = FUN_0047ccf0(&local_128,&local_1a8);
              uVar16 = (uint)lVar14;
              if ((uint)local_120 == uVar16) {
                if ((local_120._4_4_ & 0x3fffffff) == uVar16) {
                  FUN_00426990(puVar5,&local_128,0x18);
                  lVar14 = local_120;
                }
                puVar19 = (undefined4 *)(local_128 + (long)(int)lVar14 * 0x18);
                *puVar19 = (int)local_1a8;
                *(undefined8 *)(puVar19 + 2) = 0;
                *(undefined8 *)(puVar19 + 4) = 0x8000000000000000;
                local_120 = CONCAT44(local_120._4_4_,(int)lVar14 + 1);
              }
              lVar14 = local_128 + (long)(int)uVar16 * 0x18;
              puVar29 = (uint *)(lVar14 + 0x10);
              uVar16 = *puVar29;
              if (uVar16 == (*(uint *)(lVar14 + 0x14) & 0x3fffffff)) {
                FUN_00426990(puVar5,(long *)(lVar14 + 8),4);
                uVar16 = *puVar29;
              }
              puVar26 = puVar26 + 1;
              lVar13 = lVar13 + -4;
              *(undefined4 *)(*(long *)(lVar14 + 8) + (long)(int)uVar16 * 4) = uVar11;
              *puVar29 = uVar16 + 1;
            } while (lVar13 != 0);
          }
        }
        iVar9 = (int)local_1a8;
joined_r0x004789f4:
        if (-1 < iVar9) {
          iVar9 = (int)puVar25[6];
          if (0 < iVar9) {
            lVar13 = 0;
            do {
              if ((*(char *)(puVar25[5] + lVar13 * 0x10) == '\a') &&
                 (lVar14 = *(long *)(puVar25[5] + lVar13 * 0x10 + 8), lVar14 != 0)) {
                auVar30 = FUN_004771b0(uVar17,lVar14,*(undefined4 *)(lVar14 + 0x10));
                local_e8 = auVar30;
                lVar14 = FUN_0047c500(plVar28,local_e8);
                if (lVar14 == 0) {
                  local_178 = CONCAT44(local_178._4_4_,0xffffffff);
                  if (*puVar25 != puVar25[1]) goto LAB_00478c3c;
                }
                else {
                  iVar9 = *(int *)(*plVar28 + (long)*(int *)(lVar14 + 4) * 0x10 + 8);
                  local_178 = CONCAT44(local_178._4_4_,iVar9);
                  if (iVar9 != -1) {
                    lVar14 = FUN_0047ccf0(&local_128,&local_178);
                    uVar16 = (uint)lVar14;
                    if ((uint)local_120 == uVar16) {
                      if ((local_120._4_4_ & 0x3fffffff) == uVar16) {
                        FUN_00426990(puVar5,&local_128,0x18);
                        lVar14 = local_120;
                      }
                      puVar26 = (undefined4 *)(local_128 + (long)(int)lVar14 * 0x18);
                      *puVar26 = (undefined4)local_178;
                      *(undefined8 *)(puVar26 + 2) = 0;
                      *(undefined8 *)(puVar26 + 4) = 0x8000000000000000;
                      local_120 = CONCAT44(local_120._4_4_,(int)lVar14 + 1);
                    }
                    lVar14 = local_128 + (long)(int)uVar16 * 0x18;
                    puVar29 = (uint *)(lVar14 + 0x10);
                    uVar16 = *puVar29;
                    if (uVar16 == (*(uint *)(lVar14 + 0x14) & 0x3fffffff)) {
                      FUN_00426990(puVar5,(long *)(lVar14 + 8),4);
                      uVar16 = *puVar29;
                    }
                    *(int *)(*(long *)(lVar14 + 8) + (long)(int)uVar16 * 4) = (int)local_1a8;
                    *puVar29 = uVar16 + 1;
                  }
                  if (*puVar25 != puVar25[1]) {
LAB_00478c3c:
                    lVar14 = FUN_0047cc50(&local_88,local_e8);
                    if ((lVar14 != 0) &&
                       (uVar16 = *(uint *)(lVar14 + 4) |
                                 ((int)lVar14 - (int)local_78[0]) * 0x20000000, -1 < (int)uVar16)) {
                      lVar14 = local_88 + (long)(int)uVar16 * 0x18;
                      iVar9 = *(int *)(lVar14 + 0x10);
                      if (iVar9 != 0) {
                        piVar27 = *(int **)(lVar14 + 8);
                        lVar14 = (long)iVar9 << 2;
                        do {
                          while (iVar9 = *piVar27,
                                *(char *)(*(long *)(*puVar3 + (long)iVar9 * 8) + 0x35) != '\0') {
                            piVar27 = piVar27 + 1;
                            lVar14 = lVar14 + -4;
                            if (lVar14 == 0) goto LAB_00478d80;
                          }
                          lVar15 = FUN_0047ccf0(&local_128,&local_1a8);
                          uVar16 = (uint)lVar15;
                          if ((uint)local_120 == uVar16) {
                            if ((local_120._4_4_ & 0x3fffffff) == uVar16) {
                              FUN_00426990(puVar5,&local_128,0x18);
                              lVar15 = local_120;
                            }
                            puVar26 = (undefined4 *)(local_128 + (long)(int)lVar15 * 0x18);
                            *puVar26 = (int)local_1a8;
                            *(undefined8 *)(puVar26 + 2) = 0;
                            *(undefined8 *)(puVar26 + 4) = 0x8000000000000000;
                            local_120 = CONCAT44(local_120._4_4_,(int)lVar15 + 1);
                          }
                          lVar15 = local_128 + (long)(int)uVar16 * 0x18;
                          puVar29 = (uint *)(lVar15 + 0x10);
                          uVar16 = *puVar29;
                          if (uVar16 == (*(uint *)(lVar15 + 0x14) & 0x3fffffff)) {
                            FUN_00426990(puVar5,(long *)(lVar15 + 8),4);
                            uVar16 = *puVar29;
                          }
                          *(int *)(*(long *)(lVar15 + 8) + (long)(int)uVar16 * 4) = iVar9;
                          *puVar29 = uVar16 + 1;
                          piVar27 = piVar27 + 1;
                          lVar14 = lVar14 + -4;
                        } while (lVar14 != 0);
                      }
                    }
                  }
                }
LAB_00478d80:
                iVar9 = (int)puVar25[6];
              }
              lVar13 = lVar13 + 1;
            } while (lVar13 < iVar9);
          }
          if ((int)puVar25[4] == -1) {
            FUN_0043bd90(local_e8,local_158,local_150);
            lVar13 = FUN_0047cdd0(&local_a8,local_e8);
            if (lVar13 == 0) {
              FUN_0043be10(local_e8);
            }
            else {
              uVar16 = *(uint *)(lVar13 + 4);
              iVar9 = (int)local_98[0];
              FUN_0043be10(local_e8);
              if (-1 < (int)(uVar16 | ((int)lVar13 - iVar9) * 0x20000000)) {
                FUN_0043bd90(&local_178,local_158,local_150);
                lVar13 = FUN_0047cdd0(&local_a8,&local_178);
                if ((lVar13 == 0) ||
                   (uVar16 = *(uint *)(lVar13 + 4) | ((int)lVar13 - (int)local_98[0]) * 0x20000000,
                   (int)uVar16 < 0)) {
                  FUN_0043be10(&local_178);
                }
                else {
                  iVar9 = FUN_00479bd0(param_1,local_168,0);
                  if (iVar9 == -1) {
                    lVar13 = FUN_0047ceb0(&local_108,&local_178);
                    if ((lVar13 != 0) &&
                       (iVar8 = *(int *)(local_108 + (long)*(int *)(lVar13 + 4) * 0x10 + 8),
                       iVar8 != -1)) {
                      if (DAT_04c70968 != '\0') {
                        FUN_00444bc0(local_e8,&DAT_04c70918,1);
                        local_198 = CONCAT44(local_198._4_4_,
                                             *(undefined4 *)
                                              (*(long *)(*puVar3 + (long)iVar8 * 8) + 0x24));
                        lVar12 = FUN_004446b0(local_e8,
                                              "Found conflict in registered patches for class \'{}\'.\nThe class patch for version {} conflicts with patch for new class version {}."
                                              ,&DAT_048654f0,&local_158,&local_198,&local_188);
                        *(char **)(lVar12 + 0x28) =
                             "E:/Havok/Build/.tmp/d20190725-23496-zzy48q/105_hk2019_1_0_Park/Source/Common/Base/Reflect/Version/hkReflectPatchRegistry.cpp"
                        ;
                        *(undefined8 *)(lVar12 + 0x30) = 0x22d;
                        FUN_00444c00(local_e8);
                      }
                      uVar17 = 0x80040200;
                      FUN_0043be10(&local_178);
                      goto LAB_004797bc;
                    }
                    uVar10 = FUN_0047c5a0(&local_108,&local_178);
                    if ((uint)local_100 == uVar10) {
                      if ((local_100._4_4_ & 0x3fffffff) == uVar10) {
                        FUN_00426990(puVar5,&local_108,0x10);
                        uVar10 = (uint)local_100;
                      }
                      lVar13 = local_108 + (long)(int)uVar10 * 0x10;
                      FUN_0043bd50(lVar13,&local_178);
                      *(int *)(lVar13 + 8) = (int)lVar12;
                      local_100 = CONCAT44(local_100._4_4_,uVar10 + 1);
                    }
                    else {
                      *(int *)(local_108 + ((long)((ulong)uVar10 << 0x20) >> 0x1c) + 8) =
                           (int)lVar12;
                    }
                  }
                  plVar24 = &local_128;
                  if (iVar9 != -1) {
                    plVar24 = &local_148;
                  }
                  lVar13 = local_a8 + (long)(int)uVar16 * 0x18;
                  iVar8 = *(int *)(lVar13 + 0x10);
                  if (iVar8 != 0) {
                    piVar27 = *(int **)(lVar13 + 8);
                    lVar13 = (long)iVar8 << 2;
                    do {
                      iVar8 = *piVar27;
                      if (iVar9 != iVar8) {
                        uVar16 = FUN_0047ccf0(plVar24,&local_1a8);
                        if (*(uint *)(plVar24 + 1) == uVar16) {
                          uVar10 = uVar16;
                          if ((*(uint *)((long)plVar24 + 0xc) & 0x3fffffff) == uVar16) {
                            FUN_00426990(puVar5,plVar24,0x18);
                            uVar10 = *(uint *)(plVar24 + 1);
                          }
                          puVar26 = (undefined4 *)(*plVar24 + (long)(int)uVar10 * 0x18);
                          *puVar26 = (int)local_1a8;
                          *(undefined8 *)(puVar26 + 2) = 0;
                          *(undefined8 *)(puVar26 + 4) = 0x8000000000000000;
                          *(uint *)(plVar24 + 1) = uVar10 + 1;
                        }
                        lVar14 = *plVar24 + (long)(int)uVar16 * 0x18;
                        puVar29 = (uint *)(lVar14 + 0x10);
                        uVar16 = *puVar29;
                        if (uVar16 == (*(uint *)(lVar14 + 0x14) & 0x3fffffff)) {
                          FUN_00426990(puVar5,(long *)(lVar14 + 8),4);
                          uVar16 = *puVar29;
                        }
                        *(int *)(*(long *)(lVar14 + 8) + (long)(int)uVar16 * 4) = iVar8;
                        *puVar29 = uVar16 + 1;
                      }
                      piVar27 = piVar27 + 1;
                      lVar13 = lVar13 + -4;
                    } while (lVar13 != 0);
                  }
                  FUN_0043be10(&local_178);
                }
              }
            }
          }
        }
      }
      lVar12 = lVar12 + 1;
    } while (lVar12 < *(int *)(param_1 + 0xa0));
  }
  puVar5 = PTR_DAT_048607b8;
  iVar9 = (int)local_140 + -1;
  if (0 < (int)local_140) {
    do {
      lVar12 = (long)iVar9;
      puVar26 = (undefined4 *)(local_148 + (long)iVar9 * 0x18);
      local_158 = CONCAT44(local_158._4_4_,*puVar26);
      uVar16 = puVar26[4];
      puVar26 = *(undefined4 **)(puVar26 + 2);
      local_e8._0_4_ = uVar16;
      if ((int)uVar16 < 1) {
        local_1b0 = (undefined4 *)0x0;
        local_1c8 = 0x80000000;
        iVar8 = *(int *)(local_148 + lVar12 * 0x18 + 0x10);
      }
      else {
        local_1b0 = (undefined4 *)FUN_00421ed0(puVar5,4,local_e8);
        local_1c8 = local_e8._0_4_;
        uVar10 = uVar16 & 7;
        puVar19 = local_1b0;
        if (6 < uVar16 - 1) {
          iVar8 = uVar10 - uVar16;
          puVar22 = local_1b0;
          do {
            *puVar22 = *puVar26;
            puVar22[1] = puVar26[1];
            puVar22[2] = puVar26[2];
            puVar22[3] = puVar26[3];
            puVar22[4] = puVar26[4];
            puVar22[5] = puVar26[5];
            puVar22[6] = puVar26[6];
            puVar1 = puVar26 + 7;
            puVar19 = puVar22 + 8;
            puVar26 = puVar26 + 8;
            puVar22[7] = *puVar1;
            iVar8 = iVar8 + 8;
            puVar22 = puVar19;
          } while (iVar8 != 0);
        }
        if (uVar10 != 0) {
          iVar8 = -uVar10;
          do {
            iVar8 = iVar8 + 1;
            *puVar19 = *puVar26;
            puVar19 = puVar19 + 1;
            puVar26 = puVar26 + 1;
          } while (iVar8 != 0);
        }
        puVar26 = *(undefined4 **)(local_148 + lVar12 * 0x18 + 8);
        iVar8 = *(int *)(local_148 + lVar12 * 0x18 + 0x10);
      }
      if (iVar8 != 0) {
        lVar12 = (long)iVar8 << 2;
        do {
          uVar11 = *puVar26;
          local_e8._0_8_ = 0;
          local_e8._8_8_ = -0x8000000000000000;
          FUN_0043d3a0(auStack_d8);
          iVar8 = FUN_00479d20(local_158 & 0xffffffff,uVar11,&local_128,local_e8);
          if (iVar8 == 0) {
            lVar13 = FUN_0047ccf0(&local_128,&local_158);
            uVar16 = (uint)lVar13;
            if ((uint)local_120 == uVar16) {
              if ((local_120._4_4_ & 0x3fffffff) == uVar16) {
                FUN_00426990(puVar5,&local_128,0x18);
                lVar13 = local_120;
              }
              puVar19 = (undefined4 *)(local_128 + (long)(int)lVar13 * 0x18);
              *puVar19 = (undefined4)local_158;
              *(undefined8 *)(puVar19 + 2) = 0;
              *(undefined8 *)(puVar19 + 4) = 0x8000000000000000;
              local_120 = CONCAT44(local_120._4_4_,(int)lVar13 + 1);
            }
            lVar13 = local_128 + (long)(int)uVar16 * 0x18;
            puVar29 = (uint *)(lVar13 + 0x10);
            uVar16 = *puVar29;
            if (uVar16 == (*(uint *)(lVar13 + 0x14) & 0x3fffffff)) {
              FUN_00426990(puVar5,(long *)(lVar13 + 8),4);
              uVar16 = *puVar29;
            }
            *(undefined4 *)(*(long *)(lVar13 + 8) + (long)(int)uVar16 * 4) = uVar11;
            *puVar29 = uVar16 + 1;
          }
          FUN_0043d280(auStack_d8);
          uVar17 = local_e8._8_8_;
          uVar11 = local_e8._12_4_;
          local_e8._8_8_ = (ulong)(uint)local_e8._12_4_ << 0x20;
          if ((-1 < (long)uVar17) && (local_e8._0_8_ != 0)) {
            FUN_00421f90(puVar5,local_e8._0_8_,8,uVar11 & 0x3fffffff);
          }
          puVar26 = puVar26 + 1;
          lVar12 = lVar12 + -4;
        } while (lVar12 != 0);
      }
      if ((local_1b0 != (undefined4 *)0x0) && (-1 < (int)local_1c8)) {
        FUN_00421f90(puVar5,local_1b0,4,local_1c8 & 0x3fffffff);
      }
      iVar9 = iVar9 + -1;
    } while (-1 < iVar9);
  }
  puVar5 = PTR_DAT_048607b8;
  local_158 = 0;
  local_150 = 0x8000000000000000;
  if (puVar3 == &local_158) {
    iVar9 = 0;
LAB_00479268:
    local_160 = -0x8000000000000000;
    local_168 = 0;
    iVar8 = 0;
    if (iVar9 != 0) {
LAB_004790ec:
      local_160 = CONCAT44(local_160._4_4_,iVar9);
      iVar8 = iVar9;
    }
  }
  else {
    FUN_00426620(PTR_DAT_048607b8,&local_158,8);
    iVar8 = *(int *)(param_1 + 0xa4);
    if (iVar8 < 0) {
      FUN_00426620(puVar5,puVar3,8);
      iVar8 = *(int *)(param_1 + 0xa4);
    }
    uVar21 = *(ulong *)(param_1 + 0x98);
    *(ulong *)(param_1 + 0x98) = local_158;
    iVar9 = *(int *)(param_1 + 0xa0);
    *(int *)(param_1 + 0xa0) = (int)local_150;
    uVar11 = local_150._4_4_;
    local_150 = CONCAT44(iVar8,iVar9);
    *(undefined4 *)(param_1 + 0xa4) = uVar11;
    local_168 = 0;
    local_160 = -0x8000000000000000;
    local_158 = uVar21;
    if (iVar9 < 1) goto LAB_00479268;
    local_168 = FUN_00426720(PTR_DAT_048607b8,iVar9,8,0,0,(long)&local_160 + 4);
    iVar8 = (int)local_160;
    if ((int)local_160 != iVar9) goto LAB_004790ec;
  }
  if (0 < (int)local_150) {
    lVar12 = 0;
    lVar13 = 0;
    do {
      *(int *)(local_168 + lVar12) = (int)lVar13;
      plVar23 = *(long **)(local_158 + lVar13 * 8);
      lVar14 = *plVar23;
      if (lVar14 == plVar23[1]) {
        uVar16 = 0;
      }
      else {
        uVar16 = FUN_00446840(lVar14,plVar23[1] - lVar14);
      }
      uVar10 = (int)plVar23[4] * -0x61c8864f;
      uVar10 = (uVar10 & 0xff00ff00) >> 8 | (uVar10 & 0xff00ff) << 8;
      uVar10 = uVar10 >> 0x10 | uVar10 << 0x10;
      uVar16 = uVar16 * 0x40 + -0x61c88647 + uVar10 + (uVar10 >> 2) ^ uVar16;
      lVar14 = plVar23[2];
      if (lVar14 == plVar23[3]) {
        uVar10 = 0;
      }
      else {
        uVar10 = FUN_00446840(lVar14,plVar23[3] - lVar14);
      }
      uVar4 = *(int *)((long)plVar23 + 0x24) * -0x61c8864f;
      uVar4 = (uVar4 & 0xff00ff00) >> 8 | (uVar4 & 0xff00ff) << 8;
      uVar4 = uVar4 >> 0x10 | uVar4 << 0x10;
      uVar10 = uVar10 * 0x40 + -0x61c88647 + uVar4 + (uVar4 >> 2) ^ uVar10;
      lVar14 = local_168 + lVar12;
      lVar12 = lVar12 + 8;
      *(uint *)(lVar14 + 4) = uVar16 * 0x40 + -0x61c88647 + uVar10 + (uVar10 >> 2) ^ uVar16;
      lVar13 = lVar13 + 1;
    } while (lVar13 < (int)local_150);
    iVar8 = (int)local_160;
  }
  iVar9 = (int)local_150;
  if (iVar8 + -1 != 0 && 0 < iVar8) {
    FUN_0047cf80(local_168,0,iVar8 + -1);
    iVar9 = (int)local_150;
  }
  local_178 = 0;
  local_170 = -0x8000000000000000;
  if (iVar9 < 1) {
    local_170._0_4_ = 0;
    bVar7 = false;
    iVar8 = iVar9;
    if (0 < iVar9) goto LAB_00479228;
LAB_0047928c:
    if (iVar8 < 0 != bVar7) {
      local_170 = CONCAT44(local_170._4_4_,iVar9);
    }
  }
  else {
    local_178 = FUN_00426720(PTR_DAT_048607b8,iVar9,4,0,0,(long)&local_170 + 4);
    bVar7 = SBORROW4(iVar9,(uint)local_170);
    iVar8 = iVar9 - (uint)local_170;
    if (iVar9 <= (int)(uint)local_170) goto LAB_0047928c;
LAB_00479228:
    lVar12 = (long)(int)(uint)local_170;
    uVar16 = ~(uint)local_170;
    local_170 = CONCAT44(local_170._4_4_,iVar9);
    memset((void *)(local_178 + lVar12 * 4),0xff,(ulong)(iVar9 + uVar16) * 4 + 4);
  }
  local_188 = 0;
  local_180 = -0x8000000000000000;
  if (0 < (int)local_160) {
    lVar13 = 0;
    lVar12 = 0;
    uVar11 = 0;
    do {
      uVar11 = FUN_00479e40(*(undefined4 *)(local_168 + lVar13),&local_178,&local_128,uVar11,
                            &local_188);
      lVar12 = lVar12 + 1;
      lVar13 = lVar13 + 8;
    } while (lVar12 < (int)local_160);
  }
  iVar9 = (int)local_150;
  puVar29 = (uint *)(param_1 + 0xa4);
  if ((int)(*puVar29 & 0x3fffffff) < (int)local_150) {
    uVar17 = FUN_00426720(PTR_DAT_048607b8,local_150 & 0xffffffff,8,*(undefined8 *)(param_1 + 0x98),
                          *(undefined4 *)(param_1 + 0xa0),puVar29);
    *(undefined8 *)(param_1 + 0x98) = uVar17;
    if (*(int *)(param_1 + 0xa0) == iVar9) goto LAB_00479350;
LAB_00479330:
    *(int *)(param_1 + 0xa0) = iVar9;
  }
  else {
    if (*(int *)(param_1 + 0xa0) != (int)local_150) goto LAB_00479330;
LAB_00479350:
  }
  if (0 < (int)local_150) {
    lVar12 = 0;
    do {
      iVar9 = *(int *)(local_178 + lVar12 * 4);
      if (iVar9 < 0) {
        if (DAT_04c70968 != '\0') {
          FUN_00444bc0(local_e8,&DAT_04c70918,1);
          lVar12 = FUN_004446b0(local_e8,"Found circular dependency in patches.",&DAT_0413df78);
          *(char **)(lVar12 + 0x28) =
               "E:/Havok/Build/.tmp/d20190725-23496-zzy48q/105_hk2019_1_0_Park/Source/Common/Base/Reflect/Version/hkReflectPatchRegistry.cpp"
          ;
          *(undefined8 *)(lVar12 + 0x30) = 0x27c;
          FUN_00444c00(local_e8);
        }
        local_1b0 = (undefined4 *)PTR_DAT_048607b8;
        uVar17 = 0x80040200;
        if (puVar3 == &local_158) {
          uVar16 = local_180._4_4_;
          lVar12 = local_180;
        }
        else {
          if ((int)*puVar29 < 0) {
            FUN_00426620(PTR_DAT_048607b8,puVar3,8);
          }
          if ((long)local_150 < 0) {
            FUN_00426620(local_1b0,&local_158,8);
          }
          uVar20 = *(ulong *)(param_1 + 0x98);
          *(ulong *)(param_1 + 0x98) = local_158;
          uVar21 = *(ulong *)(param_1 + 0xa0);
          *(int *)(param_1 + 0xa0) = (int)local_150;
          *(uint *)(param_1 + 0xa4) = local_150._4_4_;
          local_158 = uVar20;
          uVar16 = local_180._4_4_;
          local_150 = uVar21;
          lVar12 = local_180;
        }
        goto joined_r0x00479b24;
      }
      *(undefined8 *)(*puVar3 + (long)iVar9 * 8) = *(undefined8 *)(local_158 + lVar12 * 8);
      lVar12 = lVar12 + 1;
    } while (lVar12 < (int)local_150);
  }
  local_e8._0_8_ = 0;
  local_e8._8_8_ = -0x8000000000000000;
  if (*(int *)(param_1 + 0xb0) != 0) {
    *(undefined4 *)(param_1 + 0xb0) = 0;
    FUN_0043d590(param_1 + 0xb8);
  }
  puVar5 = PTR_DAT_048607b8;
  local_18c = 0;
  iVar9 = *(int *)(param_1 + 0xa0);
  if (0 < iVar9) {
    plVar23 = (long *)(param_1 + 0xe8);
    do {
      plVar24 = *(long **)(*puVar3 + (long)local_18c * 8);
      if (*plVar24 == plVar24[1]) {
        if (local_e8._8_4_ == (local_e8._12_4_ & 0x3fffffff)) {
          FUN_00426990(puVar5,local_e8,4);
        }
        *(int *)(local_e8._0_8_ + (long)(int)local_e8._8_4_ * 4) = local_18c;
        local_e8._8_4_ = local_e8._8_4_ + 1;
      }
      else {
        local_1a8 = *plVar24;
        lStack_1a0 = plVar24[1];
        local_198 = FUN_004771b0(*(undefined8 *)(param_1 + 0x90),&local_1a8,(int)plVar24[4]);
        uVar16 = FUN_0047c940(plVar28,&local_198);
        if (*(uint *)(param_1 + 0xb0) == uVar16) {
          if ((*(uint *)(param_1 + 0xb4) & 0x3fffffff) == uVar16) {
            FUN_00426990(puVar5,plVar28,0x10);
            uVar16 = *(uint *)(param_1 + 0xb0);
          }
          puVar18 = (undefined8 *)(*(long *)(param_1 + 0xa8) + (long)(int)uVar16 * 0x10);
          *puVar18 = local_198;
          *(int *)(puVar18 + 1) = local_18c;
          *(uint *)(param_1 + 0xb0) = uVar16 + 1;
        }
        else {
          *(int *)(*plVar28 + ((long)((ulong)uVar16 << 0x20) >> 0x1c) + 8) = local_18c;
        }
      }
      lVar12 = plVar24[2];
      lVar13 = plVar24[3];
      if (*plVar24 != plVar24[1] || lVar12 != lVar13) {
        lStack_1a0 = plVar24[1];
        local_1a8 = *plVar24;
        if (lVar12 != lVar13) {
          lStack_1a0 = lVar13;
          local_1a8 = lVar12;
        }
        lVar12 = FUN_0047a010(plVar23,&local_1a8,&local_18c);
        uVar21 = FUN_00429cb0(plVar24,plVar24 + 2);
        if ((((uVar21 & 1) == 0) && (*plVar24 != plVar24[1])) && (plVar24[2] != plVar24[3])) {
          FUN_0043bd90(&local_198);
          lVar13 = FUN_0047ceb0(plVar23,&local_198);
          if (lVar13 == 0) {
            piVar27 = &local_18c;
          }
          else {
            piVar27 = (int *)(*plVar23 + (long)*(int *)(lVar13 + 4) * 0x10 + 8);
          }
          iVar9 = *piVar27;
          FUN_0043be10(&local_198);
          *(int *)(*plVar23 + ((lVar12 << 0x20) >> 0x1c) + 8) = iVar9;
        }
      }
      local_18c = local_18c + 1;
      iVar9 = *(int *)(param_1 + 0xa0);
    } while (local_18c < iVar9);
  }
  puVar5 = PTR_DAT_048607b8;
  if (0 < (int)local_e8._8_4_) {
    lVar12 = 0;
    plVar23 = (long *)(param_1 + 0x108);
    iVar9 = local_e8._8_4_;
    do {
      iVar8 = *(int *)(local_e8._0_8_ + lVar12 * 4);
      lVar13 = *(long *)(*puVar3 + (long)iVar8 * 8);
      if (lVar13 != 0) {
        while( true ) {
          if (*(long *)(lVar13 + 0x10) == *(long *)(lVar13 + 0x18)) break;
          local_1a8 = *(long *)(lVar13 + 0x10);
          lStack_1a0 = *(long *)(lVar13 + 0x18);
          local_198 = FUN_004771b0(*(undefined8 *)(param_1 + 0x90),&local_1a8,
                                   *(undefined4 *)(lVar13 + 0x24));
          uVar16 = FUN_0047c940(plVar23,&local_198);
          if (*(uint *)(param_1 + 0x110) == uVar16) {
            if ((*(uint *)(param_1 + 0x114) & 0x3fffffff) == uVar16) {
              FUN_00426990(puVar5,plVar23,0x10);
              uVar16 = *(uint *)(param_1 + 0x110);
            }
            puVar18 = (undefined8 *)(*(long *)(param_1 + 0x108) + (long)(int)uVar16 * 0x10);
            *puVar18 = local_198;
            *(int *)(puVar18 + 1) = iVar8;
            *(uint *)(param_1 + 0x110) = uVar16 + 1;
            lVar13 = FUN_0047c500(plVar28,&local_198);
          }
          else {
            *(int *)(*plVar23 + ((long)((ulong)uVar16 << 0x20) >> 0x1c) + 8) = iVar8;
            lVar13 = FUN_0047c500(plVar28,&local_198);
          }
          if (((lVar13 == 0) ||
              (iVar9 = *(int *)(*plVar28 + (long)*(int *)(lVar13 + 4) * 0x10 + 8), iVar9 < 0)) ||
             (lVar13 = *(long *)(*puVar3 + (long)iVar9 * 8), lVar13 == 0)) break;
        }
        iVar9 = local_e8._8_4_;
      }
      lVar12 = lVar12 + 1;
    } while (lVar12 < iVar9);
    iVar9 = *(int *)(param_1 + 0xa0);
  }
  if ((iVar9 != 0) && (*(long *)(*puVar3 + (long)(iVar9 + -1) * 8) == 0)) {
    *(int *)(param_1 + 0xa0) = iVar9 + -1;
  }
  nn::os::LockMutex((MutexType *)(param_1 + 0x188));
  if (*(int *)(param_1 + 0x1b0) != 0) {
    lVar12 = (long)*(int *)(param_1 + 0x1b0) << 4;
    puVar18 = (undefined8 *)(*(long *)(param_1 + 0x1a8) + 8);
    do {
      if ((code *)puVar18[-1] != (code *)0x0) {
        (*(code *)puVar18[-1])(*puVar18);
      }
      lVar12 = lVar12 + -0x10;
      puVar18 = puVar18 + 2;
    } while (lVar12 != 0);
  }
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x188));
  uVar17 = local_e8._8_8_;
  local_1b0 = (undefined4 *)PTR_DAT_048607b8;
  uVar11 = local_e8._12_4_;
  local_e8._8_8_ = (ulong)(uint)local_e8._12_4_ << 0x20;
  if ((-1 < (long)uVar17) && (local_e8._0_8_ != 0)) {
    FUN_00421f90(PTR_DAT_048607b8,local_e8._0_8_,4,uVar11 & 0x3fffffff);
  }
  uVar17 = 0;
  uVar16 = local_180._4_4_;
  lVar12 = local_180;
joined_r0x00479b24:
  local_180 = (ulong)uVar16 << 0x20;
  if ((-1 < lVar12) && (local_188 != 0)) {
    FUN_00421f90(local_1b0,local_188,4,uVar16 & 0x3fffffff);
  }
  lVar12 = local_170;
  uVar16 = local_170._4_4_;
  local_170 = (ulong)local_170._4_4_ << 0x20;
  if ((-1 < lVar12) && (local_178 != 0)) {
    FUN_00421f90(local_1b0,local_178,4,uVar16 & 0x3fffffff);
  }
  lVar12 = local_160;
  uVar16 = local_160._4_4_;
  local_160 = (ulong)local_160._4_4_ << 0x20;
  if ((-1 < lVar12) && (local_168 != 0)) {
    FUN_00421f90(local_1b0,local_168,8,uVar16 & 0x3fffffff);
  }
  uVar21 = local_150;
  uVar16 = local_150._4_4_;
  local_150 = (ulong)local_150._4_4_ << 0x20;
  if ((-1 < (long)uVar21) && (local_158 != 0)) {
    FUN_00421f90(local_1b0,local_158,8,uVar16 & 0x3fffffff);
  }
LAB_004797bc:
  FUN_0043d280(auStack_138);
  if (0 < (int)local_140) {
    plVar28 = (long *)(local_148 + (long)(int)local_140 * 0x18 + -0x10);
    iVar9 = (int)local_140;
    do {
      *(undefined4 *)(plVar28 + 1) = 0;
      if ((-1 < (int)*(uint *)((long)plVar28 + 0xc)) && (*plVar28 != 0)) {
        FUN_00421f90(local_1b0,*plVar28,4,*(uint *)((long)plVar28 + 0xc) & 0x3fffffff);
      }
      *plVar28 = 0;
      iVar9 = iVar9 + -1;
      *(undefined4 *)((long)plVar28 + 0xc) = 0x80000000;
      plVar28 = plVar28 + -3;
    } while (iVar9 != 0);
  }
  lVar12 = local_140;
  uVar16 = local_140._4_4_;
  local_140 = (ulong)local_140._4_4_ << 0x20;
  if ((-1 < lVar12) && (local_148 != 0)) {
    FUN_00421f90(local_1b0,local_148,0x18,uVar16 & 0x3fffffff);
  }
  FUN_0043d280(auStack_118);
  if (0 < (int)(uint)local_120) {
    plVar28 = (long *)(local_128 + (long)(int)(uint)local_120 * 0x18 + -0x10);
    iVar9 = (uint)local_120;
    do {
      *(undefined4 *)(plVar28 + 1) = 0;
      if ((-1 < (int)*(uint *)((long)plVar28 + 0xc)) && (*plVar28 != 0)) {
        FUN_00421f90(local_1b0,*plVar28,4,*(uint *)((long)plVar28 + 0xc) & 0x3fffffff);
      }
      *plVar28 = 0;
      iVar9 = iVar9 + -1;
      *(undefined4 *)((long)plVar28 + 0xc) = 0x80000000;
      plVar28 = plVar28 + -3;
    } while (iVar9 != 0);
  }
  lVar12 = local_120;
  uVar16 = local_120._4_4_;
  local_120 = (ulong)local_120._4_4_ << 0x20;
  if ((-1 < lVar12) && (local_128 != 0)) {
    FUN_00421f90(local_1b0,local_128,0x18,uVar16 & 0x3fffffff);
  }
  FUN_0043d280(auStack_f8);
  if (0 < (int)(uint)local_100) {
    lVar12 = local_108 + (long)(int)(uint)local_100 * 0x10;
    iVar9 = (uint)local_100;
    do {
      lVar12 = lVar12 + -0x10;
      FUN_0043be10(lVar12);
      iVar9 = iVar9 + -1;
    } while (iVar9 != 0);
  }
  lVar12 = local_100;
  uVar16 = local_100._4_4_;
  local_100 = (ulong)local_100._4_4_ << 0x20;
  if ((-1 < lVar12) && (local_108 != 0)) {
    FUN_00421f90(local_1b0,local_108,0x10,uVar16 & 0x3fffffff);
  }
LAB_00479928:
  FUN_0043d280(local_98);
  if (0 < (int)(uint)local_a0) {
    iVar9 = (uint)local_a0;
    lVar12 = local_a8 + (long)(int)(uint)local_a0 * 0x18;
    do {
      *(undefined4 *)(lVar12 + -8) = 0;
      if ((-1 < (int)*(uint *)(lVar12 + -4)) && (*(long *)(lVar12 + -0x10) != 0)) {
        FUN_00421f90(local_1b0,*(long *)(lVar12 + -0x10),4,*(uint *)(lVar12 + -4) & 0x3fffffff);
      }
      *(undefined8 *)(lVar12 + -0x10) = 0;
      *(undefined4 *)(lVar12 + -4) = 0x80000000;
      FUN_0043be10(lVar12 + -0x18);
      iVar9 = iVar9 + -1;
      lVar12 = lVar12 + -0x18;
    } while (iVar9 != 0);
  }
  lVar12 = local_a0;
  uVar16 = local_a0._4_4_;
  local_a0 = (ulong)local_a0._4_4_ << 0x20;
  if ((-1 < lVar12) && (local_a8 != 0)) {
    FUN_00421f90(local_1b0,local_a8,0x18,uVar16 & 0x3fffffff);
  }
  FUN_0043d280(local_78);
  if (0 < (int)(uint)local_80) {
    plVar28 = (long *)(local_88 + (long)(int)(uint)local_80 * 0x18 + -0x10);
    iVar9 = (uint)local_80;
    do {
      *(undefined4 *)(plVar28 + 1) = 0;
      if ((-1 < (int)*(uint *)((long)plVar28 + 0xc)) && (*plVar28 != 0)) {
        FUN_00421f90(local_1b0,*plVar28,4,*(uint *)((long)plVar28 + 0xc) & 0x3fffffff);
      }
      *plVar28 = 0;
      iVar9 = iVar9 + -1;
      *(undefined4 *)((long)plVar28 + 0xc) = 0x80000000;
      plVar28 = plVar28 + -3;
    } while (iVar9 != 0);
  }
  lVar12 = local_80;
  uVar16 = local_80._4_4_;
  local_80 = (ulong)local_80._4_4_ << 0x20;
  if ((-1 < lVar12) && (local_88 != 0)) {
    FUN_00421f90(local_1b0,local_88,0x18,uVar16 & 0x3fffffff);
  }
  return uVar17;
}

