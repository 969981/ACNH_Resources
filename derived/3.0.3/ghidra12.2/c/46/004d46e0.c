
/* WARNING: Removing unreachable block (ram,0x004d52c0) */
/* WARNING: Removing unreachable block (ram,0x004d5a5c) */

undefined8 FUN_004d46e0(ulong param_1,long param_2)

{
  ulong *puVar1;
  uint uVar2;
  uint uVar3;
  undefined *puVar4;
  ulong uVar5;
  bool bVar6;
  int iVar7;
  long *plVar8;
  undefined8 *puVar9;
  char *pcVar10;
  ulong uVar11;
  ulong uVar12;
  long lVar13;
  uint uVar14;
  ulong uVar15;
  ulong *puVar16;
  int iVar17;
  long lVar18;
  ulong uVar19;
  ulong uVar20;
  int *piVar21;
  undefined8 uVar22;
  ulong uVar23;
  ulong uVar24;
  uint *puVar25;
  uint *puVar26;
  ulong uVar27;
  undefined1 auVar28 [16];
  long local_300;
  ulong local_2f8;
  long local_2e8;
  long local_2b8;
  undefined8 local_2b0;
  long local_2a8;
  undefined8 local_2a0;
  ulong local_298;
  ulong uStack_290;
  ulong local_288;
  byte local_280;
  long local_278;
  undefined1 *local_270;
  undefined8 local_268;
  undefined1 auStack_260 [384];
  uint local_e0 [2];
  long local_d8;
  uint local_d0;
  int local_c4;
  uint local_c0;
  int local_bc;
  uint local_b8 [2];
  uint local_b0;
  uint local_ac;
  undefined4 local_a8 [2];
  undefined1 local_9f;
  char *local_80;
  undefined8 local_78;
  
  local_270 = auStack_260;
  local_268._0_4_ = 0;
  local_268._4_4_ = 0x80000010;
  uStack_290 = param_1 + param_2;
  local_280 = 0;
  local_298 = param_1;
  local_288 = param_1;
  local_278 = param_2;
  iVar7 = FUN_0048f760(&local_298,0x54414730);
  puVar4 = PTR_DAT_048607c0;
  if (iVar7 == 0) {
    iVar7 = FUN_0048f760(&local_298,0x54434d30);
    uVar14 = local_268._4_4_;
    if (iVar7 == 0) {
      uVar22 = 0x80040200;
      if (DAT_04c71a40 != 0) {
        FUN_00444bc0(local_a8,&DAT_04c719f0,1);
        lVar13 = FUN_004446b0(local_a8,"Bad data given to InplaceLoad::unload",&DAT_0413df78);
        *(char **)(lVar13 + 0x28) =
             "E:/Havok/Build/.tmp/d20190725-23496-zzy48q/105_hk2019_1_0_Park/Source/Common/Base/Serialize/Util/hkExtraInplaceLoadUtil.cpp"
        ;
        *(undefined8 *)(lVar13 + 0x30) = 299;
        FUN_00444c00(local_a8);
        uVar14 = local_268._4_4_;
      }
    }
    else {
      uVar22 = 0;
    }
  }
  else {
    local_300 = 0;
    local_2f8 = 0;
    uVar27 = 0;
    uVar23 = 0;
LAB_004d4784:
    do {
      iVar7 = FUN_0048f760(&local_298,0);
      uVar20 = local_298;
      if (iVar7 < 0x494e4458) {
        if (iVar7 == 0x44415441) {
          local_298 = (local_298 +
                      ((ulong)*(uint *)(local_270 + (long)(int)local_268 * 0x18 + -0x14) &
                      0x3fffffff)) - 8;
          if (uStack_290 < local_298) {
            local_298 = uStack_290;
            local_280 = local_280 | 1;
          }
          local_300 = uVar20 + ((ulong)*(uint *)(local_270 + (long)(int)local_268 * 0x18 + -0x14) &
                               0x3fffffff) + -8;
          uVar27 = uVar20;
        }
        else {
          if (iVar7 == 0) goto LAB_004d5eb4;
          if (iVar7 == 1) goto LAB_004d5f9c;
LAB_004d4930:
          local_298 = (local_298 +
                      ((ulong)*(uint *)(local_270 + (long)(int)local_268 * 0x18 + -0x14) &
                      0x3fffffff)) - 8;
          if (uStack_290 < local_298) {
            local_298 = uStack_290;
            local_280 = local_280 | 1;
          }
        }
LAB_004d5e48:
        lVar13 = (long)(int)local_268 + -1;
        if (local_298 - local_288 !=
            ((ulong)*(uint *)(local_270 + lVar13 * 0x18 + 4) & 0x3fffffff) +
            (long)*(int *)(local_270 + lVar13 * 0x18 + 8)) {
          local_280 = local_280 | 2;
          goto LAB_004d4784;
        }
        local_278 = *(long *)(local_270 + lVar13 * 0x18 + 0x10);
        iVar7 = 0;
        local_268._0_4_ = (int)lVar13;
      }
      else {
        if (iVar7 != 0x494e4458) {
          if (iVar7 != 0x54435246) {
            if (iVar7 == 0x54595045) {
LAB_004d4824:
              iVar7 = FUN_0048f760(&local_298,0);
              uVar20 = local_298;
              if (iVar7 == 0x54505452) {
                lVar13 = (long)(int)local_268 + -1;
                local_298 = (local_298 +
                            ((ulong)*(uint *)(local_270 + lVar13 * 0x18 + 4) & 0x3fffffff)) - 8;
                if (uStack_290 < local_298) {
                  local_280 = local_280 | 1;
                  local_298 = uStack_290;
                }
                local_2f8 = (uVar20 + ((ulong)*(uint *)(local_270 + lVar13 * 0x18 + 4) & 0x3fffffff)
                            ) - 8;
              }
              else {
                if (iVar7 == 0) goto LAB_004d5e48;
                if (iVar7 == 1) {
                  if (DAT_04c71a40 < 2) goto LAB_004d5f9c;
                  FUN_00444bc0(local_a8,&DAT_04c719f0,2);
                  lVar13 = FUN_004446b0(local_a8,"IO error",&DAT_0413df78);
                  uVar22 = 0x7f;
                  goto LAB_004d5f88;
                }
                lVar13 = (long)(int)local_268 + -1;
                local_298 = (local_298 +
                            ((ulong)*(uint *)(local_270 + lVar13 * 0x18 + 4) & 0x3fffffff)) - 8;
                uVar20 = uVar23;
                if (uStack_290 < local_298) {
                  local_280 = local_280 | 1;
                  local_298 = uStack_290;
                }
              }
              uVar23 = uVar20;
              if (local_298 - local_288 ==
                  ((ulong)*(uint *)(local_270 + lVar13 * 0x18 + 4) & 0x3fffffff) +
                  (long)*(int *)(local_270 + lVar13 * 0x18 + 8)) {
                local_278 = *(long *)(local_270 + lVar13 * 0x18 + 0x10);
                local_268._0_4_ = (int)lVar13;
              }
              else {
                local_280 = local_280 | 2;
              }
              goto LAB_004d4824;
            }
            goto LAB_004d4930;
          }
          local_298 = (local_298 +
                      ((ulong)*(uint *)(local_270 + (long)(int)local_268 * 0x18 + -0x14) &
                      0x3fffffff)) - 8;
          if (uStack_290 < local_298) {
            local_298 = uStack_290;
            local_280 = local_280 | 1;
          }
          puVar16 = (ulong *)(uVar20 + ((ulong)*(uint *)(local_270 +
                                                        (long)(int)local_268 * 0x18 + -0x14) &
                                       0x3fffffff) + -8);
          puVar1 = puVar16;
          if ((ulong *)(uVar20 + 8) <= puVar16) {
            puVar1 = (ulong *)(uVar20 + 8);
          }
          if ((long)puVar16 - (long)puVar1 == 0x10) {
            uVar23 = *puVar1;
            local_2f8 = puVar1[1];
            if ((int)(local_2f8 - uVar23 >> 3) != 0) goto LAB_004d5e48;
            if (1 < DAT_04c71a40) {
              FUN_00444bc0(local_a8,&DAT_04c719f0,2);
              lVar13 = FUN_004446b0(local_a8,
                                    "COMPENDIUM_REFERENCE was not initialized. Was this buffer inplace loaded?"
                                    ,&DAT_0413df78);
              uVar22 = 0x6e;
              goto LAB_004d5f88;
            }
          }
          else if (1 < DAT_04c71a40) {
            FUN_00444bc0(local_a8,&DAT_04c719f0,2);
            lVar13 = FUN_004446b0(local_a8,"Invalid COMPENDIUM_REFERENCE",&DAT_0413df78);
            uVar22 = 0x68;
LAB_004d5f88:
            *(char **)(lVar13 + 0x28) =
                 "E:/Havok/Build/.tmp/d20190725-23496-zzy48q/105_hk2019_1_0_Park/Source/Common/Base/Serialize/Util/hkExtraInplaceLoadUtil.cpp"
            ;
            *(undefined8 *)(lVar13 + 0x30) = uVar22;
            FUN_00444c00(local_a8);
          }
LAB_004d5f9c:
          uVar22 = 0x80040200;
          uVar14 = local_268._4_4_;
          goto joined_r0x004d5fb0;
        }
        local_2a8 = 0;
        local_2a0._0_4_ = 0;
        local_2a0._4_4_ = 0xffffffff;
        uVar11 = (long)(local_2f8 - uVar23) >> 3;
        local_2e8 = 0;
        uVar20 = 0;
        local_2b8 = 0;
        local_2b0 = -0x8000000000000000;
LAB_004d49d0:
        iVar7 = FUN_0048f760(&local_298,0);
        uVar5 = local_298;
        if (0x50544347 < iVar7) {
          if (iVar7 != 0x50544348) goto LAB_004d5b0c;
          local_298 = (local_298 +
                      ((ulong)*(uint *)(local_270 + (long)(int)local_268 * 0x18 + -0x14) &
                      0x3fffffff)) - 8;
          if (uStack_290 < local_298) {
            local_298 = uStack_290;
            local_280 = local_280 | 1;
          }
          uVar14 = (*(uint *)(local_270 + (long)(int)local_268 * 0x18 + -0x14) & 0x3fffffff) - 8;
          if ((uVar14 & 3) == 0) {
            uVar2 = (int)uVar14 >> 2;
            local_c4 = 0;
            if (0xb < (int)uVar14) {
              local_c4 = 0;
              iVar7 = 2;
              do {
                iVar17 = (int)((long)local_c4 + 1);
                local_ac = *(uint *)(uVar5 + (long)local_c4 * 4);
                if (local_ac == 0) {
                  local_e0[0] = 0;
                  local_d8 = 0;
                  local_d0 = 0;
                  bVar6 = 3 < DAT_04c71a40;
                  local_c4 = iVar17;
joined_r0x004d52dc:
                  local_c0 = local_e0[0];
                  if (bVar6) {
                    FUN_00444bc0(local_a8,&DAT_04c719f0,4);
                    lVar13 = FUN_004446b0(local_a8,"Finished internal, starting external",
                                          &DAT_0413df78);
                    *(char **)(lVar13 + 0x28) =
                         "../..\\Common/Base/Serialize/Format/Tagfile/Detail/hkTagfileDetail.h";
                    *(undefined8 *)(lVar13 + 0x30) = 0x103;
                    FUN_00444c00(local_a8);
                  }
                  break;
                }
                if (local_ac < uVar11) {
                  if (*(long *)(uVar23 + (long)(int)local_ac * 8) == 0) {
                    uVar14 = 0x80040200;
                    local_b0 = 0x80040200;
                    local_c4 = iVar17;
                    if (DAT_04c71a40 != 0) {
                      FUN_00444bc0(local_a8,&DAT_04c719f0,1);
                      local_78 = 0xd7;
                      local_80 = 
                      "../..\\Common/Base/Serialize/Format/Tagfile/Detail/hkTagfileDetail.h";
                      uVar22 = FUN_004446b0(local_a8,"HK_RETURN_LOG returning {}. ",&DAT_04866800,
                                            &local_b0);
                      pcVar10 = 
                      "Corrupt patch index body at index {}: TypeId {} corresponds to a missing type"
                      ;
                      goto LAB_004d4eb4;
                    }
                    goto LAB_004d4ecc;
                  }
                  local_b0 = *(uint *)(uVar5 + ((long)local_c4 + 1) * 4);
                  local_c4 = iVar7;
                  if ((int)uVar2 < (int)(local_b0 + iVar7)) {
                    local_b8[0] = 0x80040200;
                    uVar14 = 0x80040200;
                    if (DAT_04c71a40 != 0) {
                      FUN_00444bc0(local_a8,&DAT_04c719f0,1);
                      local_78 = 0xde;
                      local_80 = 
                      "../..\\Common/Base/Serialize/Format/Tagfile/Detail/hkTagfileDetail.h";
                      uVar22 = FUN_004446b0(local_a8,"HK_RETURN_LOG returning {}. ",&DAT_04866800,
                                            local_b8);
                      local_bc = local_c4 + -1;
                      FUN_004446b0(uVar22,
                                   "Corrupt patch index body at index {}: invalid entries number {}"
                                   ,&DAT_048534b8,&local_bc,&local_b0);
                      FUN_00444c00(local_a8);
                      uVar14 = local_b8[0];
                    }
                    goto LAB_004d4ecc;
                  }
                  if (3 < DAT_04c71a40) {
                    FUN_00444bc0(local_a8,&DAT_04c719f0,4);
                    lVar13 = FUN_004446b0(local_a8,"Type {} ({} entries) //{}",&DAT_04866820,
                                          &local_ac,&local_b0,uVar23 + (long)(int)local_ac * 8);
                    *(char **)(lVar13 + 0x28) =
                         "../..\\Common/Base/Serialize/Format/Tagfile/Detail/hkTagfileDetail.h";
                    *(undefined8 *)(lVar13 + 0x30) = 0xe1;
                    FUN_00444c00(local_a8);
                  }
                  local_d8 = *(long *)(uVar23 + (long)(int)local_ac * 8);
                  local_c0 = 0;
                  local_d0 = local_b0;
                }
                else {
                  uVar14 = 0x80040200;
                  local_b0 = 0x80040200;
                  local_c4 = iVar17;
                  if (DAT_04c71a40 != 0) {
                    FUN_00444bc0(local_a8,&DAT_04c719f0,1);
                    local_78 = 0xd2;
                    local_80 = 
                    "../..\\Common/Base/Serialize/Format/Tagfile/Detail/hkTagfileDetail.h";
                    uVar22 = FUN_004446b0(local_a8,"HK_RETURN_LOG returning {}. ",&DAT_04866800,
                                          &local_b0);
                    pcVar10 = "Corrupt patch index body at index {}: invalid TypeId {}";
LAB_004d4eb4:
                    local_b8[0] = local_c4 - 1;
                    FUN_004446b0(uVar22,pcVar10,&DAT_048534b8,local_b8,&local_ac);
                    FUN_00444c00(local_a8);
                    uVar14 = local_b0;
                  }
LAB_004d4ecc:
                  local_d8 = 0;
                  local_d0 = 0;
                  local_e0[0] = uVar14;
                  local_c0 = uVar14;
                  if ((int)uVar14 < 0) goto LAB_004d5af8;
                }
                bVar6 = 3 < DAT_04c71a40;
                local_e0[0] = local_c0;
                if (local_d8 == 0) goto joined_r0x004d52dc;
                if (bVar6) {
                  FUN_00444bc0(local_a8,&DAT_04c719f0,4);
                  lVar13 = FUN_004446b0(local_a8,"Internal fixups for type {}",&DAT_048537e8,
                                        &local_d8);
                  *(char **)(lVar13 + 0x28) =
                       "../..\\Common/Base/Serialize/Format/Tagfile/Detail/hkTagfileDetail.h";
                  *(undefined8 *)(lVar13 + 0x30) = 0x107;
                  *(undefined1 *)(lVar13 + 9) = 1;
                  FUN_00444c00(local_a8);
                }
                if (local_d0 == 0) {
                  bVar6 = false;
                }
                else {
                  puVar25 = (uint *)(uVar5 + (long)local_c4 * 4);
                  puVar26 = puVar25 + (int)local_d0;
                  do {
                    if (local_300 - uVar27 <= (ulong)*puVar25) {
                      local_c0 = 0x80040200;
                      if (DAT_04c71a40 == 0) goto LAB_004d5a60;
                      bVar6 = true;
                      FUN_00444bc0(local_a8,&DAT_04c719f0,1);
                      local_78 = 0x113;
                      local_80 = 
                      "../..\\Common/Base/Serialize/Format/Tagfile/Detail/hkTagfileDetail.h";
                      uVar22 = FUN_004446b0(local_a8,"HK_RETURN_LOG returning {}. ",&DAT_04866800,
                                            &local_c0);
                      FUN_004446b0(uVar22,"Corrupt patch index body at index {}: invalid offset {}",
                                   &DAT_04866840,&local_c4,puVar25);
                      FUN_00444c00(local_a8);
                      goto joined_r0x004d514c;
                    }
                    lVar13 = uVar27 + (long)(int)*puVar25;
                    if (3 < DAT_04c71a40) {
                      FUN_00444bc0(local_a8,&DAT_04c719f0,4);
                      lVar18 = FUN_004446b0(local_a8,"srcOff={}",&DAT_04861308,puVar25);
                      *(char **)(lVar18 + 0x28) =
                           "../..\\Common/Base/Serialize/Format/Tagfile/Detail/hkTagfileDetail.h";
                      *(undefined8 *)(lVar18 + 0x30) = 0x116;
                      FUN_00444c00(local_a8);
                    }
                    bVar6 = true;
                    local_a8[0] = 1;
                    auVar28 = FUN_004d6320(lVar13,local_d8,local_a8);
                    uVar12 = auVar28._0_8_;
                    if (auVar28._8_8_ == 0) {
                      uVar24 = 0;
joined_r0x004d500c:
                      if (uVar12 != 0) goto LAB_004d5010;
LAB_004d50d8:
                      if ((uint)local_2b0 == (local_2b0._4_4_ & 0x3fffffff)) goto LAB_004d50e8;
                    }
                    else {
                      uVar24 = FUN_00428370(auVar28._8_8_);
                      if ((uVar24 & 1) != 0) {
                        FUN_0043dd30(uVar24 & 0xfffffffffffffffe);
                        bVar6 = false;
                        goto joined_r0x004d500c;
                      }
                      bVar6 = true;
                      if (uVar12 == 0) goto LAB_004d50d8;
LAB_004d5010:
                      if ((int)local_2a0._4_4_ < 1) {
LAB_004d50b0:
                        uVar12 = 0;
                      }
                      else {
                        uVar14 = auVar28._4_4_ * -0x61c8864f;
                        uVar3 = auVar28._0_4_ * -0x61c8864f;
                        uVar3 = (uVar3 & 0xff00ff00) >> 8 | (uVar3 & 0xff00ff) << 8;
                        uVar3 = uVar3 >> 0x10 | uVar3 << 0x10;
                        uVar14 = (uVar14 & 0xff00ff00) >> 8 | (uVar14 & 0xff00ff) << 8;
                        uVar14 = uVar14 >> 0x10 | uVar14 << 0x10;
                        uVar15 = (ulong)(local_2a0._4_4_ &
                                        (uVar3 + (uVar3 >> 2) + uVar14 * 0x40 + 0x9e3779b9 ^ uVar14)
                                        );
                        uVar19 = *(ulong *)(local_2a8 + uVar15 * 0x10);
                        if (uVar19 == 0xffffffffffffffff) goto LAB_004d50b0;
                        if (uVar19 != uVar12) {
                          do {
                            uVar15 = (ulong)((int)uVar15 + 1U & local_2a0._4_4_);
                            uVar19 = *(ulong *)(local_2a8 + uVar15 * 0x10);
                            if (uVar19 == 0xffffffffffffffff) goto LAB_004d50b0;
                          } while (uVar19 != uVar12);
                        }
                        uVar12 = (ulong)*(uint *)(local_2a8 + uVar15 * 0x10 + 8);
                      }
                      if ((uint)local_2b0 == (local_2b0._4_4_ & 0x3fffffff)) {
LAB_004d50e8:
                        FUN_00426990(puVar4,&local_2b8,0x10);
                      }
                    }
                    plVar8 = (long *)(local_2b8 + (long)(int)(uint)local_2b0 * 0x10);
                    *plVar8 = lVar13;
                    *(int *)(plVar8 + 1) = (int)uVar12;
                    local_2b0 = CONCAT44(local_2b0._4_4_,(uint)local_2b0 + 1);
                    if (!bVar6) {
                      FUN_0043dd50(uVar24 & 0xfffffffffffffffe);
                    }
                    puVar25 = puVar25 + 1;
                    local_c4 = local_c4 + 1;
                    local_c0 = 0;
                  } while (puVar25 != puVar26);
                  bVar6 = false;
                }
joined_r0x004d514c:
                if (3 < DAT_04c71a40) {
                  FUN_00444bc0(local_a8,&DAT_04c719f0,4);
                  local_9f = 0xff;
                  FUN_00444c00(local_a8);
                }
                if (bVar6) goto LAB_004d5af8;
                iVar7 = local_c4 + 2;
              } while (iVar7 < (int)uVar2);
            }
            do {
              lVar13 = (long)local_c4;
              iVar7 = local_c4 + 2;
              if ((int)uVar2 <= iVar7) {
                local_c0 = 0;
                break;
              }
              local_c4 = local_c4 + 1;
              local_ac = *(uint *)(uVar5 + lVar13 * 4);
              if (local_ac == 0) {
                local_e0[0] = 0;
                local_d8 = 0;
                local_d0 = 0;
LAB_004d5a84:
                local_c0 = 0x80040200;
                if (DAT_04c71a40 != 0) {
                  FUN_00444bc0(local_a8,&DAT_04c719f0,1);
                  local_78 = 300;
                  local_80 = "../..\\Common/Base/Serialize/Format/Tagfile/Detail/hkTagfileDetail.h";
                  uVar22 = FUN_004446b0(local_a8,"HK_RETURN_LOG returning {}. ",&DAT_04866800,
                                        &local_c0);
                  FUN_004446b0(uVar22,"Invalid sentinel at the end of external fixups",&DAT_0413df78
                              );
                  FUN_00444c00(local_a8);
                }
                break;
              }
              if (local_ac < uVar11) {
                if (*(long *)(uVar23 + (long)(int)local_ac * 8) == 0) {
                  uVar14 = 0x80040200;
                  local_b0 = 0x80040200;
                  if (DAT_04c71a40 != 0) {
                    FUN_00444bc0(local_a8,&DAT_04c719f0,1);
                    local_78 = 0xd7;
                    local_80 = 
                    "../..\\Common/Base/Serialize/Format/Tagfile/Detail/hkTagfileDetail.h";
                    uVar22 = FUN_004446b0(local_a8,"HK_RETURN_LOG returning {}. ",&DAT_04866800,
                                          &local_b0);
                    pcVar10 = 
                    "Corrupt patch index body at index {}: TypeId {} corresponds to a missing type";
                    goto LAB_004d551c;
                  }
                  goto LAB_004d5534;
                }
                local_b0 = *(uint *)(uVar5 + (long)local_c4 * 4);
                local_c4 = iVar7;
                if ((int)uVar2 < (int)(local_b0 + iVar7)) {
                  local_b8[0] = 0x80040200;
                  uVar14 = 0x80040200;
                  if (DAT_04c71a40 != 0) {
                    FUN_00444bc0(local_a8,&DAT_04c719f0,1);
                    local_78 = 0xde;
                    local_80 = 
                    "../..\\Common/Base/Serialize/Format/Tagfile/Detail/hkTagfileDetail.h";
                    uVar22 = FUN_004446b0(local_a8,"HK_RETURN_LOG returning {}. ",&DAT_04866800,
                                          local_b8);
                    local_bc = local_c4 + -1;
                    FUN_004446b0(uVar22,
                                 "Corrupt patch index body at index {}: invalid entries number {}",
                                 &DAT_048534b8,&local_bc,&local_b0);
                    FUN_00444c00(local_a8);
                    uVar14 = local_b8[0];
                  }
                  goto LAB_004d5534;
                }
                if (3 < DAT_04c71a40) {
                  FUN_00444bc0(local_a8,&DAT_04c719f0,4);
                  lVar13 = FUN_004446b0(local_a8,"Type {} ({} entries) //{}",&DAT_04866820,&local_ac
                                        ,&local_b0,uVar23 + (long)(int)local_ac * 8);
                  *(char **)(lVar13 + 0x28) =
                       "../..\\Common/Base/Serialize/Format/Tagfile/Detail/hkTagfileDetail.h";
                  *(undefined8 *)(lVar13 + 0x30) = 0xe1;
                  FUN_00444c00(local_a8);
                }
                local_d8 = *(long *)(uVar23 + (long)(int)local_ac * 8);
                local_c0 = 0;
                local_d0 = local_b0;
              }
              else {
                uVar14 = 0x80040200;
                local_b0 = 0x80040200;
                if (DAT_04c71a40 != 0) {
                  FUN_00444bc0(local_a8,&DAT_04c719f0,1);
                  local_78 = 0xd2;
                  local_80 = "../..\\Common/Base/Serialize/Format/Tagfile/Detail/hkTagfileDetail.h";
                  uVar22 = FUN_004446b0(local_a8,"HK_RETURN_LOG returning {}. ",&DAT_04866800,
                                        &local_b0);
                  pcVar10 = "Corrupt patch index body at index {}: invalid TypeId {}";
LAB_004d551c:
                  local_b8[0] = local_c4 - 1;
                  FUN_004446b0(uVar22,pcVar10,&DAT_048534b8,local_b8,&local_ac);
                  FUN_00444c00(local_a8);
                  uVar14 = local_b0;
                }
LAB_004d5534:
                local_d8 = 0;
                local_d0 = 0;
                local_e0[0] = uVar14;
                local_c0 = uVar14;
                if ((int)uVar14 < 0) break;
              }
              local_e0[0] = local_c0;
              if (local_d8 == 0) goto LAB_004d5a84;
              if (3 < DAT_04c71a40) {
                FUN_00444bc0(local_a8,&DAT_04c719f0,4);
                lVar13 = FUN_004446b0(local_a8,"External fixups for type {}",&DAT_048537e8,&local_d8
                                     );
                *(char **)(lVar13 + 0x28) =
                     "../..\\Common/Base/Serialize/Format/Tagfile/Detail/hkTagfileDetail.h";
                *(undefined8 *)(lVar13 + 0x30) = 0x12f;
                *(undefined1 *)(lVar13 + 9) = 1;
                FUN_00444c00(local_a8);
              }
              if ((int)local_d0 < 1) {
                bVar6 = false;
              }
              else {
                iVar7 = 0;
                do {
                  iVar17 = local_c4 + 1;
                  local_ac = *(uint *)(uVar5 + (long)local_c4 * 4);
                  if ((ulong)(((long)(local_2e8 - uVar20) >> 2) * -0x5555555555555555) <=
                      (ulong)local_ac) {
                    local_c0 = 0x80040200;
                    local_c4 = iVar17;
                    if (DAT_04c71a40 != 0) {
                      FUN_00444bc0(local_a8,&DAT_04c719f0,1);
                      local_78 = 0x13a;
                      local_80 = 
                      "../..\\Common/Base/Serialize/Format/Tagfile/Detail/hkTagfileDetail.h";
                      uVar22 = FUN_004446b0(local_a8,"HK_RETURN_LOG returning {}. ",&DAT_04866800,
                                            &local_c0);
                      local_b0 = local_c4 - 1;
                      FUN_004446b0(uVar22,
                                   "Corrupt patch index body at index {}: invalid target index {}",
                                   &DAT_04866840,&local_b0,&local_ac);
                      FUN_00444c00(local_a8);
                    }
                    bVar6 = true;
                    goto joined_r0x004d5960;
                  }
                  local_c4 = local_c4 + 2;
                  local_b0 = *(uint *)(uVar5 + (long)iVar17 * 4);
                  if (uVar2 < local_b0 + local_c4) {
                    local_c0 = 0x80040200;
                    if (DAT_04c71a40 != 0) {
                      FUN_00444bc0(local_a8,&DAT_04c719f0,1);
                      local_78 = 0x141;
                      local_80 = 
                      "../..\\Common/Base/Serialize/Format/Tagfile/Detail/hkTagfileDetail.h";
                      uVar22 = FUN_004446b0(local_a8,"HK_RETURN_LOG returning {}. ",&DAT_04866800,
                                            &local_c0);
                      local_b8[0] = local_c4 - 1;
                      FUN_004446b0(uVar22,
                                   "Corrupt patch index body at index {}: invalid offsets number {}"
                                   ,&DAT_04866840,local_b8,&local_b0);
                      FUN_00444c00(local_a8);
                    }
LAB_004d59f0:
                    bVar6 = true;
                    goto joined_r0x004d5960;
                  }
                  if (3 < DAT_04c71a40) {
                    FUN_00444bc0(local_a8,&DAT_04c719f0,4);
                    lVar13 = FUN_004446b0(local_a8,"tgtIdx={}, {} entries",&DAT_04866738,&local_ac,
                                          &local_b0);
                    *(char **)(lVar13 + 0x28) =
                         "../..\\Common/Base/Serialize/Format/Tagfile/Detail/hkTagfileDetail.h";
                    *(undefined8 *)(lVar13 + 0x30) = 0x144;
                    *(undefined1 *)(lVar13 + 9) = 1;
                    FUN_00444c00(local_a8);
                  }
                  if (local_b0 != 0) {
                    puVar26 = (uint *)(uVar5 + (long)local_c4 * 4);
                    lVar13 = (ulong)local_b0 << 2;
                    do {
                      uVar14 = *puVar26;
                      if (local_300 - uVar27 <= (ulong)uVar14) {
                        local_c0 = 0x80040200;
                        if (DAT_04c71a40 == 0) goto LAB_004d5a60;
                        bVar6 = true;
                        FUN_00444bc0(local_a8,&DAT_04c719f0,1);
                        local_78 = 0x14e;
                        local_80 = 
                        "../..\\Common/Base/Serialize/Format/Tagfile/Detail/hkTagfileDetail.h";
                        uVar22 = FUN_004446b0(local_a8,"HK_RETURN_LOG returning {}. ",&DAT_04866800,
                                              &local_c0);
                        FUN_004446b0(uVar22,
                                     "Corrupt patch index body at index {}: invalid offset {}",
                                     &DAT_04866840,&local_c4,puVar26);
                        FUN_00444c00(local_a8);
                        goto joined_r0x004d5668;
                      }
                      if (3 < DAT_04c71a40) {
                        FUN_00444bc0(local_a8,&DAT_04c719f0,4);
                        lVar18 = FUN_004446b0(local_a8,"srcOff={}",&DAT_04861308,puVar26);
                        *(char **)(lVar18 + 0x28) =
                             "../..\\Common/Base/Serialize/Format/Tagfile/Detail/hkTagfileDetail.h";
                        *(undefined8 *)(lVar18 + 0x30) = 0x151;
                        FUN_00444c00(local_a8);
                      }
                      uVar3 = local_ac;
                      if ((uint)local_2b0 == (local_2b0._4_4_ & 0x3fffffff)) {
                        FUN_00426990(puVar4,&local_2b8,0x10);
                      }
                      plVar8 = (long *)(local_2b8 + (long)(int)(uint)local_2b0 * 0x10);
                      *plVar8 = uVar27 + (long)(int)uVar14;
                      *(uint *)(plVar8 + 1) = uVar3;
                      local_2b0 = CONCAT44(local_2b0._4_4_,(uint)local_2b0 + 1);
                      local_c4 = local_c4 + 1;
                      puVar26 = puVar26 + 1;
                      lVar13 = lVar13 + -4;
                      local_c0 = 0;
                    } while (lVar13 != 0);
                  }
                  bVar6 = false;
joined_r0x004d5668:
                  if (3 < DAT_04c71a40) {
                    FUN_00444bc0(local_a8,&DAT_04c719f0,4);
                    local_9f = 0xff;
                    FUN_00444c00(local_a8);
                  }
                  if (bVar6) goto LAB_004d59f0;
                  iVar7 = iVar7 + 1;
                } while (iVar7 < (int)local_d0);
                bVar6 = false;
              }
joined_r0x004d5960:
              if (3 < DAT_04c71a40) {
                FUN_00444bc0(local_a8,&DAT_04c719f0,4);
                local_9f = 0xff;
                FUN_00444c00(local_a8);
              }
            } while (!bVar6);
            goto LAB_004d5af8;
          }
          local_c0 = 0x80040200;
          if (DAT_04c71a40 != 0) {
            FUN_00444bc0(local_a8,&DAT_04c719f0,1);
            local_78 = 0xeb;
            local_80 = "../..\\Common/Base/Serialize/Format/Tagfile/Detail/hkTagfileDetail.h";
            uVar22 = FUN_004446b0(local_a8,"HK_RETURN_LOG returning {}. ",&DAT_04866800,&local_c0);
            local_e0[0] = 0x20f2cca4;
            FUN_004446b0(uVar22,"PATCH_DATA section has the wrong size",&DAT_04866810,local_e0);
            FUN_00444c00(local_a8);
            if (-1 < (int)local_c0) goto LAB_004d5b0c;
            goto LAB_004d5cfc;
          }
          goto LAB_004d5d50;
        }
        if (iVar7 == 0x4954454d) {
          local_298 = (local_298 +
                      ((ulong)*(uint *)(local_270 + (long)(int)local_268 * 0x18 + -0x14) &
                      0x3fffffff)) - 8;
          if (uStack_290 < local_298) {
            local_298 = uStack_290;
            local_280 = local_280 | 1;
          }
          lVar13 = ((ulong)*(uint *)(local_270 + (long)(int)local_268 * 0x18 + -0x14) & 0x3fffffff)
                   - 8;
          local_2e8 = uVar5 + lVar13;
          uVar12 = (lVar13 >> 2) * -0x5555555555555555;
          uVar20 = uVar5;
          if (0 < (int)uVar12) {
            uVar24 = 0;
            do {
              uVar14 = *(uint *)(uVar5 + uVar24 * 0xc);
              if ((uVar14 & 0xf0000000) == 0x50000000) {
                plVar8 = (long *)FUN_00426e00(*(undefined8 *)
                                               (uVar23 + (ulong)(uVar14 & 0xffffff) * 8),0x800000);
                lVar13 = *(long *)(*plVar8 + (long)*(int *)(uVar5 + uVar24 * 0xc + 8) * 8 + 8);
                if ((int)local_2a0._4_4_ < (int)local_2a0 * 2) goto LAB_004d4b44;
              }
              else {
                if ((uVar14 & 0xf0000000) == 0x40000000) {
                  lVar13 = *(long *)(uVar23 + ((ulong)uVar14 & 0xffffff) * 8);
                }
                else {
                  lVar13 = uVar27 + (long)*(int *)(uVar5 + uVar24 * 0xc + 4);
                }
                if ((int)local_2a0._4_4_ < (int)local_2a0 * 2) {
LAB_004d4b44:
                  FUN_004d6110(&local_2a8,puVar4,local_2a0._4_4_ * 2 + 2);
                }
              }
              uVar14 = (int)lVar13 * -0x61c8864f;
              uVar2 = (int)((ulong)lVar13 >> 0x20) * -0x61c8864f;
              uVar14 = (uVar14 & 0xff00ff00) >> 8 | (uVar14 & 0xff00ff) << 8;
              uVar14 = uVar14 >> 0x10 | uVar14 << 0x10;
              uVar2 = (uVar2 & 0xff00ff00) >> 8 | (uVar2 & 0xff00ff) << 8;
              uVar2 = uVar2 >> 0x10 | uVar2 << 0x10;
              uVar15 = (ulong)(local_2a0._4_4_ &
                              (uVar14 + (uVar14 >> 2) + uVar2 * 0x40 + 0x9e3779b9 ^ uVar2));
              lVar18 = *(long *)(local_2a8 + uVar15 * 0x10);
              while (lVar18 != -1) {
                if (lVar18 == lVar13) {
                  iVar7 = 0;
                  goto LAB_004d4be8;
                }
                uVar15 = (ulong)((int)uVar15 + 1U & local_2a0._4_4_);
                lVar18 = *(long *)(local_2a8 + uVar15 * 0x10);
              }
              iVar7 = 1;
LAB_004d4be8:
              local_2a0._0_4_ = (int)local_2a0 + iVar7;
              uVar15 = -(uVar15 >> 0x1f) & 0xfffffff000000000 | uVar15 << 4;
              *(long *)(local_2a8 + uVar15) = lVar13;
              *(int *)(local_2a8 + uVar15 + 8) = (int)uVar24;
              uVar24 = uVar24 + 1;
            } while (uVar24 != (uVar12 & 0xffffffff));
          }
          goto LAB_004d5b0c;
        }
        if (iVar7 == 0) {
          uVar11 = ((long)(local_2e8 - uVar20) >> 2) * -0x5555555555555555;
          if (1 < (int)uVar11) {
            piVar21 = (int *)(uVar20 + 0x10);
            lVar13 = (uVar11 & 0xffffffff) - 1;
            do {
              if ((uint)piVar21[-1] >> 0x1c == 1) {
                iVar7 = *piVar21;
                uVar22 = *(undefined8 *)(uVar23 + ((ulong)(uint)piVar21[-1] & 0xffffff) * 8);
                puVar9 = (undefined8 *)FUN_00426e90(uVar22,0x100);
                if ((puVar9 != (undefined8 *)0x0) && ((code *)*puVar9 != (code *)0x0)) {
                  (*(code *)*puVar9)(uVar27 + (long)iVar7,uVar22,1);
                }
              }
              piVar21 = piVar21 + 3;
              lVar13 = lVar13 + -1;
            } while (lVar13 != 0);
          }
          if (0 < (int)(uint)local_2b0) {
            lVar13 = 0;
            lVar18 = 0;
            do {
              puVar9 = (undefined8 *)(local_2b8 + lVar13);
              lVar13 = lVar13 + 0x10;
              *(undefined4 *)*puVar9 = *(undefined4 *)(puVar9 + 1);
              lVar18 = lVar18 + 1;
            } while (lVar18 < (int)(uint)local_2b0);
          }
          iVar7 = 4;
          goto LAB_004d5d58;
        }
        if (iVar7 != 1) goto LAB_004d5b0c;
        if (1 < DAT_04c71a40) {
          FUN_00444bc0(local_a8,&DAT_04c719f0,2);
          lVar13 = FUN_004446b0(local_a8,"IO error",&DAT_0413df78);
          *(char **)(lVar13 + 0x28) =
               "E:/Havok/Build/.tmp/d20190725-23496-zzy48q/105_hk2019_1_0_Park/Source/Common/Base/Serialize/Util/hkExtraInplaceLoadUtil.cpp"
          ;
          uVar22 = 0xf0;
LAB_004d5d44:
          *(undefined8 *)(lVar13 + 0x30) = uVar22;
          FUN_00444c00(local_a8);
        }
LAB_004d5d50:
        local_268._0_4_ = 0;
        iVar7 = 1;
LAB_004d5d58:
        lVar13 = local_2b0;
        uVar14 = local_2b0._4_4_;
        local_2b0 = (ulong)local_2b0._4_4_ << 0x20;
        if ((-1 < lVar13) && (local_2b8 != 0)) {
          FUN_00421f90(puVar4,local_2b8,0x10,uVar14 & 0x3fffffff);
        }
        iVar17 = (int)local_2a0;
        if (0 < (int)local_2a0._4_4_) {
          uVar14 = local_2a0._4_4_ + 1;
          lVar13 = 0;
          lVar18 = ((ulong)uVar14 & 1) - (ulong)uVar14;
          do {
            if (*(long *)(local_2a8 + lVar13) != -1) {
              *(undefined8 *)(local_2a8 + lVar13) = 0xffffffffffffffff;
            }
            if (*(long *)(local_2a8 + lVar13 + 0x10) != -1) {
              *(undefined8 *)(local_2a8 + lVar13 + 0x10) = 0xffffffffffffffff;
            }
            lVar13 = lVar13 + 0x20;
            lVar18 = lVar18 + 2;
          } while (lVar18 != 0);
          if (((uVar14 & 1) != 0) && (*(long *)(local_2a8 + lVar13) != -1)) {
            *(undefined8 *)(local_2a8 + lVar13) = 0xffffffffffffffff;
          }
        }
        local_2a0 = CONCAT44(local_2a0._4_4_,(int)local_2a0) & 0xffffffff80000000;
        if ((-1 < iVar17) && (local_2a8 != 0)) {
          (**(code **)(*(long *)puVar4 + 0x18))
                    (puVar4,local_2a8,(long)(int)(local_2a0._4_4_ * 0x10 + 0x10));
        }
        if (iVar7 == 4) goto LAB_004d5e48;
      }
    } while (iVar7 == 0);
    if (iVar7 == 3) {
LAB_004d5eb4:
      lVar13 = (long)(int)local_268 + -1;
      if (local_298 - local_288 ==
          ((ulong)*(uint *)(local_270 + lVar13 * 0x18 + 4) & 0x3fffffff) +
          (long)*(int *)(local_270 + lVar13 * 0x18 + 8)) {
        local_278 = *(long *)(local_270 + lVar13 * 0x18 + 0x10);
        local_268._0_4_ = (int)lVar13;
      }
      else {
        local_280 = local_280 | 2;
      }
      FUN_0043a4d0(uVar23,0,(int)local_2f8 - (int)uVar23 & 0xfffffff8);
      uVar22 = 0;
      uVar14 = local_268._4_4_;
    }
    else {
      uVar22 = 0x80040200;
      uVar14 = local_268._4_4_;
    }
  }
joined_r0x004d5fb0:
  if ((-1 < (int)uVar14) && (local_268 = (ulong)uVar14 << 0x20, local_270 != (undefined1 *)0x0)) {
    FUN_00421f90(PTR_DAT_048607b8,local_270,0x18,uVar14 & 0x3fffffff);
  }
  return uVar22;
LAB_004d5a60:
  local_c0 = 0x80040200;
LAB_004d5af8:
  if ((int)local_c0 < 0) {
LAB_004d5cfc:
    if (DAT_04c71a40 < 2) goto LAB_004d5d50;
    FUN_00444bc0(local_a8,&DAT_04c719f0,2);
    lVar13 = FUN_004446b0(local_a8,&DAT_0407ebb1,&DAT_0413df78);
    *(char **)(lVar13 + 0x28) =
         "E:/Havok/Build/.tmp/d20190725-23496-zzy48q/105_hk2019_1_0_Park/Source/Common/Base/Serialize/Util/hkExtraInplaceLoadUtil.cpp"
    ;
    uVar22 = 0xe4;
    goto LAB_004d5d44;
  }
LAB_004d5b0c:
  lVar13 = (long)(int)local_268 + -1;
  if (local_298 - local_288 ==
      ((ulong)*(uint *)(local_270 + lVar13 * 0x18 + 4) & 0x3fffffff) +
      (long)*(int *)(local_270 + lVar13 * 0x18 + 8)) {
    local_278 = *(long *)(local_270 + lVar13 * 0x18 + 0x10);
    local_268._0_4_ = (int)lVar13;
  }
  else {
    local_280 = local_280 | 2;
  }
  goto LAB_004d49d0;
}

