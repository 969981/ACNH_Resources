
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_00371a80(undefined1 param_1 [16],undefined1 param_2 [16],undefined1 param_3 [16],long *param_4,
            float *param_5)

{
  byte bVar1;
  byte bVar2;
  undefined *puVar3;
  undefined *puVar4;
  int iVar5;
  ulong uVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  long *plVar9;
  long *plVar10;
  float fVar11;
  undefined4 extraout_s0;
  float fVar12;
  undefined4 extraout_s0_00;
  float fVar13;
  float fVar14;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  undefined4 extraout_var_01;
  undefined4 extraout_var_02;
  undefined4 extraout_var_03;
  undefined4 extraout_var_04;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  undefined4 uVar19;
  float fVar20;
  undefined4 uVar21;
  float fVar22;
  float fVar23;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 uStack_88;
  undefined8 local_80;
  float local_68;
  float fStack_64;
  
  uVar21 = param_3._4_4_;
  uVar19 = param_3._0_4_;
  fVar20 = param_2._12_4_;
  fVar13 = param_2._8_4_;
  fVar14 = param_2._4_4_;
  fVar12 = param_2._0_4_;
  uVar6 = FUN_0037ece8();
  if ((uVar6 & 1) != 0) {
    return 0;
  }
  plVar9 = (long *)param_4[3];
  if (((*PTR_DAT_04bc9568 & 1) == 0) && (iVar5 = __cxa_guard_acquire(PTR_DAT_04bc9568), iVar5 != 0))
  {
    if (((*PTR_DAT_04bc8f38 & 1) == 0) &&
       (iVar5 = __cxa_guard_acquire(PTR_DAT_04bc8f38), iVar5 != 0)) {
      *(undefined8 *)PTR_DAT_04bc8f30 = 0;
      __cxa_guard_release(PTR_DAT_04bc8f38);
    }
    *(undefined **)PTR_DAT_04bc9560 = PTR_DAT_04bc8f30;
    __cxa_guard_release(PTR_DAT_04bc9568);
  }
  if (plVar9 == (long *)0x0) {
LAB_00371b08:
    plVar9 = (long *)0x0;
  }
  else {
    puVar7 = (undefined8 *)(**(code **)(*plVar9 + 0x10))(plVar9);
    if (puVar7 != (undefined8 *)PTR_DAT_04bc9560) {
      do {
        puVar7 = (undefined8 *)*puVar7;
      } while (puVar7 != (undefined8 *)PTR_DAT_04bc9560 && puVar7 != (undefined8 *)0x0);
      if (puVar7 == (undefined8 *)0x0) goto LAB_00371b08;
    }
  }
  *(long **)(param_5 + 4) = param_4;
  fVar11 = *(float *)((long)param_4 + 0x54);
  param_5[1] = 0.0;
  param_5[2] = 0.0;
  *param_5 = fVar11;
  puVar4 = PTR_DAT_04bc9000;
  bVar1 = *(byte *)(param_4 + 0xb);
  if (((*PTR_DAT_04bc9008 & 1) == 0) && (iVar5 = __cxa_guard_acquire(PTR_DAT_04bc9008), iVar5 != 0))
  {
    if (((*PTR_DAT_04bc8f38 & 1) == 0) &&
       (iVar5 = __cxa_guard_acquire(PTR_DAT_04bc8f38), iVar5 != 0)) {
      *(undefined8 *)PTR_DAT_04bc8f30 = 0;
      __cxa_guard_release(PTR_DAT_04bc8f38);
    }
    *(undefined **)puVar4 = PTR_DAT_04bc8f30;
    __cxa_guard_release(PTR_DAT_04bc9008);
  }
  puVar7 = (undefined8 *)(**(code **)(*param_4 + 0x10))(param_4);
  if (puVar7 == (undefined8 *)puVar4) {
LAB_00371b64:
    bVar1 = *(byte *)(param_4 + 0xb);
    local_68 = 3.4028235e+38;
    fStack_64 = -3.4028235e+38;
    FUN_003728e0(param_4);
    plVar10 = (long *)param_4[5];
    uStack_98 = CONCAT44(extraout_var_03,extraout_var_01);
    local_a0 = CONCAT44(extraout_var,extraout_s0);
    uStack_88 = (ulong)(uint)fVar20 << 0x20;
    uStack_90 = CONCAT44(fVar14,fVar12);
    local_80 = CONCAT44(uVar21,uVar19);
    if (plVar10 != param_4 + 4) {
      do {
        FUN_00373140(plVar10 + -1,&fStack_64,&local_68,&local_a0);
        plVar10 = (long *)plVar10[1];
      } while (plVar10 != param_4 + 4);
LAB_00371bb4:
      if (local_68 <= fStack_64) {
        fVar12 = (fStack_64 - uStack_88._4_4_) - (local_68 - uStack_88._4_4_);
        *param_5 = fVar12;
        param_5[2] = ((fStack_64 - uStack_88._4_4_) + (local_68 - uStack_88._4_4_)) * 0.5;
        if (fVar12 == 0.0 || (bVar1 & 1) == 0) goto LAB_00371d88;
        goto LAB_00372020;
      }
    }
    uVar8 = 0;
    *param_5 = 0.0;
    fVar12 = 0.0;
  }
  else {
    do {
      puVar7 = (undefined8 *)*puVar7;
    } while (puVar7 != (undefined8 *)puVar4 && puVar7 != (undefined8 *)0x0);
    if (puVar7 != (undefined8 *)0x0) goto LAB_00371b64;
    uVar6 = FUN_0037edb0(param_4);
    puVar4 = PTR_DAT_04bc8f50;
    if ((uVar6 & 1) != 0) {
      plVar10 = (long *)param_4[5];
      if (plVar10 == param_4 + 4) goto LAB_00371c68;
      bVar1 = *(byte *)(param_4 + 0xb);
      local_68 = 3.4028235e+38;
      fStack_64 = -3.4028235e+38;
      FUN_003728e0(param_4);
      uStack_98 = CONCAT44(extraout_var_04,extraout_var_02);
      local_a0 = CONCAT44(extraout_var_00,extraout_s0_00);
      uStack_88 = (ulong)(uint)fVar20 << 0x20;
      uStack_90 = CONCAT44(fVar14,fVar12);
      local_80 = CONCAT44(uVar21,uVar19);
      do {
        FUN_00373140(plVar10 + -1,&fStack_64,&local_68,&local_a0);
        plVar10 = (long *)plVar10[1];
      } while (plVar10 != param_4 + 4);
      goto LAB_00371bb4;
    }
LAB_00371c68:
    if (((*PTR_DAT_04bc8f58 & 1) == 0) &&
       (iVar5 = __cxa_guard_acquire(PTR_DAT_04bc8f58), puVar3 = PTR_DAT_04bc8f30, iVar5 != 0)) {
      if (((*PTR_DAT_04bc8f38 & 1) == 0) &&
         (iVar5 = __cxa_guard_acquire(PTR_DAT_04bc8f38), iVar5 != 0)) {
        *(undefined8 *)puVar3 = 0;
        __cxa_guard_release(PTR_DAT_04bc8f38);
      }
      *(undefined **)puVar4 = puVar3;
      __cxa_guard_release(PTR_DAT_04bc8f58);
    }
    puVar7 = (undefined8 *)(**(code **)(*param_4 + 0x10))(param_4);
    if (puVar7 == (undefined8 *)puVar4) {
LAB_00371cb4:
      (**(code **)(*param_4 + 0x120))(&local_a0,param_4);
      fVar14 = (float)uStack_98;
      fVar12 = (float)local_a0;
      (**(code **)(*param_4 + 0x120))(&local_a0,param_4);
      fVar20 = 0.0;
      bVar2 = *(byte *)((long)param_4 + 0x5b) & 3;
      fVar13 = *(float *)(param_4 + 10);
      if (bVar2 != 1) {
        if (bVar2 == 2) {
          fVar20 = -fVar13;
        }
        else {
          fVar20 = fVar13 * -0.5;
        }
      }
      fVar15 = *(float *)((long)param_4 + 0x54);
      bVar2 = *(byte *)((long)param_4 + 0x5b) >> 2 & 3;
      fVar11 = 0.0;
      if ((bVar2 != 1) && (fVar11 = fVar15, bVar2 != 2)) {
        fVar11 = fVar15 * 0.5;
      }
      FUN_00372400(fVar13,fVar15,fVar20,fVar11,fVar14 - fVar12,local_a0._4_4_ - uStack_98._4_4_,
                   &local_a0,param_4);
      *param_5 = local_a0._4_4_ - uStack_98._4_4_;
      param_5[2] = -((local_a0._4_4_ - uStack_98._4_4_) * 0.5 -
                    (local_a0._4_4_ - *(float *)((long)param_4 + 0x34)));
joined_r0x00371d84:
      if ((bVar1 & 1) != 0) goto LAB_00372020;
LAB_00371d88:
      uVar8 = 0;
      fVar12 = 0.0;
      goto LAB_00372044;
    }
    do {
      puVar7 = (undefined8 *)*puVar7;
    } while (puVar7 != (undefined8 *)puVar4 && puVar7 != (undefined8 *)0x0);
    if (puVar7 != (undefined8 *)0x0) goto LAB_00371cb4;
    fVar15 = 0.0;
    fVar11 = *(float *)(param_4 + 10);
    bVar2 = *(byte *)((long)param_4 + 0x5b) & 3;
    if (bVar2 != 1) {
      if (bVar2 == 2) {
        fVar15 = -fVar11;
      }
      else {
        fVar15 = fVar11 * -0.5;
      }
    }
    fVar23 = *(float *)((long)param_4 + 0x54);
    bVar2 = *(byte *)((long)param_4 + 0x5b) >> 2 & 3;
    fVar22 = 0.0;
    if ((bVar2 != 1) && (fVar22 = fVar23, bVar2 != 2)) {
      fVar22 = fVar23 * 0.5;
    }
    FUN_003728e0(param_4);
    fVar23 = fVar23 * 0.5;
    fVar16 = fVar12 * 1.0 + fVar14 * 0.0 + (float)_DAT_041023d0 * fVar13 + 0.0;
    fVar17 = fVar12 * 0.0 + fVar14 * 1.0 + (float)((ulong)_DAT_041023d0 >> 0x20) * fVar13 + 0.0;
    fVar18 = fVar12 * 0.0 + fVar14 * 0.0 + (float)_UNK_041023d8 * fVar13 + 0.0;
    fVar20 = fVar20 + (fVar11 * 0.5 + fVar15) * fVar12 + (fVar22 - fVar23) * fVar14 +
                      (float)((ulong)_UNK_041023d8 >> 0x20) * fVar13;
    fVar12 = fVar16 * -(fVar11 * 0.5);
    fVar16 = fVar16 * fVar11 * 0.5;
    fVar11 = fVar20 + (fVar16 - fVar17 * fVar23) + fVar18 * 0.0;
    fVar13 = fVar20 + (fVar12 - fVar17 * fVar23) + fVar18 * 0.0;
    fVar15 = fVar20 + fVar12 + fVar17 * fVar23 + fVar18 * 0.0;
    fVar20 = fVar20 + fVar16 + fVar17 * fVar23 + fVar18 * 0.0;
    fVar14 = 0.0;
    fVar12 = -3.4028235e+38;
    if (-3.4028235e+38 <= fVar15) {
      fVar12 = fVar15;
    }
    fVar22 = 3.4028235e+38;
    if (fVar15 <= 3.4028235e+38) {
      fVar22 = fVar15;
    }
    if (fVar12 <= fVar20) {
      fVar12 = fVar20;
    }
    if (fVar20 <= fVar22) {
      fVar22 = fVar20;
    }
    if (fVar12 <= fVar11) {
      fVar12 = fVar11;
    }
    if (fVar11 <= fVar22) {
      fVar22 = fVar11;
    }
    if (fVar12 <= fVar13) {
      fVar12 = fVar13;
    }
    if (fVar13 <= fVar22) {
      fVar22 = fVar13;
    }
    *param_5 = fVar12 - fVar22;
    bVar2 = *(byte *)((long)param_4 + 0x5b);
    if ((bVar2 & 3) == 0) {
      if ((bVar2 & 0xc) != 0) {
        fVar13 = *(float *)(param_4 + 10);
LAB_00371f88:
        fVar14 = fVar13 * -0.5;
        goto LAB_00371f90;
      }
      goto joined_r0x00371d84;
    }
    fVar13 = *(float *)(param_4 + 10);
    if ((bVar2 & 3) != 1) {
      if ((bVar2 & 3) != 2) goto LAB_00371f88;
      fVar14 = -fVar13;
    }
LAB_00371f90:
    fVar15 = 0.0;
    fVar11 = 0.0;
    fVar22 = *(float *)((long)param_4 + 0x54);
    fVar12 = 0.0;
    bVar2 = bVar2 >> 2 & 3;
    fVar20 = 0.0;
    if ((bVar2 != 1) && (fVar20 = fVar22, bVar2 != 2)) {
      fVar20 = fVar22 * 0.5;
    }
    fVar23 = fVar13 * 0.5;
    FUN_003728e0(param_4);
    param_5[2] = param_5[2] +
                 fVar13 * (fVar14 + fVar23) + fVar11 * (fVar20 - fVar22 * 0.5) + fVar15 * 0.0 + 0.0;
    if ((bVar1 & 1) == 0) {
      uVar8 = 0;
      goto LAB_00372044;
    }
LAB_00372020:
    uVar6 = FUN_0037ed4c(param_4);
    if ((uVar6 & 1) == 0) {
      fVar12 = *(float *)(plVar9 + 0x1b);
    }
    else {
      fVar12 = (float)FUN_0037ee14(*(undefined8 *)(param_5 + 4));
    }
    uVar8 = 1;
  }
LAB_00372044:
  param_5[1] = fVar12;
  return uVar8;
}

