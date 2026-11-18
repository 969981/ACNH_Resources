
void FUN_033600f0(long param_1,uint param_2)

{
  uint *puVar1;
  undefined *puVar2;
  undefined *puVar3;
  uint *puVar4;
  undefined4 *puVar5;
  long lVar6;
  long lVar7;
  uint uVar8;
  short sVar9;
  ushort uVar10;
  ushort uVar11;
  bool bVar12;
  undefined *puVar13;
  undefined *puVar14;
  undefined8 *puVar15;
  long *plVar16;
  uint uVar17;
  long lVar18;
  long lVar19;
  ushort *puVar20;
  uint uVar21;
  ulong uVar22;
  int iVar23;
  long *plVar24;
  ulong uVar25;
  undefined8 *puVar26;
  uint *puVar27;
  undefined *puVar28;
  short *psVar29;
  long lVar30;
  undefined8 uVar31;
  uint uVar32;
  uint uVar33;
  float fVar34;
  float fVar35;
  float fVar36;
  undefined *local_208;
  undefined *puStack_200;
  undefined *local_1f8;
  undefined *puStack_1f0;
  undefined *local_1e8;
  undefined8 local_1e0;
  long *local_1d8 [2];
  undefined *local_1c8;
  ushort *puStack_1c0;
  undefined *local_1b8;
  char *local_1b0;
  undefined4 local_1a8;
  char local_1a4 [15];
  undefined1 local_195;
  undefined *local_190;
  ushort *local_188;
  undefined4 local_180;
  ushort local_17c [55];
  undefined2 local_10e;
  undefined8 local_108;
  undefined8 uStack_100;
  undefined8 local_f8;
  undefined8 uStack_f0;
  undefined8 local_e8;
  undefined8 uStack_e0;
  undefined8 local_d8;
  undefined8 uStack_d0;
  undefined8 local_c8;
  undefined8 uStack_c0;
  undefined8 local_b8;
  undefined8 uStack_b0;
  undefined8 local_a8;
  undefined8 uStack_a0;
  undefined *local_98;
  char *pcStack_90;
  long *local_78;
  
  lVar18 = *(long *)(param_1 + 0xdf8);
  if ((lVar18 != 0) && (uVar32 = *(uint *)(param_1 + 0x1760), 0 < (int)uVar32)) {
    iVar23 = 0;
    if (*(char *)(lVar18 + 0x25d) != '\0') {
      iVar23 = *(int *)(lVar18 + 4);
    }
    if ((((*(int *)(param_1 + 0x1764) == iVar23) && (*(char *)(lVar18 + 9) == '\0')) &&
        (*(char *)(lVar18 + 0x25d) != '\0')) && (*(char *)(lVar18 + 0x238) != '\0')) {
      uVar33 = *(uint *)(param_1 + 0x1768);
      if (0 < (int)uVar33) {
        puVar1 = (uint *)(param_1 + 0xe00);
        uVar22 = 0;
        puVar27 = puVar1;
        do {
          puVar4 = puVar27;
          if (299 < uVar22) {
            puVar4 = puVar1;
          }
          if (*(int *)(param_1 + 0x5d8) < (int)*puVar4) goto LAB_033601cc;
          uVar22 = uVar22 + 1;
          puVar27 = puVar27 + 1;
        } while (uVar33 != uVar22);
        uVar22 = (ulong)uVar33;
LAB_033601cc:
        uVar21 = (uint)uVar22;
        uVar25 = (ulong)(uVar21 - 1);
        if (0 < (int)uVar21) {
          if (300 < uVar21) {
            uVar25 = 0;
          }
          uVar8 = puVar1[uVar25];
          if ((int)uVar21 < (int)uVar33) {
            puVar2 = PTR_DAT_04bc8e68 + 0x10;
            puVar27 = puVar1 + (uVar22 & 0xffffffff);
            if (299 < uVar21) {
              puVar27 = puVar1;
            }
            uVar32 = *puVar27;
            pcStack_90 = "L_TransWord_00";
            local_98 = puVar2;
            lVar18 = FUN_032d1ea4(*(undefined8 *)(param_1 + 0x2f0),&local_98);
            local_108 = *(undefined8 *)(lVar18 + 0x18);
            local_188 = (ushort *)&DAT_040c1e5f;
            local_190 = puVar2;
            plVar16 = (long *)FUN_0328b6d0(&local_108,&local_190,0);
            local_1d8[0] = plVar16;
            if ((int)uVar8 < (int)uVar32) {
              puVar2 = PTR_DAT_04bc96b8 + 0x10;
              puVar3 = PTR_DAT_04bc8e78 + 0x10;
              uVar33 = uVar8;
LAB_0336033c:
              psVar29 = (short *)&local_108;
              puVar5 = (undefined4 *)(param_1 + 0x12b0) + uVar33;
              if (299 < uVar33) {
                puVar5 = (undefined4 *)(param_1 + 0x12b0);
              }
              local_a8 = 0;
              uStack_a0 = 0;
              local_b8 = 0;
              uStack_b0 = 0;
              local_c8 = 0;
              uStack_c0 = 0;
              local_d8 = 0;
              uStack_d0 = 0;
              local_e8 = 0;
              uStack_e0 = 0;
              local_f8 = 0;
              uStack_f0 = 0;
              local_108 = 0;
              uStack_100 = 0;
              FUN_032edd20(*(undefined8 *)(param_1 + 0xdf8),&local_108,0x38,*puVar5);
              do {
                sVar9 = *psVar29;
                if (sVar9 == 0xe) {
                  psVar29 = (short *)((long)(psVar29 + 3) + ((ulong)(ushort)psVar29[3] & 0xfffe));
                }
                else if (sVar9 == 0) goto code_r0x033603ac;
                psVar29 = psVar29 + (ulong)(sVar9 == 0xf) * 2 + 1;
              } while( true );
            }
          }
LAB_033604ec:
          puVar14 = PTR_DAT_04bc96b8;
          puVar13 = PTR_DAT_04bc8e78;
          puVar28 = PTR_DAT_04bc8e68;
          *(undefined4 *)(param_1 + 0x176c) = 0;
          fVar34 = *(float *)(param_1 + 0x1774);
          uVar22 = 0;
          lVar18 = param_1 + 0x300;
          puVar2 = PTR_DAT_04bb2ab0 + 0x10;
          puVar3 = puVar28 + 0x10;
LAB_0336058c:
          local_1a8 = 0x10;
          local_195 = 0;
          local_1a4[0] = '\0';
          local_1b8 = puVar2;
          local_1b0 = local_1a4;
          FUN_038d1270(&local_1b8,"L_TransWord_%02d",uVar22 & 0xffffffff);
          lVar30 = *(long *)(*(long *)(param_1 + 0x2f0) + 0xf0);
          local_188 = (ushort *)PTR_DAT_04bb2120;
          if (local_1b0 != (char *)0x0) {
            local_188 = (ushort *)local_1b0;
          }
          if (*(char *)local_188 != '\0') {
            local_190 = puVar28 + 0x10;
            lVar30 = FUN_032cb8e0(&local_108,&local_190,lVar30);
            if (lVar30 == 0) {
              lVar30 = 0;
            }
            else {
              lVar30 = *(long *)(lVar30 + 0xe8);
            }
          }
          local_108 = *(undefined8 *)(lVar30 + 0x18);
          local_188 = (ushort *)&DAT_040c1e5f;
          local_190 = puVar3;
          plVar16 = (long *)FUN_0328b6d0(&local_108,&local_190,0);
          uVar33 = uVar8 + (int)uVar22;
          lVar19 = *(long *)(lVar30 + 0x18);
          local_78 = plVar16;
          if ((int)uVar33 < (int)uVar32) {
            *(byte *)(lVar19 + 0x58) = *(byte *)(lVar19 + 0x58) | 1;
            if ((plVar16[3] != 0) && (lVar19 = FUN_032cbf00(), lVar19 != 0)) {
              *(undefined1 *)(lVar19 + 0xd4) = 0;
            }
            psVar29 = (short *)&local_108;
            puVar5 = (undefined4 *)(param_1 + 0x12b0) + uVar33;
            if (299 < uVar33) {
              puVar5 = (undefined4 *)(param_1 + 0x12b0);
            }
            FUN_032edd20(*(undefined8 *)(param_1 + 0xdf8),&local_108,0x38,*puVar5);
            puVar28 = PTR_DAT_04bc8e68;
            do {
              sVar9 = *psVar29;
              if (sVar9 == 0xe) {
                psVar29 = (short *)((long)(psVar29 + 3) + ((ulong)(ushort)psVar29[3] & 0xfffe));
              }
              else if (sVar9 == 0) goto code_r0x033606cc;
              psVar29 = psVar29 + (ulong)(sVar9 == 0xf) * 2 + 1;
            } while( true );
          }
          *(byte *)(lVar19 + 0x58) = *(byte *)(lVar19 + 0x58) & 0xfe;
          lVar30 = *(long *)(lVar18 + uVar22 * 8);
          if (lVar30 != 0) {
            FUN_0328a0b0(lVar30,6,1,0);
            if (((*(ushort *)(lVar30 + 0x578) >> 5 & 1) == 0) ||
               ((*(ushort *)(lVar30 + 0x578) >> 4 & 1) == 0)) {
              uVar10 = *(ushort *)(lVar30 + 0x250) | 0x200;
            }
            else {
              uVar10 = *(ushort *)(lVar30 + 0x250) & 0xfdff;
            }
            local_190 = (undefined *)CONCAT44(local_190._4_4_,9);
            *(ushort *)(lVar30 + 0x250) = uVar10;
            FUN_0328a2b0(lVar30,0);
            lVar30 = *(long *)(lVar30 + 0x428);
            if ((lVar30 != 0) && (plVar16 = (long *)(lVar30 + 8), *plVar16 != 0)) {
              lVar19 = *(long *)(*(long *)(param_1 + 0x3a8) + 0x18);
              if (*(long *)(lVar19 + 0x18) == lVar30) {
                plVar24 = *(long **)(lVar19 + 0x138);
                *(undefined8 *)(lVar19 + 0x18) = 0;
                if (plVar24 != (long *)0x0) {
                  (**(code **)(*plVar24 + 0x20))(plVar24,lVar30,0);
                }
                *(long *)(lVar19 + 0x48) = lVar19 + 0x28;
                *(long *)(lVar19 + 0x50) = lVar19 + 0x28;
LAB_03360abc:
                *(undefined8 *)(lVar19 + 0x60) = 0;
              }
              else if (*(long *)(lVar19 + 0x60) == lVar30) goto LAB_03360abc;
              lVar6 = *(long *)(lVar30 + 0x10);
              lVar7 = *(long *)(lVar30 + 0x18);
              *(undefined8 *)(lVar30 + 0x18) = 0;
              *plVar16 = 0;
              *(undefined8 *)(lVar30 + 0x10) = 0;
              if (*(long **)(lVar19 + 0x58) == plVar16) {
                *(long *)(lVar19 + 0x58) = lVar7;
              }
              if (lVar7 != 0) {
                *(long *)(lVar7 + 8) = lVar6;
              }
              if (lVar6 != 0) {
                *(long *)(lVar6 + 0x10) = lVar7;
              }
            }
          }
          goto LAB_03360580;
        }
      }
    }
  }
  return;
code_r0x033603ac:
  uVar21 = 0;
  puVar20 = (ushort *)&local_108;
  do {
    uVar10 = *puVar20;
    if (uVar10 == 0xe) {
      uVar11 = puVar20[3] >> 1;
      puVar20 = puVar20 + 3 + uVar11;
      uVar21 = uVar21 + uVar11 + 3;
    }
    else if (uVar10 == 0) break;
    uVar17 = uVar21 + 2;
    if (uVar10 != 0xf) {
      uVar17 = uVar21;
    }
    uVar21 = uVar17 + 1;
    puVar20 = puVar20 + (ulong)(uVar10 == 0xf) * 2 + 1;
  } while( true );
  if (0 < (int)uVar21) {
    uVar22 = 0;
    do {
      uVar10 = local_17c[uVar22 + 0x3a];
      if (uVar10 == 0) break;
      lVar18 = 0;
      bVar12 = false;
      do {
        if (*(ushort *)((long)&DAT_0418dd00 + lVar18) <= uVar10) {
          bVar12 = (bool)(uVar10 <= *(ushort *)((long)&DAT_0418dd02 + lVar18) | bVar12);
        }
        if (*(ushort *)((long)&DAT_0418dd04 + lVar18) <= uVar10) {
          bVar12 = (bool)(uVar10 <= *(ushort *)((long)&DAT_0418dd06 + lVar18) | bVar12);
        }
        lVar18 = lVar18 + 8;
      } while (lVar18 != 0x398);
      if (!bVar12) goto LAB_03360330;
      uVar22 = uVar22 + 1;
    } while (uVar22 != uVar21);
  }
  local_10e = 0;
  local_180 = 0x38;
  local_17c[0] = 0;
  local_190 = puVar2;
  local_188 = local_17c;
  FUN_038d1340(&local_190,&DAT_04169b80,&local_108);
  FUN_032d67f0(local_1d8,&local_190);
  (**(code **)(*plVar16 + 0x120))(&local_208,plVar16);
  local_1b0 = PTR_DAT_04bb2da0;
  if ((undefined *)local_1d8[0][0x1b] != (undefined *)0x0) {
    local_1b0 = (undefined *)local_1d8[0][0x1b];
  }
  local_1b8 = puVar3;
  fVar34 = (float)FUN_032d8d10(local_1d8,&local_1b8);
  if (fVar34 != *(float *)(local_1d8[0] + 10)) {
    uVar17 = (uint)fVar34;
    fVar35 = (float)(int)fVar34;
    uVar21 = -(uVar17 & 1);
    if (-1 < (int)uVar17) {
      uVar21 = uVar17 & 1;
    }
    if (fVar34 != fVar35 || uVar21 != 0) {
      iVar23 = 2;
      if ((int)uVar17 < 0) {
        iVar23 = -2;
      }
      fVar35 = (float)(int)((uVar17 - uVar21) + iVar23);
    }
    *(float *)(local_1d8[0] + 10) = fVar35;
    *(byte *)(local_1d8[0] + 0xb) = *(byte *)(local_1d8[0] + 0xb) | 0x10;
  }
LAB_03360330:
  uVar33 = uVar33 + 1;
  if (uVar33 == uVar32) goto LAB_033604ec;
  goto LAB_0336033c;
code_r0x033606cc:
  uVar21 = 0;
  puVar20 = (ushort *)&local_108;
  do {
    uVar10 = *puVar20;
    if (uVar10 == 0xe) {
      uVar11 = puVar20[3] >> 1;
      puVar20 = puVar20 + 3 + uVar11;
      uVar21 = uVar21 + uVar11 + 3;
    }
    else if (uVar10 == 0) break;
    uVar17 = uVar21 + 2;
    if (uVar10 != 0xf) {
      uVar17 = uVar21;
    }
    uVar21 = uVar17 + 1;
    puVar20 = puVar20 + (ulong)(uVar10 == 0xf) * 2 + 1;
  } while( true );
  if (0 < (int)uVar21) {
    uVar25 = 0;
    do {
      uVar10 = local_17c[uVar25 + 0x3a];
      if (uVar10 == 0) break;
      lVar19 = 0;
      bVar12 = false;
      do {
        if (*(ushort *)((long)&DAT_0418dd00 + lVar19) <= uVar10) {
          bVar12 = (bool)(uVar10 <= *(ushort *)((long)&DAT_0418dd02 + lVar19) | bVar12);
        }
        if (*(ushort *)((long)&DAT_0418dd04 + lVar19) <= uVar10) {
          bVar12 = (bool)(uVar10 <= *(ushort *)((long)&DAT_0418dd06 + lVar19) | bVar12);
        }
        lVar19 = lVar19 + 8;
      } while (lVar19 != 0x398);
      if (!bVar12) goto LAB_03360580;
      uVar25 = uVar25 + 1;
    } while (uVar25 != uVar21);
  }
  local_180 = 0x38;
  local_10e = 0;
  local_17c[0] = 0;
  local_190 = puVar14 + 0x10;
  local_188 = local_17c;
  FUN_038d1340(&local_190,&DAT_04169b80,&local_108);
  puStack_1c0 = local_188;
  local_1d8[0] = *(long **)(*(long *)(*(long *)(lVar18 + uVar22 * 8) + 0x20) + 0x18);
  local_208 = puVar28 + 0x10;
  puStack_200 = &DAT_040c1e5f;
  local_1c8 = puVar13 + 0x10;
  local_208 = (undefined *)FUN_0328b6d0(local_1d8,&local_208,0);
  FUN_032d67f0(&local_208,&local_1c8);
  (**(code **)(*plVar16 + 0x120))(local_1d8,plVar16);
  puStack_200 = PTR_DAT_04bb2da0;
  if ((undefined *)plVar16[0x1b] != (undefined *)0x0) {
    puStack_200 = (undefined *)plVar16[0x1b];
  }
  local_208 = puVar13 + 0x10;
  fVar35 = (float)FUN_032d8d10(&local_78,&local_208);
  if (fVar35 != *(float *)(plVar16 + 10)) {
    uVar17 = (uint)fVar35;
    fVar36 = (float)(int)fVar35;
    uVar21 = -(uVar17 & 1);
    if (-1 < (int)uVar17) {
      uVar21 = uVar17 & 1;
    }
    if ((fVar35 != fVar36) || (uVar21 != 0)) {
      iVar23 = 2;
      if ((int)uVar17 < 0) {
        iVar23 = -2;
      }
      fVar36 = (float)(int)((uVar17 - uVar21) + iVar23);
    }
    *(float *)(plVar16 + 10) = fVar36;
    *(byte *)(plVar16 + 0xb) = *(byte *)(plVar16 + 0xb) | 0x10;
  }
  local_1e8 = PTR_s_N_BtnFocusKey_04b202a8;
  fVar35 = *(float *)(param_1 + 6000) + (float)plVar16[10];
  local_1e0 = CONCAT44((int)((ulong)plVar16[10] >> 0x20),fVar35);
  local_1f8 = PTR_s_B_Hit_04b20298;
  puStack_1f0 = PTR_s_P_BtnBase_04b202a0;
  local_208 = PTR_s_P_BtnDecideKey_04b20288;
  puStack_200 = PTR_s_P_BtnTouch_04b20290;
  FUN_0328acc0(*(undefined8 *)(lVar18 + uVar22 * 8),&local_208,5,&local_1e0);
  fVar35 = fVar35 * 0.5;
  lVar30 = *(long *)(lVar30 + 0x18);
  *(undefined8 *)(lVar30 + 0x34) = 0;
  fVar34 = fVar34 + fVar35;
  *(byte *)(lVar30 + 0x58) = *(byte *)(lVar30 + 0x58) | 0x10;
  *(float *)(lVar30 + 0x30) = fVar34;
  lVar30 = *(long *)(lVar18 + uVar22 * 8);
  if (lVar30 != 0) {
    FUN_0328a0b0(lVar30,6,1,1);
    local_208 = (undefined *)CONCAT44(local_208._4_4_,9);
    *(ushort *)(lVar30 + 0x250) = *(ushort *)(lVar30 + 0x250) & 0xfdff;
    FUN_0328a2b0(lVar30,1);
    lVar30 = *(long *)(lVar30 + 0x428);
    if ((lVar30 != 0) && (plVar16 = (long *)(lVar30 + 8), *plVar16 == 0)) {
      plVar24 = (long *)(*(long *)(*(long *)(param_1 + 0x3a8) + 0x18) + 0x58);
      puVar15 = (undefined8 *)*plVar24;
      if ((undefined8 *)*plVar24 == (undefined8 *)0x0) {
        *plVar24 = (long)plVar16;
      }
      else {
        do {
          puVar26 = puVar15;
          puVar15 = (undefined8 *)puVar26[2];
        } while ((undefined8 *)puVar26[2] != (undefined8 *)0x0);
        puVar26[2] = plVar16;
        *(undefined8 **)(lVar30 + 0x10) = puVar26;
        plVar24 = (long *)*puVar26;
      }
      *plVar16 = (long)plVar24;
    }
  }
  if ((*(uint *)(param_1 + 0x5d8) == uVar33) && ((param_2 & 1) != 0)) {
    lVar19 = *(long *)(*(long *)(param_1 + 0x3a8) + 0x18);
    uVar31 = *(undefined8 *)(*(long *)(lVar18 + uVar22 * 8) + 0x428);
    for (lVar30 = *(long *)(lVar19 + 0x58); lVar30 != 0; lVar30 = *(long *)(lVar30 + 0x10)) {
      local_208 = (undefined *)((ulong)local_208 & 0xffffffff00000000);
      if ((*(byte *)(lVar30 + 0x58) & 1) != 0) {
        (**(code **)(*(long *)(lVar30 + -8) + 0x30))();
      }
    }
    FUN_03290a60(lVar19,uVar31,0,0);
    *(long *)(lVar19 + 0x48) = lVar19 + 0x28;
    *(long *)(lVar19 + 0x50) = lVar19 + 0x28;
  }
  fVar34 = fVar35 + fVar34;
  *(int *)(param_1 + 0x176c) = *(int *)(param_1 + 0x176c) + 1;
  puVar28 = PTR_DAT_04bc8e68;
LAB_03360580:
  uVar22 = uVar22 + 1;
  if (uVar22 == 0x13) {
    if (((0 < *(int *)(param_1 + 0x176c)) && ((param_2 & 1) == 0)) &&
       (uVar22 = FUN_03360dd0(param_1), (uVar22 & 1) != 0)) {
      FUN_03290ce0(*(undefined8 *)(*(long *)(param_1 + 0x3a8) + 0x18),
                   *(undefined8 *)(*(long *)(param_1 + 0x300) + 0x428),0,0);
    }
    if (*(long **)(param_1 + 0xdf0) == (long *)0x0) {
      return;
    }
    (**(code **)(**(long **)(param_1 + 0xdf0) + 0x20))();
    return;
  }
  goto LAB_0336058c;
}

