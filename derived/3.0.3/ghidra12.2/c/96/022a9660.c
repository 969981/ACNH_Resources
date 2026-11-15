
/* WARNING: Type propagation algorithm not settling */

undefined8
FUN_022a9660(long param_1,int *param_2,long param_3,uint param_4,uint param_5,uint param_6,
            uint param_7)

{
  byte *pbVar1;
  undefined **ppuVar2;
  undefined *puVar3;
  uint uVar4;
  uint uVar5;
  int *piVar6;
  int *piVar7;
  int iVar8;
  int iVar9;
  int iVar10;
  int iVar11;
  float *pfVar12;
  long lVar13;
  ulong uVar14;
  int iVar15;
  long lVar16;
  ulong uVar17;
  long lVar18;
  byte bVar19;
  undefined8 *puVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  undefined4 local_154;
  byte local_150 [4];
  undefined4 local_14c;
  byte local_148 [4];
  int local_144;
  int local_140;
  int local_13c;
  undefined *local_138;
  undefined *local_130;
  int local_128;
  int iStack_124;
  undefined *local_120;
  int local_118;
  int iStack_114;
  undefined4 local_110;
  byte local_10c [4];
  int local_108 [2];
  undefined **local_100;
  undefined8 local_f8;
  undefined **local_f0;
  undefined8 local_e8;
  undefined *local_e0;
  undefined4 local_d8;
  undefined4 local_d4;
  byte local_d0;
  undefined *local_c8;
  undefined *puStack_c0;
  uint local_b8;
  uint uStack_b4;
  undefined *local_b0;
  uint local_a8;
  uint uStack_a4;
  byte local_9c [4];
  undefined **local_98;
  undefined8 local_90;
  undefined *puStack_88;
  int local_80;
  int local_7c;
  
  pbVar1 = (byte *)(param_1 + 0x10);
  pfVar12 = (float *)FUN_0251b3b0(pbVar1,0);
  if ((pfVar12 == (float *)0x0) || (lVar13 = FUN_0251bdc4(pbVar1,0), lVar13 == 0)) {
    if (param_2 == (int *)0x0) {
      return 0;
    }
    *param_2 = -1;
    return 0;
  }
  iVar11 = *(int *)(lVar13 + 4);
  local_d8 = 0;
  local_c8 = PTR_DAT_04bbc1a0 + 0x10;
  puStack_c0 = PTR_DAT_04bb2010 + 0x10;
  local_a8 = (int)((float)(int)*pfVar12 / 5.0) - (uint)(*pfVar12 < 0.0);
  uVar4 = local_a8 & 0xfffffffe;
  local_a8 = local_a8 | 1;
  uStack_a4 = (int)((float)(int)pfVar12[2] / 5.0) - (uint)(pfVar12[2] < 0.0);
  uVar5 = uStack_a4 & 0xfffffffe;
  uStack_a4 = uStack_a4 | 1;
  lVar16 = *(long *)PTR_DAT_04bb2720;
  local_b8 = uVar4;
  uStack_b4 = uVar5;
  local_b0 = puStack_c0;
  if (lVar16 == 0) {
    puVar20 = &DAT_055c04a0;
  }
  else {
    puVar20 = &DAT_055c04a0;
    if (*(long *)(lVar16 + 0x330) != 0) {
      puVar20 = (undefined8 *)
                (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                          (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar16 + 0x338));
      iVar8 = FUN_006bd550(*puVar20,0);
      puVar20 = (undefined8 *)PTR_DAT_04bc3a80;
      if (iVar8 != 0x758f7eaf) {
        puVar20 = &DAT_055c04a0;
      }
    }
  }
  local_d4 = *(undefined4 *)(puVar20 + 7);
  local_d0 = FUN_017baf44();
  local_d0 = local_d0 & 1;
  local_e0 = PTR_DAT_04bb6268 + 0x10;
  if (((DAT_0547a498 & 1) == 0) && (iVar8 = __cxa_guard_acquire(&DAT_0547a498), iVar8 != 0)) {
    DAT_0547a438 = 0x700000000;
    DAT_0547a440 = 0x100000001;
    DAT_0547a448 = 0x200000000;
    DAT_0547a450 = 0x100000002;
    DAT_0547a458 = 0x300000003;
    DAT_0547a460 = 0x400000002;
    DAT_0547a468 = 0x300000004;
    DAT_0547a470 = 0x500000005;
    DAT_0547a478 = 0x600000004;
    DAT_0547a480 = 0x500000006;
    DAT_0547a488 = 0x700000007;
    DAT_0547a490 = 6;
    __cxa_guard_release(&DAT_0547a498);
  }
  uVar17 = (ulong)(iVar11 + 0x10000000U >> 0x1d);
  if (param_2 == (int *)0x0) {
    iVar8 = 0;
    iVar11 = 3;
    if ((param_6 & 1) == 0) {
      iVar11 = 1;
    }
    if ((param_4 & 1) == 0) {
      iVar11 = 3;
    }
LAB_022a9a14:
    lVar16 = (long)iVar8;
    ppuVar2 = (undefined **)(PTR_DAT_04bb2010 + 0x10);
    puVar3 = PTR_DAT_04bbc1a0 + 0x10;
    do {
      local_f8 = 0;
      lVar18 = (long)*(int *)((long)&DAT_0547a438 + lVar16 * 4 + uVar17 * 0xc) * 4;
      local_e8 = CONCAT44(*(int *)(&DAT_04058140 + lVar18) + uVar5,
                          *(int *)(&DAT_04057c40 + lVar18) + uVar4);
      local_100 = ppuVar2;
      local_f0 = ppuVar2;
      FUN_01a5033c(local_108,&local_e0,0,&local_f0,&local_100);
      iVar8 = FUN_0277d6c4(local_108);
      if (iVar8 == 0xea79) {
        bVar19 = *pbVar1;
        if (7 < bVar19) {
          bVar19 = 0xff;
        }
        local_98 = (undefined **)CONCAT71(local_98._1_7_,bVar19);
        local_130 = (undefined *)CONCAT44(local_130._4_4_,(float)local_f8._4_4_ * 5.0 + 5.0);
        local_138 = (undefined *)CONCAT44(local_138._4_4_,(float)(int)local_f8 * 5.0 + 5.0);
        lVar18 = FUN_0251b3b0(&local_98,0);
        if ((lVar18 != 0) && (*(long *)PTR_DAT_04bb27c8 != 0)) {
          fVar21 = (float)FUN_0093a950(*(long *)PTR_DAT_04bb27c8 + 0x28,&local_138,0);
          fVar21 = fVar21 - *(float *)(lVar18 + 4);
          if ((fVar21 <= 5.0) && (-5.0 <= fVar21)) {
            if (param_3 != 0) {
              *(int *)(param_3 + 8) = (int)local_f8;
              *(int *)(param_3 + 0xc) = local_f8._4_4_;
            }
            local_110 = 0;
            local_10c[0] = *pbVar1;
            if (7 < local_10c[0]) {
              local_10c[0] = 0xff;
            }
            uVar14 = FUN_022a6bb0(pfVar12,&puStack_c0,&local_100,0,local_10c,&local_110);
            if ((uVar14 & 1) != 0) {
              if ((param_7 & 1) == 0) {
LAB_022a9c60:
                if (((param_4 & 1) == 0) ||
                   (uVar14 = FUN_022a7140(&local_100,param_5 & 1,param_6 & 1), (uVar14 & 1) != 0)) {
                  if (param_2 == (int *)0x0) {
                    return 1;
                  }
                  *param_2 = (int)lVar16;
                  return 1;
                }
              }
              else {
                local_130 = PTR_DAT_04bb2010 + 0x10;
                iVar9 = (int)local_f8;
                local_118 = (int)local_f8 + 1;
                iStack_114 = local_f8._4_4_ + 1;
                iVar8 = local_f8._4_4_ + 2;
                local_128 = (int)local_f8;
                iStack_124 = local_f8._4_4_;
                local_80 = (int)local_f8;
                local_7c = local_f8._4_4_;
                local_138 = puVar3;
                local_120 = local_130;
                local_98 = &local_130;
                local_90 = &local_120;
                puStack_88 = local_130;
                do {
                  uVar14 = FUN_00976070(&puStack_88);
                  if ((uVar14 & 1) == 0) goto LAB_022a9c60;
                  if (local_80 < *(int *)(local_90 + 1)) {
                    local_80 = local_80 + 1;
                  }
                  else {
                    local_7c = local_7c + 1;
                    local_80 = *(int *)(local_98 + 1);
                  }
                } while (iVar9 != local_80 || iVar8 != local_7c);
              }
            }
          }
        }
      }
      lVar16 = lVar16 + 1;
    } while (iVar11 != (int)lVar16);
  }
  else {
    iVar8 = *param_2;
    iVar11 = 3;
    if ((param_6 & 1) == 0) {
      iVar11 = 1;
    }
    if ((param_4 & 1) == 0) {
      iVar11 = 3;
    }
    if (iVar8 < iVar11) goto LAB_022a9a14;
  }
  if (((param_4 & (param_6 ^ 0xffffffff) & 1) == 0) && ((param_7 & 1) == 0)) goto LAB_022a986c;
  iVar8 = -1;
  local_108[0] = -1;
  local_140 = -1;
  local_13c = -1;
  local_144 = -1;
  ppuVar2 = (undefined **)(PTR_DAT_04bb2010 + 0x10);
  lVar16 = (long)*(int *)((long)&DAT_0547a438 + uVar17 * 0xc + 4) * 4;
  local_e8 = 0;
  local_90 = (undefined **)
             CONCAT44(*(int *)(&DAT_04058140 + lVar16) + uVar5,
                      *(int *)(&DAT_04057c40 + lVar16) + uVar4);
  local_f0 = ppuVar2;
  local_98 = ppuVar2;
  FUN_01a5033c(&local_100,&local_e0,0,&local_98,&local_f0);
  iVar9 = FUN_0277d6c4(&local_100);
  iVar11 = -1;
  if (iVar9 == 0xea79) {
    local_9c[0] = *pbVar1;
    if (7 < local_9c[0]) {
      local_9c[0] = 0xff;
    }
    local_130 = (undefined *)CONCAT44(local_130._4_4_,(float)local_e8._4_4_ * 5.0 + 5.0);
    local_138 = (undefined *)CONCAT44(local_138._4_4_,(float)(int)local_e8 * 5.0 + 5.0);
    lVar16 = FUN_0251b3b0(local_9c,0);
    if ((lVar16 != 0) && (*(long *)PTR_DAT_04bb27c8 != 0)) {
      fVar21 = (float)FUN_0093a950(*(long *)PTR_DAT_04bb27c8 + 0x28,&local_138,0);
      fVar21 = fVar21 - *(float *)(lVar16 + 4);
      if (fVar21 <= 5.0) {
        iVar11 = -1;
        if (fVar21 < -5.0) goto LAB_022a9cf8;
        if ((param_7 & 1) == 0) {
          uVar14 = FUN_022a7140(&local_f0,param_5 & 1,param_6 & 1);
          if ((uVar14 & 1) != 0) goto LAB_022a9cb0;
        }
        else {
          local_138 = PTR_DAT_04bbc1a0 + 0x10;
          local_130 = PTR_DAT_04bb2010 + 0x10;
          local_128 = (int)local_e8;
          iStack_124 = local_e8._4_4_;
          local_118 = (int)local_e8 + 1;
          iStack_114 = local_e8._4_4_ + 1;
          local_120 = local_130;
          uVar14 = FUN_00976130(&local_138);
          if ((uVar14 & 1) == 0) {
LAB_022a9cb0:
            local_148[0] = *pbVar1;
            local_14c = 0;
            if (7 < local_148[0]) {
              local_148[0] = 0xff;
            }
            uVar14 = FUN_022a6bb0(pfVar12,&puStack_c0,&local_f0,0,local_148,&local_14c);
            if ((uVar14 & 1) != 0) {
              local_108[0] = (int)local_90;
              local_13c = local_90._4_4_;
              iVar11 = (int)local_90;
              iVar8 = local_90._4_4_;
              goto LAB_022a9cf8;
            }
          }
        }
      }
    }
    iVar11 = -1;
  }
LAB_022a9cf8:
  local_e8 = 0;
  lVar16 = (long)*(int *)((long)&DAT_0547a440 + uVar17 * 0xc) * 4;
  local_90 = (undefined **)
             CONCAT44(*(int *)(&DAT_04058140 + lVar16) + uVar5,
                      *(int *)(&DAT_04057c40 + lVar16) + uVar4);
  local_f0 = ppuVar2;
  local_98 = ppuVar2;
  FUN_01a5033c(&local_100,&local_e0,0,&local_98,&local_f0);
  iVar10 = FUN_0277d6c4(&local_100);
  iVar9 = -1;
  iVar15 = -1;
  if (iVar10 == 0xea79) {
    local_9c[0] = *pbVar1;
    if (7 < local_9c[0]) {
      local_9c[0] = 0xff;
    }
    local_130 = (undefined *)CONCAT44(local_130._4_4_,(float)local_e8._4_4_ * 5.0 + 5.0);
    local_138 = (undefined *)CONCAT44(local_138._4_4_,(float)(int)local_e8 * 5.0 + 5.0);
    lVar16 = FUN_0251b3b0(local_9c,0);
    if ((lVar16 != 0) && (*(long *)PTR_DAT_04bb27c8 != 0)) {
      fVar21 = (float)FUN_0093a950(*(long *)PTR_DAT_04bb27c8 + 0x28,&local_138,0);
      fVar21 = fVar21 - *(float *)(lVar16 + 4);
      if (fVar21 <= 5.0) {
        iVar9 = -1;
        iVar15 = -1;
        if (fVar21 < -5.0) goto LAB_022a9eb4;
        if ((param_7 & 1) == 0) {
          uVar17 = FUN_022a7140(&local_f0,param_5 & 1,param_6 & 1);
          if ((uVar17 & 1) != 0) goto LAB_022a9e6c;
        }
        else {
          local_138 = PTR_DAT_04bbc1a0 + 0x10;
          local_130 = PTR_DAT_04bb2010 + 0x10;
          local_128 = (int)local_e8;
          iStack_124 = local_e8._4_4_;
          local_118 = (int)local_e8 + 1;
          iStack_114 = local_e8._4_4_ + 1;
          local_120 = local_130;
          uVar17 = FUN_00976130(&local_138);
          if ((uVar17 & 1) == 0) {
LAB_022a9e6c:
            local_150[0] = *pbVar1;
            local_154 = 0;
            if (7 < local_150[0]) {
              local_150[0] = 0xff;
            }
            uVar17 = FUN_022a6bb0(pfVar12,&puStack_c0,&local_f0,0,local_150,&local_154);
            if ((uVar17 & 1) != 0) {
              local_144 = local_90._4_4_;
              local_140 = (int)local_90;
              iVar9 = (int)local_90;
              iVar15 = local_90._4_4_;
              goto LAB_022a9eb4;
            }
          }
        }
      }
    }
    iVar9 = -1;
    iVar15 = -1;
  }
LAB_022a9eb4:
  if (iVar11 != -1) {
    if (iVar9 == -1) {
      if (param_2 != (int *)0x0) {
        *param_2 = -1;
      }
      if (param_3 != 0) {
        *(int *)(param_3 + 8) = iVar11;
        *(int *)(param_3 + 0xc) = iVar8;
      }
    }
    else if (param_2 != (int *)0x0) {
      iVar11 = FUN_006f0400(((float)iVar11 * 5.0 + 2.5) - *pfVar12,
                            ((float)iVar8 * 5.0 + 2.5) - pfVar12[2]);
      iVar8 = FUN_006f0400(((float)iVar9 * 5.0 + 2.5) - *pfVar12,
                           ((float)iVar15 * 5.0 + 2.5) - pfVar12[2]);
      fVar22 = (float)(uint)(iVar11 - *(int *)(lVar13 + 4)) * 8.381903e-08;
      fVar21 = fVar22 + -360.0;
      if (fVar22 <= 180.0) {
        fVar21 = fVar22;
      }
      fVar22 = -fVar21;
      if (0.0 <= fVar21) {
        fVar22 = fVar21;
      }
      fVar23 = (float)(uint)(iVar8 - *(int *)(lVar13 + 4)) * 8.381903e-08;
      fVar21 = fVar23 + -360.0;
      if (fVar23 <= 180.0) {
        fVar21 = fVar23;
      }
      fVar23 = -fVar21;
      if (0.0 <= fVar21) {
        fVar23 = fVar21;
      }
      if (*param_2 == 2) {
        *param_2 = -1;
        piVar6 = &local_140;
        piVar7 = &local_144;
        if (fVar23 <= fVar22) {
          piVar6 = local_108;
          piVar7 = &local_13c;
        }
      }
      else {
        *param_2 = 1;
        piVar6 = &local_140;
        piVar7 = &local_144;
        if (fVar22 <= fVar23) {
          piVar6 = local_108;
          piVar7 = &local_13c;
        }
      }
      if (param_3 != 0) {
        iVar11 = *piVar7;
        *(int *)(param_3 + 8) = *piVar6;
        *(int *)(param_3 + 0xc) = iVar11;
        return 1;
      }
    }
    return 1;
  }
  if (iVar9 != -1) {
    if (param_2 != (int *)0x0) {
      *param_2 = -1;
    }
    if (param_3 == 0) {
      return 1;
    }
    *(int *)(param_3 + 8) = iVar9;
    *(int *)(param_3 + 0xc) = iVar15;
    return 1;
  }
LAB_022a986c:
  if (param_2 == (int *)0x0) {
    return 0;
  }
  *param_2 = -1;
  return 0;
}

