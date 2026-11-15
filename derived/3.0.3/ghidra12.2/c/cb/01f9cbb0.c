
undefined8 FUN_01f9cbb0(long param_1,ulong *param_2,char *param_3)

{
  undefined4 *puVar1;
  ulong *puVar2;
  ulong *puVar3;
  undefined4 *puVar4;
  undefined *puVar5;
  undefined *puVar6;
  float *pfVar7;
  int iVar8;
  byte bVar9;
  bool bVar10;
  int iVar11;
  uint uVar12;
  uint uVar13;
  uint uVar14;
  uint uVar15;
  uint uVar16;
  uint uVar17;
  ulong uVar18;
  long lVar19;
  long lVar20;
  undefined4 uVar21;
  undefined8 *puVar22;
  int *piVar23;
  int *piVar24;
  float fVar25;
  float fVar26;
  undefined8 local_1e8;
  undefined8 local_1e0;
  undefined *local_1d8;
  undefined *puStack_1d0;
  undefined8 local_1c8;
  undefined *local_1c0;
  undefined8 local_1b8;
  undefined8 local_1b0;
  undefined8 local_1a8;
  undefined8 local_1a0;
  undefined **ppuStack_198;
  undefined8 local_190;
  undefined *local_188;
  undefined8 local_180;
  undefined8 local_178;
  undefined **local_170;
  long lStack_168;
  undefined **local_160;
  char *local_158;
  undefined *puStack_150;
  int local_148;
  int iStack_144;
  long local_140;
  long lStack_138;
  undefined **local_130;
  undefined8 local_128;
  undefined4 local_120;
  undefined8 local_118;
  undefined4 local_110;
  undefined *local_108;
  undefined *puStack_100;
  undefined8 local_f8;
  undefined *local_f0;
  undefined8 local_e8;
  undefined *local_e0;
  undefined *puStack_d8;
  undefined8 local_d0;
  undefined *local_c8;
  undefined8 local_c0;
  undefined *local_b8;
  undefined *puStack_b0;
  undefined8 local_a8;
  undefined *puStack_a0;
  undefined8 local_98;
  undefined *local_90;
  undefined4 local_88;
  undefined4 local_84;
  byte local_80;
  
  if (param_2 == (ulong *)0x0) {
    return 0;
  }
  if ((((*(ushort **)PTR_DAT_04bc3a48 == (ushort *)0x0) ||
       ((**(ushort **)PTR_DAT_04bc3a48 & 1) == 0)) &&
      ((*(int *)(*(long *)PTR_DAT_04bb27f8 + 0x14) == 4 ||
       (*(int *)(*(long *)PTR_DAT_04bb27f8 + 0x14) == 5)))) &&
     (uVar18 = FUN_01fa3304(param_1), (uVar18 & 1) != 0)) {
    return 0;
  }
  puVar5 = PTR_DAT_04bb2720;
  local_88 = 0;
  local_90 = PTR_DAT_04bbfe68 + 0x10;
  lVar19 = *(long *)PTR_DAT_04bb2720;
  if (lVar19 == 0) {
    puVar22 = &DAT_055c04a0;
  }
  else {
    puVar22 = &DAT_055c04a0;
    if (*(long *)(lVar19 + 0x330) != 0) {
      puVar22 = (undefined8 *)
                (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                          (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar19 + 0x338));
      iVar11 = FUN_006bd550(*puVar22,0);
      puVar22 = (undefined8 *)PTR_DAT_04bc3a80;
      if (iVar11 != 0x758f7eaf) {
        puVar22 = &DAT_055c04a0;
      }
    }
  }
  local_84 = *(undefined4 *)(puVar22 + 7);
  local_80 = FUN_017baf44();
  puVar6 = PTR_DAT_04bb5ce0;
  local_98 = 0;
  local_80 = local_80 & 1;
  local_d0 = 0;
  local_f8 = 0;
  local_110 = 0;
  local_90 = PTR_DAT_04bb3140 + 0x10;
  local_118 = 0;
  puStack_150 = PTR_DAT_04bb2010 + 0x10;
  local_108 = PTR_DAT_04bbc1a0 + 0x10;
  lVar19 = *(long *)(*(long *)(param_1 + 8) + 0x68);
  lStack_138 = lVar19 + 0x278;
  local_a8 = 0;
  local_c0 = 0;
  local_e8 = 0;
  local_120 = 0;
  local_128 = 0;
  puStack_100 = puStack_150;
  local_f0 = puStack_150;
  local_e0 = local_108;
  puStack_d8 = puStack_150;
  local_c8 = puStack_150;
  local_b8 = local_108;
  puStack_b0 = puStack_150;
  puStack_a0 = puStack_150;
  if (((*(long *)PTR_DAT_04bb5ce0 == 0) || (lVar20 = *(long *)puVar5, lVar20 == 0)) ||
     (*(long *)(lVar20 + 0x330) == 0)) {
LAB_01f9ce38:
    bVar10 = false;
LAB_01f9ce3c:
    uVar21 = 0;
  }
  else {
    puVar22 = (undefined8 *)
              (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                        (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar20 + 0x338));
    iVar11 = FUN_006bd550(*puVar22,0);
    if (((iVar11 != 0x758f7eaf) || (lVar20 = *(long *)puVar5, lVar20 == 0)) ||
       ((lVar20 = *(long *)(lVar20 + 0x330), lVar20 == 0 || (*(int *)(lVar20 + 0x244) == 0))))
    goto LAB_01f9ce38;
    lVar20 = *(long *)puVar6;
    local_118 = 0;
    local_110 = 0;
    local_128 = 0;
    local_120 = 0;
    if (lVar20 == 0) {
      local_1a0 = (undefined **)((ulong)local_1a0._4_4_ << 0x20);
      goto LAB_01f9ce38;
    }
    iVar11 = *(int *)(lVar20 + 0xed0);
    if ((*(ushort *)(lVar20 + 0xf6c) & 2) != 0) {
      iVar11 = 0;
    }
    if (iVar11 != 0) {
      local_110 = *(undefined4 *)(lVar20 + 0xf30);
      local_118 = *(undefined8 *)(lVar20 + 0xf28);
    }
    iVar8 = *(int *)(lVar20 + 0xecc);
    if ((*(ushort *)(lVar20 + 0xf6c) & 2) != 0) {
      iVar8 = 0;
    }
    local_1a0 = (undefined **)CONCAT44(local_1a0._4_4_,iVar8);
    if (iVar8 != 0) {
      local_120 = *(undefined4 *)(lVar20 + 0xf3c);
      local_128 = *(undefined8 *)(lVar20 + 0xf34);
      if (iVar11 != 0) goto LAB_01f9d528;
      bVar9 = *(byte *)(lVar20 + 0xedc);
      bVar10 = false;
LAB_01f9d548:
      uVar21 = 1;
      local_1a0 = (undefined **)CONCAT44(local_1a0._4_4_,1);
      if ((bVar9 >> 1 & 1) == 0) goto LAB_01f9ce40;
      goto LAB_01f9ce3c;
    }
    bVar10 = false;
    uVar21 = 0;
    if ((lVar20 != 0) && (iVar11 != 0)) {
LAB_01f9d528:
      local_1a0 = (undefined **)CONCAT44(local_1a0._4_4_,3);
      bVar9 = *(byte *)(lVar20 + 0xedc);
      bVar10 = (bVar9 >> 3 & 1) == 0;
      if (iVar8 != 0) goto LAB_01f9d548;
      goto LAB_01f9ce3c;
    }
  }
LAB_01f9ce40:
  puVar5 = PTR_DAT_04bb2d00;
  local_170 = &local_90;
  puVar1 = (undefined4 *)((long)param_2 + 0xc);
  lVar20 = *(long *)(*(long *)(param_1 + 8) + 0x68);
  puVar2 = param_2 + 8;
  puVar3 = param_2 + 3;
  pfVar7 = (float *)(PTR_DAT_04bb2d00 + ((ulong)(*(uint *)(lVar20 + 0x2b4) >> 0x14) & 0xff0));
  fVar25 = (float)(*(uint *)(lVar20 + 0x2b4) & 0xffffff) * 5.9604645e-08;
  puVar4 = (undefined4 *)((long)param_2 + 4);
  fVar26 = (*pfVar7 + fVar25 * pfVar7[1]) * 5.0 + *(float *)(lVar20 + 0x278) + -2.5;
  fVar25 = (pfVar7[2] + fVar25 * pfVar7[3]) * 5.0 + *(float *)(lVar20 + 0x280) + -2.5;
  local_148 = (int)((float)(int)*(float *)(lVar19 + 0x278) / 5.0) -
              (uint)(*(float *)(lVar19 + 0x278) < 0.0);
  iStack_144 = (int)((float)(int)*(float *)(lVar19 + 0x280) / 5.0) -
               (uint)(*(float *)(lVar19 + 0x280) < 0.0);
  local_160 = &puStack_150;
  iVar11 = (int)((float)(int)fVar26 / 5.0) - (uint)(fVar26 < 0.0);
  iVar8 = (int)((float)(int)fVar25 / 5.0) - (uint)(fVar25 < 0.0);
  local_a8 = CONCAT44(iVar8,iVar11);
  local_98 = CONCAT44(iVar8 + 1,iVar11 + 1);
  lStack_168 = param_1;
  local_158 = param_3;
  local_140 = param_1;
  local_130 = local_170;
  uVar18 = FUN_01fc2970(&local_140,puVar4,puVar1,puVar3,puVar2,&local_b8,0);
  piVar23 = (int *)PTR_DAT_04bb3238;
  if ((uVar18 & 1) != 0) {
LAB_01f9d1d8:
    *(undefined4 *)param_2 = 1;
    return 1;
  }
  lVar19 = *(long *)(param_1 + 8);
  if (*param_3 != '\0') {
    lVar20 = *(long *)(lVar19 + 0x68);
    pfVar7 = (float *)(puVar5 + ((ulong)(*(uint *)(lVar20 + 0x2b4) >> 0x14) & 0xff0));
    local_1d8 = (undefined *)CONCAT44(local_1d8._4_4_,*(undefined4 *)(lVar19 + 0x230));
    fVar25 = (float)(*(uint *)(lVar20 + 0x2b4) & 0xffffff) * 5.9604645e-08;
    fVar26 = (*pfVar7 + fVar25 * pfVar7[1]) * 5.0;
    fVar25 = (pfVar7[2] + fVar25 * pfVar7[3]) * 5.0;
    fVar26 = *(float *)(lVar20 + 0x278) + fVar26 + fVar26 + -2.5;
    fVar25 = *(float *)(lVar20 + 0x280) + fVar25 + fVar25 + -2.5;
    iVar11 = (int)((float)(int)fVar26 / 5.0) - (uint)(fVar26 < 0.0);
    iVar8 = (int)((float)(int)fVar25 / 5.0) - (uint)(fVar25 < 0.0);
    local_d0 = CONCAT44(iVar8,iVar11);
    local_c0 = CONCAT44(iVar8 + 1,iVar11 + 1);
    lVar20 = *(long *)PTR_DAT_04bb3968;
    if (lVar20 != 0) {
      ppuStack_198 = &local_1d8;
      local_1a0 = &PTR_FUN_04a69c28;
      local_190 = &local_e0;
      if (*(int *)(lVar20 + 0xb88) != 0) {
        puVar22 = *(undefined8 **)(lVar20 + 0xb90);
        lVar19 = (long)*(int *)(lVar20 + 0xb88) << 3;
        do {
          piVar24 = (int *)*puVar22;
          uVar18 = (*(code *)*local_1a0)(&local_1a0,piVar24);
          if ((uVar18 & 1) != 0) {
            piVar23 = piVar24;
            break;
          }
          puVar22 = puVar22 + 1;
          lVar19 = lVar19 + -8;
        } while (lVar19 != 0);
      }
      iVar11 = *piVar23;
      *(int *)(param_2 + 1) = iVar11;
      if (iVar11 != 0) {
        uVar18 = 0x200000001;
        goto LAB_01f9d210;
      }
      lVar19 = *(long *)(param_1 + 8);
    }
  }
  lVar19 = *(long *)(lVar19 + 0x68);
  pfVar7 = (float *)(puVar5 + ((ulong)(*(uint *)(lVar19 + 0x2b4) >> 0x14) & 0xff0));
  fVar25 = (float)(*(uint *)(lVar19 + 0x2b4) & 0xffffff) * 5.9604645e-08;
  fVar26 = (*pfVar7 + fVar25 * pfVar7[1]) * 5.0;
  fVar25 = (pfVar7[2] + fVar25 * pfVar7[3]) * 5.0;
  fVar26 = *(float *)(lVar19 + 0x278) + fVar26 + fVar26 + -2.5;
  fVar25 = *(float *)(lVar19 + 0x280) + fVar25 + fVar25 + -2.5;
  iVar11 = (int)((float)(int)fVar26 / 5.0) - (uint)(fVar26 < 0.0);
  iVar8 = (int)((float)(int)fVar25 / 5.0) - (uint)(fVar25 < 0.0);
  local_f8 = CONCAT44(iVar8,iVar11);
  local_e8 = CONCAT44(iVar8 + 1,iVar11 + 1);
  uVar18 = FUN_01fc3440(&local_170,puVar4,puVar1,puVar3,puVar2,&local_108);
  if ((uVar18 & 1) != 0) goto LAB_01f9d1d8;
  uVar18 = FUN_01fc38a4(param_1,param_2,&local_118,&local_128,bVar10,uVar21,1);
  if ((uVar18 & 1) != 0) {
    uVar18 = 1;
    goto LAB_01f9d20c;
  }
  if (param_3[1] != '\0') {
    return 0;
  }
  FUN_01fa307c(param_1,&local_b8,PTR_DAT_04bb2108,1);
  local_178 = 0xfffe;
  FUN_0277d4ac(&local_178);
  puVar5 = PTR_DAT_04bbc1a0 + 0x10;
  local_190 = (undefined **)0x0;
  local_1a8 = 0;
  puVar6 = PTR_DAT_04bb2010 + 0x10;
  local_180 = 0;
  local_1a0 = (undefined **)puVar5;
  ppuStack_198 = (undefined **)puVar6;
  local_188 = puVar6;
  uVar12 = FUN_01fc2970(&local_140,&local_1a8,&local_178,&local_1a0,(long)&local_1a8 + 4,&local_b8,0
                       );
  FUN_01fa307c(param_1,&local_b8,PTR_DAT_04bb2cf8,1);
  local_1b0 = 0xfffe;
  FUN_0277d4ac(&local_1b0);
  local_1c8 = 0;
  local_1e0 = 0;
  local_1b8 = 0;
  local_1d8 = puVar5;
  puStack_1d0 = puVar6;
  local_1c0 = puVar6;
  uVar13 = FUN_01fc2970(&local_140,&local_1e0,&local_1b0,&local_1d8,(long)&local_1e0 + 4,&local_b8,0
                       );
  local_1e8 = 0;
  if (*param_3 == '\0') {
    uVar15 = 0;
    uVar14 = 0;
  }
  else {
    FUN_01fa307c(param_1,&local_e0,PTR_DAT_04bb2108,2);
    uVar14 = FUN_01fc3370(param_1,(long)&local_1e8 + 4,&local_e0);
    FUN_01fa307c(param_1,&local_e0,PTR_DAT_04bb2cf8,2);
    uVar15 = FUN_01fc3370(param_1,&local_1e8,&local_e0);
  }
  if ((uVar12 & 1) == 0) {
    FUN_01fa307c(param_1,&local_108,PTR_DAT_04bb2108,2);
    uVar16 = FUN_01fc3440(&local_170,&local_1a8,&local_178,&local_1a0,(long)&local_1a8 + 4,
                          &local_108);
  }
  else {
    uVar16 = 0;
  }
  if ((uVar13 & 1) == 0) {
    FUN_01fa307c(param_1,&local_108,PTR_DAT_04bb2cf8,2);
    uVar17 = FUN_01fc3440(&local_170,&local_1e0,&local_1b0,&local_1d8,(long)&local_1e0 + 4,
                          &local_108);
  }
  else {
    uVar17 = 0;
  }
  iVar11 = FUN_01fb77bc(param_1,(uVar12 | uVar14 | uVar16) & 1,(uVar13 | uVar15 | uVar17) & 1);
  if (iVar11 == 3) {
    if (((uVar13 & 1) != 0) || ((uVar15 & 1) == 0)) {
      *(undefined4 *)((long)param_2 + 0xc) = (undefined4)local_1b0;
      *(undefined4 *)(param_2 + 2) = local_1b0._4_4_;
      *(undefined4 *)(param_2 + 5) = (undefined4)local_1c8;
      *(undefined4 *)((long)param_2 + 0x2c) = local_1c8._4_4_;
      *(undefined4 *)(param_2 + 7) = (undefined4)local_1b8;
      *(undefined4 *)((long)param_2 + 0x3c) = local_1b8._4_4_;
      *(undefined4 *)param_2 = 3;
      *(undefined4 *)((long)param_2 + 4) = (undefined4)local_1e0;
      *(undefined4 *)(param_2 + 8) = local_1e0._4_4_;
      return 1;
    }
    *(undefined4 *)(param_2 + 1) = (undefined4)local_1e8;
    uVar18 = 0x200000003;
    goto LAB_01f9d210;
  }
  if (iVar11 == 2) {
    if (((uVar12 & 1) != 0) || ((uVar14 & 1) == 0)) {
      *(undefined4 *)((long)param_2 + 0xc) = (undefined4)local_178;
      *(undefined4 *)(param_2 + 2) = local_178._4_4_;
      *(undefined4 *)(param_2 + 5) = (undefined4)local_190;
      *(undefined4 *)((long)param_2 + 0x2c) = local_190._4_4_;
      *(undefined4 *)(param_2 + 7) = (undefined4)local_180;
      *(undefined4 *)((long)param_2 + 0x3c) = local_180._4_4_;
      *(undefined4 *)param_2 = 2;
      *(undefined4 *)((long)param_2 + 4) = (undefined4)local_1a8;
      *(undefined4 *)(param_2 + 8) = local_1a8._4_4_;
      return 1;
    }
    *(undefined4 *)(param_2 + 1) = local_1e8._4_4_;
    uVar18 = 0x200000002;
    goto LAB_01f9d210;
  }
  uVar18 = FUN_01fc38a4(param_1,param_2,&local_118,&local_128,bVar10,uVar21,2);
  if ((uVar18 & 1) == 0) {
    uVar18 = FUN_01fc38a4(param_1,param_2,&local_118,&local_128,bVar10,uVar21,3);
    if ((uVar18 & 1) == 0) {
      if (*(int *)(param_1 + 0xaf88) == 1) {
        FUN_01fa307c(param_1,&local_b8,PTR_DAT_04bb2cf0,1);
        uVar18 = FUN_01fc2970(&local_140,puVar4,puVar1,puVar3,puVar2,&local_b8,0);
        if ((uVar18 & 1) == 0) {
          if (*param_3 != '\0') {
            FUN_01fa307c(param_1,&local_e0,PTR_DAT_04bb2cf0,2);
            uVar18 = FUN_01fc3370(param_1,param_2 + 1,&local_e0);
            if ((uVar18 & 1) != 0) {
              uVar18 = 0x200000005;
              goto LAB_01f9d210;
            }
          }
          FUN_01fa307c(param_1,&local_108,PTR_DAT_04bb2cf0,2);
          uVar18 = FUN_01fc3440(&local_170,puVar4,puVar1,puVar3,puVar2,&local_108);
          if ((uVar18 & 1) == 0) goto LAB_01f9d65c;
        }
        uVar21 = 5;
      }
      else {
LAB_01f9d65c:
        FUN_012e1d60(&local_b8,*(long *)(*(long *)(param_1 + 8) + 0x68) + 0x278,2,2);
        uVar18 = FUN_01fc2970(&local_140,puVar4,puVar1,puVar3,puVar2,&local_b8,1);
        if ((uVar18 & 1) == 0) {
          uVar18 = FUN_0180ade0();
          if ((uVar18 & 1) == 0) {
            local_1a0 = (undefined **)0xfffe;
            FUN_0277d4ac(&local_1a0);
            local_1d8 = (undefined *)((ulong)local_1d8 & 0xffffffff00000000);
            uVar18 = FUN_01fc3af0(param_1,&local_1a0,&local_1d8);
            if ((uVar18 & 1) != 0) {
              *param_2 = 0x600000001;
              *(undefined4 *)((long)param_2 + 0xc) = (undefined4)local_1a0;
              *(uint *)(param_2 + 2) = local_1a0._4_4_;
              *(undefined4 *)(param_2 + 1) = local_1d8._0_4_;
              return 1;
            }
          }
          return 0;
        }
        uVar21 = 4;
      }
      *(undefined4 *)param_2 = uVar21;
      return 1;
    }
    uVar18 = 3;
  }
  else {
    uVar18 = 2;
  }
LAB_01f9d20c:
  uVar18 = uVar18 | 0x500000000;
LAB_01f9d210:
  *param_2 = uVar18;
  return 1;
}

