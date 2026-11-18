
void FUN_0372bfa0(undefined1 param_1 [16],float param_2,float param_3,long param_4,float *param_5,
                 undefined4 *param_6)

{
  undefined *puVar1;
  undefined *puVar2;
  uint *puVar3;
  short sVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  bool bVar8;
  undefined *puVar9;
  bool bVar10;
  int iVar11;
  undefined8 *puVar12;
  ulong uVar13;
  undefined4 uVar14;
  long lVar15;
  int iVar16;
  long lVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  float fVar25;
  undefined4 local_fc;
  undefined *local_f8;
  undefined *local_f0;
  int local_e8;
  int iStack_e4;
  undefined *local_e0;
  int local_d8;
  int iStack_d4;
  undefined **local_d0;
  undefined **ppuStack_c8;
  undefined4 *local_c0;
  char *local_b8;
  char local_b0 [4];
  undefined4 local_ac [3];
  
  fVar18 = (float)FUN_03771210();
  puVar9 = PTR_DAT_04bb2720;
  if (((*(long *)PTR_DAT_04bb5ce0 != 0) && (lVar15 = *(long *)PTR_DAT_04bb2720, lVar15 != 0)) &&
     (*(long *)(lVar15 + 0x330) != 0)) {
    fVar19 = param_2;
    fVar21 = param_3;
    puVar12 = (undefined8 *)
              (**(code **)(**(long **)PTR_DAT_04bb2640 + 0x18))
                        (*(long **)PTR_DAT_04bb2640,*(undefined4 *)(lVar15 + 0x338));
    iVar11 = FUN_006bd550(*puVar12,0);
    if (((iVar11 == 0x758f7eaf) && (*(long *)puVar9 != 0)) &&
       ((lVar15 = *(long *)(*(long *)puVar9 + 0x330), lVar15 != 0 && (*(int *)(lVar15 + 0x244) != 0)
        ))) {
      fVar18 = (float)FUN_03771210();
      local_fc = 0x80000000;
      *param_5 = fVar18;
      param_5[1] = fVar19;
      param_5[2] = fVar21;
      goto LAB_0372c5a4;
    }
  }
  fVar19 = *(float *)(param_4 + 0x117c) + -2.5;
  fVar21 = *(float *)(param_4 + 0x1184) + -2.5;
  lVar15 = *(long *)PTR_DAT_04bb59d8;
  iVar11 = (int)((float)(int)fVar19 / 5.0) - (uint)(fVar19 < 0.0);
  fVar19 = (float)(int)fVar21 / 5.0;
  iVar16 = (int)fVar19 - (uint)(fVar21 < 0.0);
  if (((*(int *)(lVar15 + 0x60) < iVar11 || iVar11 + 1 < *(int *)(lVar15 + 0x50)) ||
      *(int *)(lVar15 + 100) < iVar16) || iVar16 + 1 < *(int *)(lVar15 + 0x54)) {
    local_f0 = (undefined *)((ulong)local_f0 & 0xffffffff00000000);
    local_f8 = (undefined *)0x0;
    uVar13 = FUN_021d9820(&local_f8,1);
    puVar9 = PTR_DAT_04bb3968;
    if ((uVar13 & 1) != 0) {
      bVar8 = false;
      iVar16 = 0;
      iVar6 = (int)((float)(int)(local_f8._0_4_ + -10.0) / 5.0) -
              (uint)(local_f8._0_4_ + -10.0 < 0.0);
      iVar7 = (int)((float)(int)(local_f0._0_4_ + -5.0) / 5.0) - (uint)(local_f0._0_4_ + -5.0 < 0.0)
      ;
      fVar19 = (float)iVar6 * 5.0;
      iVar11 = iVar7 + 1;
      local_fc = 0x80000000;
      fVar25 = 3.4028235e+38;
      puVar1 = PTR_DAT_04bbc1a0 + 0x10;
      puVar2 = PTR_DAT_04bb2010 + 0x10;
      fVar23 = (fVar19 + (float)(iVar6 + 3) * 5.0 + 5.0) * 0.5;
      fVar21 = (float)(iVar7 + 2) * 5.0 + 5.0;
      fVar21 = fVar21 + fVar21;
      fVar24 = fVar21 * 0.5;
      do {
        local_e8 = iVar16 + iVar6;
        local_d8 = local_e8 + 1;
        ppuStack_c8 = &local_f8;
        local_c0 = local_ac;
        local_ac[0] = *(undefined4 *)PTR_DAT_04bb3238;
        local_d0 = &PTR_FUN_04a77158;
        local_b8 = local_b0;
        local_b0[0] = '\0';
        lVar15 = *(long *)puVar9;
        iVar5 = *(int *)(lVar15 + 0xb88);
        iStack_e4 = iVar7;
        iStack_d4 = iVar11;
        if (iVar5 == 0) {
LAB_0372c28c:
          fVar20 = ((float)local_e8 * 5.0 + (float)local_d8 * 5.0 + 5.0) * 0.5;
          fVar21 = ((float)iStack_e4 * 5.0 + (float)iStack_d4 * 5.0 + 5.0) * 0.5;
          fVar19 = fVar20 - fVar23;
          fVar22 = fVar21 - fVar24;
          fVar19 = fVar22 * fVar22 + fVar19 * fVar19;
          if (fVar19 < fVar25) {
            bVar8 = true;
            local_fc = 0;
            fVar25 = fVar19;
            fVar18 = fVar20;
            param_3 = fVar21;
          }
        }
        else {
          lVar17 = (long)iVar5 << 3;
          puVar12 = *(undefined8 **)(lVar15 + 0xb90);
          local_f8 = puVar1;
          local_f0 = puVar2;
          local_e0 = puVar2;
          do {
            (*(code *)*local_d0)(&local_d0,*puVar12);
            lVar17 = lVar17 + -8;
            puVar12 = puVar12 + 1;
          } while (lVar17 != 0);
          if (local_b0[0] == '\0') {
            goto LAB_0372c28c;
          }
        }
        bVar10 = iVar16 != 2;
        iVar16 = iVar16 + 1;
      } while (bVar10);
      iVar16 = 0;
      puVar1 = PTR_DAT_04bbc1a0 + 0x10;
      puVar2 = PTR_DAT_04bb2010 + 0x10;
      do {
        local_e8 = iVar16 + iVar6;
        local_d8 = local_e8 + 1;
        ppuStack_c8 = &local_f8;
        local_c0 = local_ac;
        local_ac[0] = *(undefined4 *)PTR_DAT_04bb3238;
        local_d0 = &PTR_FUN_04a77158;
        local_b8 = local_b0;
        local_b0[0] = '\0';
        lVar15 = *(long *)puVar9;
        iVar5 = *(int *)(lVar15 + 0xb88);
        local_f8 = puVar1;
        local_f0 = puVar2;
        iStack_e4 = iVar11;
        local_e0 = puVar2;
        iStack_d4 = iVar7 + 2;
        if (iVar5 == 0) {
LAB_0372c468:
          fVar20 = ((float)local_e8 * 5.0 + (float)local_d8 * 5.0 + 5.0) * 0.5;
          fVar21 = ((float)iStack_e4 * 5.0 + (float)iStack_d4 * 5.0 + 5.0) * 0.5;
          fVar19 = fVar20 - fVar23;
          fVar22 = fVar21 - fVar24;
          fVar19 = fVar22 * fVar22 + fVar19 * fVar19;
          if (fVar19 < fVar25) {
            bVar8 = true;
            local_fc = 0;
            fVar25 = fVar19;
            fVar18 = fVar20;
            param_3 = fVar21;
          }
        }
        else {
          lVar17 = (long)iVar5 << 3;
          puVar12 = *(undefined8 **)(lVar15 + 0xb90);
          do {
            (*(code *)*local_d0)(&local_d0,*puVar12);
            lVar17 = lVar17 + -8;
            puVar12 = puVar12 + 1;
          } while (lVar17 != 0);
          if (local_b0[0] == '\0') goto LAB_0372c468;
        }
        bVar10 = iVar16 != 2;
        iVar16 = iVar16 + 1;
      } while (bVar10);
      if (bVar8) goto LAB_0372c2f8;
    }
    fVar18 = (float)FUN_03771210();
    *param_5 = fVar18;
    param_5[1] = fVar21;
    param_5[2] = fVar19;
    local_d0 = (undefined **)((ulong)local_d0 & 0xffffffffffffff00);
    if (*(long *)(*(long *)PTR_DAT_04bb27c8 + 0xa8) == 0) {
      fVar18 = -500.0;
    }
    else {
      sVar4 = *(short *)PTR_DAT_04bb6298;
      if (sVar4 == -1) {
        uVar14 = 7;
      }
      else {
        local_f8 = (undefined *)CONCAT44(local_f8._4_4_,1);
        puVar3 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar4 * 8);
        if (0xff < (uint)(int)sVar4) {
          puVar3 = (uint *)PTR_DAT_04bc39f8;
        }
        uVar14 = 7;
        if ((*puVar3 & 2) != 0) {
          uVar14 = 5;
        }
      }
      local_f8 = (undefined *)CONCAT44(local_f8._4_4_,uVar14);
      fVar18 = (float)FUN_00962700(*(long *)(*(long *)PTR_DAT_04bb27c8 + 0xa8),param_5,&local_f8,1,
                                   &local_d0);
    }
    param_5[1] = fVar18;
    local_fc = 0x80000000;
  }
  else {
    local_fc = 0x80000000;
LAB_0372c2f8:
    *param_5 = fVar18;
    param_5[1] = param_2;
    param_5[2] = param_3;
    local_d0 = (undefined **)((ulong)local_d0 & 0xffffffffffffff00);
    if (*(long *)(*(long *)PTR_DAT_04bb27c8 + 0xa8) == 0) {
      param_5[1] = -500.0;
    }
    else {
      sVar4 = *(short *)PTR_DAT_04bb6298;
      if (sVar4 == -1) {
        uVar14 = 7;
      }
      else {
        puVar3 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar4 * 8);
        if (0xff < (uint)(int)sVar4) {
          puVar3 = (uint *)PTR_DAT_04bc39f8;
        }
        uVar14 = 7;
        if ((*puVar3 & 2) != 0) {
          uVar14 = 5;
        }
      }
      local_f8 = (undefined *)CONCAT44(local_f8._4_4_,uVar14);
      fVar18 = (float)FUN_00962700(*(long *)(*(long *)PTR_DAT_04bb27c8 + 0xa8),param_5,&local_f8,1,
                                   &local_d0);
      param_5[1] = fVar18;
    }
  }
LAB_0372c5a4:
  *param_6 = local_fc;
  return;
}

