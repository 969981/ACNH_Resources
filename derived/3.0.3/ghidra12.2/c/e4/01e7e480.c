
/* WARNING: Removing unreachable block (ram,0x01e7e4d0) */
/* WARNING: Removing unreachable block (ram,0x01e7e4c0) */
/* WARNING: Removing unreachable block (ram,0x01e7e694) */

undefined8 FUN_01e7e480(long param_1)

{
  int iVar1;
  undefined *puVar2;
  long ***ppplVar3;
  undefined *puVar4;
  float *pfVar5;
  uint uVar6;
  long lVar7;
  uint uVar8;
  uint uVar9;
  int iVar10;
  int iVar11;
  int iVar12;
  uint uVar13;
  uint uVar14;
  undefined4 uVar15;
  undefined *puVar16;
  undefined *puVar17;
  undefined8 *****pppppuVar18;
  uint uVar19;
  ulong uVar20;
  undefined8 uVar21;
  uint uVar22;
  long lVar23;
  uint *puVar24;
  long ****pppplVar25;
  long lVar26;
  long *****ppppplVar27;
  long lVar28;
  long lVar29;
  undefined8 ****ppppuVar30;
  long ****pppplVar31;
  long *****ppppplVar32;
  int iVar33;
  int iVar34;
  float fVar35;
  float fVar36;
  float fVar37;
  float fVar38;
  float fVar39;
  float fVar40;
  float fVar41;
  int local_60c;
  int local_608;
  undefined8 local_5f8;
  long ***local_5f0;
  undefined8 local_5e8;
  long ***local_5e0;
  undefined8 local_5d8;
  undefined8 local_5d0;
  float local_5c8;
  undefined4 local_5c4;
  uint *local_5c0;
  long *****local_5b8;
  long *****local_5b0;
  int local_5a8;
  undefined8 *****local_5a0;
  undefined8 *****pppppuStack_598;
  int local_590;
  undefined8 *****local_588 [8];
  undefined8 *****local_548 [8];
  undefined8 *****local_508 [8];
  undefined8 *****local_4c8 [8];
  undefined8 *****local_488 [8];
  undefined8 *****local_448 [8];
  undefined8 *****local_408 [8];
  undefined8 *****local_3c8 [8];
  undefined8 *****local_388 [8];
  undefined8 *****local_348 [8];
  undefined8 *****local_308 [8];
  undefined8 *****local_2c8 [8];
  undefined8 *****local_288 [8];
  undefined8 *****local_248 [8];
  undefined8 *****local_208 [8];
  undefined8 ****local_1c8 [8];
  undefined8 ***local_188 [8];
  undefined8 **local_148 [8];
  undefined8 *local_108 [8];
  undefined8 local_c8 [9];
  byte local_74 [4];
  
  lVar28 = *(long *)(*(long *)PTR_DAT_04bb27a8 + 0x1f8);
  if (lVar28 == 0) {
    uVar21 = 0;
  }
  else {
    lVar26 = *(long *)(*(long *)(param_1 + 8) + 0x68) + 0x278;
    local_5b8 = (long *****)
                CONCAT44((int)((ulong)local_5b8 >> 0x20),
                         *(undefined4 *)(*(long *)(param_1 + 8) + 0x230));
    FUN_021e8490(&local_5b8,lVar26,param_1 + 0x188,1,0);
    puVar17 = PTR_DAT_04bb43c0;
    puVar16 = PTR_DAT_04bb37e0;
    local_588[0] = local_548;
    local_548[0] = local_508;
    local_5a8 = 0;
    local_508[0] = local_4c8;
    local_108[0] = local_c8;
    local_488[0] = local_448;
    local_5a0 = local_588;
    local_408[0] = local_3c8;
    local_388[0] = local_348;
    local_348[0] = local_308;
    local_4c8[0] = local_488;
    local_308[0] = local_2c8;
    local_2c8[0] = local_288;
    local_448[0] = local_408;
    local_288[0] = local_248;
    local_248[0] = local_208;
    local_3c8[0] = local_388;
    local_208[0] = local_1c8;
    local_1c8[0] = local_188;
    local_148[0] = local_108;
    local_188[0] = local_148;
    lVar29 = *(long *)PTR_DAT_04bb5c90;
    local_c8[0] = 0;
    iVar34 = *(int *)(lVar29 + 0x2c);
    iVar1 = *(int *)(lVar29 + 0x3c) + 1;
    local_590 = 0x14;
    local_5b8 = (long *****)&local_5b8;
    local_5b0 = (long *****)&local_5b8;
    pppppuStack_598 = local_5a0;
    if (iVar1 == iVar34) {
      local_60c = 0x7fffffff;
      local_608 = -0x80000000;
    }
    else {
      iVar10 = *(int *)(lVar29 + 0x28);
      local_608 = -0x80000000;
      local_60c = 0x7fffffff;
      puVar4 = PTR_DAT_04bbc1a0 + 0x10;
      puVar2 = PTR_DAT_04bc0510 + 0x10;
      ppplVar3 = (long ***)(PTR_DAT_04bb2010 + 0x10);
      iVar33 = iVar10;
      do {
        lVar23 = *(long *)(lVar28 + 0xd0);
        ppppuVar30 = (undefined8 ****)puVar16;
        if (lVar23 != 0) {
          lVar7 = lVar23 + 0x130 + (ulong)*(uint *)(lVar23 + 0x198) * 0x30;
          if (1 < *(uint *)(lVar23 + 0x198)) {
            lVar7 = lVar23 + 0x130;
          }
          iVar11 = *(int *)(lVar7 + 0x28);
          if (iVar11 <= iVar33 && iVar33 <= *(int *)(lVar7 + 8) + iVar11 + -1) {
            iVar12 = *(int *)(lVar7 + 0x2c);
            if ((iVar12 <= iVar34 && iVar34 <= *(int *)(lVar7 + 0xc) + iVar12 + -1) &&
               (uVar19 = (iVar34 - iVar12) + (iVar33 - iVar11) * *(int *)(lVar7 + 0xc),
               uVar19 < *(uint *)(lVar7 + 0x10))) {
              ppppuVar30 = (undefined8 ****)(*(long *)(lVar7 + 0x18) + (long)(int)uVar19 * 8);
            }
          }
        }
        lVar23 = *(long *)puVar17;
        uVar19 = FUN_0277d6c4(ppppuVar30);
        if (*(long *)puVar17 != 0) {
          lVar23 = *(long *)(lVar23 + 0x57e58);
          uVar19 = (uVar19 & 0xffff) - (uint)*(ushort *)(lVar23 + 0x1f8);
          if (((uVar19 < *(uint *)(lVar23 + 0x1d8)) &&
              (*(long *)(*(long *)(lVar23 + 0x1e0) + (long)(int)uVar19 * 8) != 0)) &&
             (uVar20 = FUN_0277e158(ppppuVar30), (uVar20 & 1) == 0)) {
            lVar23 = *(long *)puVar17;
            local_5c8 = *(float *)ppppuVar30;
            local_5c4 = *(undefined4 *)((long)ppppuVar30 + 4);
            local_5c0 = (uint *)0x0;
            local_5d0 = puVar2;
            uVar19 = FUN_0277d6c4(&local_5c8);
            if (*(long *)puVar17 == 0) {
LAB_01e7e830:
              if (local_5c0 != (uint *)0x0) goto LAB_01e7e838;
LAB_01e7e8c0:
              uVar22 = 0;
            }
            else {
              lVar23 = *(long *)(lVar23 + 0x57e58);
              uVar19 = (uVar19 & 0xffff) - (uint)*(ushort *)(lVar23 + 0x1f8);
              if ((*(uint *)(lVar23 + 0x1d8) <= uVar19) ||
                 (*(long *)(*(long *)(lVar23 + 0x1e0) + (long)(int)uVar19 * 8) == 0))
              goto LAB_01e7e830;
              lVar23 = *(long *)PTR_DAT_04bc0428;
              uVar19 = FUN_0277d6c4(ppppuVar30);
              uVar19 = (uVar19 & 0xffff) - (uint)*(ushort *)(lVar23 + 0x1f8);
              if ((*(uint *)(lVar23 + 0x1d8) <= uVar19) ||
                 (puVar24 = *(uint **)(*(long *)(lVar23 + 0x1e0) + (long)(int)uVar19 * 8),
                 puVar24 == (uint *)0x0)) goto LAB_01e7e830;
              local_5c0 = puVar24;
LAB_01e7e838:
              uVar19 = *local_5c0;
              uVar22 = 0;
              if ((uVar19 != 0) && (local_5c0 != (uint *)(ulong)uVar19)) {
                puVar24 = (uint *)((long)local_5c0 - (long)(ulong)uVar19);
                uVar22 = 0;
                if (*puVar24 != 0) {
                  uVar19 = puVar24[1];
                  if ((uVar19 != 0) && ((ulong)(ushort)puVar24[2] != 0)) {
                    lVar23 = 0xc;
                    if (*(char *)((long)puVar24 + 10) != '\0') {
                      lVar23 = 0x1c;
                    }
                    lVar23 = (long)puVar24 + lVar23 + (ulong)(ushort)puVar24[2] * 8;
                    if (lVar23 != 0) {
                      uVar22 = 0;
                      if ((ulong)uVar19 != 0) {
                        uVar22 = (uint)((ulong)((long)local_5c0 - lVar23) / (ulong)uVar19);
                      }
                      if (*puVar24 <= uVar22) {
                        uVar22 = 0xffffffff;
                      }
                      if ((uVar22 < *(uint *)PTR_DAT_04bc0048) &&
                         (uVar22 = (uint)*(ushort *)
                                          (*(long *)(PTR_DAT_04bc0048 + 8) + (long)(int)uVar22 * 2),
                         uVar22 < 0x52)) goto LAB_01e7e8c4;
                    }
                  }
                  goto LAB_01e7e8c0;
                }
              }
            }
LAB_01e7e8c4:
            local_5f8 = (undefined *)CONCAT44(local_5f8._4_4_,uVar22);
            if (uVar22 - 1 < 9) {
              local_5e8 = (long ****)0x0;
              local_5d8 = 0;
              local_5f8 = puVar4;
              local_5f0 = ppplVar3;
              local_5e0 = ppplVar3;
              FUN_01afb480(&local_5d0,&local_5f8);
              pppppuVar18 = local_5a0;
              local_5e8._0_4_ = (int)local_5e8 + iVar33;
              local_5e8._4_4_ = local_5e8._4_4_ + iVar34;
              local_5d8._0_4_ = (int)local_5d8 + iVar33;
              local_5d8._4_4_ = local_5d8._4_4_ + iVar34;
              if (local_5a8 < local_590) {
                if (local_5a0 != (undefined8 *****)0x0) {
                  local_5a0 = (undefined8 *****)*local_5a0;
                }
                *(int *)(pppppuVar18 + 3) = (int)local_5e8;
                *(int *)((long)pppppuVar18 + 0x1c) = local_5e8._4_4_;
                ppppplVar27 = pppppuVar18 + 6;
                *ppppplVar27 = (long ****)0x0;
                *pppppuVar18 = ppppuVar30;
                pppppuVar18[1] = (undefined8 ****)(PTR_DAT_04bbc1a0 + 0x10);
                *(int *)(pppppuVar18 + 5) = (int)local_5d8;
                *(int *)((long)pppppuVar18 + 0x2c) = local_5d8._4_4_;
                pppppuVar18[7] = &local_5b8;
                pppppuVar18[2] = (undefined8 ****)(PTR_DAT_04bb2010 + 0x10);
                pppppuVar18[4] = (undefined8 ****)(PTR_DAT_04bb2010 + 0x10);
                *ppppplVar27 = (long ****)local_5b8;
                if (local_5b8 != (long *****)0x0) {
                  local_5b8[1] = (long ****)ppppplVar27;
                }
                local_5a8 = local_5a8 + 1;
                local_5b8 = ppppplVar27;
              }
              if ((int)local_5e8 <= local_60c) {
                local_60c = (int)local_5e8;
              }
              if (local_608 <= (int)local_5d8) {
                local_608 = (int)local_5d8;
              }
            }
          }
        }
        if (iVar33 < *(int *)(lVar29 + 0x38)) {
          iVar33 = iVar33 + 1;
        }
        else {
          iVar33 = *(int *)(lVar29 + 0x28);
          iVar34 = iVar34 + 1;
        }
      } while ((iVar10 != iVar33) || (iVar1 != iVar34));
    }
    FUN_038aaa70(&local_5b8,*(long *)(param_1 + 8) + 0x288);
    puVar16 = PTR_DAT_04bbe208;
    if ((long ******)local_5b0 != &local_5b8) {
      ppppplVar32 = local_5b0 + -6;
      puVar4 = PTR_DAT_04bc0510 + 0x10;
      ppppplVar27 = local_5b0;
      do {
        local_5c8 = 0.0;
        local_5d0 = (undefined *)0x0;
        pppplVar31 = ppppplVar27[-6];
        local_74[0] = 0;
        uVar20 = FUN_021f2630(pppplVar31,ppppplVar32 + 1,lVar26,param_1 + 0x188,&local_5d0,local_74,
                              0);
        if (((uVar20 & 1) != 0) && (uVar20 = FUN_01262040(0,puVar16,&local_5d0), (uVar20 & 1) == 0))
        {
          lVar28 = *(long *)puVar17;
          local_5f0 = *pppplVar31;
          local_5e8 = (long ****)0x0;
          local_5f8 = puVar4;
          uVar19 = FUN_0277d6c4(&local_5f0);
          if (*(long *)puVar17 != 0) {
            lVar28 = *(long *)(lVar28 + 0x57e58);
            uVar19 = (uVar19 & 0xffff) - (uint)*(ushort *)(lVar28 + 0x1f8);
            if ((uVar19 < *(uint *)(lVar28 + 0x1d8)) &&
               (*(long *)(*(long *)(lVar28 + 0x1e0) + (long)(int)uVar19 * 8) != 0)) {
              lVar28 = *(long *)PTR_DAT_04bc0428;
              uVar19 = FUN_0277d6c4(pppplVar31);
              uVar19 = (uVar19 & 0xffff) - (uint)*(ushort *)(lVar28 + 0x1f8);
              if (uVar19 < *(uint *)(lVar28 + 0x1d8)) {
                pppplVar25 = *(long *****)(*(long *)(lVar28 + 0x1e0) + (long)(int)uVar19 * 8);
                if (pppplVar25 != (long ****)0x0) {
                  local_5e8 = pppplVar25;
                }
              }
            }
          }
          uVar19 = FUN_01ae98d0(&local_5f8);
          if ((local_74[0] >> (ulong)(uVar19 & 0x1f) & 1) != 0) {
            *(undefined **)(param_1 + 0x7830) = local_5d0;
            *(float *)(param_1 + 0x7838) = local_5c8;
            *(undefined4 *)(param_1 + 0x7818) = *(undefined4 *)(ppppplVar32 + 3);
            *(undefined4 *)(param_1 + 0x781c) = *(undefined4 *)((long)ppppplVar32 + 0x1c);
            *(undefined4 *)(param_1 + 0x7828) = *(undefined4 *)(ppppplVar32 + 5);
            *(undefined4 *)(param_1 + 0x782c) = *(undefined4 *)((long)ppppplVar32 + 0x2c);
            *(undefined2 *)(param_1 + 0x7840) = *(undefined2 *)pppplVar31;
            *(undefined1 *)(param_1 + 0x7842) = *(undefined1 *)((long)pppplVar31 + 2);
            *(undefined1 *)(param_1 + 0x7843) = *(undefined1 *)((long)pppplVar31 + 3);
            uVar15 = *(undefined4 *)((long)pppplVar31 + 4);
            *(byte *)(param_1 + 0x7868) = local_74[0];
            *(undefined4 *)(param_1 + 0x7844) = uVar15;
            *(uint *)(param_1 + 0x7880) = uVar19;
            local_5f8 = local_5d0;
            local_5f0 = (long ***)CONCAT44(local_5f0._4_4_,local_5c8);
            fVar35 = (float)FUN_016e026c(0,&local_5f8,0,0);
            lVar28 = *(long *)(param_1 + 0x18);
            local_5f8 = (undefined *)CONCAT44(fVar35 + 5.0,(undefined4)local_5f8);
            uVar20 = FUN_02085a50(lVar28,3,0);
            if ((uVar20 & 1) != 0) {
              lVar26 = lVar28 + 0x10;
              *(undefined1 *)(lVar28 + 0x801) = 1;
              lVar29 = lVar26 + (ulong)*(uint *)(lVar28 + 0x294) * 0x80;
              if (4 < *(uint *)(lVar28 + 0x294)) {
                lVar29 = lVar26;
              }
              *(undefined4 *)(lVar29 + 0x14) = local_5f0._0_4_;
              *(undefined **)(lVar29 + 0xc) = local_5f8;
              lVar29 = lVar26 + (ulong)*(uint *)(lVar28 + 0x294) * 0x80;
              if (4 < *(uint *)(lVar28 + 0x294)) {
                lVar29 = lVar26;
              }
              *(undefined1 *)(lVar29 + 0x7e) = 1;
            }
            uVar20 = (ulong)((float)(int)uVar19 * 90.0 * 11930465.0);
            pfVar5 = (float *)(PTR_DAT_04bb2d00 + (uVar20 >> 0x19 & 0x7f) * 0x10);
            fVar35 = (float)((uint)uVar20 >> 1 & 0xffffff) * 5.9604645e-08;
            fVar36 = *pfVar5 + fVar35 * pfVar5[1];
            fVar35 = pfVar5[2] + fVar35 * pfVar5[3];
            fVar37 = fVar36 * 0.0;
            fVar35 = fVar35 + fVar35;
            fVar39 = fVar36 * (fVar36 + fVar36);
            fVar38 = (fVar36 + fVar36) * fVar37;
            fVar41 = fVar37 * (fVar37 + fVar37);
            fVar40 = fVar36 * (fVar37 + fVar37);
            fVar37 = fVar37 * fVar35;
            fVar36 = fVar36 * fVar35;
            fVar35 = (((1.0 - fVar41) - fVar39) + (fVar38 + fVar37) * 0.0 + (fVar41 - fVar36) * 0.0)
                     * 5.0;
            fVar36 = (fVar36 + fVar41 + (fVar40 - fVar37) * 0.0 + ((1.0 - fVar39) - fVar41) * 0.0) *
                     5.0;
            fVar37 = ((fVar38 - fVar37) + ((1.0 - fVar41) - fVar41) * 0.0 + (fVar37 + fVar40) * 0.0)
                     * 5.0;
            fVar36 = (float)local_5d0 + fVar36 + fVar36;
            fVar37 = local_5d0._4_4_ + fVar37 + fVar37;
            fVar35 = local_5c8 + fVar35 + fVar35;
            FUN_02077fb0(*(undefined8 *)(param_1 + 0x89b8));
            *(undefined8 *)(param_1 + 0xa9fc) = 0x100000000;
            uVar21 = 1;
            *(float *)(param_1 + 0xa9f0) = fVar36;
            *(float *)(param_1 + 0xa9f4) = fVar37;
            *(float *)(param_1 + 0xa9f8) = fVar35;
            *(undefined1 *)(param_1 + 0xaa44) = 0;
            *(undefined8 *)(param_1 + 0xaa18) = *(undefined8 *)(param_1 + 0xaa38);
            *(undefined8 *)(param_1 + 0xaa04) = *(undefined8 *)(param_1 + 0xaa24);
            *(undefined8 *)(param_1 + 0xaa0c) = *(undefined8 *)(param_1 + 0xaa2c);
            *(undefined4 *)(param_1 + 0xaa20) = *(undefined4 *)(param_1 + 0xaa40);
            *(undefined4 *)(param_1 + 0xaa14) = *(undefined4 *)(param_1 + 0xaa34);
            *(undefined8 *)(param_1 + 0x126f8) = 1;
            goto LAB_01e7eff8;
          }
        }
        ppppplVar27 = (long *****)ppppplVar27[1];
        ppppplVar32 = ppppplVar27 + -6;
      } while (ppppplVar32 != (long *****)&local_5e8);
    }
    lVar28 = *(long *)(param_1 + 8);
    if (*(long *)(lVar28 + 0x68) == 0) {
      uVar21 = 0;
    }
    else {
      lVar26 = *(long *)PTR_DAT_04bb5c90;
      uVar22 = *(uint *)(lVar26 + 0x2c);
      uVar19 = *(int *)(lVar26 + 0x28) + 2;
      uVar8 = *(uint *)(lVar26 + 0x38);
      uVar9 = *(uint *)(lVar26 + 0x3c);
      uVar6 = uVar19;
      if ((int)uVar8 <= (int)uVar19) {
        uVar6 = uVar8;
      }
      if ((int)uVar19 <= (int)uVar8) {
        uVar19 = uVar8;
      }
      uVar19 = uVar19 - 2;
      uVar8 = uVar22;
      if ((int)uVar9 <= (int)uVar22) {
        uVar8 = uVar9;
      }
      if ((int)uVar22 <= (int)uVar9) {
        uVar22 = uVar9;
      }
      uVar22 = uVar22 - 1;
      uVar9 = uVar6;
      if ((int)uVar19 <= (int)uVar6) {
        uVar9 = uVar19;
      }
      if ((int)uVar6 <= (int)uVar19) {
        uVar6 = uVar19;
      }
      uVar19 = uVar8;
      if ((int)uVar22 <= (int)uVar8) {
        uVar19 = uVar22;
      }
      if ((int)uVar8 <= (int)uVar22) {
        uVar8 = uVar22;
      }
      uVar22 = local_60c - 1;
      if (((float)(int)uVar9 * 5.0 + (float)(int)uVar6 * 5.0 + 5.0) * 0.5 <
          *(float *)(*(long *)(lVar28 + 0x68) + 0x278)) {
        uVar9 = local_608 + 1;
        uVar22 = uVar6;
      }
      uVar6 = uVar9;
      if ((int)uVar22 <= (int)uVar9) {
        uVar6 = uVar22;
      }
      if ((int)uVar9 <= (int)uVar22) {
        uVar9 = uVar22;
      }
      uVar22 = (uint)*(ushort *)(param_1 + 0x18c);
      if ((int)(uint)*(ushort *)(param_1 + 0x18c) <= (int)uVar6) {
        uVar22 = uVar6;
      }
      uVar6 = (uint)*(ushort *)(param_1 + 0x18e);
      if ((int)(uint)*(ushort *)(param_1 + 0x18e) <= (int)uVar19) {
        uVar6 = uVar19;
      }
      uVar19 = uVar22;
      if ((int)uVar9 <= (int)uVar22) {
        uVar19 = uVar9;
      }
      if ((int)uVar22 <= (int)uVar9) {
        uVar22 = uVar9;
      }
      uVar9 = uVar6;
      if ((int)uVar8 <= (int)uVar6) {
        uVar9 = uVar8;
      }
      if ((int)uVar6 <= (int)uVar8) {
        uVar6 = uVar8;
      }
      uVar8 = (uint)*(ushort *)(param_1 + 400);
      if ((int)uVar22 <= (int)(uint)*(ushort *)(param_1 + 400)) {
        uVar8 = uVar22;
      }
      uVar22 = (uint)*(ushort *)(param_1 + 0x192);
      if ((int)uVar6 <= (int)(uint)*(ushort *)(param_1 + 0x192)) {
        uVar22 = uVar6;
      }
      uVar6 = uVar19;
      if ((int)uVar8 <= (int)uVar19) {
        uVar6 = uVar8;
      }
      if ((int)uVar19 <= (int)uVar8) {
        uVar19 = uVar8;
      }
      uVar8 = uVar9;
      if ((int)uVar9 <= (int)uVar22) {
        uVar8 = uVar22;
      }
      iVar1 = uVar22 + uVar9;
      if (iVar1 < 0 != SCARRY4(uVar22,uVar9)) {
        iVar1 = iVar1 + 1;
      }
      uVar22 = iVar1 >> 1;
      uVar9 = uVar22;
      if ((int)uVar8 <= (int)uVar22) {
        uVar9 = uVar8;
      }
      if ((int)uVar22 <= (int)uVar8) {
        uVar22 = uVar8;
      }
      uVar8 = *(uint *)(lVar28 + 0x288);
      *(undefined4 *)(lVar28 + 0x288) = *(undefined4 *)(lVar28 + 0x28c);
      *(undefined4 *)(lVar28 + 0x28c) = *(undefined4 *)(lVar28 + 0x290);
      uVar13 = *(uint *)(lVar28 + 0x294);
      uVar8 = uVar8 ^ uVar8 << 0xb;
      *(uint *)(lVar28 + 0x290) = uVar13;
      uVar8 = uVar8 >> 8 ^ uVar13 >> 0x13 ^ uVar8 ^ uVar13;
      *(uint *)(lVar28 + 0x294) = uVar8;
      lVar28 = *(long *)(param_1 + 8);
      uVar13 = *(uint *)(lVar28 + 0x288);
      *(undefined4 *)(lVar28 + 0x288) = *(undefined4 *)(lVar28 + 0x28c);
      uVar13 = uVar13 ^ uVar13 << 0xb;
      *(undefined4 *)(lVar28 + 0x28c) = *(undefined4 *)(lVar28 + 0x290);
      uVar14 = *(uint *)(lVar28 + 0x294);
      *(uint *)(lVar28 + 0x290) = uVar14;
      uVar13 = uVar13 >> 8 ^ uVar14 >> 0x13 ^ uVar13 ^ uVar14;
      *(uint *)(lVar28 + 0x294) = uVar13;
      FUN_02077fb0(*(undefined8 *)(param_1 + 0x89b8));
      *(undefined8 *)(param_1 + 0xa9fc) = 0x100000000;
      uVar21 = 1;
      *(float *)(param_1 + 0xa9f0) =
           (float)(int)(uVar6 + (int)((ulong)((uVar19 - uVar6) + 1) * (ulong)uVar8 >> 0x20)) * 5.0 +
           2.5;
      *(undefined4 *)(param_1 + 0xa9f4) = 0;
      *(float *)(param_1 + 0xa9f8) =
           (float)(int)(uVar9 + (int)((ulong)uVar13 * (ulong)((uVar22 - uVar9) + 1) >> 0x20)) * 5.0
           + 2.5;
      *(undefined1 *)(param_1 + 0xaa44) = 0;
      *(undefined8 *)(param_1 + 0xaa04) = *(undefined8 *)(param_1 + 0xaa24);
      *(undefined8 *)(param_1 + 0xaa0c) = *(undefined8 *)(param_1 + 0xaa2c);
      *(undefined8 *)(param_1 + 0xaa18) = *(undefined8 *)(param_1 + 0xaa38);
      *(undefined4 *)(param_1 + 0xaa20) = *(undefined4 *)(param_1 + 0xaa40);
      *(undefined4 *)(param_1 + 0xaa14) = *(undefined4 *)(param_1 + 0xaa34);
      *(undefined8 *)(param_1 + 0x126f8) = 7;
    }
LAB_01e7eff8:
    if ((long ******)local_5b0 != &local_5b8) {
      ppppplVar27 = local_5b0;
      do {
        ppppplVar27[-5] = (long ****)(PTR_DAT_04bbc1a0 + 0x10);
        ppppplVar27 = (long *****)ppppplVar27[1];
      } while ((long ******)ppppplVar27 != &local_5b8);
    }
  }
  return uVar21;
}

