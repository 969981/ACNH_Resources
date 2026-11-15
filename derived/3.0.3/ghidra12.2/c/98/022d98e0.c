
/* WARNING: Removing unreachable block (ram,0x022d9f38) */
/* WARNING: Removing unreachable block (ram,0x022d9d78) */

void FUN_022d98e0(long param_1)

{
  undefined *puVar1;
  long *plVar2;
  undefined *puVar3;
  undefined *puVar4;
  undefined8 *puVar5;
  int *piVar6;
  undefined4 *puVar7;
  undefined **ppuVar8;
  undefined *puVar9;
  short *psVar10;
  short *psVar11;
  uint uVar12;
  undefined8 uVar13;
  short sVar14;
  undefined *puVar15;
  bool bVar16;
  bool bVar17;
  uint uVar18;
  int iVar19;
  undefined4 uVar20;
  undefined4 uVar21;
  int iVar22;
  uint uVar23;
  ulong uVar24;
  short sVar25;
  uint uVar26;
  long *plVar27;
  uint *puVar28;
  ushort uVar29;
  uint *puVar30;
  undefined8 *puVar31;
  undefined8 *puVar32;
  short sVar33;
  ulong uVar34;
  long lVar35;
  long lVar36;
  int iVar37;
  short *psVar38;
  ulong uVar39;
  int iVar40;
  short *psVar41;
  undefined *puVar42;
  undefined1 auStack_250 [2];
  undefined1 auStack_24e [2];
  undefined2 local_24c [2];
  undefined8 local_248;
  undefined4 local_240;
  undefined4 uStack_23c;
  undefined8 local_238;
  undefined2 local_22c [2];
  undefined4 local_228;
  undefined4 uStack_224;
  undefined8 local_220;
  undefined8 local_218;
  undefined *local_210;
  uint local_208;
  int local_204;
  undefined8 local_200;
  undefined8 local_1f8;
  undefined8 local_1f0;
  undefined *puStack_1e8;
  undefined8 local_1e0;
  undefined *local_1d8;
  int local_1d0;
  int iStack_1cc;
  long local_1c8;
  int local_1c0;
  int iStack_1bc;
  undefined *local_1b8;
  int local_1b0;
  int iStack_1ac;
  undefined *local_1a8;
  uint local_1a0;
  undefined4 local_19c;
  byte local_198;
  undefined *local_190;
  undefined8 local_188;
  undefined8 local_180;
  undefined *local_178 [2];
  undefined8 local_168;
  ulong local_160;
  undefined1 auStack_158 [8];
  undefined *local_150;
  undefined8 local_148;
  ulong local_140;
  undefined1 auStack_138 [8];
  undefined *local_130;
  undefined8 local_128;
  ulong local_120;
  undefined1 auStack_118 [8];
  undefined *local_110;
  undefined8 local_108;
  undefined8 local_100;
  undefined2 local_f8 [6];
  uint local_ec;
  undefined8 local_e8;
  short local_e0;
  short local_de;
  undefined4 uStack_dc;
  undefined4 local_d8;
  undefined4 uStack_d4;
  undefined1 auStack_d0 [8];
  undefined8 local_c8;
  undefined8 local_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined8 local_98;
  undefined8 uStack_90;
  ulong local_88;
  undefined4 local_80;
  uint local_7c;
  int iStack_78;
  undefined4 local_74;
  uint local_70;
  undefined4 local_6c;
  
  puVar4 = PTR_DAT_04bbbf90;
  puVar3 = PTR_DAT_04bb3170;
  puVar42 = PTR_DAT_04bb2010;
  puVar32 = *(undefined8 **)(param_1 + 0x28);
  local_88 = puVar32[0xc];
  local_98 = puVar32[10];
  uStack_90 = puVar32[0xb];
  local_80 = *(undefined4 *)(puVar32 + 0xd);
  local_b8 = puVar32[6];
  uStack_b0 = puVar32[7];
  local_a8 = puVar32[8];
  uStack_a0 = puVar32[9];
  auStack_d0 = (undefined1  [8])puVar32[3];
  local_d8 = (undefined4)puVar32[2];
  uStack_d4 = (undefined4)((ulong)puVar32[2] >> 0x20);
  local_c8 = puVar32[4];
  local_c0 = puVar32[5];
  local_e8 = *puVar32;
  uVar13 = puVar32[1];
  sVar25 = *(short *)(param_1 + 0x20);
  local_e0 = (short)uVar13;
  local_de = (short)((ulong)uVar13 >> 0x10);
  uStack_dc = (undefined4)((ulong)uVar13 >> 0x20);
  puVar31 = DAT_055c1b60 + -8;
  bVar16 = DAT_055c1b60 == &DAT_055c1b58;
  puVar32 = puVar31;
  bVar17 = bVar16;
  if (!bVar16 && sVar25 != 0) {
    puVar32 = DAT_055c1b60;
    sVar33 = sVar25;
    do {
      puVar32 = (undefined8 *)puVar32[1];
      sVar33 = sVar33 + -1;
      bVar17 = puVar32 == &DAT_055c1b58;
    } while (!bVar17 && sVar33 != 0);
    puVar32 = puVar32 + -8;
  }
  puVar5 = &DAT_055c04a0;
  if (!bVar17) {
    puVar5 = puVar32;
  }
  uVar34 = 0;
  do {
    uVar18 = (uint)uVar34;
    piVar6 = (int *)((long)(PTR_DAT_04bbbf90 + 8) + uVar34 * 4);
    if (0x38 < uVar18) {
      piVar6 = (int *)(PTR_DAT_04bbbf90 + 8);
    }
    if (*piVar6 == *(int *)(puVar5 + 7)) goto LAB_022d99fc;
    uVar26 = 0x39;
    if ((int)uVar18 < 0x39) {
      uVar26 = uVar18 + 1;
    }
    uVar34 = (ulong)uVar26;
  } while (uVar26 != 0x39);
  uVar18 = 0;
LAB_022d99fc:
  local_190 = (undefined *)CONCAT44(local_190._4_4_,uVar18);
  if ((uVar18 == 0) && (*(short *)PTR_DAT_04bb6298 != sVar25)) {
    return;
  }
  puVar32 = DAT_055c1b60;
  if (!bVar16 && sVar25 != 0) {
    do {
      puVar32 = (undefined8 *)puVar32[1];
      sVar25 = sVar25 + -1;
      bVar16 = puVar32 == &DAT_055c1b58;
    } while (!bVar16 && sVar25 != 0);
    puVar31 = puVar32 + -8;
  }
  uVar34 = 0;
  puVar32 = &DAT_055c04a0;
  if (!bVar16) {
    puVar32 = puVar31;
  }
  do {
    local_ec = (uint)uVar34;
    piVar6 = (int *)((long)(PTR_DAT_04bbbf90 + 8) + uVar34 * 4);
    if (0x38 < local_ec) {
      piVar6 = (int *)(PTR_DAT_04bbbf90 + 8);
    }
    if (*piVar6 == *(int *)(puVar32 + 7)) goto LAB_022d9a80;
    uVar18 = 0x39;
    if ((int)local_ec < 0x39) {
      uVar18 = local_ec + 1;
    }
    uVar34 = (ulong)uVar18;
  } while (uVar18 != 0x39);
  local_ec = 0;
LAB_022d9a80:
  local_100 = 0;
  puVar1 = PTR_DAT_04bb2010 + 0x10;
  local_108 = 0;
  local_110 = puVar1;
  FUN_007ef010(local_f8,PTR_DAT_04bb3170);
  local_180 = (undefined *)0x0;
  local_188 = 0;
  local_190 = puVar1;
  FUN_007ef010(local_178,puVar3);
  local_160 = 0;
  local_168 = 0;
  local_178[1] = puVar1;
  FUN_007ef010(auStack_158,puVar3);
  local_140 = 0;
  local_148 = 0;
  local_150 = puVar1;
  FUN_007ef010(auStack_138,puVar3);
  local_120 = 0;
  local_128 = 0;
  local_130 = puVar1;
  FUN_007ef010(auStack_118,puVar3);
  local_1a0 = local_ec;
  puVar7 = (undefined4 *)((long)(puVar4 + 8) + (ulong)local_ec * 4);
  if (0x38 < local_ec) {
    puVar7 = (undefined4 *)(puVar4 + 8);
  }
  local_19c = *puVar7;
  local_198 = FUN_017baf44();
  local_198 = local_198 & 1;
  sVar25 = local_e8._4_2_;
  sVar33 = local_e8._6_2_;
  local_1a8 = PTR_DAT_04bb5438 + 0x10;
  local_1b0 = (int)local_e8._4_2_;
  iStack_1ac = (int)local_e8._6_2_;
  local_1b8 = puVar1;
  FUN_01a5033c(&local_1c0,&local_1a8,0,&local_1b8,0);
  puVar3 = PTR_DAT_04bb43c0;
  lVar36 = *(long *)PTR_DAT_04bb43c0;
  uVar18 = FUN_0277d6c4(&local_1c0);
  puVar4 = PTR_DAT_04bc0510;
  lVar35 = *(long *)puVar3;
  if (lVar35 != 0) {
    lVar36 = *(long *)(lVar36 + 0x57e58);
    uVar18 = (uVar18 & 0xffff) - (uint)*(ushort *)(lVar36 + 0x1f8);
    if ((uVar18 < *(uint *)(lVar36 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar36 + 0x1e0) + (long)(int)uVar18 * 8) != 0)) {
      local_1c8 = 0;
      local_1d0 = local_1c0;
      iStack_1cc = iStack_1bc;
      local_1d8 = PTR_DAT_04bc0510 + 0x10;
      uVar18 = FUN_0277d6c4(&local_1d0);
      if (*(long *)PTR_DAT_04bb43c0 != 0) {
        lVar35 = *(long *)(lVar35 + 0x57e58);
        uVar18 = (uVar18 & 0xffff) - (uint)*(ushort *)(lVar35 + 0x1f8);
        if ((uVar18 < *(uint *)(lVar35 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar35 + 0x1e0) + (long)(int)uVar18 * 8) != 0)) {
          lVar35 = *(long *)PTR_DAT_04bc0428;
          uVar18 = FUN_0277d6c4(&local_1c0);
          uVar18 = (uVar18 & 0xffff) - (uint)*(ushort *)(lVar35 + 0x1f8);
          if (uVar18 < *(uint *)(lVar35 + 0x1d8)) {
            lVar35 = *(long *)(*(long *)(lVar35 + 0x1e0) + (long)(int)uVar18 * 8);
            if (lVar35 != 0) {
              local_1c8 = lVar35;
            }
          }
        }
      }
      local_1e0 = 0;
      puVar42 = puVar42 + 0x10;
      local_1f0 = 0;
      local_200 = PTR_DAT_04bbc1a0 + 0x10;
      local_1f8 = puVar42;
      puStack_1e8 = puVar42;
      FUN_01afb480(&local_1d8,&local_200);
      puVar15 = PTR_DAT_04bc0048;
      puVar1 = PTR_DAT_04bc0018;
      puVar3 = PTR_DAT_04bb27a8;
      uVar18 = (int)local_1f0 + local_1b0;
      local_204 = local_1f0._4_4_ + iStack_1ac;
      local_1e0._4_4_ = local_1e0._4_4_ + iStack_1ac;
      local_1f0 = CONCAT44(local_204,uVar18);
      local_1e0 = CONCAT44(local_1e0._4_4_,(int)local_1e0 + local_1b0);
      iVar40 = local_1e0._4_4_ + 1;
      local_220 = &local_1f8;
      local_218 = &puStack_1e8;
      local_210 = puVar42;
      local_208 = uVar18;
      if (iVar40 != local_204) {
        uVar26 = 0;
        psVar38 = (short *)PTR_DAT_04bb6298;
        do {
          FUN_01a50240(&local_228,&local_1a8,1,&local_210);
          uVar34 = FUN_0277da10(&local_228);
          if ((uVar34 & 1) != 0) {
            uVar34 = FUN_01a4f798(&local_1a8,1,&local_210);
            if ((uVar34 & 1) != 0) {
              if (local_1a0 == 0) {
                local_248 = (undefined *)((ulong)local_248._4_4_ << 0x20);
LAB_022d9f14:
                plVar27 = (long *)(*(long *)puVar3 + 0x1f8);
LAB_022d9f18:
                lVar35 = *plVar27;
              }
              else {
                local_7c = local_1a0;
                if (local_1a0 != 0) {
                  local_248 = (undefined *)CONCAT44(local_248._4_4_,local_1a0);
                  if (local_1a0 == 0) goto LAB_022d9f14;
                  plVar2 = (long *)(*(long *)puVar3 + 0x30);
                  plVar27 = plVar2 + local_1a0;
                  if (0x38 < local_1a0) {
                    plVar27 = plVar2;
                  }
                  goto LAB_022d9f18;
                }
                lVar35 = 0;
              }
              local_248 = (undefined *)CONCAT44(local_248._4_4_,1);
              if (*(long *)(lVar35 + 0xe0) != 0) {
                FUN_012e5af4(*(long *)(lVar35 + 0xe0),&local_210);
              }
            }
            uVar34 = FUN_014fd6bc(&local_1a8,1);
            if ((uVar34 & 1) != 0) {
              FUN_014fd424(&local_1a8,0,&local_210,1);
            }
            if (((local_ec != 0x32) && (local_ec != 1)) && ((int)uVar26 < 4)) {
              uVar34 = FUN_014fe6fc(&local_1a8,1);
              if ((uVar34 & 1) != 0) {
                iVar22 = FUN_014fe934(&local_1a8,&local_210,1);
                local_248 = (undefined *)CONCAT44(local_248._4_4_,iVar22);
                if (iVar22 != 0) {
                  uVar20 = FUN_014fe934(&local_1a8,&local_210,1);
                  uVar21 = FUN_014ff2b4(&local_1a8,&local_210,1);
                  uVar34 = FUN_014feae8(&local_1a8,&local_210,1);
                  if ((uVar34 & 1) == 0) {
                    FUN_007ef010(local_22c,PTR_DAT_04bb3170);
                  }
                  else {
                    FUN_014fec20(local_22c,&local_1a8,&local_210,1);
                  }
                  uVar34 = (ulong)uVar26;
                  bVar17 = 3 < uVar26;
                  ppuVar8 = &local_190 + uVar34 * 4;
                  if (bVar17) {
                    ppuVar8 = &local_190;
                  }
                  *(uint *)(ppuVar8 + 1) = local_208;
                  *(int *)((long)ppuVar8 + 0xc) = local_204;
                  ppuVar8 = local_178 + uVar34 * 4 + -1;
                  if (bVar17) {
                    ppuVar8 = (undefined **)&local_180;
                  }
                  *(undefined4 *)ppuVar8 = uVar20;
                  ppuVar8 = local_178 + uVar34 * 4;
                  puVar7 = (undefined4 *)((long)local_178 + (uVar34 * 0x10 + -2) * 2);
                  if (bVar17) {
                    ppuVar8 = local_178;
                    puVar7 = (undefined4 *)((long)&local_180 + 4);
                  }
                  *puVar7 = uVar21;
                  *(undefined2 *)ppuVar8 = local_22c[0];
                  FUN_014ff084(&local_1a8,&local_210,1);
                  FUN_014ff6a8(&local_1a8,&local_210,1);
                  uVar26 = uVar26 + 1;
                  psVar38 = (short *)PTR_DAT_04bb6298;
                }
              }
            }
            puVar42 = PTR_DAT_04bb43c0;
            sVar14 = *psVar38;
            if (sVar14 != -1) {
              local_248 = (undefined *)CONCAT44(local_248._4_4_,0x20);
              puVar9 = PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar14 * 8;
              if (0xff < (uint)(int)sVar14) {
                puVar9 = PTR_DAT_04bc39f8;
              }
              if (((*(uint *)(puVar9 + 4) & 1) != 0) && (local_ec == 0x32)) {
                local_238 = 0;
                local_240 = local_228;
                uStack_23c = uStack_224;
                lVar35 = *(long *)PTR_DAT_04bb43c0;
                local_248 = puVar4 + 0x10;
                uVar23 = FUN_0277d6c4(&local_240);
                if (*(long *)puVar42 != 0) {
                  lVar35 = *(long *)(lVar35 + 0x57e58);
                  uVar23 = (uVar23 & 0xffff) - (uint)*(ushort *)(lVar35 + 0x1f8);
                  if ((uVar23 < *(uint *)(lVar35 + 0x1d8)) &&
                     (*(long *)(*(long *)(lVar35 + 0x1e0) + (long)(int)uVar23 * 8) != 0)) {
                    lVar35 = *(long *)PTR_DAT_04bc0428;
                    uVar23 = FUN_0277d6c4(&local_228);
                    uVar23 = (uVar23 & 0xffff) - (uint)*(ushort *)(lVar35 + 0x1f8);
                    if ((uVar23 < *(uint *)(lVar35 + 0x1d8)) &&
                       (puVar28 = *(uint **)(*(long *)(lVar35 + 0x1e0) + (long)(int)uVar23 * 8),
                       puVar28 != (uint *)0x0)) {
                      uVar23 = *puVar28;
                      local_7c = 0;
                      if ((uVar23 != 0) && (puVar28 != (uint *)(ulong)uVar23)) {
                        puVar30 = (uint *)((long)puVar28 - (long)(ulong)uVar23);
                        local_7c = 0;
                        if (*puVar30 != 0) {
                          uVar23 = puVar30[1];
                          if ((uVar23 != 0) && ((ulong)(ushort)puVar30[2] != 0)) {
                            lVar35 = 0xc;
                            if (*(char *)((long)puVar30 + 10) != '\0') {
                              lVar35 = 0x1c;
                            }
                            lVar35 = (long)puVar30 + lVar35 + (ulong)(ushort)puVar30[2] * 8;
                            if (lVar35 != 0) {
                              uVar12 = 0;
                              if ((ulong)uVar23 != 0) {
                                uVar12 = (uint)((ulong)((long)puVar28 - lVar35) / (ulong)uVar23);
                              }
                              if (*puVar30 <= uVar12) {
                                uVar12 = 0xffffffff;
                              }
                              if ((uVar12 < *(uint *)puVar15) &&
                                 (local_7c = (uint)*(ushort *)
                                                    (*(long *)(puVar15 + 8) + (long)(int)uVar12 * 2)
                                 , local_7c < 0x52)) goto LAB_022da314;
                            }
                          }
                          local_7c = 0;
                        }
                      }
LAB_022da314:
                      if ((local_7c & 0xfffffffe) != 0x12) goto LAB_022da2b8;
                      uVar23 = *puVar28;
                      local_70 = 0;
                      if ((uVar23 != 0) && (puVar28 != (uint *)(ulong)uVar23)) {
                        puVar30 = (uint *)((long)puVar28 - (long)(ulong)uVar23);
                        local_70 = 0;
                        if (*puVar30 != 0) {
                          uVar23 = puVar30[1];
                          if ((uVar23 != 0) && ((ulong)(ushort)puVar30[2] != 0)) {
                            lVar35 = 0xc;
                            if (*(char *)((long)puVar30 + 10) != '\0') {
                              lVar35 = 0x1c;
                            }
                            lVar35 = (long)puVar30 + lVar35 + (ulong)(ushort)puVar30[2] * 8;
                            if (lVar35 != 0) {
                              uVar12 = 0;
                              if ((ulong)uVar23 != 0) {
                                uVar12 = (uint)((ulong)((long)puVar28 - lVar35) / (ulong)uVar23);
                              }
                              if (*puVar30 <= uVar12) {
                                uVar12 = 0xffffffff;
                              }
                              if ((uVar12 < *(uint *)puVar1) &&
                                 (local_70 = (uint)*(ushort *)
                                                    (*(long *)(puVar1 + 8) + (long)(int)uVar12 * 2),
                                 local_70 < 6)) goto LAB_022da26c;
                            }
                          }
                          local_70 = 0;
                        }
                      }
LAB_022da26c:
                      local_6c = 1;
                      local_7c = local_208;
                      iStack_78 = local_204;
                      local_74 = 1;
                      uVar13 = 4;
                      if (local_70 != 5) {
                        uVar13 = 2;
                      }
                      lVar35 = FUN_0299a520(*(long *)PTR_DAT_04bb26a8 + 0x7c8,&local_7c,uVar13);
                      if (lVar35 != 0) {
                        *(undefined1 *)(lVar35 + 9) = 1;
                      }
                      goto LAB_022da2b8;
                    }
                  }
                }
                local_7c = 0;
              }
            }
          }
LAB_022da2b8:
          if ((int)local_208 < *(int *)(local_218 + 1)) {
            local_208 = local_208 + 1;
          }
          else {
            local_208 = *(uint *)(local_220 + 1);
            local_204 = local_204 + 1;
          }
        } while ((uVar18 != local_208) || (iVar40 != local_204));
      }
      puVar42 = PTR_DAT_04bb2010;
    }
  }
  iVar40 = (int)sVar25;
  iVar22 = (int)sVar33;
  uVar34 = FUN_01a4f798(&local_1a8,0,&local_1b8);
  if ((uVar34 & 1) != 0) {
    if (local_1a0 == 0) {
      local_200 = (undefined *)((ulong)local_200._4_4_ << 0x20);
LAB_022d9d54:
      plVar27 = (long *)(*(long *)PTR_DAT_04bb27a8 + 0x1f8);
LAB_022d9d58:
      lVar35 = *plVar27;
    }
    else {
      local_220 = (undefined8 *)CONCAT44(local_220._4_4_,local_1a0);
      if (local_1a0 != 0) {
        local_200 = (undefined *)CONCAT44(local_200._4_4_,local_1a0);
        if (local_1a0 == 0) goto LAB_022d9d54;
        plVar2 = (long *)(*(long *)PTR_DAT_04bb27a8 + 0x30);
        plVar27 = plVar2 + local_1a0;
        if (0x38 < local_1a0) {
          plVar27 = plVar2;
        }
        goto LAB_022d9d58;
      }
      lVar35 = 0;
    }
    local_200 = (undefined *)((ulong)local_200 & 0xffffffff00000000);
    if (*(long *)(lVar35 + 0xd0) != 0) {
      FUN_012e5af4(*(long *)(lVar35 + 0xd0),&local_1b8);
    }
  }
  uVar34 = FUN_014fd6bc(&local_1a8,0);
  if ((uVar34 & 1) != 0) {
    FUN_014fd424(&local_1a8,0,&local_1b8,0);
  }
  if (((local_ec != 0x32) && (local_ec != 1)) &&
     (uVar34 = FUN_014fe6fc(&local_1a8,0), (uVar34 & 1) != 0)) {
    iVar19 = FUN_014fe934(&local_1a8,&local_1b8,0);
    local_200 = (undefined *)CONCAT44(local_200._4_4_,iVar19);
    if (iVar19 != 0) {
      uVar20 = FUN_014fe934(&local_1a8,&local_1b8,0);
      uVar21 = FUN_014ff2b4(&local_1a8,&local_1b8,0);
      uVar34 = FUN_014feae8(&local_1a8,&local_1b8,0);
      if ((uVar34 & 1) == 0) {
        FUN_007ef010(local_24c,PTR_DAT_04bb3170);
      }
      else {
        FUN_014fec20(local_24c,&local_1a8,&local_1b8,0);
      }
      local_100 = CONCAT44(uVar21,uVar20);
      local_108 = CONCAT44(iStack_1ac,local_1b0);
      local_f8[0] = local_24c[0];
      FUN_014ff084(&local_1a8,&local_1b8,0);
      FUN_014ff6a8(&local_1a8,&local_1b8,0);
    }
  }
  local_220 = (undefined8 *)(puVar42 + 0x10);
  local_1d8 = (undefined *)0xfffe;
  iVar19 = (int)local_e0;
  iVar37 = (int)local_de;
  local_218 = (undefined **)CONCAT44(iVar37,iVar19);
  FUN_0277d4ac(&local_1d8);
  uVar21 = local_d8;
  uVar20 = uStack_dc;
  puVar3 = PTR_DAT_04bb43c0;
  puVar42 = (undefined *)CONCAT44(local_d8,uStack_dc);
  lVar36 = *(long *)PTR_DAT_04bb43c0;
  local_1d8 = puVar42;
  uVar18 = FUN_0277d6c4(&local_1d8);
  lVar35 = *(long *)puVar3;
  if (lVar35 == 0) {
    return;
  }
  lVar36 = *(long *)(lVar36 + 0x57e58);
  uVar18 = (uVar18 & 0xffff) - (uint)*(ushort *)(lVar36 + 0x1f8);
  if (*(uint *)(lVar36 + 0x1d8) <= uVar18) {
    return;
  }
  if (*(long *)(*(long *)(lVar36 + 0x1e0) + (long)(int)uVar18 * 8) == 0) {
    return;
  }
  local_1f0 = 0;
  local_1f8 = local_1d8;
  local_200 = PTR_DAT_04bc0510 + 0x10;
  uVar18 = FUN_0277d6c4(&local_1f8);
  if (*(long *)PTR_DAT_04bb43c0 != 0) {
    lVar35 = *(long *)(lVar35 + 0x57e58);
    uVar18 = (uVar18 & 0xffff) - (uint)*(ushort *)(lVar35 + 0x1f8);
    if ((uVar18 < *(uint *)(lVar35 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar35 + 0x1e0) + (long)(int)uVar18 * 8) != 0)) {
      FUN_0277d6c4(&local_1d8);
    }
  }
  FUN_01a50970(&local_1a8,0,&local_1d8,&local_220);
  uVar34 = FUN_014fd6bc(&local_1a8,0);
  if ((uVar34 & 1) != 0) {
    FUN_014fd424(&local_1a8,(char)uStack_d4 != '\0',&local_220,0);
  }
  if (((local_ec != 0x32) && (local_ec != 1)) &&
     (uVar34 = FUN_014fe6fc(&local_1a8,0), (uVar34 & 1) != 0)) {
    uVar34 = local_100 & 0xffffffff;
    if ((int)local_100 != 0) {
      FUN_007ef010(auStack_24e,local_f8);
      FUN_014fedf8(&local_1a8,&local_220,0,uVar34,auStack_24e);
      FUN_014ff470(&local_1a8,&local_220,0,local_100._4_4_);
    }
  }
  uVar34 = local_88 >> 0x10 & 0xff;
  if (uVar34 != 0) {
    uVar39 = 0;
    psVar38 = (short *)((long)&local_c0 + 2);
    puVar3 = PTR_DAT_04bc0510 + 0x10;
    puVar4 = PTR_DAT_04bb2010 + 0x10;
    psVar41 = psVar38;
    do {
      plVar27 = (long *)(psVar41 + -6);
      if (3 < uVar39) {
        plVar27 = (long *)(auStack_d0 + 6);
      }
      local_1d8 = (undefined *)0xfffe;
      FUN_0277d4ac(&local_1d8);
      puVar1 = PTR_DAT_04bb43c0;
      local_1d8 = (undefined *)*plVar27;
      lVar35 = *(long *)PTR_DAT_04bb43c0;
      uVar18 = FUN_0277d6c4(&local_1d8);
      lVar36 = *(long *)puVar1;
      if (lVar36 == 0) {
        return;
      }
      lVar35 = *(long *)(lVar35 + 0x57e58);
      uVar18 = (uVar18 & 0xffff) - (uint)*(ushort *)(lVar35 + 0x1f8);
      if (*(uint *)(lVar35 + 0x1d8) <= uVar18) {
        return;
      }
      if (*(long *)(*(long *)(lVar35 + 0x1e0) + (long)(int)uVar18 * 8) == 0) {
        return;
      }
      local_1f0 = 0;
      local_1f8 = local_1d8;
      local_200 = puVar3;
      uVar18 = FUN_0277d6c4(&local_1f8);
      if (*(long *)PTR_DAT_04bb43c0 != 0) {
        lVar35 = *(long *)(lVar36 + 0x57e58);
        uVar18 = (uVar18 & 0xffff) - (uint)*(ushort *)(lVar35 + 0x1f8);
        if ((uVar18 < *(uint *)(lVar35 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar35 + 0x1e0) + (long)(int)uVar18 * 8) != 0)) {
          lVar35 = *(long *)PTR_DAT_04bc0428;
          uVar18 = FUN_0277d6c4(&local_1d8);
          uVar18 = (uVar18 & 0xffff) - (uint)*(ushort *)(lVar35 + 0x1f8);
          if (uVar18 < *(uint *)(lVar35 + 0x1d8)) {
            lVar35 = *(long *)(*(long *)(lVar35 + 0x1e0) + (long)(int)uVar18 * 8);
            if (lVar35 != 0) {
              local_1f0 = lVar35;
            }
          }
        }
      }
      bVar17 = 3 < uVar39;
      psVar10 = psVar41 + -8;
      if (bVar17) {
        psVar10 = (short *)(auStack_d0 + 2);
      }
      psVar11 = psVar41 + -7;
      if (bVar17) {
        psVar11 = (short *)(auStack_d0 + 4);
      }
      local_218 = (undefined **)CONCAT44((int)*psVar11,(int)*psVar10);
      psVar10 = psVar41 + -2;
      if (bVar17) {
        psVar10 = (short *)((long)&local_c8 + 6);
      }
      sVar25 = *psVar10;
      local_220 = (undefined8 *)puVar4;
      FUN_01a50970(&local_1a8,1,&local_1d8,&local_220);
      uVar24 = FUN_014fd6bc(&local_1a8,1);
      if ((uVar24 & 1) != 0) {
        FUN_014fd424(&local_1a8,(char)sVar25 != '\0',&local_220,1);
      }
      if (((local_ec != 0x32) && (local_ec != 1)) &&
         (uVar24 = FUN_014fe6fc(&local_1a8,1), (uVar24 & 1) != 0)) {
        uVar24 = (ulong)local_180 & 0xffffffff;
        psVar10 = psVar41 + -1;
        if (3 < uVar39) {
          psVar10 = (short *)&local_c0;
        }
        if ((int)local_180 == 0) {
LAB_022da7e0:
          uVar24 = local_160 & 0xffffffff;
          if ((int)local_160 != 0) {
            psVar11 = psVar41;
            if (3 < uVar39) {
              psVar11 = psVar38;
            }
            if (((int)local_168 == *psVar10) && (local_168._4_4_ == *psVar11)) {
              lVar35 = 1;
              goto LAB_022da890;
            }
          }
          uVar24 = local_140 & 0xffffffff;
          if ((int)local_140 != 0) {
            psVar11 = psVar41;
            if (3 < uVar39) {
              psVar11 = psVar38;
            }
            if (((int)local_148 == *psVar10) && (local_148._4_4_ == *psVar11)) {
              lVar35 = 2;
              goto LAB_022da890;
            }
          }
          uVar24 = local_120 & 0xffffffff;
          if ((int)local_120 != 0) {
            psVar11 = psVar41;
            if (3 < uVar39) {
              psVar11 = psVar38;
            }
            if (((int)local_128 == *psVar10) && (local_128._4_4_ == *psVar11)) {
              lVar35 = 3;
              goto LAB_022da890;
            }
          }
        }
        else {
          psVar11 = psVar41;
          if (3 < uVar39) {
            psVar11 = psVar38;
          }
          if (((int)local_188 != *psVar10) || (local_188._4_4_ != *psVar11)) goto LAB_022da7e0;
          lVar35 = 0;
LAB_022da890:
          FUN_007ef010(auStack_250,local_178 + lVar35 * 4);
          FUN_014fedf8(&local_1a8,&local_220,1,uVar24,auStack_250);
          FUN_014ff470(&local_1a8,&local_220,1,
                       *(undefined4 *)((long)local_178 + (lVar35 * 0x10 + -2) * 2));
        }
      }
      if (3 < uVar39) break;
      uVar39 = uVar39 + 1;
      psVar41 = psVar41 + 9;
    } while (uVar39 < uVar34);
  }
  local_220 = (undefined8 *)0xfffe;
  FUN_0277d4ac(&local_220);
  puVar3 = PTR_DAT_04bb43c0;
  local_1f8 = (undefined *)CONCAT44(uVar21,uVar20);
  local_200 = PTR_DAT_04bc0510 + 0x10;
  local_1f0 = 0;
  lVar35 = *(long *)PTR_DAT_04bb43c0;
  local_220 = (undefined8 *)puVar42;
  uVar18 = FUN_0277d6c4(&local_1f8);
  if (*(long *)puVar3 != 0) {
    lVar35 = *(long *)(lVar35 + 0x57e58);
    uVar18 = (uVar18 & 0xffff) - (uint)*(ushort *)(lVar35 + 0x1f8);
    if ((uVar18 < *(uint *)(lVar35 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar35 + 0x1e0) + (long)(int)uVar18 * 8) != 0)) {
      lVar35 = *(long *)PTR_DAT_04bc0428;
      uVar18 = FUN_0277d6c4(&local_220);
      uVar18 = (uVar18 & 0xffff) - (uint)*(ushort *)(lVar35 + 0x1f8);
      if (uVar18 < *(uint *)(lVar35 + 0x1d8)) {
        lVar35 = *(long *)(*(long *)(lVar35 + 0x1e0) + (long)(int)uVar18 * 8);
        if (lVar35 != 0) {
          local_1f0 = lVar35;
        }
      }
    }
  }
  uVar34 = FUN_01b0140c(&local_200);
  puVar3 = PTR_DAT_04bb6298;
  if ((uVar34 & 1) != 0) {
    local_1d0 = iVar19;
    iStack_1cc = iVar37;
    if ((*(int *)(PTR_DAT_04bc3a80 + 0x38) == -0x3f5c743d) ||
       ((*(int *)(PTR_DAT_04bc3a80 + 0x38) == -0x2f1ac06c &&
        (*(int *)(*(long *)PTR_DAT_04bb3728 + 0xb0) != 0)))) {
LAB_022daa60:
      local_220 = (undefined8 *)(PTR_DAT_04bb2010 + 0x10);
      local_218 = (undefined **)CONCAT44(iVar22,iVar40);
      local_1d8 = (undefined *)local_220;
      FUN_014b4bd0(*(long *)PTR_DAT_04bb4c80 + 0x2868,*(undefined2 *)(param_1 + 0x20),&local_220,
                   &local_1d8);
    }
    else {
      sVar25 = *(short *)PTR_DAT_04bb6298;
      if (sVar25 != -1) {
        puVar4 = PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar25 * 8;
        if (0xff < (uint)(int)sVar25) {
          puVar4 = PTR_DAT_04bc39f8;
        }
        if ((*(uint *)(puVar4 + 4) & 1) != 0) goto LAB_022daa60;
      }
      local_220 = (undefined8 *)(PTR_DAT_04bb2010 + 0x10);
      local_218 = (undefined **)CONCAT44(iVar22,iVar40);
      local_1d8 = (undefined *)local_220;
      FUN_01555310(*(long *)PTR_DAT_04bb4c80 + 0x2540,*(undefined2 *)(param_1 + 0x20),&local_220,
                   &local_1d8);
    }
  }
  sVar25 = *(short *)puVar3;
  if (sVar25 == -1) {
    return;
  }
  local_200 = (undefined *)CONCAT44(local_200._4_4_,0x20);
  puVar3 = PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar25 * 8;
  if (0xff < (uint)(int)sVar25) {
    puVar3 = PTR_DAT_04bc39f8;
  }
  if ((*(uint *)(puVar3 + 4) & 1) == 0) {
    return;
  }
  if (local_ec != 0x32) {
    return;
  }
  local_220 = (undefined8 *)0xfffe;
  FUN_0277d4ac(&local_220);
  puVar3 = PTR_DAT_04bb43c0;
  local_200 = PTR_DAT_04bc0510 + 0x10;
  local_1f8 = (undefined *)CONCAT44(uVar21,uVar20);
  local_1f0 = 0;
  lVar35 = *(long *)PTR_DAT_04bb43c0;
  local_220 = (undefined8 *)puVar42;
  uVar18 = FUN_0277d6c4(&local_1f8);
  if (*(long *)puVar3 == 0) {
    return;
  }
  lVar35 = *(long *)(lVar35 + 0x57e58);
  uVar18 = (uVar18 & 0xffff) - (uint)*(ushort *)(lVar35 + 0x1f8);
  if (*(uint *)(lVar35 + 0x1d8) <= uVar18) {
    return;
  }
  if (*(long *)(*(long *)(lVar35 + 0x1e0) + (long)(int)uVar18 * 8) == 0) {
    return;
  }
  lVar35 = *(long *)PTR_DAT_04bc0428;
  uVar18 = FUN_0277d6c4(&local_220);
  uVar18 = (uVar18 & 0xffff) - (uint)*(ushort *)(lVar35 + 0x1f8);
  if (*(uint *)(lVar35 + 0x1d8) <= uVar18) {
    return;
  }
  puVar28 = *(uint **)(*(long *)(lVar35 + 0x1e0) + (long)(int)uVar18 * 8);
  if (puVar28 == (uint *)0x0) {
    return;
  }
  uVar18 = *puVar28;
  uVar29 = 0;
  if ((uVar18 != 0) && (puVar28 != (uint *)(ulong)uVar18)) {
    puVar30 = (uint *)((long)puVar28 - (long)(ulong)uVar18);
    uVar29 = 0;
    if (*puVar30 != 0) {
      uVar18 = puVar30[1];
      if ((uVar18 != 0) && ((ulong)(ushort)puVar30[2] != 0)) {
        lVar35 = 0xc;
        if (*(char *)((long)puVar30 + 10) != '\0') {
          lVar35 = 0x1c;
        }
        lVar35 = (long)puVar30 + lVar35 + (ulong)(ushort)puVar30[2] * 8;
        if (lVar35 != 0) {
          uVar26 = 0;
          if ((ulong)uVar18 != 0) {
            uVar26 = (uint)((ulong)((long)puVar28 - lVar35) / (ulong)uVar18);
          }
          if (*puVar30 <= uVar26) {
            uVar26 = 0xffffffff;
          }
          if ((uVar26 < *(uint *)PTR_DAT_04bc0048) &&
             (uVar29 = *(ushort *)(*(long *)(PTR_DAT_04bc0048 + 8) + (long)(int)uVar26 * 2),
             uVar29 < 0x52)) goto LAB_022dad14;
        }
      }
      uVar29 = 0;
    }
  }
LAB_022dad14:
  if ((uVar29 & 0xfffe) != 0x12) {
    return;
  }
  uVar18 = *puVar28;
  uVar26 = 0;
  if ((uVar18 != 0) && (puVar28 != (uint *)(ulong)uVar18)) {
    puVar30 = (uint *)((long)puVar28 - (long)(ulong)uVar18);
    uVar26 = 0;
    if (*puVar30 != 0) {
      uVar18 = puVar30[1];
      if ((uVar18 != 0) && ((ulong)(ushort)puVar30[2] != 0)) {
        lVar35 = 0xc;
        if (*(char *)((long)puVar30 + 10) != '\0') {
          lVar35 = 0x1c;
        }
        lVar35 = (long)puVar30 + lVar35 + (ulong)(ushort)puVar30[2] * 8;
        if (lVar35 != 0) {
          uVar26 = 0;
          if ((ulong)uVar18 != 0) {
            uVar26 = (uint)((ulong)((long)puVar28 - lVar35) / (ulong)uVar18);
          }
          if (*puVar30 <= uVar26) {
            uVar26 = 0xffffffff;
          }
          if (uVar26 < *(uint *)PTR_DAT_04bc0018) {
            uVar26 = (uint)*(ushort *)(*(long *)(PTR_DAT_04bc0018 + 8) + (long)(int)uVar26 * 2);
            if (5 < uVar26) {
              uVar26 = 0;
            }
            goto LAB_022daca0;
          }
        }
      }
      uVar26 = 0;
    }
  }
LAB_022daca0:
  local_1d8 = (undefined *)((ulong)local_1d8 & 0xffffffff00000000);
  local_248 = (undefined *)CONCAT44(local_248._4_4_,uVar26);
  local_220 = (undefined8 *)CONCAT44(iVar22,iVar40);
  local_218 = (undefined **)((ulong)local_218 & 0xffffffff00000000);
  uVar13 = 4;
  if (uVar26 != 5) {
    uVar13 = 2;
  }
  lVar35 = FUN_0299a520(*(long *)PTR_DAT_04bb26a8 + 0x7c8,&local_220,uVar13);
  if (lVar35 != 0) {
    *(undefined1 *)(lVar35 + 9) = 1;
  }
  return;
}

