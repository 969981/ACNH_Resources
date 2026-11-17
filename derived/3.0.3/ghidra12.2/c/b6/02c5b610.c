
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_02c5b610(long param_1)

{
  uint *puVar1;
  undefined8 ****ppppuVar2;
  undefined8 ****ppppuVar3;
  undefined8 ****__dest;
  uint *puVar4;
  long *__dest_00;
  undefined **ppuVar5;
  undefined **ppuVar6;
  void *__dest_01;
  undefined *puVar7;
  long lVar8;
  undefined8 uVar9;
  undefined4 uVar10;
  short sVar11;
  char cVar12;
  uint uVar13;
  long **pplVar14;
  undefined8 *puVar15;
  undefined8 *****pppppuVar16;
  bool bVar17;
  ushort uVar18;
  ushort uVar19;
  uint uVar20;
  uint uVar21;
  long lVar22;
  ulong uVar23;
  ulong uVar24;
  long lVar25;
  int iVar26;
  int iVar27;
  undefined8 uVar28;
  undefined8 ****__src;
  long *__src_00;
  long *plVar29;
  void *__src_01;
  undefined8 uVar30;
  long *plVar31;
  long *plVar32;
  uint uVar33;
  ulong uVar34;
  undefined *puVar35;
  undefined8 *puVar36;
  undefined *local_a0b8;
  long lStack_a0b0;
  undefined **local_a0a8;
  long *local_a0a0;
  undefined1 local_a098 [8];
  undefined8 *local_a090;
  undefined8 local_a088;
  undefined1 *local_a080;
  undefined8 local_a078;
  long **local_a070;
  long *local_a068 [4];
  long alStack_a048 [1992];
  undefined8 local_6208;
  undefined1 local_61e8 [4000];
  undefined8 local_5248;
  undefined8 *local_5240;
  long **local_5238;
  long **local_5230;
  long *local_5228 [4];
  long alStack_5208 [1992];
  undefined8 local_13c8;
  undefined8 local_13a8 [500];
  undefined8 local_408;
  undefined1 *local_400;
  undefined8 *****local_3f8;
  undefined8 *****local_3f0;
  undefined8 *****local_3e8 [4];
  undefined8 *****local_3c8 [4];
  undefined8 *****local_3a8 [4];
  undefined8 *****local_388 [4];
  undefined8 *****local_368 [4];
  undefined8 ****local_348 [4];
  undefined8 ***local_328 [4];
  undefined8 **local_308 [4];
  undefined8 *local_2e8 [4];
  undefined8 local_2c8 [4];
  undefined1 local_2a8 [80];
  undefined8 local_258;
  undefined1 *local_250;
  undefined8 *****local_248;
  undefined8 *****local_240;
  undefined8 *****local_238 [7];
  undefined8 *****local_200 [7];
  undefined8 ****local_1c8 [7];
  undefined8 ***local_190 [7];
  undefined8 **local_158 [7];
  undefined8 *local_120 [7];
  undefined8 local_e8 [7];
  undefined1 local_b0 [56];
  undefined1 auStack_78 [24];
  
  local_e8[0] = 0;
  local_200[0] = local_1c8;
  local_190[0] = local_158;
  local_1c8[0] = local_190;
  local_158[0] = local_120;
  local_238[0] = local_200;
  local_248 = local_238;
  local_120[0] = local_e8;
  local_258 = 0;
  local_250 = (undefined1 *)0x0;
  if (local_b0 != (undefined1 *)0x0) {
    local_258 = 0x700000000;
    local_250 = local_b0;
  }
  local_3e8[0] = local_3c8;
  local_3f8 = local_3e8;
  local_400 = (undefined1 *)0x0;
  local_3c8[0] = local_3a8;
  local_408 = 0;
  local_3a8[0] = local_388;
  local_388[0] = local_368;
  local_2c8[0] = 0;
  local_368[0] = local_348;
  local_348[0] = local_328;
  local_328[0] = local_308;
  local_308[0] = local_2e8;
  local_2e8[0] = local_2c8;
  if (local_2a8 != (undefined1 *)0x0) {
    local_408 = 0xa00000000;
    local_400 = local_2a8;
  }
  puVar1 = (uint *)(param_1 + 0x1c1b0);
  bVar17 = *(short *)(param_1 + 0x202ac) == 1;
  local_3f0 = local_3f8;
  local_240 = local_248;
  FUN_03688330(auStack_78,bVar17);
  FUN_03685bc0(&local_258,bVar17);
  uVar20 = 0;
  if ((uint)local_258 != 0) {
    uVar20 = 0;
    ppppuVar2 = (undefined8 ****)(PTR_DAT_04bb6a30 + 0x10);
    ppppuVar3 = (undefined8 ****)(PTR_DAT_04bb3768 + 0x10);
    do {
      pppppuVar16 = local_3f8;
      plVar31 = *(long **)(local_250 + (long)(int)uVar20 * 8);
      if ((int)plVar31[5] != 0 && *(uint *)(param_1 + 0x202b0) != uVar20) {
        if ((int)(uint)local_408 < local_408._4_4_) {
          if (local_3f8 != (undefined8 *****)0x0) {
            local_3f8 = (undefined8 *****)*local_3f8;
          }
          __dest = (undefined8 ****)((long)pppppuVar16 + 0x14);
          *(undefined4 *)(pppppuVar16 + 2) = 8;
          *(undefined1 *)((long)pppppuVar16 + 0x1b) = 0;
          *pppppuVar16 = ppppuVar2;
          pppppuVar16[1] = __dest;
          (**(code **)(*plVar31 + 0x18))(plVar31);
          __src = (undefined8 ****)plVar31[1];
          if (__dest != __src) {
            (**(code **)(*plVar31 + 0x18))(plVar31);
            lVar22 = 0;
            do {
              if (*(char *)(plVar31[1] + lVar22) == '\0') goto LAB_02c5b85c;
              lVar25 = plVar31[1] + lVar22;
              if (*(char *)(lVar25 + 1) == '\0') {
                lVar22 = lVar22 + 1;
                goto LAB_02c5b85c;
              }
              if (*(char *)(lVar25 + 2) == '\0') {
                lVar22 = lVar22 + 2;
                goto LAB_02c5b85c;
              }
              lVar22 = lVar22 + 3;
            } while (lVar22 != 0x80001);
            lVar22 = 0;
LAB_02c5b85c:
            iVar27 = (int)lVar22;
            if (*(int *)(pppppuVar16 + 2) <= (int)lVar22) {
              iVar27 = *(int *)(pppppuVar16 + 2) + -1;
            }
            memcpy(__dest,__src,(long)iVar27);
            *(undefined1 *)((long)__dest + (long)iVar27) = 0;
          }
          *pppppuVar16 = ppppuVar3;
          if ((int)(uint)local_408 < local_408._4_4_) {
            *(undefined8 ******)(local_400 + (long)(int)(uint)local_408 * 8) = pppppuVar16;
            local_408 = CONCAT44(local_408._4_4_,(uint)local_408 + 1);
          }
        }
      }
      uVar20 = uVar20 + 1;
    } while (uVar20 < (uint)local_258);
    uVar20 = (uint)local_258;
  }
  lVar22 = 0x1f2;
  local_5240 = (undefined8 *)0x0;
  local_5248 = 0;
  local_5238 = local_5228;
  local_5228[0] = alStack_5208;
  plVar31 = local_5228[0];
  do {
    lVar22 = lVar22 + -2;
    *plVar31 = (long)(plVar31 + 4);
    plVar31[4] = (long)(plVar31 + 8);
    plVar31 = plVar31 + 8;
  } while (lVar22 != 0);
  local_13c8 = 0;
  if (local_13a8 != (undefined8 *)0x0) {
    local_5248 = 0x1f400000000;
    local_5240 = local_13a8;
  }
  puVar35 = PTR_DAT_04bb3768;
  local_5230 = local_5238;
  if (*(short *)(param_1 + 0x202ac) != 1) {
    local_a088._4_4_ = 0;
    local_a080 = (undefined1 *)0x0;
    lVar22 = *(long *)PTR_DAT_04bb4e28;
    local_a078 = local_a068;
    puVar4 = (uint *)(lVar22 + 0x123d0);
    local_a068[0] = alStack_a048;
    lVar25 = 0x1f2;
    plVar31 = local_a068[0];
    do {
      lVar25 = lVar25 + -2;
      *plVar31 = (long)(plVar31 + 4);
      plVar31[4] = (long)(plVar31 + 8);
      plVar31 = plVar31 + 8;
    } while (lVar25 != 0);
    local_6208 = 0;
    if (local_61e8 == (undefined1 *)0x0) {
      uVar20 = 0;
    }
    else {
      uVar20 = 500;
      local_a088._4_4_ = 500;
      local_a080 = local_61e8;
    }
    local_a070 = local_a078;
    if ((uint *)&local_a088 != puVar4) {
      uVar21 = *puVar4;
      local_a088 = (undefined *)((ulong)local_a088._4_4_ << 0x20);
      if ((int)uVar21 <= (int)uVar20) {
        uVar20 = uVar21;
      }
      if ((0 < (int)uVar20) && (local_61e8 != (undefined1 *)0x0)) {
        uVar21 = 0;
        uVar34 = 0;
        plVar31 = (long *)(PTR_DAT_04bb3768 + 0x10);
        plVar29 = (long *)(PTR_DAT_04bb6a30 + 0x10);
        do {
          pplVar14 = local_a078;
          if ((int)uVar21 < (int)local_a088._4_4_) {
            plVar32 = *(long **)(*(long *)(lVar22 + 0x123d8) + uVar34 * 8);
            if (local_a078 != (long **)0x0) {
              local_a078 = (long **)*local_a078;
            }
            __dest_00 = (long *)((long)pplVar14 + 0x14);
            *(undefined4 *)(pplVar14 + 2) = 8;
            *(undefined1 *)((long)pplVar14 + 0x1b) = 0;
            *pplVar14 = plVar29;
            pplVar14[1] = __dest_00;
            (**(code **)(*plVar32 + 0x18))(plVar32);
            __src_00 = (long *)plVar32[1];
            if (__dest_00 != __src_00) {
              (**(code **)(*plVar32 + 0x18))(plVar32);
              lVar25 = 0;
              do {
                if (*(char *)(plVar32[1] + lVar25) == '\0') goto LAB_02c5babc;
                lVar8 = plVar32[1] + lVar25;
                if (*(char *)(lVar8 + 1) == '\0') {
                  lVar25 = lVar25 + 1;
                  goto LAB_02c5babc;
                }
                if (*(char *)(lVar8 + 2) == '\0') {
                  lVar25 = lVar25 + 2;
                  goto LAB_02c5babc;
                }
                lVar25 = lVar25 + 3;
              } while (lVar25 != 0x80001);
              lVar25 = 0;
LAB_02c5babc:
              iVar27 = (int)lVar25;
              if (*(int *)(pplVar14 + 2) <= (int)lVar25) {
                iVar27 = *(int *)(pplVar14 + 2) + -1;
              }
              memcpy(__dest_00,__src_00,(long)iVar27);
              *(undefined1 *)((long)__dest_00 + (long)iVar27) = 0;
            }
            *pplVar14 = plVar31;
            uVar21 = (uint)local_a088;
            if ((int)(uint)local_a088 < (int)local_a088._4_4_) {
              *(long ***)(local_a080 + (long)(int)(uint)local_a088 * 8) = pplVar14;
              uVar21 = (uint)local_a088 + 1;
              local_a088 = (undefined *)CONCAT44(local_a088._4_4_,uVar21);
            }
          }
          uVar34 = uVar34 + 1;
        } while (uVar34 != uVar20);
        puVar35 = PTR_DAT_04bb3768;
        if (uVar21 != 0) {
          uVar21 = (uint)local_258;
          plVar31 = (long *)(local_a098 + 4);
          uVar20 = 0;
          ppuVar5 = (undefined **)(PTR_DAT_04bb6a30 + 0x10);
          ppuVar6 = (undefined **)(PTR_DAT_04bb3768 + 0x10);
          do {
            plVar32 = *(long **)(local_a080 + (long)(int)uVar20 * 8);
            local_a090._0_4_ = (uint)(uint3)local_a090;
            local_a098._0_4_ = 8;
            local_a0a8 = ppuVar5;
            local_a0a0 = plVar31;
            (**(code **)(*plVar32 + 0x18))(plVar32);
            plVar29 = (long *)plVar32[1];
            if (plVar31 != plVar29) {
              (**(code **)(*plVar32 + 0x18))(plVar32);
              lVar22 = 0;
              do {
                if (*(char *)(plVar32[1] + lVar22) == '\0') goto LAB_02c5bc0c;
                lVar25 = plVar32[1] + lVar22;
                if (*(char *)(lVar25 + 1) == '\0') {
                  lVar22 = lVar22 + 1;
                  goto LAB_02c5bc0c;
                }
                if (*(char *)(lVar25 + 2) == '\0') {
                  lVar22 = lVar22 + 2;
                  goto LAB_02c5bc0c;
                }
                lVar22 = lVar22 + 3;
              } while (lVar22 != 0x80001);
              lVar22 = 0;
LAB_02c5bc0c:
              iVar27 = (int)lVar22;
              if ((int)local_a098._0_4_ <= (int)lVar22) {
                iVar27 = local_a098._0_4_ + -1;
              }
              memcpy(plVar31,plVar29,(long)iVar27);
              *(undefined1 *)((long)plVar31 + (long)iVar27) = 0;
            }
            local_a0a8 = ppuVar6;
            if (uVar21 != 0) {
              uVar33 = 0;
              do {
                if (uVar33 < (uint)local_258) {
                  plVar29 = *(long **)(local_250 + (long)(int)uVar33 * 8);
                  if ((int)plVar29[5] != 0) {
LAB_02c5bc90:
                    (**(code **)(*plVar29 + 0x18))(plVar29);
                    (**(code **)(*plVar29 + 0x18))(plVar29);
                    plVar32 = (long *)plVar29[1];
                    (*(code *)local_a0a8[3])(&local_a0a8);
                    if (plVar32 == local_a0a0) goto LAB_02c5bb64;
                    uVar34 = 0;
                    bVar17 = true;
                    do {
                      lVar22 = plVar29[1] + 2 + uVar34;
                      cVar12 = *(char *)(lVar22 + -2);
                      if (cVar12 != *(char *)((long)local_a0a0 + uVar34)) break;
                      if (cVar12 == '\0') {
                        if (bVar17) goto LAB_02c5bb64;
                        break;
                      }
                      cVar12 = *(char *)(lVar22 + -1);
                      if (cVar12 != *(char *)((long)local_a0a0 + uVar34 + 1)) break;
                      if (cVar12 == '\0') goto LAB_02c5bb64;
                      cVar12 = *(char *)(plVar29[1] + 2 + uVar34);
                      if (cVar12 != *(char *)((long)local_a0a0 + uVar34 + 2)) break;
                      if (cVar12 == '\0') goto LAB_02c5bb64;
                      bVar17 = uVar34 < 0x7fffe;
                      uVar34 = uVar34 + 3;
                    } while (uVar34 != 0x80001);
                  }
                }
                else if (_DAT_00000028 != 0) {
                  plVar29 = (long *)0x0;
                  goto LAB_02c5bc90;
                }
                uVar33 = uVar33 + 1;
              } while (uVar33 != uVar21);
            }
            pplVar14 = local_5238;
            if ((int)(uint)local_5248 < local_5248._4_4_) {
              if (local_5238 != (long **)0x0) {
                local_5238 = (long **)*local_5238;
              }
              *(undefined1 *)((long)pplVar14 + 0x1b) = 0;
              plVar29 = (long *)((long)pplVar14 + 0x14);
              *(undefined4 *)(pplVar14 + 2) = 8;
              *pplVar14 = (long *)(PTR_DAT_04bb6a30 + 0x10);
              pplVar14[1] = plVar29;
              (*(code *)local_a0a8[3])(&local_a0a8);
              plVar32 = local_a0a0;
              if (plVar29 != local_a0a0) {
                (*(code *)local_a0a8[3])(&local_a0a8);
                lVar22 = 0;
                do {
                  if (*(char *)((long)local_a0a0 + lVar22) == '\0') goto LAB_02c5be0c;
                  if (*(char *)((long)local_a0a0 + lVar22 + 1) == '\0') {
                    lVar22 = lVar22 + 1;
                    goto LAB_02c5be0c;
                  }
                  if (*(char *)((long)local_a0a0 + lVar22 + 2) == '\0') {
                    lVar22 = lVar22 + 2;
                    goto LAB_02c5be0c;
                  }
                  lVar22 = lVar22 + 3;
                } while (lVar22 != 0x80001);
                lVar22 = 0;
LAB_02c5be0c:
                iVar27 = (int)lVar22;
                if (*(int *)(pplVar14 + 2) <= (int)lVar22) {
                  iVar27 = *(int *)(pplVar14 + 2) + -1;
                }
                memcpy(plVar29,plVar32,(long)iVar27);
                *(undefined1 *)((long)plVar29 + (long)iVar27) = 0;
              }
              *pplVar14 = (long *)(PTR_DAT_04bb3768 + 0x10);
              if ((int)(uint)local_5248 < local_5248._4_4_) {
                local_5240[(int)(uint)local_5248] = pplVar14;
                local_5248 = CONCAT44(local_5248._4_4_,(uint)local_5248 + 1);
              }
            }
LAB_02c5bb64:
            puVar35 = PTR_DAT_04bb3768;
            uVar20 = uVar20 + 1;
          } while (uVar20 < (uint)local_a088);
          if (0 < (int)(uint)local_a088) {
            lVar22 = 0;
            do {
              (**(code **)**(undefined8 **)(local_a080 + lVar22 * 8))();
              lVar22 = lVar22 + 1;
            } while (lVar22 < (int)(uint)local_a088);
          }
        }
      }
    }
    uVar20 = (uint)local_258;
  }
  if ((int)uVar20 < 1) {
    plVar31 = (long *)PTR_PTR_04bb2238;
  }
  else if (*(uint *)(param_1 + 0x202b0) < uVar20) {
    plVar31 = *(long **)(local_250 + (ulong)*(uint *)(param_1 + 0x202b0) * 8);
  }
  else {
    plVar31 = (long *)0x0;
  }
  __dest_01 = (void *)((long)&local_a078 + 4);
  local_a078 = (long **)CONCAT44(local_a078._4_4_,8);
  local_a070._0_4_ = (uint)(uint3)local_a070;
  local_a088 = PTR_DAT_04bb6a30 + 0x10;
  local_a080 = __dest_01;
  (**(code **)(*plVar31 + 0x18))(plVar31);
  __src_01 = (void *)plVar31[1];
  if (__dest_01 != __src_01) {
    (**(code **)(*plVar31 + 0x18))(plVar31);
    lVar22 = 0;
    do {
      if (*(char *)(plVar31[1] + lVar22) == '\0') goto LAB_02c5bf7c;
      lVar25 = plVar31[1] + lVar22;
      if (*(char *)(lVar25 + 1) == '\0') {
        lVar22 = lVar22 + 1;
        goto LAB_02c5bf7c;
      }
      if (*(char *)(lVar25 + 2) == '\0') {
        lVar22 = lVar22 + 2;
        goto LAB_02c5bf7c;
      }
      lVar22 = lVar22 + 3;
    } while (lVar22 != 0x80001);
    lVar22 = 0;
LAB_02c5bf7c:
    iVar27 = (int)lVar22;
    if ((int)local_a078 <= (int)lVar22) {
      iVar27 = (int)local_a078 + -1;
    }
    memcpy(__dest_01,__src_01,(long)iVar27);
    *(undefined1 *)((long)__dest_01 + (long)iVar27) = 0;
  }
  local_a088 = puVar35 + 0x10;
  local_a0a0 = &local_5248;
  local_a0a8 = &PTR_LAB_04ab1f90;
  local_a098 = (undefined1  [8])&local_408;
  local_a090 = &local_a088;
  FUN_0377bd50(&local_a0a8);
  puVar15 = local_5240;
  uVar20 = (uint)local_5248;
  if (*(int *)(param_1 + 0x1c1c0) == 0x2000) {
    uVar34 = local_5248 & 0xffffffff;
    if (1 < (int)(uint)local_5248) {
      uVar23 = (ulong)((uint)local_5248 >> 1);
      do {
        uVar33 = (uint)uVar23;
        uVar21 = uVar33 * 2;
        uVar28 = puVar15[uVar23 - 1 & 0xffffffff];
        if ((int)uVar21 <= (int)uVar20) {
          uVar24 = uVar23 & 0xffffffff;
          do {
            uVar13 = uVar21;
            if ((int)uVar21 < (int)uVar20) {
              uVar30 = (puVar15 + (int)uVar21)[-1];
              uVar9 = puVar15[(int)uVar21];
              uVar18 = FUN_03466f70(uVar30);
              uVar19 = FUN_03466f70(uVar9);
              if (uVar18 < uVar19) {
                uVar33 = 1;
              }
              else if (uVar18 == uVar19) {
                uVar10 = **(undefined4 **)PTR_DAT_04bb3448;
                uVar18 = FUN_037107a0(uVar30,uVar10);
                uVar19 = FUN_037107a0(uVar9,uVar10);
                uVar33 = (uint)(uVar18 < uVar19);
              }
              else {
                uVar33 = 0;
              }
              uVar13 = uVar33 | uVar21;
            }
            uVar30 = puVar15[(int)(uVar13 - 1)];
            uVar18 = FUN_03466f70(uVar28);
            uVar19 = FUN_03466f70(uVar30);
            uVar33 = (uint)uVar24;
            if (uVar19 <= uVar18) {
              if (uVar18 != uVar19) break;
              uVar10 = **(undefined4 **)PTR_DAT_04bb3448;
              uVar18 = FUN_037107a0(uVar28,uVar10);
              uVar19 = FUN_037107a0(uVar30,uVar10);
              if (uVar19 <= uVar18) break;
            }
            uVar21 = uVar13 * 2;
            puVar15[(int)(uVar33 - 1)] = puVar15[(int)(uVar13 - 1)];
            uVar24 = (ulong)uVar13;
            uVar33 = uVar13;
          } while ((int)uVar21 <= (int)uVar20);
        }
        puVar15[(int)(uVar33 - 1)] = uVar28;
        bVar17 = 1 < (long)uVar23;
        uVar23 = uVar23 - 1;
      } while (bVar17);
      uVar23 = uVar34 - 1 & 0xffffffff;
      uVar28 = puVar15[uVar23];
      puVar15[uVar23] = *puVar15;
      uVar23 = uVar34 - 1;
      if (2 < uVar20) {
        do {
          uVar24 = uVar23;
          uVar20 = 2;
          uVar21 = 1;
          do {
            if ((int)uVar20 < (int)uVar24) {
              uVar30 = (puVar15 + (int)uVar20)[-1];
              uVar9 = puVar15[(int)uVar20];
              uVar18 = FUN_03466f70(uVar30);
              uVar19 = FUN_03466f70(uVar9);
              if (uVar18 < uVar19) {
                uVar33 = 1;
              }
              else if (uVar18 == uVar19) {
                uVar10 = **(undefined4 **)PTR_DAT_04bb3448;
                uVar18 = FUN_037107a0(uVar30,uVar10);
                uVar19 = FUN_037107a0(uVar9,uVar10);
                uVar33 = (uint)(uVar18 < uVar19);
              }
              else {
                uVar33 = 0;
              }
              uVar33 = uVar33 | uVar20;
            }
            else {
              uVar33 = uVar20;
            }
            uVar30 = puVar15[(int)(uVar33 - 1)];
            uVar18 = FUN_03466f70(uVar28);
            uVar19 = FUN_03466f70(uVar30);
            if (uVar19 <= uVar18) {
              if (uVar18 == uVar19) {
                uVar10 = **(undefined4 **)PTR_DAT_04bb3448;
                uVar18 = FUN_037107a0(uVar28,uVar10);
                uVar19 = FUN_037107a0(uVar30,uVar10);
                if (uVar18 < uVar19) goto LAB_02c5c400;
              }
              lVar22 = (long)(int)(uVar21 - 1);
              break;
            }
LAB_02c5c400:
            lVar22 = (long)(int)(uVar33 - 1);
            uVar20 = uVar33 << 1;
            puVar15[(int)(uVar21 - 1)] = puVar15[lVar22];
            uVar21 = uVar33;
          } while ((long)(int)uVar20 < (long)uVar34);
          puVar15[lVar22] = uVar28;
          uVar34 = uVar24 - 1 & 0xffffffff;
          uVar28 = puVar15[uVar34];
          puVar15[uVar34] = *puVar15;
          uVar23 = uVar24 - 1;
          uVar34 = uVar24;
        } while (2 < uVar24);
      }
      *puVar15 = uVar28;
    }
  }
  else if ((*(int *)(param_1 + 0x1c1c0) == 0x1000) &&
          (uVar34 = local_5248 & 0xffffffff, 1 < (int)(uint)local_5248)) {
    uVar23 = (ulong)((uint)local_5248 >> 1);
    puVar36 = (undefined8 *)PTR_DAT_04bb3448;
    do {
      uVar33 = (uint)uVar23;
      uVar21 = uVar33 * 2;
      uVar28 = puVar15[uVar23 - 1 & 0xffffffff];
      if ((int)uVar21 <= (int)uVar20) {
        uVar24 = uVar23 & 0xffffffff;
        do {
          uVar33 = uVar21;
          if ((int)uVar21 < (int)uVar20) {
            uVar30 = puVar15[(int)uVar21];
            uVar10 = *(undefined4 *)*puVar36;
            uVar18 = FUN_037107a0((puVar15 + (int)uVar21)[-1],uVar10);
            uVar19 = FUN_037107a0(uVar30,uVar10);
            uVar33 = uVar21 | uVar18 < uVar19;
          }
          uVar30 = puVar15[(int)(uVar33 - 1)];
          uVar10 = *(undefined4 *)*puVar36;
          uVar18 = FUN_037107a0(uVar28,uVar10);
          uVar19 = FUN_037107a0(uVar30,uVar10);
          puVar36 = (undefined8 *)PTR_DAT_04bb3448;
          if (uVar19 <= uVar18) {
            uVar33 = (uint)uVar24;
            break;
          }
          uVar21 = uVar33 * 2;
          puVar15[(int)((uint)uVar24 - 1)] = puVar15[(int)(uVar33 - 1)];
          uVar24 = (ulong)uVar33;
        } while ((int)uVar21 <= (int)uVar20);
      }
      puVar15[(int)(uVar33 - 1)] = uVar28;
      bVar17 = 1 < (long)uVar23;
      uVar23 = uVar23 - 1;
    } while (bVar17);
    uVar23 = uVar34 - 1;
    uVar24 = uVar23 & 0xffffffff;
    uVar28 = puVar15[uVar24];
    puVar15[uVar24] = *puVar15;
    if (2 < uVar20) {
      do {
        uVar24 = uVar23;
        uVar20 = 2;
        uVar21 = 1;
        do {
          uVar33 = uVar20;
          if ((int)uVar20 < (int)uVar24) {
            uVar30 = puVar15[(int)uVar20];
            uVar10 = *(undefined4 *)*puVar36;
            uVar18 = FUN_037107a0((puVar15 + (int)uVar20)[-1],uVar10);
            uVar19 = FUN_037107a0(uVar30,uVar10);
            puVar36 = (undefined8 *)PTR_DAT_04bb3448;
            uVar33 = uVar20 | uVar18 < uVar19;
          }
          uVar30 = puVar15[(int)(uVar33 - 1)];
          uVar10 = *(undefined4 *)*puVar36;
          uVar18 = FUN_037107a0(uVar28,uVar10);
          uVar19 = FUN_037107a0(uVar30,uVar10);
          puVar36 = (undefined8 *)PTR_DAT_04bb3448;
          if (uVar19 <= uVar18) {
            lVar22 = (long)(int)(uVar21 - 1);
            break;
          }
          lVar22 = (long)(int)(uVar33 - 1);
          uVar20 = uVar33 << 1;
          puVar15[(int)(uVar21 - 1)] = puVar15[lVar22];
          uVar21 = uVar33;
        } while ((long)(int)uVar20 < (long)uVar34);
        puVar15[lVar22] = uVar28;
        uVar34 = uVar24 - 1 & 0xffffffff;
        uVar28 = puVar15[uVar34];
        puVar15[uVar34] = *puVar15;
        uVar23 = uVar24 - 1;
        uVar34 = uVar24;
      } while (2 < uVar24);
    }
    *puVar15 = uVar28;
  }
  *puVar1 = 0;
  puVar35 = PTR_DAT_04bb2020;
  if ((int)(uint)local_408 < 1) {
    uVar20 = 0;
  }
  else {
    uVar34 = 0;
    puVar7 = PTR_DAT_04bb2020 + 0x10;
    plVar31 = (long *)(param_1 + 0x20048);
    do {
      if (uVar34 < (uint)local_408) {
        plVar29 = *(long **)(local_400 + uVar34 * 8);
      }
      else {
        plVar29 = (long *)0x0;
      }
      (**(code **)(*plVar29 + 0x18))(plVar29);
      lStack_a0b0 = plVar29[1];
      plVar29 = plVar31;
      if (9 < uVar34) {
        plVar29 = (long *)(param_1 + 0x20048);
      }
      local_a0b8 = puVar7;
      (**(code **)(*plVar29 + 0x10))(plVar29,&local_a0b8);
      if (uVar34 < (local_408 & 0xffffffff)) {
        plVar29 = *(long **)(local_400 + uVar34 * 8);
      }
      else {
        plVar29 = (long *)0x0;
      }
      (**(code **)(*plVar29 + 0x18))(plVar29);
      lStack_a0b0 = plVar29[1];
      local_a0b8 = puVar35 + 0x10;
      plVar29 = (long *)(param_1 + 0x1c1c8) + (ulong)*puVar1 * 4;
      if (499 < *puVar1) {
        plVar29 = (long *)(param_1 + 0x1c1c8);
      }
      (**(code **)(*plVar29 + 0x10))(plVar29,&local_a0b8);
      uVar34 = uVar34 + 1;
      plVar31 = plVar31 + 4;
      uVar20 = *puVar1 + 1;
      *puVar1 = uVar20;
    } while ((int)uVar34 < (int)(uint)local_408);
  }
  if ((uint)local_5248 != 0) {
    uVar21 = 0;
    do {
      plVar31 = (long *)local_5240[(int)uVar21];
      (**(code **)(*plVar31 + 0x18))(plVar31);
      lStack_a0b0 = plVar31[1];
      plVar31 = (long *)(param_1 + 0x1c1c8) + (ulong)*puVar1 * 4;
      if (499 < *puVar1) {
        plVar31 = (long *)(param_1 + 0x1c1c8);
      }
      local_a0b8 = puVar35 + 0x10;
      (**(code **)(*plVar31 + 0x10))(plVar31,&local_a0b8);
      uVar21 = uVar21 + 1;
      uVar20 = *puVar1 + 1;
      *puVar1 = uVar20;
    } while (uVar21 < (uint)local_5248);
  }
  if (**(char **)(param_1 + 0x20270) == '\0') {
    sVar11 = *(short *)(param_1 + 0x202ac);
  }
  else {
    if (uVar20 == 0) {
      iVar27 = 0;
    }
    else {
      uVar34 = 0;
      while( true ) {
        plVar31 = (long *)(param_1 + 0x1c1c8) + uVar34 * 4;
        if (499 < uVar34) {
          plVar31 = (long *)(param_1 + 0x1c1c8);
        }
        (**(code **)(*plVar31 + 0x18))(plVar31);
        (**(code **)(*plVar31 + 0x18))(plVar31);
        lVar25 = plVar31[1];
        (**(code **)(*(long *)(param_1 + 0x20268) + 0x18))(param_1 + 0x20268);
        lVar22 = *(long *)(param_1 + 0x20270);
        if (lVar25 == lVar22) break;
        uVar23 = 0;
        bVar17 = true;
        do {
          lVar25 = plVar31[1] + 2 + uVar23;
          cVar12 = *(char *)(lVar25 + -2);
          if (cVar12 != *(char *)(lVar22 + uVar23)) break;
          if (cVar12 == '\0') {
            if (bVar17) goto LAB_02c5c7bc;
            break;
          }
          cVar12 = *(char *)(lVar25 + -1);
          if (cVar12 != *(char *)(lVar22 + uVar23 + 1)) break;
          if (cVar12 == '\0') goto LAB_02c5c7bc;
          cVar12 = *(char *)(plVar31[1] + 2 + uVar23);
          if (cVar12 != *(char *)(lVar22 + uVar23 + 2)) break;
          if (cVar12 == '\0') goto LAB_02c5c7bc;
          bVar17 = uVar23 < 0x7fffe;
          uVar23 = uVar23 + 3;
        } while (uVar23 != 0x80001);
        uVar34 = uVar34 + 1;
        if (*puVar1 <= uVar34) break;
      }
LAB_02c5c7bc:
      iVar27 = (int)uVar34;
    }
    sVar11 = *(short *)(param_1 + 0x202ac);
    if (sVar11 == 2) {
      iVar27 = iVar27 + 1;
    }
    lVar22 = *(long *)(*(long *)(param_1 + 0x218) + 0x570);
    if (lVar22 == 0) {
      iVar26 = -1;
      uVar20 = 0;
    }
    else {
      iVar26 = *(int *)(lVar22 + 0x2f4) + -1;
      uVar20 = *(uint *)(lVar22 + 0x2e8);
    }
    uVar21 = 0;
    if (uVar20 != 0) {
      uVar21 = ((uVar20 + (iVar27 - iVar26 & (iVar27 - iVar26 >> 0x1f ^ 0xffffffffU))) - 1) / uVar20
      ;
    }
    *(int *)(param_1 + 0x1c1b8) = iVar27;
    *(uint *)(param_1 + 0x1c1bc) = uVar21 * uVar20;
  }
  if (sVar11 == 2) {
    *puVar1 = *puVar1 + 1;
  }
  if (0 < (int)(uint)local_5248) {
    lVar22 = 0;
    do {
      (*(code *)**(undefined8 **)local_5240[lVar22])();
      lVar22 = lVar22 + 1;
    } while (lVar22 < (int)(uint)local_5248);
  }
  if (0 < (int)(uint)local_408) {
    lVar22 = 0;
    do {
      (**(code **)**(undefined8 **)(local_400 + lVar22 * 8))();
      lVar22 = lVar22 + 1;
    } while (lVar22 < (int)(uint)local_408);
  }
  return;
}

