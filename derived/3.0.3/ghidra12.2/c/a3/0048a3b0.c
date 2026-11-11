
/* WARNING: Removing unreachable block (ram,0x0048bd5c) */
/* WARNING: Removing unreachable block (ram,0x0048c4ec) */
/* WARNING: Removing unreachable block (ram,0x0048b20c) */
/* WARNING: Removing unreachable block (ram,0x0048c960) */
/* WARNING: Removing unreachable block (ram,0x0048b51c) */
/* WARNING: Removing unreachable block (ram,0x0048bd74) */
/* WARNING: Removing unreachable block (ram,0x0048ab5c) */
/* WARNING: Type propagation algorithm not settling */

void FUN_0048a3b0(undefined4 *param_1,long *param_2,ulong param_3)

{
  undefined4 *puVar1;
  undefined *puVar2;
  bool bVar3;
  uint uVar4;
  int iVar5;
  int iVar6;
  undefined8 uVar7;
  long lVar8;
  long lVar9;
  ulong uVar10;
  long lVar11;
  long *plVar12;
  long lVar13;
  char *pcVar14;
  ulong *puVar15;
  ulong *puVar16;
  undefined8 *puVar17;
  undefined8 *puVar18;
  long lVar19;
  long lVar20;
  ulong uVar21;
  int iVar22;
  uint uVar23;
  uint uVar24;
  long lVar25;
  uint *puVar26;
  uint uVar27;
  undefined *puVar28;
  uint *puVar29;
  long lVar30;
  ulong uVar31;
  uint *puVar32;
  undefined1 auVar33 [16];
  uint local_108 [2];
  ulong local_100;
  int local_f8;
  int local_ec;
  uint local_e8;
  uint local_e4;
  uint local_e0;
  uint local_dc;
  ulong local_d8;
  undefined1 local_d0 [8];
  undefined *puStack_c8;
  uint local_c0 [2];
  ulong local_b8;
  uint local_b0 [2];
  long local_a8;
  undefined8 local_a0;
  char *local_80;
  undefined8 local_78;
  
  puVar2 = PTR_DAT_04bd5de8;
  if ((param_3 & 1) == 0) {
    lVar8 = *param_2;
    if ((param_2[1] - lVar8 & 3U) == 0) {
      lVar25 = *(long *)(param_1 + 4);
      iVar22 = param_1[6];
      uVar24 = (uint)((ulong)(param_2[1] - lVar8) >> 2);
      lVar19 = *(long *)(param_1 + 0x14);
      lVar20 = *(long *)(param_1 + 0x16);
      local_dc = 0;
      uVar31 = *(long *)(param_1 + 0x12) - *(long *)(param_1 + 0x10);
      iVar5 = (int)*(long *)(param_1 + 0x10);
      if (2 < (int)uVar24) {
        local_dc = 0;
        uVar4 = 2;
        puVar28 = PTR_DAT_04bd4940;
LAB_0048a6a8:
        uVar23 = (uint)((long)(int)local_dc + 1);
        uVar27 = *(uint *)(lVar8 + (long)(int)local_dc * 4);
        local_d0._0_4_ = uVar27;
        if (uVar27 != 0) {
          if ((ulong)uVar27 < (ulong)(long)iVar22) {
            if (*(long *)(lVar25 + (long)(int)uVar27 * 8) == 0) {
              uVar4 = 0x80040200;
              local_b8 = CONCAT44(local_b8._4_4_,0x80040200);
              local_dc = uVar23;
              if (DAT_04c70f78 != 0) {
                FUN_00444bc0(&local_a8,&DAT_04c70f28,1);
                local_80 = "../..\\Common/Base/Serialize/Format/Tagfile/Detail/hkTagfileDetail.h";
                local_78 = 0xd7;
                uVar7 = FUN_004446b0(&local_a8,"HK_RETURN_LOG returning {}. ",puVar2,&local_b8);
                local_d8 = CONCAT44(local_d8._4_4_,local_dc - 1);
                pcVar14 = 
                "Corrupt patch index body at index {}: TypeId {} corresponds to a missing type";
                goto LAB_0048a828;
              }
              goto LAB_0048a83c;
            }
            iVar6 = *(int *)(lVar8 + ((long)(int)local_dc + 1) * 4);
            local_b8 = CONCAT44(local_b8._4_4_,iVar6);
            local_dc = uVar4;
            if ((int)uVar24 < (int)(iVar6 + uVar4)) {
              local_d8 = CONCAT44(local_d8._4_4_,0x80040200);
              uVar4 = 0x80040200;
              if (DAT_04c70f78 != 0) {
                FUN_00444bc0(&local_a8,&DAT_04c70f28,1);
                local_80 = "../..\\Common/Base/Serialize/Format/Tagfile/Detail/hkTagfileDetail.h";
                local_78 = 0xde;
                uVar7 = FUN_004446b0(&local_a8,"HK_RETURN_LOG returning {}. ",puVar2,&local_d8);
                local_b0[0] = local_dc - 1;
                FUN_004446b0(uVar7,"Corrupt patch index body at index {}: invalid entries number {}"
                             ,puVar28,local_b0,&local_b8);
                FUN_00444c00(&local_a8);
                uVar4 = (uint)local_d8;
              }
              goto LAB_0048a83c;
            }
            if (3 < DAT_04c70f78) {
              FUN_00444bc0(&local_a8,&DAT_04c70f28,4);
              lVar9 = FUN_004446b0(&local_a8,"Type {} ({} entries) //{}",PTR_DAT_04bd5e60,local_d0,
                                   &local_b8,lVar25 + (long)(int)local_d0._0_4_ * 8);
              *(char **)(lVar9 + 0x28) =
                   "../..\\Common/Base/Serialize/Format/Tagfile/Detail/hkTagfileDetail.h";
              *(undefined8 *)(lVar9 + 0x30) = 0xe1;
              FUN_00444c00(&local_a8);
              iVar6 = (uint)local_b8;
              uVar27 = local_d0._0_4_;
            }
            local_100 = *(ulong *)(lVar25 + (long)(int)uVar27 * 8);
            local_c0[0] = 0;
            local_f8 = iVar6;
          }
          else {
            uVar4 = 0x80040200;
            local_b8 = CONCAT44(local_b8._4_4_,0x80040200);
            local_dc = uVar23;
            if (DAT_04c70f78 != 0) {
              FUN_00444bc0(&local_a8,&DAT_04c70f28,1);
              local_80 = "../..\\Common/Base/Serialize/Format/Tagfile/Detail/hkTagfileDetail.h";
              local_78 = 0xd2;
              uVar7 = FUN_004446b0(&local_a8,"HK_RETURN_LOG returning {}. ",puVar2,&local_b8);
              pcVar14 = "Corrupt patch index body at index {}: invalid TypeId {}";
              local_d8 = CONCAT44(local_d8._4_4_,local_dc - 1);
LAB_0048a828:
              FUN_004446b0(uVar7,pcVar14,puVar28,&local_d8,local_d0);
              FUN_00444c00(&local_a8);
              uVar4 = (uint)local_b8;
            }
LAB_0048a83c:
            local_100 = 0;
            local_f8 = 0;
            local_c0[0] = uVar4;
            local_108[0] = uVar4;
            if ((int)uVar4 < 0) goto joined_r0x0048bdf4;
          }
          bVar3 = 3 < DAT_04c70f78;
          local_108[0] = local_c0[0];
          if (local_100 == 0) goto joined_r0x0048b65c;
          if (bVar3) {
            FUN_00444bc0(&local_a8,&DAT_04c70f28,4);
            lVar9 = FUN_004446b0(&local_a8,"Internal fixups for type {}",PTR_DAT_04bd4df8,&local_100
                                );
            *(char **)(lVar9 + 0x28) =
                 "../..\\Common/Base/Serialize/Format/Tagfile/Detail/hkTagfileDetail.h";
            *(undefined8 *)(lVar9 + 0x30) = 0x107;
            *(undefined1 *)(lVar9 + 9) = 1;
            FUN_00444c00(&local_a8);
          }
          uVar10 = FUN_00428440(local_100);
          if (local_f8 == 0) {
            bVar3 = false;
          }
          else {
            uVar21 = (ulong)(int)local_dc;
            puVar26 = (uint *)(lVar8 + uVar21 * 4);
            if ((uVar10 & 0x1f) == 3) {
              lVar9 = (long)local_f8 << 2;
              do {
                uVar4 = *puVar26;
                if (uVar31 <= uVar4) {
                  puVar28 = PTR_DAT_04bd4940;
                  goto LAB_0048aa88;
                }
                if (3 < DAT_04c70f78) {
                  FUN_00444bc0(&local_a8,&DAT_04c70f28,4);
                  lVar11 = FUN_004446b0(&local_a8,"srcOff={}",PTR_DAT_04bd5ca0,puVar26);
                  *(char **)(lVar11 + 0x28) =
                       "../..\\Common/Base/Serialize/Format/Tagfile/Detail/hkTagfileDetail.h";
                  *(undefined8 *)(lVar11 + 0x30) = 0x116;
                  FUN_00444c00(&local_a8);
                }
                local_a8 = CONCAT44(local_a8._4_4_,(iVar5 + uVar4) - param_1[0x10]);
                FUN_00445cf0(*(undefined8 *)(param_1 + 0x46),&local_a8);
                local_dc = local_dc + 1;
                puVar26 = puVar26 + 1;
                lVar9 = lVar9 + -4;
                local_c0[0] = 0;
              } while (lVar9 != 0);
              bVar3 = false;
              puVar28 = PTR_DAT_04bd4940;
            }
            else {
              lVar9 = (long)local_f8 << 2;
              do {
                if (uVar31 <= *puVar26) goto LAB_0048aa88;
                uVar4 = (uint)uVar21;
                if (3 < DAT_04c70f78) {
                  FUN_00444bc0(&local_a8,&DAT_04c70f28,4);
                  lVar11 = FUN_004446b0(&local_a8,"srcOff={}",PTR_DAT_04bd5ca0,puVar26);
                  *(char **)(lVar11 + 0x28) =
                       "../..\\Common/Base/Serialize/Format/Tagfile/Detail/hkTagfileDetail.h";
                  *(undefined8 *)(lVar11 + 0x30) = 0x116;
                  FUN_00444c00(&local_a8);
                  uVar4 = local_dc;
                }
                local_dc = uVar4 + 1;
                uVar21 = (ulong)local_dc;
                puVar26 = puVar26 + 1;
                lVar9 = lVar9 + -4;
                local_c0[0] = 0;
              } while (lVar9 != 0);
              bVar3 = false;
            }
          }
          goto joined_r0x0048a984;
        }
        local_108[0] = 0;
        local_100 = 0;
        local_f8 = 0;
        bVar3 = 3 < DAT_04c70f78;
        local_dc = uVar23;
joined_r0x0048b65c:
        local_c0[0] = local_108[0];
        if (bVar3) {
          FUN_00444bc0(&local_a8,&DAT_04c70f28,4);
          lVar9 = FUN_004446b0(&local_a8,"Finished internal, starting external",PTR_DAT_04bd4920);
          *(char **)(lVar9 + 0x28) =
               "../..\\Common/Base/Serialize/Format/Tagfile/Detail/hkTagfileDetail.h";
          *(undefined8 *)(lVar9 + 0x30) = 0x103;
          FUN_00444c00(&local_a8);
        }
      }
LAB_0048b69c:
      puVar2 = PTR_DAT_04bd5ca0;
      do {
        lVar9 = (long)(int)local_dc;
        uVar4 = local_dc + 2;
        if ((int)uVar24 <= (int)uVar4) {
          return;
        }
        local_dc = local_dc + 1;
        uVar27 = *(uint *)(lVar8 + lVar9 * 4);
        local_d0._0_4_ = uVar27;
        if (uVar27 == 0) {
          local_108[0] = 0;
          local_100 = 0;
          local_f8 = 0;
LAB_0048bd88:
          local_c0[0] = 0x80040200;
          if (DAT_04c70f78 != 0) {
            FUN_00444bc0(&local_a8,&DAT_04c70f28,1);
            local_80 = "../..\\Common/Base/Serialize/Format/Tagfile/Detail/hkTagfileDetail.h";
            local_78 = 300;
            uVar7 = FUN_004446b0(&local_a8,"HK_RETURN_LOG returning {}. ",PTR_DAT_04bd5de8,local_c0)
            ;
            FUN_004446b0(uVar7,"Invalid sentinel at the end of external fixups",PTR_DAT_04bd4920);
            FUN_00444c00(&local_a8);
          }
          break;
        }
        if ((ulong)uVar27 < (ulong)(long)iVar22) {
          if (*(long *)(lVar25 + (long)(int)uVar27 * 8) == 0) {
            uVar4 = 0x80040200;
            local_b8 = CONCAT44(local_b8._4_4_,0x80040200);
            if (DAT_04c70f78 != 0) {
              FUN_00444bc0(&local_a8,&DAT_04c70f28,1);
              local_80 = "../..\\Common/Base/Serialize/Format/Tagfile/Detail/hkTagfileDetail.h";
              local_78 = 0xd7;
              uVar7 = FUN_004446b0(&local_a8,"HK_RETURN_LOG returning {}. ",PTR_DAT_04bd5de8,
                                   &local_b8);
              local_d8 = CONCAT44(local_d8._4_4_,local_dc - 1);
              pcVar14 = 
              "Corrupt patch index body at index {}: TypeId {} corresponds to a missing type";
              goto LAB_0048b87c;
            }
            goto LAB_0048b894;
          }
          iVar6 = *(int *)(lVar8 + (long)(int)local_dc * 4);
          local_b8 = CONCAT44(local_b8._4_4_,iVar6);
          local_dc = uVar4;
          if ((int)uVar24 < (int)(iVar6 + uVar4)) {
            local_d8 = CONCAT44(local_d8._4_4_,0x80040200);
            uVar4 = 0x80040200;
            if (DAT_04c70f78 != 0) {
              FUN_00444bc0(&local_a8,&DAT_04c70f28,1);
              local_80 = "../..\\Common/Base/Serialize/Format/Tagfile/Detail/hkTagfileDetail.h";
              local_78 = 0xde;
              uVar7 = FUN_004446b0(&local_a8,"HK_RETURN_LOG returning {}. ",PTR_DAT_04bd5de8,
                                   &local_d8);
              local_b0[0] = local_dc - 1;
              FUN_004446b0(uVar7,"Corrupt patch index body at index {}: invalid entries number {}",
                           PTR_DAT_04bd4940,local_b0,&local_b8);
              FUN_00444c00(&local_a8);
              uVar4 = (uint)local_d8;
            }
            goto LAB_0048b894;
          }
          if (3 < DAT_04c70f78) {
            FUN_00444bc0(&local_a8,&DAT_04c70f28,4);
            lVar9 = FUN_004446b0(&local_a8,"Type {} ({} entries) //{}",PTR_DAT_04bd5e60,local_d0,
                                 &local_b8,lVar25 + (long)(int)local_d0._0_4_ * 8);
            *(char **)(lVar9 + 0x28) =
                 "../..\\Common/Base/Serialize/Format/Tagfile/Detail/hkTagfileDetail.h";
            *(undefined8 *)(lVar9 + 0x30) = 0xe1;
            FUN_00444c00(&local_a8);
            iVar6 = (uint)local_b8;
            uVar27 = local_d0._0_4_;
          }
          local_100 = *(ulong *)(lVar25 + (long)(int)uVar27 * 8);
          local_c0[0] = 0;
          local_f8 = iVar6;
        }
        else {
          uVar4 = 0x80040200;
          local_b8 = CONCAT44(local_b8._4_4_,0x80040200);
          if (DAT_04c70f78 != 0) {
            FUN_00444bc0(&local_a8,&DAT_04c70f28,1);
            local_80 = "../..\\Common/Base/Serialize/Format/Tagfile/Detail/hkTagfileDetail.h";
            local_78 = 0xd2;
            uVar7 = FUN_004446b0(&local_a8,"HK_RETURN_LOG returning {}. ",PTR_DAT_04bd5de8,&local_b8
                                );
            pcVar14 = "Corrupt patch index body at index {}: invalid TypeId {}";
            local_d8 = CONCAT44(local_d8._4_4_,local_dc - 1);
LAB_0048b87c:
            FUN_004446b0(uVar7,pcVar14,PTR_DAT_04bd4940,&local_d8,local_d0);
            FUN_00444c00(&local_a8);
            uVar4 = (uint)local_b8;
          }
LAB_0048b894:
          local_100 = 0;
          local_f8 = 0;
          local_c0[0] = uVar4;
          local_108[0] = uVar4;
          if ((int)uVar4 < 0) break;
        }
        local_108[0] = local_c0[0];
        if (local_100 == 0) goto LAB_0048bd88;
        if (3 < DAT_04c70f78) {
          FUN_00444bc0(&local_a8,&DAT_04c70f28,4);
          lVar9 = FUN_004446b0(&local_a8,"External fixups for type {}",PTR_DAT_04bd4df8,&local_100);
          *(char **)(lVar9 + 0x28) =
               "../..\\Common/Base/Serialize/Format/Tagfile/Detail/hkTagfileDetail.h";
          *(undefined8 *)(lVar9 + 0x30) = 0x12f;
          *(undefined1 *)(lVar9 + 9) = 1;
          FUN_00444c00(&local_a8);
        }
        uVar10 = FUN_00428440(local_100);
        if (0 < local_f8) {
          iVar6 = 0;
LAB_0048b920:
          uVar4 = local_dc + 1;
          uVar27 = *(uint *)(lVar8 + (long)(int)local_dc * 4);
          local_d0._0_4_ = uVar27;
          if ((ulong)uVar27 < (ulong)((lVar20 - lVar19 >> 2) * -0x5555555555555555)) {
            local_dc = local_dc + 2;
            uVar4 = *(uint *)(lVar8 + (long)(int)uVar4 * 4);
            local_b8 = CONCAT44(local_b8._4_4_,uVar4);
            if (uVar24 < uVar4 + local_dc) {
              local_c0[0] = 0x80040200;
              if (DAT_04c70f78 != 0) {
                FUN_00444bc0(&local_a8,&DAT_04c70f28,1);
                local_80 = "../..\\Common/Base/Serialize/Format/Tagfile/Detail/hkTagfileDetail.h";
                local_78 = 0x141;
                uVar7 = FUN_004446b0(&local_a8,"HK_RETURN_LOG returning {}. ",PTR_DAT_04bd5de8,
                                     local_c0);
                local_d8 = CONCAT44(local_d8._4_4_,local_dc - 1);
                puVar15 = &local_d8;
                puVar16 = &local_b8;
                pcVar14 = "Corrupt patch index body at index {}: invalid offsets number {}";
                goto LAB_0048bd10;
              }
              goto LAB_0048bd24;
            }
            if (3 < DAT_04c70f78) {
              FUN_00444bc0(&local_a8,&DAT_04c70f28,4);
              lVar9 = FUN_004446b0(&local_a8,"tgtIdx={}, {} entries",PTR_DAT_04bd5e88,local_d0,
                                   &local_b8);
              *(char **)(lVar9 + 0x28) =
                   "../..\\Common/Base/Serialize/Format/Tagfile/Detail/hkTagfileDetail.h";
              *(undefined8 *)(lVar9 + 0x30) = 0x144;
              *(undefined1 *)(lVar9 + 9) = 1;
              FUN_00444c00(&local_a8);
              uVar4 = (uint)local_b8;
            }
            if (uVar4 == 0) {
              bVar3 = false;
            }
            else {
              puVar26 = (uint *)(lVar8 + (long)(int)local_dc * 4);
              lVar9 = (ulong)uVar4 << 2;
              if ((uVar10 & 0x1f) == 3) {
                do {
                  uVar4 = *puVar26;
                  if (uVar31 <= uVar4) goto LAB_0048bb0c;
                  if (3 < DAT_04c70f78) {
                    FUN_00444bc0(&local_a8,&DAT_04c70f28,4);
                    lVar11 = FUN_004446b0(&local_a8,"srcOff={}",puVar2,puVar26);
                    *(char **)(lVar11 + 0x28) =
                         "../..\\Common/Base/Serialize/Format/Tagfile/Detail/hkTagfileDetail.h";
                    *(undefined8 *)(lVar11 + 0x30) = 0x151;
                    FUN_00444c00(&local_a8);
                  }
                  local_a8 = CONCAT44(local_a8._4_4_,(iVar5 + uVar4) - param_1[0x10]);
                  FUN_00445cf0(*(undefined8 *)(param_1 + 0x46),&local_a8);
                  local_dc = local_dc + 1;
                  puVar26 = puVar26 + 1;
                  lVar9 = lVar9 + -4;
                  local_c0[0] = 0;
                } while (lVar9 != 0);
                bVar3 = false;
              }
              else {
                do {
                  if (uVar31 <= *puVar26) goto LAB_0048bb0c;
                  if (3 < DAT_04c70f78) {
                    FUN_00444bc0(&local_a8,&DAT_04c70f28,4);
                    lVar11 = FUN_004446b0(&local_a8,"srcOff={}",puVar2,puVar26);
                    *(char **)(lVar11 + 0x28) =
                         "../..\\Common/Base/Serialize/Format/Tagfile/Detail/hkTagfileDetail.h";
                    *(undefined8 *)(lVar11 + 0x30) = 0x151;
                    FUN_00444c00(&local_a8);
                  }
                  local_dc = local_dc + 1;
                  puVar26 = puVar26 + 1;
                  lVar9 = lVar9 + -4;
                  local_c0[0] = 0;
                } while (lVar9 != 0);
                bVar3 = false;
              }
            }
            goto joined_r0x0048ba78;
          }
          local_c0[0] = 0x80040200;
          local_dc = uVar4;
          if (DAT_04c70f78 != 0) {
            FUN_00444bc0(&local_a8,&DAT_04c70f28,1);
            local_80 = "../..\\Common/Base/Serialize/Format/Tagfile/Detail/hkTagfileDetail.h";
            local_78 = 0x13a;
            uVar7 = FUN_004446b0(&local_a8,"HK_RETURN_LOG returning {}. ",PTR_DAT_04bd5de8,local_c0)
            ;
            puVar15 = &local_b8;
            puVar16 = (ulong *)local_d0;
            pcVar14 = "Corrupt patch index body at index {}: invalid target index {}";
            local_b8 = CONCAT44(local_b8._4_4_,local_dc - 1);
LAB_0048bd10:
            FUN_004446b0(uVar7,pcVar14,PTR_DAT_04bd5e68,puVar15,puVar16);
            FUN_00444c00(&local_a8);
          }
          goto LAB_0048bd24;
        }
LAB_0048bbb8:
        bVar3 = false;
joined_r0x0048bd30:
        if (3 < DAT_04c70f78) {
          FUN_00444bc0(&local_a8,&DAT_04c70f28,4);
          local_a0._0_2_ = CONCAT11(0xff,(undefined1)local_a0);
          FUN_00444c00(&local_a8);
        }
      } while (!bVar3);
    }
    else {
      local_c0[0] = 0x80040200;
      if (DAT_04c70f78 != 0) {
        FUN_00444bc0(&local_a8,&DAT_04c70f28,1);
        local_80 = "../..\\Common/Base/Serialize/Format/Tagfile/Detail/hkTagfileDetail.h";
        local_78 = 0xeb;
        uVar7 = FUN_004446b0(&local_a8,"HK_RETURN_LOG returning {}. ",PTR_DAT_04bd5de8,local_c0);
        local_108[0] = 0x20f2cca4;
        FUN_004446b0(uVar7,"PATCH_DATA section has the wrong size",PTR_DAT_04bd5e28,local_108);
        FUN_00444c00(&local_a8);
      }
    }
joined_r0x0048bdf4:
    if (-1 < (int)local_c0[0]) {
      return;
    }
    if (DAT_04c70f78 != 0) {
      FUN_00444bc0(&local_a8,&DAT_04c70f28,1);
      lVar8 = FUN_004446b0(&local_a8,"Failed to read the PATCH_DATA section",PTR_DAT_04bd4920);
      *(char **)(lVar8 + 0x28) =
           "E:/Havok/Build/.tmp/d20190725-23496-zzy48q/105_hk2019_1_0_Park/Source/Common/Base/Serialize/Format/Tagfile/hkTagfileReadFormat.cpp"
      ;
      *(undefined8 *)(lVar8 + 0x30) = 0xa89;
      FUN_00444c00(&local_a8);
    }
    *param_1 = 0x80040200;
    return;
  }
  lVar8 = *param_2;
  if ((param_2[1] - lVar8 & 3U) == 0) {
    lVar25 = *(long *)(param_1 + 0x76);
    lVar9 = *(long *)(param_1 + 4);
    lVar19 = *(long *)(param_1 + 0x10);
    lVar20 = *(long *)(param_1 + 0x12);
    iVar22 = param_1[6];
    local_ec = 0;
    uVar31 = (*(long *)(param_1 + 0x16) - *(long *)(param_1 + 0x14) >> 2) * -0x5555555555555555;
    uVar24 = (uint)((ulong)(param_2[1] - lVar8) >> 2);
    auVar33 = _local_d0;
    if (2 < (int)uVar24) {
      local_ec = 0;
      iVar5 = 2;
      do {
        uVar27 = 0x80040200;
        iVar6 = (int)((long)local_ec + 1);
        uVar4 = *(uint *)(lVar8 + (long)local_ec * 4);
        local_d0._0_4_ = uVar4;
        auVar33._8_8_ = puStack_c8;
        auVar33._0_8_ = local_d0;
        if (uVar4 == 0) {
          local_108[0] = 0;
          local_100 = 0;
          local_f8 = 0;
          bVar3 = 3 < DAT_04c70f78;
          local_ec = iVar6;
joined_r0x0048be14:
          local_e8 = local_108[0];
          if (bVar3) {
            FUN_00444bc0(&local_a8,&DAT_04c70f28,4);
            lVar11 = FUN_004446b0(&local_a8,"Finished internal, starting external",PTR_DAT_04bd4920)
            ;
            *(char **)(lVar11 + 0x28) =
                 "../..\\Common/Base/Serialize/Format/Tagfile/Detail/hkTagfileDetail.h";
            *(undefined8 *)(lVar11 + 0x30) = 0x103;
            FUN_00444c00(&local_a8);
            auVar33._8_8_ = puStack_c8;
            auVar33._0_8_ = local_d0;
          }
          break;
        }
        if ((ulong)uVar4 < (ulong)(long)iVar22) {
          if (*(long *)(lVar9 + (long)(int)uVar4 * 8) == 0) {
            local_b8 = CONCAT44(local_b8._4_4_,0x80040200);
            local_ec = iVar6;
            if (DAT_04c70f78 != 0) {
              FUN_00444bc0(&local_a8,&DAT_04c70f28,1);
              local_80 = "../..\\Common/Base/Serialize/Format/Tagfile/Detail/hkTagfileDetail.h";
              local_78 = 0xd7;
              uVar7 = FUN_004446b0(&local_a8,"HK_RETURN_LOG returning {}. ",PTR_DAT_04bd5de8,
                                   &local_b8);
              local_d8 = CONCAT44(local_d8._4_4_,local_ec + -1);
              pcVar14 = 
              "Corrupt patch index body at index {}: TypeId {} corresponds to a missing type";
              goto LAB_0048ad78;
            }
            goto LAB_0048ad90;
          }
          iVar6 = *(int *)(lVar8 + ((long)local_ec + 1) * 4);
          local_b8 = CONCAT44(local_b8._4_4_,iVar6);
          local_ec = iVar5;
          if ((int)uVar24 < iVar6 + iVar5) {
            local_d8 = CONCAT44(local_d8._4_4_,0x80040200);
            if (DAT_04c70f78 != 0) {
              FUN_00444bc0(&local_a8,&DAT_04c70f28,1);
              local_80 = "../..\\Common/Base/Serialize/Format/Tagfile/Detail/hkTagfileDetail.h";
              local_78 = 0xde;
              uVar7 = FUN_004446b0(&local_a8,"HK_RETURN_LOG returning {}. ",PTR_DAT_04bd5de8,
                                   &local_d8);
              local_b0[0] = local_ec - 1;
              FUN_004446b0(uVar7,"Corrupt patch index body at index {}: invalid entries number {}",
                           PTR_DAT_04bd4940,local_b0,&local_b8);
              FUN_00444c00(&local_a8);
              uVar27 = (uint)local_d8;
            }
            goto LAB_0048ad90;
          }
          if (3 < DAT_04c70f78) {
            FUN_00444bc0(&local_a8,&DAT_04c70f28,4);
            lVar11 = FUN_004446b0(&local_a8,"Type {} ({} entries) //{}",PTR_DAT_04bd5e60,local_d0,
                                  &local_b8,lVar9 + (long)(int)local_d0._0_4_ * 8);
            *(char **)(lVar11 + 0x28) =
                 "../..\\Common/Base/Serialize/Format/Tagfile/Detail/hkTagfileDetail.h";
            *(undefined8 *)(lVar11 + 0x30) = 0xe1;
            FUN_00444c00(&local_a8);
            iVar6 = (uint)local_b8;
            uVar4 = local_d0._0_4_;
          }
          local_100 = *(ulong *)(lVar9 + (long)(int)uVar4 * 8);
          local_e8 = 0;
          local_f8 = iVar6;
        }
        else {
          local_b8 = CONCAT44(local_b8._4_4_,0x80040200);
          local_ec = iVar6;
          if (DAT_04c70f78 != 0) {
            FUN_00444bc0(&local_a8,&DAT_04c70f28,1);
            local_80 = "../..\\Common/Base/Serialize/Format/Tagfile/Detail/hkTagfileDetail.h";
            local_78 = 0xd2;
            uVar7 = FUN_004446b0(&local_a8,"HK_RETURN_LOG returning {}. ",PTR_DAT_04bd5de8,&local_b8
                                );
            pcVar14 = "Corrupt patch index body at index {}: invalid TypeId {}";
            local_d8 = CONCAT44(local_d8._4_4_,local_ec + -1);
LAB_0048ad78:
            FUN_004446b0(uVar7,pcVar14,PTR_DAT_04bd4940,&local_d8,local_d0);
            FUN_00444c00(&local_a8);
            uVar27 = (uint)local_b8;
          }
LAB_0048ad90:
          local_100 = 0;
          local_f8 = 0;
          local_108[0] = uVar27;
          local_e8 = uVar27;
          if ((int)uVar27 < 0) goto LAB_0048a564;
        }
        auVar33._8_8_ = puStack_c8;
        auVar33._0_8_ = local_d0;
        bVar3 = 3 < DAT_04c70f78;
        local_108[0] = local_e8;
        if (local_100 == 0) goto joined_r0x0048be14;
        if (bVar3) {
          FUN_00444bc0(&local_a8,&DAT_04c70f28,4);
          lVar11 = FUN_004446b0(&local_a8,"Internal fixups for type {}",PTR_DAT_04bd4df8,&local_100)
          ;
          *(char **)(lVar11 + 0x28) =
               "../..\\Common/Base/Serialize/Format/Tagfile/Detail/hkTagfileDetail.h";
          *(undefined8 *)(lVar11 + 0x30) = 0x107;
          *(undefined1 *)(lVar11 + 9) = 1;
          FUN_00444c00(&local_a8);
        }
        uVar10 = local_100;
        plVar12 = (long *)FUN_00428370(local_100);
        uVar4 = FUN_00428440(uVar10);
        if (local_f8 == 0) {
          bVar3 = false;
        }
        else {
          puVar26 = (uint *)(lVar8 + (long)local_ec * 4);
          lVar11 = (long)local_f8 << 2;
          do {
            if ((ulong)(lVar20 - lVar19) <= (ulong)*puVar26) {
              local_e8 = 0x80040200;
              if (DAT_04c70f78 == 0) goto LAB_0048a564;
              bVar3 = true;
              FUN_00444bc0(&local_a8,&DAT_04c70f28,1);
              local_80 = "../..\\Common/Base/Serialize/Format/Tagfile/Detail/hkTagfileDetail.h";
              local_78 = 0x113;
              uVar7 = FUN_004446b0(&local_a8,"HK_RETURN_LOG returning {}. ",PTR_DAT_04bd5de8,
                                   &local_e8);
              FUN_004446b0(uVar7,"Corrupt patch index body at index {}: invalid offset {}",
                           PTR_DAT_04bd5e68,&local_ec,puVar26);
              FUN_00444c00(&local_a8);
              goto joined_r0x0048b4b8;
            }
            uVar10 = (ulong)(int)*puVar26;
            puVar29 = (uint *)(lVar19 + uVar10);
            if (3 < DAT_04c70f78) {
              FUN_00444bc0(&local_a8,&DAT_04c70f28,4);
              lVar13 = FUN_004446b0(&local_a8,"srcOff={}",PTR_DAT_04bd5ca0,puVar26);
              *(char **)(lVar13 + 0x28) =
                   "../..\\Common/Base/Serialize/Format/Tagfile/Detail/hkTagfileDetail.h";
              *(undefined8 *)(lVar13 + 0x30) = 0x116;
              FUN_00444c00(&local_a8);
            }
            uVar21 = local_100;
            local_e4 = *puVar29;
            local_e0 = 0x80040200;
            if (uVar31 <= local_e4) {
              if (DAT_04c70f78 == 0) {
                bVar3 = true;
                local_e8 = local_e0;
              }
              else {
                FUN_00444bc0(&local_a8,&DAT_04c70f28,1);
                local_78 = 0xa1f;
                local_80 = 
                "E:/Havok/Build/.tmp/d20190725-23496-zzy48q/105_hk2019_1_0_Park/Source/Common/Base/Serialize/Format/Tagfile/hkTagfileReadFormat.cpp"
                ;
                uVar7 = FUN_004446b0(&local_a8,"HK_RETURN_RES_IF({}) returning {}. ",
                                     PTR_DAT_04bd5df8,"tgtIdx >= m_numItems",&local_e0);
                local_d0 = (undefined1  [8])uVar10;
                FUN_004446b0(uVar7,"Corrupt data at offset {}: invalid target index {}",
                             PTR_DAT_04bd5e98,local_d0,&local_e4);
                FUN_00444c00(&local_a8);
                if (-1 < (int)local_e0) goto LAB_0048b2ac;
LAB_0048b370:
                bVar3 = true;
                local_e8 = local_e0;
              }
              goto joined_r0x0048b4b8;
            }
            local_b8 = local_100;
            *puVar29 = 0;
            local_c0[0] = local_e4;
            if (local_e4 == 0) {
              local_b0[0] = 0x80040200;
              iVar5 = (**(code **)(*plVar12 + 0x10))(plVar12,puVar29,local_100,0,0,0);
              if (iVar5 < 0) {
                if (DAT_04c70f78 != 0) {
                  FUN_00444bc0(&local_a8,&DAT_04c70f28,1);
                  local_78 = 0xa4b;
                  local_80 = 
                  "E:/Havok/Build/.tmp/d20190725-23496-zzy48q/105_hk2019_1_0_Park/Source/Common/Base/Serialize/Format/Tagfile/hkTagfileReadFormat.cpp"
                  ;
                  uVar7 = FUN_004446b0(&local_a8,"HK_RETURN_RES_IF({}) returning {}. ",
                                       PTR_DAT_04bd5e20,
                                       "srcImpl->inplaceFixup(srcAddr, srcType, nullptr, nullptr, 0).isFailure()"
                                       ,local_b0);
                  local_d0 = (undefined1  [8])uVar10;
                  FUN_004446b0(uVar7,"Failed to apply null fixup of type \'{}\' at data offset {}",
                               PTR_DAT_04bd4e08,&local_b8,local_d0);
                  goto LAB_0048b294;
                }
                goto LAB_0048b29c;
              }
LAB_0048b1f8:
              local_b0[0] = 0;
              local_e0 = 0;
            }
            else {
              lVar13 = (long)(int)local_e4;
              lVar30 = *(long *)(param_1 + 0x14);
              puVar32 = (uint *)(lVar30 + lVar13 * 0xc);
              auVar33 = FUN_00490910(param_1 + 2,puVar32);
              _local_d0 = auVar33;
              if ((uVar4 & 0x1f) == 3) {
                local_b0[0] = 0x80040200;
                if (auVar33._8_8_ != PTR_DAT_04bd4f98) {
                  if (DAT_04c70f78 != 0) {
                    FUN_00444bc0(&local_a8,&DAT_04c70f28,1);
                    local_78 = 0xa38;
                    local_80 = 
                    "E:/Havok/Build/.tmp/d20190725-23496-zzy48q/105_hk2019_1_0_Park/Source/Common/Base/Serialize/Format/Tagfile/hkTagfileReadFormat.cpp"
                    ;
                    uVar7 = FUN_004446b0(&local_a8,"HK_RETURN_RES_IF({}) returning {}. ",
                                         PTR_DAT_04bd5460,
                                         "addrAndType.m_type != hkReflect::getType<char>()",local_b0
                                        );
                    FUN_004446b0(uVar7,"Found string whose item type is \'{}\' instead of \'char\'",
                                 PTR_DAT_04bd4df8,&puStack_c8);
                    goto LAB_0048b294;
                  }
                  goto LAB_0048b29c;
                }
LAB_0048b164:
                if ((*puVar32 & 0xf0000000) != 0x50000000) {
LAB_0048b1b8:
                  local_b0[0] = 0x80040200;
                  iVar5 = (**(code **)(*plVar12 + 0x10))
                                    (plVar12,puVar29,uVar21,local_d0,puStack_c8,
                                     *(undefined4 *)(lVar30 + lVar13 * 0xc + 8));
                  if (-1 < iVar5) goto LAB_0048b1f8;
                  if ((-1 < (int)local_b0[0]) || (DAT_04c70f78 == 0)) goto LAB_0048b29c;
                  FUN_00444bc0(&local_a8,&DAT_04c70f28,1);
                  local_78 = 0xa46;
                  local_80 = 
                  "E:/Havok/Build/.tmp/d20190725-23496-zzy48q/105_hk2019_1_0_Park/Source/Common/Base/Serialize/Format/Tagfile/hkTagfileReadFormat.cpp"
                  ;
                  uVar7 = FUN_004446b0(&local_a8,"HK_RETURN_RES_IF({}) returning {}. ",
                                       PTR_DAT_04bd5df0,
                                       "srcImpl->inplaceFixup(srcAddr, srcType, addrAndType.m_addr, addrAndType.m_type, targetItem.count).isFailure()"
                                       ,local_b0);
                  local_d8 = uVar10;
                  FUN_004446b0(uVar7,
                               "Failed to apply fixup of type \'{}\'; at data offset {} pointing to item {}"
                               ,PTR_DAT_04bd5e38,&local_b8,&local_d8,local_c0);
                  goto LAB_0048b294;
                }
                FUN_00429540(&local_d8,auVar33._0_8_);
                local_b0[0] = 0x80040200;
                if ((local_d8 < 2) || (*(char *)(lVar25 + ((ulong)*puVar32 & 0xffffff)) != '\0')) {
                  uVar21 = local_b8;
                  goto LAB_0048b1b8;
                }
                if (DAT_04c70f78 != 0) {
                  FUN_00444bc0(&local_a8,&DAT_04c70f28,1);
                  local_78 = 0xa41;
                  local_80 = 
                  "E:/Havok/Build/.tmp/d20190725-23496-zzy48q/105_hk2019_1_0_Park/Source/Common/Base/Serialize/Format/Tagfile/hkTagfileReadFormat.cpp"
                  ;
                  uVar7 = FUN_004446b0(&local_a8,"HK_RETURN_RES_IF({}) returning {}. ",
                                       PTR_DAT_04bd5e10,
                                       "decl && !m_propHashVerified[targetItem.getIndex()]",local_b0
                                      );
                  local_dc = *puVar32 & 0xffffff;
                  FUN_004446b0(uVar7,
                               "Found pointer to decl in type ${} ({}) but no property hash has been loaded for the type"
                               ,PTR_DAT_04bd5e70,&local_dc,lVar9 + ((ulong)*puVar32 & 0xffffff) * 8)
                  ;
                  FUN_00444c00(&local_a8);
                }
                local_e0 = local_b0[0];
              }
              else {
                if (((uVar4 & 0x1f) != 6) ||
                   (local_b0[0] = 0x80040200, (*puVar32 | 0x10000000) >> 0x1c != 3))
                goto LAB_0048b164;
                if (DAT_04c70f78 == 0) goto LAB_0048b29c;
                FUN_00444bc0(&local_a8,&DAT_04c70f28,1);
                local_78 = 0xa33;
                local_80 = 
                "E:/Havok/Build/.tmp/d20190725-23496-zzy48q/105_hk2019_1_0_Park/Source/Common/Base/Serialize/Format/Tagfile/hkTagfileReadFormat.cpp"
                ;
                uVar7 = FUN_004446b0(&local_a8,"HK_RETURN_RES_IF({}) returning {}. ",
                                     PTR_DAT_04bd5e10,
                                     "targetItem.isKindVarN() || targetItem.isKindNote()",local_b0);
                FUN_004446b0(uVar7,"Found invalid fixup for pointer",PTR_DAT_04bd4920);
LAB_0048b294:
                FUN_00444c00(&local_a8);
LAB_0048b29c:
                local_e0 = local_b0[0];
              }
              local_b0[0] = local_e0;
              if ((int)local_e0 < 0) goto LAB_0048b370;
            }
LAB_0048b2ac:
            local_ec = local_ec + 1;
            puVar26 = puVar26 + 1;
            lVar11 = lVar11 + -4;
            local_e8 = local_e0;
          } while (lVar11 != 0);
          bVar3 = false;
        }
joined_r0x0048b4b8:
        if (3 < DAT_04c70f78) {
          FUN_00444bc0(&local_a8,&DAT_04c70f28,4);
          local_a0._0_2_ = CONCAT11(0xff,(undefined1)local_a0);
          FUN_00444c00(&local_a8);
        }
        if (bVar3) goto LAB_0048a564;
        iVar5 = local_ec + 2;
        auVar33 = _local_d0;
      } while (iVar5 < (int)uVar24);
    }
    do {
      _local_d0 = auVar33;
      uVar4 = 0x80040200;
      lVar11 = (long)local_ec;
      iVar5 = local_ec + 2;
      if ((int)uVar24 <= iVar5) {
        local_e8 = 0;
        goto LAB_0048a56c;
      }
      local_ec = local_ec + 1;
      uVar27 = *(uint *)(lVar8 + lVar11 * 4);
      local_d0._0_4_ = uVar27;
      if (uVar27 == 0) {
        local_108[0] = 0;
        local_100 = 0;
        local_f8 = 0;
LAB_0048c9f8:
        local_e8 = 0x80040200;
        if (DAT_04c70f78 != 0) {
          FUN_00444bc0(&local_a8,&DAT_04c70f28,1);
          local_78 = 300;
          local_80 = "../..\\Common/Base/Serialize/Format/Tagfile/Detail/hkTagfileDetail.h";
          uVar7 = FUN_004446b0(&local_a8,"HK_RETURN_LOG returning {}. ",PTR_DAT_04bd5de8,&local_e8);
          FUN_004446b0(uVar7,"Invalid sentinel at the end of external fixups",PTR_DAT_04bd4920);
          goto LAB_0048a55c;
        }
        goto LAB_0048a564;
      }
      if ((ulong)uVar27 < (ulong)(long)iVar22) {
        if (*(long *)(lVar9 + (long)(int)uVar27 * 8) == 0) {
          local_b8 = CONCAT44(local_b8._4_4_,0x80040200);
          if (DAT_04c70f78 != 0) {
            FUN_00444bc0(&local_a8,&DAT_04c70f28,1);
            local_78 = 0xd7;
            local_80 = "../..\\Common/Base/Serialize/Format/Tagfile/Detail/hkTagfileDetail.h";
            uVar7 = FUN_004446b0(&local_a8,"HK_RETURN_LOG returning {}. ",PTR_DAT_04bd5de8,&local_b8
                                );
            local_d8 = CONCAT44(local_d8._4_4_,local_ec + -1);
            pcVar14 = 
            "Corrupt patch index body at index {}: TypeId {} corresponds to a missing type";
            goto LAB_0048c028;
          }
          goto LAB_0048c040;
        }
        iVar6 = *(int *)(lVar8 + (long)local_ec * 4);
        local_b8 = CONCAT44(local_b8._4_4_,iVar6);
        local_ec = iVar5;
        if ((int)uVar24 < iVar6 + iVar5) {
          local_d8 = CONCAT44(local_d8._4_4_,0x80040200);
          if (DAT_04c70f78 != 0) {
            FUN_00444bc0(&local_a8,&DAT_04c70f28,1);
            local_78 = 0xde;
            local_80 = "../..\\Common/Base/Serialize/Format/Tagfile/Detail/hkTagfileDetail.h";
            uVar7 = FUN_004446b0(&local_a8,"HK_RETURN_LOG returning {}. ",PTR_DAT_04bd5de8,&local_d8
                                );
            local_b0[0] = local_ec - 1;
            FUN_004446b0(uVar7,"Corrupt patch index body at index {}: invalid entries number {}",
                         PTR_DAT_04bd4940,local_b0,&local_b8);
            FUN_00444c00(&local_a8);
            uVar4 = (uint)local_d8;
          }
          goto LAB_0048c040;
        }
        if (3 < DAT_04c70f78) {
          FUN_00444bc0(&local_a8,&DAT_04c70f28,4);
          lVar11 = FUN_004446b0(&local_a8,"Type {} ({} entries) //{}",PTR_DAT_04bd5e60,local_d0,
                                &local_b8,lVar9 + (long)(int)local_d0._0_4_ * 8);
          *(char **)(lVar11 + 0x28) =
               "../..\\Common/Base/Serialize/Format/Tagfile/Detail/hkTagfileDetail.h";
          *(undefined8 *)(lVar11 + 0x30) = 0xe1;
          FUN_00444c00(&local_a8);
          iVar6 = (uint)local_b8;
          uVar27 = local_d0._0_4_;
        }
        local_100 = *(ulong *)(lVar9 + (long)(int)uVar27 * 8);
        local_e8 = 0;
        local_f8 = iVar6;
      }
      else {
        local_b8 = CONCAT44(local_b8._4_4_,0x80040200);
        if (DAT_04c70f78 != 0) {
          FUN_00444bc0(&local_a8,&DAT_04c70f28,1);
          local_78 = 0xd2;
          local_80 = "../..\\Common/Base/Serialize/Format/Tagfile/Detail/hkTagfileDetail.h";
          uVar7 = FUN_004446b0(&local_a8,"HK_RETURN_LOG returning {}. ",PTR_DAT_04bd5de8,&local_b8);
          pcVar14 = "Corrupt patch index body at index {}: invalid TypeId {}";
          local_d8 = CONCAT44(local_d8._4_4_,local_ec + -1);
LAB_0048c028:
          FUN_004446b0(uVar7,pcVar14,PTR_DAT_04bd4940,&local_d8,local_d0);
          FUN_00444c00(&local_a8);
          uVar4 = (uint)local_b8;
        }
LAB_0048c040:
        local_100 = 0;
        local_f8 = 0;
        local_108[0] = uVar4;
        local_e8 = uVar4;
        if ((int)uVar4 < 0) goto LAB_0048a564;
      }
      local_108[0] = local_e8;
      if (local_100 == 0) goto LAB_0048c9f8;
      if (3 < DAT_04c70f78) {
        FUN_00444bc0(&local_a8,&DAT_04c70f28,4);
        lVar11 = FUN_004446b0(&local_a8,"External fixups for type {}",PTR_DAT_04bd4df8,&local_100);
        *(char **)(lVar11 + 0x28) =
             "../..\\Common/Base/Serialize/Format/Tagfile/Detail/hkTagfileDetail.h";
        *(undefined8 *)(lVar11 + 0x30) = 0x12f;
        *(undefined1 *)(lVar11 + 9) = 1;
        FUN_00444c00(&local_a8);
      }
      uVar10 = local_100;
      plVar12 = (long *)FUN_00428370(local_100);
      uVar4 = FUN_00428440(uVar10);
      if (0 < local_f8) {
        iVar5 = 0;
        do {
          iVar6 = local_ec + 1;
          local_e0 = *(uint *)(lVar8 + (long)local_ec * 4);
          if (uVar31 <= local_e0) {
            local_e8 = 0x80040200;
            local_ec = iVar6;
            if (DAT_04c70f78 != 0) {
              FUN_00444bc0(&local_a8,&DAT_04c70f28,1);
              local_78 = 0x13a;
              local_80 = "../..\\Common/Base/Serialize/Format/Tagfile/Detail/hkTagfileDetail.h";
              uVar7 = FUN_004446b0(&local_a8,"HK_RETURN_LOG returning {}. ",PTR_DAT_04bd5de8,
                                   &local_e8);
              local_d0._0_4_ = local_ec + -1;
              FUN_004446b0(uVar7,"Corrupt patch index body at index {}: invalid target index {}",
                           PTR_DAT_04bd5e68,local_d0,&local_e0);
              FUN_00444c00(&local_a8);
            }
            bVar3 = true;
            goto joined_r0x0048c938;
          }
          local_ec = local_ec + 2;
          local_e4 = *(uint *)(lVar8 + (long)iVar6 * 4);
          if (uVar24 < local_e4 + local_ec) {
            local_e8 = 0x80040200;
            if (DAT_04c70f78 != 0) {
              FUN_00444bc0(&local_a8,&DAT_04c70f28,1);
              local_78 = 0x141;
              local_80 = "../..\\Common/Base/Serialize/Format/Tagfile/Detail/hkTagfileDetail.h";
              uVar7 = FUN_004446b0(&local_a8,"HK_RETURN_LOG returning {}. ",PTR_DAT_04bd5de8,
                                   &local_e8);
              local_d0._0_4_ = local_ec + -1;
              FUN_004446b0(uVar7,"Corrupt patch index body at index {}: invalid offsets number {}",
                           PTR_DAT_04bd5e68,local_d0,&local_e4);
              FUN_00444c00(&local_a8);
            }
LAB_0048c928:
            bVar3 = true;
            goto joined_r0x0048c938;
          }
          if (3 < DAT_04c70f78) {
            FUN_00444bc0(&local_a8,&DAT_04c70f28,4);
            lVar11 = FUN_004446b0(&local_a8,"tgtIdx={}, {} entries",PTR_DAT_04bd5e88,&local_e0,
                                  &local_e4);
            *(char **)(lVar11 + 0x28) =
                 "../..\\Common/Base/Serialize/Format/Tagfile/Detail/hkTagfileDetail.h";
            *(undefined8 *)(lVar11 + 0x30) = 0x144;
            *(undefined1 *)(lVar11 + 9) = 1;
            FUN_00444c00(&local_a8);
          }
          if (local_e4 == 0) {
            bVar3 = false;
          }
          else {
            puVar26 = (uint *)(lVar8 + (long)local_ec * 4);
            lVar11 = (ulong)local_e4 << 2;
            do {
              if ((ulong)(lVar20 - lVar19) <= (ulong)*puVar26) {
                local_e8 = 0x80040200;
                if (DAT_04c70f78 == 0) goto LAB_0048a564;
                bVar3 = true;
                FUN_00444bc0(&local_a8,&DAT_04c70f28,1);
                local_78 = 0x14e;
                local_80 = "../..\\Common/Base/Serialize/Format/Tagfile/Detail/hkTagfileDetail.h";
                uVar7 = FUN_004446b0(&local_a8,"HK_RETURN_LOG returning {}. ",PTR_DAT_04bd5de8,
                                     &local_e8);
                FUN_004446b0(uVar7,"Corrupt patch index body at index {}: invalid offset {}",
                             PTR_DAT_04bd5e68,&local_ec,puVar26);
                FUN_00444c00(&local_a8);
                goto joined_r0x0048c6f0;
              }
              uVar10 = (ulong)(int)*puVar26;
              puVar1 = (undefined4 *)(lVar19 + uVar10);
              if (3 < DAT_04c70f78) {
                FUN_00444bc0(&local_a8,&DAT_04c70f28,4);
                lVar13 = FUN_004446b0(&local_a8,"srcOff={}",PTR_DAT_04bd5ca0,puVar26);
                *(char **)(lVar13 + 0x28) =
                     "../..\\Common/Base/Serialize/Format/Tagfile/Detail/hkTagfileDetail.h";
                *(undefined8 *)(lVar13 + 0x30) = 0x151;
                FUN_00444c00(&local_a8);
              }
              uVar21 = local_100;
              lVar13 = (long)(int)local_e0;
              local_b8 = local_100;
              local_c0[0] = local_e0;
              *puVar1 = 0;
              if (local_e0 != 0) {
                lVar30 = *(long *)(param_1 + 0x14);
                puVar29 = (uint *)(lVar30 + lVar13 * 0xc);
                auVar33 = FUN_00490910(param_1 + 2,puVar29);
                _local_d0 = auVar33;
                if ((uVar4 & 0x1f) == 3) {
                  local_b0[0] = 0x80040200;
                  if (auVar33._8_8_ == PTR_DAT_04bd4f98) goto LAB_0048c450;
                  if (DAT_04c70f78 == 0) goto LAB_0048c57c;
                  FUN_00444bc0(&local_a8,&DAT_04c70f28,1);
                  local_78 = 0xa38;
                  local_80 = 
                  "E:/Havok/Build/.tmp/d20190725-23496-zzy48q/105_hk2019_1_0_Park/Source/Common/Base/Serialize/Format/Tagfile/hkTagfileReadFormat.cpp"
                  ;
                  uVar7 = FUN_004446b0(&local_a8,"HK_RETURN_RES_IF({}) returning {}. ",
                                       PTR_DAT_04bd5460,
                                       "addrAndType.m_type != hkReflect::getType<char>()",local_b0);
                  FUN_004446b0(uVar7,"Found string whose item type is \'{}\' instead of \'char\'",
                               PTR_DAT_04bd4df8,&puStack_c8);
LAB_0048c574:
                  FUN_00444c00(&local_a8);
                  goto LAB_0048c57c;
                }
                if (((uVar4 & 0x1f) == 6) &&
                   (local_b0[0] = 0x80040200, (*puVar29 | 0x10000000) >> 0x1c == 3)) {
                  if (DAT_04c70f78 != 0) {
                    FUN_00444bc0(&local_a8,&DAT_04c70f28,1);
                    local_78 = 0xa33;
                    local_80 = 
                    "E:/Havok/Build/.tmp/d20190725-23496-zzy48q/105_hk2019_1_0_Park/Source/Common/Base/Serialize/Format/Tagfile/hkTagfileReadFormat.cpp"
                    ;
                    uVar7 = FUN_004446b0(&local_a8,"HK_RETURN_RES_IF({}) returning {}. ",
                                         PTR_DAT_04bd5e10,
                                         "targetItem.isKindVarN() || targetItem.isKindNote()",
                                         local_b0);
                    FUN_004446b0(uVar7,"Found invalid fixup for pointer",PTR_DAT_04bd4920);
                    goto LAB_0048c574;
                  }
                  goto LAB_0048c57c;
                }
LAB_0048c450:
                if ((*puVar29 & 0xf0000000) != 0x50000000) {
LAB_0048c4a4:
                  local_b0[0] = 0x80040200;
                  iVar6 = (**(code **)(*plVar12 + 0x10))
                                    (plVar12,puVar1,uVar21,local_d0,puStack_c8,
                                     *(undefined4 *)(lVar30 + lVar13 * 0xc + 8));
                  if (-1 < iVar6) goto LAB_0048c4dc;
                  if ((-1 < (int)local_b0[0]) || (DAT_04c70f78 == 0)) goto LAB_0048c57c;
                  FUN_00444bc0(&local_a8,&DAT_04c70f28,1);
                  local_78 = 0xa46;
                  local_80 = 
                  "E:/Havok/Build/.tmp/d20190725-23496-zzy48q/105_hk2019_1_0_Park/Source/Common/Base/Serialize/Format/Tagfile/hkTagfileReadFormat.cpp"
                  ;
                  uVar7 = FUN_004446b0(&local_a8,"HK_RETURN_RES_IF({}) returning {}. ",
                                       PTR_DAT_04bd5df0,
                                       "srcImpl->inplaceFixup(srcAddr, srcType, addrAndType.m_addr, addrAndType.m_type, targetItem.count).isFailure()"
                                       ,local_b0);
                  local_d8 = uVar10;
                  FUN_004446b0(uVar7,
                               "Failed to apply fixup of type \'{}\'; at data offset {} pointing to item {}"
                               ,PTR_DAT_04bd5e38,&local_b8,&local_d8,local_c0);
                  goto LAB_0048c574;
                }
                FUN_00429540(&local_d8,auVar33._0_8_);
                local_b0[0] = 0x80040200;
                if ((local_d8 < 2) || (*(char *)(lVar25 + ((ulong)*puVar29 & 0xffffff)) != '\0')) {
                  uVar21 = local_b8;
                  goto LAB_0048c4a4;
                }
                if (DAT_04c70f78 != 0) {
                  FUN_00444bc0(&local_a8,&DAT_04c70f28,1);
                  local_78 = 0xa41;
                  local_80 = 
                  "E:/Havok/Build/.tmp/d20190725-23496-zzy48q/105_hk2019_1_0_Park/Source/Common/Base/Serialize/Format/Tagfile/hkTagfileReadFormat.cpp"
                  ;
                  uVar7 = FUN_004446b0(&local_a8,"HK_RETURN_RES_IF({}) returning {}. ",
                                       PTR_DAT_04bd5e10,
                                       "decl && !m_propHashVerified[targetItem.getIndex()]",local_b0
                                      );
                  local_dc = *puVar29 & 0xffffff;
                  FUN_004446b0(uVar7,
                               "Found pointer to decl in type ${} ({}) but no property hash has been loaded for the type"
                               ,PTR_DAT_04bd5e70,&local_dc,lVar9 + ((ulong)*puVar29 & 0xffffff) * 8)
                  ;
                  FUN_00444c00(&local_a8);
                }
                if (-1 < (int)local_b0[0]) goto LAB_0048c588;
LAB_0048c64c:
                bVar3 = true;
                local_e8 = local_b0[0];
                goto joined_r0x0048c6f0;
              }
              local_b0[0] = 0x80040200;
              iVar6 = (**(code **)(*plVar12 + 0x10))(plVar12,puVar1,local_100,0,0,0);
              if (iVar6 < 0) {
                if (DAT_04c70f78 != 0) {
                  FUN_00444bc0(&local_a8,&DAT_04c70f28,1);
                  local_78 = 0xa4b;
                  local_80 = 
                  "E:/Havok/Build/.tmp/d20190725-23496-zzy48q/105_hk2019_1_0_Park/Source/Common/Base/Serialize/Format/Tagfile/hkTagfileReadFormat.cpp"
                  ;
                  uVar7 = FUN_004446b0(&local_a8,"HK_RETURN_RES_IF({}) returning {}. ",
                                       PTR_DAT_04bd5e20,
                                       "srcImpl->inplaceFixup(srcAddr, srcType, nullptr, nullptr, 0).isFailure()"
                                       ,local_b0);
                  local_d0 = (undefined1  [8])uVar10;
                  FUN_004446b0(uVar7,"Failed to apply null fixup of type \'{}\' at data offset {}",
                               PTR_DAT_04bd4e08,&local_b8,local_d0);
                  goto LAB_0048c574;
                }
LAB_0048c57c:
                if ((int)local_b0[0] < 0) goto LAB_0048c64c;
              }
              else {
LAB_0048c4dc:
                local_b0[0] = 0;
              }
LAB_0048c588:
              local_ec = local_ec + 1;
              puVar26 = puVar26 + 1;
              lVar11 = lVar11 + -4;
              local_e8 = local_b0[0];
            } while (lVar11 != 0);
            bVar3 = false;
          }
joined_r0x0048c6f0:
          if (3 < DAT_04c70f78) {
            FUN_00444bc0(&local_a8,&DAT_04c70f28,4);
            local_a0._0_2_ = CONCAT11(0xff,(undefined1)local_a0);
            FUN_00444c00(&local_a8);
          }
          if (bVar3) goto LAB_0048c928;
          iVar5 = iVar5 + 1;
        } while (iVar5 < local_f8);
      }
      bVar3 = false;
joined_r0x0048c938:
      if (3 < DAT_04c70f78) {
        FUN_00444bc0(&local_a8,&DAT_04c70f28,4);
        local_a0._0_2_ = CONCAT11(0xff,(undefined1)local_a0);
        FUN_00444c00(&local_a8);
      }
      auVar33 = _local_d0;
      if (bVar3) goto LAB_0048a564;
    } while( true );
  }
  local_e8 = 0x80040200;
  if (DAT_04c70f78 != 0) {
    FUN_00444bc0(&local_a8,&DAT_04c70f28,1);
    local_80 = "../..\\Common/Base/Serialize/Format/Tagfile/Detail/hkTagfileDetail.h";
    local_78 = 0xeb;
    uVar7 = FUN_004446b0(&local_a8,"HK_RETURN_LOG returning {}. ",PTR_DAT_04bd5de8,&local_e8);
    local_108[0] = 0x20f2cca4;
    FUN_004446b0(uVar7,"PATCH_DATA section has the wrong size",PTR_DAT_04bd5e28,local_108);
LAB_0048a55c:
    FUN_00444c00(&local_a8);
  }
LAB_0048a564:
  if ((int)local_e8 < 0) {
    if (DAT_04c70f78 != 0) {
      FUN_00444bc0(&local_a8,&DAT_04c70f28,1);
      lVar8 = FUN_004446b0(&local_a8,"Failed to read the PATCH_DATA section",PTR_DAT_04bd4920);
      *(char **)(lVar8 + 0x28) =
           "E:/Havok/Build/.tmp/d20190725-23496-zzy48q/105_hk2019_1_0_Park/Source/Common/Base/Serialize/Format/Tagfile/hkTagfileReadFormat.cpp"
      ;
      *(undefined8 *)(lVar8 + 0x30) = 0xa50;
      FUN_00444c00(&local_a8);
    }
    *param_1 = 0x80040200;
    return;
  }
LAB_0048a56c:
  FUN_0044e560(local_108);
  local_a8 = 0;
  local_a0 = -0x8000000000000000;
  iVar22 = param_1[6];
  if (iVar22 < 1) {
    local_a0._0_4_ = 0;
  }
  else {
    local_a8 = FUN_00426720(*(undefined8 *)PTR_PTR_04bd4d20,iVar22,8,0,0,(long)&local_a0 + 4);
    uVar24 = (uint)local_a0;
    if (iVar22 - (uint)local_a0 != 0 && (int)(uint)local_a0 <= iVar22) {
      uVar27 = ~(uint)local_a0;
      puVar18 = (undefined8 *)(local_a8 + (long)(int)(uint)local_a0 * 8);
      uVar4 = iVar22 - (uint)local_a0 & 3;
      local_a0 = CONCAT44(local_a0._4_4_,iVar22);
      if (2 < iVar22 + uVar27) {
        iVar22 = (uVar24 + uVar4) - iVar22;
        puVar17 = puVar18;
        do {
          puVar18 = puVar17 + 4;
          *puVar17 = 0xfffffffe;
          puVar17[1] = 0xfffffffe;
          iVar22 = iVar22 + 4;
          puVar17[2] = 0xfffffffe;
          puVar17[3] = 0xfffffffe;
          puVar17 = puVar18;
        } while (iVar22 != 0);
      }
      if (uVar4 != 0) {
        iVar22 = -uVar4;
        do {
          iVar22 = iVar22 + 1;
          *puVar18 = 0xfffffffe;
          puVar18 = puVar18 + 1;
        } while (iVar22 != 0);
      }
      goto LAB_0048b530;
    }
  }
  if (iVar22 < (int)(uint)local_a0) {
    local_a0 = CONCAT44(local_a0._4_4_,iVar22);
  }
LAB_0048b530:
  lVar8 = *(long *)(param_1 + 0x14);
  if (1 < (int)((ulong)(*(long *)(param_1 + 0x16) - lVar8) >> 2) * -0x55555555) {
    lVar20 = 0;
    lVar19 = 1;
    do {
      lVar8 = lVar8 + lVar20;
      uVar24 = *(uint *)(lVar8 + 0xc) & 0xf0000000;
      if ((uVar24 == 0x10000000 || uVar24 == 0x30000000) || uVar24 == 0x20000000) {
        uVar10 = (ulong)*(uint *)(lVar8 + 0xc) & 0xffffff;
        puVar16 = (ulong *)(local_a8 + uVar10 * 8);
        uVar31 = (ulong)(uint)*puVar16;
        if ((int)(uint)*puVar16 < -1) {
          uVar31 = FUN_0044e820(local_108,*(undefined8 *)(*(long *)(param_1 + 4) + uVar10 * 8));
          *puVar16 = uVar31;
        }
        if (-1 < (int)uVar31) {
          FUN_0044e890(local_108,puVar16,*(long *)(param_1 + 0x10) + (long)*(int *)(lVar8 + 0x10),
                       *(undefined8 *)(*(long *)(param_1 + 4) + uVar10 * 8),
                       *(undefined4 *)(lVar8 + 0x14));
        }
      }
      lVar8 = *(long *)(param_1 + 0x14);
      lVar19 = lVar19 + 1;
      lVar20 = lVar20 + 0xc;
    } while (lVar19 < (int)((ulong)(*(long *)(param_1 + 0x16) - lVar8) >> 2) * -0x55555555);
  }
  lVar8 = local_a0;
  uVar24 = local_a0._4_4_;
  local_a0 = (ulong)local_a0._4_4_ << 0x20;
  if ((-1 < lVar8) && (local_a8 != 0)) {
    FUN_00421f90(*(undefined8 *)PTR_PTR_04bd4d20,local_a8,8,uVar24 & 0x3fffffff);
  }
  FUN_0044ebe0(local_108);
  return;
LAB_0048aa88:
  local_c0[0] = 0x80040200;
  if (DAT_04c70f78 == 0) goto joined_r0x0048bdf4;
  bVar3 = true;
  FUN_00444bc0(&local_a8,&DAT_04c70f28,1);
  local_80 = "../..\\Common/Base/Serialize/Format/Tagfile/Detail/hkTagfileDetail.h";
  local_78 = 0x113;
  uVar7 = FUN_004446b0(&local_a8,"HK_RETURN_LOG returning {}. ",puVar2,local_c0);
  FUN_004446b0(uVar7,"Corrupt patch index body at index {}: invalid offset {}",PTR_DAT_04bd5e68,
               &local_dc,puVar26);
  FUN_00444c00(&local_a8);
joined_r0x0048a984:
  if (3 < DAT_04c70f78) {
    FUN_00444bc0(&local_a8,&DAT_04c70f28,4);
    local_a0._0_2_ = CONCAT11(0xff,(undefined1)local_a0);
    FUN_00444c00(&local_a8);
  }
  if (bVar3) goto joined_r0x0048bdf4;
  uVar4 = local_dc + 2;
  if ((int)uVar24 <= (int)uVar4) goto LAB_0048b69c;
  goto LAB_0048a6a8;
LAB_0048bb0c:
  local_c0[0] = 0x80040200;
  if (DAT_04c70f78 == 0) goto joined_r0x0048bdf4;
  bVar3 = true;
  FUN_00444bc0(&local_a8,&DAT_04c70f28,1);
  local_80 = "../..\\Common/Base/Serialize/Format/Tagfile/Detail/hkTagfileDetail.h";
  local_78 = 0x14e;
  uVar7 = FUN_004446b0(&local_a8,"HK_RETURN_LOG returning {}. ",PTR_DAT_04bd5de8,local_c0);
  FUN_004446b0(uVar7,"Corrupt patch index body at index {}: invalid offset {}",PTR_DAT_04bd5e68,
               &local_dc,puVar26);
  FUN_00444c00(&local_a8);
joined_r0x0048ba78:
  if (3 < DAT_04c70f78) {
    FUN_00444bc0(&local_a8,&DAT_04c70f28,4);
    local_a0._0_2_ = CONCAT11(0xff,(undefined1)local_a0);
    FUN_00444c00(&local_a8);
  }
  if (bVar3) {
LAB_0048bd24:
    bVar3 = true;
    goto joined_r0x0048bd30;
  }
  iVar6 = iVar6 + 1;
  if (local_f8 <= iVar6) goto LAB_0048bbb8;
  goto LAB_0048b920;
}

