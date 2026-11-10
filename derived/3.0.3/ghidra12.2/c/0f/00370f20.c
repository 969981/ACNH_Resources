
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined8
FUN_00370f20(undefined1 param_1 [16],undefined1 param_2 [16],undefined1 param_3 [16],long *param_4,
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
  undefined4 extraout_s0_00;
  float fVar12;
  float extraout_s0_01;
  float extraout_s0_02;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  float extraout_var_01;
  float extraout_var_02;
  undefined4 extraout_var_03;
  undefined4 extraout_var_04;
  float extraout_var_05;
  float fVar13;
  float extraout_var_06;
  undefined4 extraout_var_07;
  undefined4 extraout_var_08;
  float extraout_var_09;
  undefined4 uVar14;
  float fVar15;
  float fVar16;
  undefined4 uVar17;
  undefined4 uVar18;
  float fVar19;
  undefined4 uVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  float fVar24;
  undefined8 local_a0;
  undefined8 uStack_98;
  undefined8 uStack_90;
  undefined8 local_80;
  float local_68;
  float fStack_64;
  
  uVar20 = param_3._4_4_;
  uVar18 = param_3._0_4_;
  uVar17 = param_2._4_4_;
  uVar14 = param_2._0_4_;
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
LAB_00370fa8:
    plVar9 = (long *)0x0;
  }
  else {
    puVar7 = (undefined8 *)(**(code **)(*plVar9 + 0x10))(plVar9);
    if (puVar7 != (undefined8 *)PTR_DAT_04bc9560) {
      do {
        puVar7 = (undefined8 *)*puVar7;
      } while (puVar7 != (undefined8 *)PTR_DAT_04bc9560 && puVar7 != (undefined8 *)0x0);
      if (puVar7 == (undefined8 *)0x0) goto LAB_00370fa8;
    }
  }
  *(long **)(param_5 + 4) = param_4;
  fVar11 = *(float *)(param_4 + 10);
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
LAB_00371004:
    bVar1 = *(byte *)(param_4 + 0xb);
    local_68 = -3.4028235e+38;
    fStack_64 = 3.4028235e+38;
    FUN_003728e0(param_4);
    plVar10 = (long *)param_4[5];
    uStack_98 = CONCAT44(extraout_var_07,extraout_var_03);
    local_a0 = CONCAT44(extraout_var,extraout_s0);
    uStack_90 = CONCAT44(uVar17,uVar14);
    local_80 = CONCAT44(uVar20,uVar18);
    if (plVar10 != param_4 + 4) {
      do {
        FUN_00372a50(plVar10 + -1,&fStack_64,&local_68,&local_a0);
        plVar10 = (long *)plVar10[1];
      } while (plVar10 != param_4 + 4);
LAB_00371054:
      if (fStack_64 <= local_68) {
        fVar11 = (local_68 - uStack_98._4_4_) - (fStack_64 - uStack_98._4_4_);
        *param_5 = fVar11;
        param_5[2] = ((local_68 - uStack_98._4_4_) + (fStack_64 - uStack_98._4_4_)) * 0.5;
        if (fVar11 == 0.0 || (bVar1 & 1) == 0) goto LAB_00371224;
        goto LAB_003714a8;
      }
    }
    uVar8 = 0;
    *param_5 = 0.0;
    fVar11 = 0.0;
  }
  else {
    do {
      puVar7 = (undefined8 *)*puVar7;
    } while (puVar7 != (undefined8 *)puVar4 && puVar7 != (undefined8 *)0x0);
    if (puVar7 != (undefined8 *)0x0) goto LAB_00371004;
    uVar6 = FUN_0037edb0(param_4);
    puVar4 = PTR_DAT_04bc8f50;
    if ((uVar6 & 1) != 0) {
      plVar10 = (long *)param_4[5];
      if (plVar10 == param_4 + 4) goto LAB_00371108;
      bVar1 = *(byte *)(param_4 + 0xb);
      local_68 = -3.4028235e+38;
      fStack_64 = 3.4028235e+38;
      FUN_003728e0(param_4);
      uStack_98 = CONCAT44(extraout_var_08,extraout_var_04);
      local_a0 = CONCAT44(extraout_var_00,extraout_s0_00);
      uStack_90 = CONCAT44(uVar17,uVar14);
      local_80 = CONCAT44(uVar20,uVar18);
      do {
        FUN_00372a50(plVar10 + -1,&fStack_64,&local_68,&local_a0);
        plVar10 = (long *)plVar10[1];
      } while (plVar10 != param_4 + 4);
      goto LAB_00371054;
    }
LAB_00371108:
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
LAB_00371154:
      (**(code **)(*param_4 + 0x120))(&local_a0,param_4);
      fVar23 = (float)uStack_98;
      fVar11 = (float)local_a0;
      (**(code **)(*param_4 + 0x120))(&local_a0,param_4);
      fVar19 = 0.0;
      bVar2 = *(byte *)((long)param_4 + 0x5b) & 3;
      fVar12 = *(float *)(param_4 + 10);
      if (bVar2 != 1) {
        if (bVar2 == 2) {
          fVar19 = -fVar12;
        }
        else {
          fVar19 = fVar12 * -0.5;
        }
      }
      fVar15 = *(float *)((long)param_4 + 0x54);
      bVar2 = *(byte *)((long)param_4 + 0x5b) >> 2 & 3;
      fVar21 = 0.0;
      if ((bVar2 != 1) && (fVar21 = fVar15, bVar2 != 2)) {
        fVar21 = fVar15 * 0.5;
      }
      FUN_00372400(fVar12,fVar15,fVar19,fVar21,fVar23 - fVar11,local_a0._4_4_ - uStack_98._4_4_,
                   &local_a0,param_4);
      *param_5 = (float)uStack_98 - (float)local_a0;
      param_5[2] = ((float)uStack_98 - (float)local_a0) * 0.5 +
                   ((float)local_a0 - *(float *)(param_4 + 6));
joined_r0x00371220:
      if ((bVar1 & 1) != 0) goto LAB_003714a8;
LAB_00371224:
      uVar8 = 0;
      fVar11 = 0.0;
      goto LAB_003714cc;
    }
    do {
      puVar7 = (undefined8 *)*puVar7;
    } while (puVar7 != (undefined8 *)puVar4 && puVar7 != (undefined8 *)0x0);
    if (puVar7 != (undefined8 *)0x0) goto LAB_00371154;
    fVar23 = 0.0;
    fVar11 = *(float *)(param_4 + 10);
    bVar2 = *(byte *)((long)param_4 + 0x5b) & 3;
    if (bVar2 != 1) {
      if (bVar2 == 2) {
        fVar23 = -fVar11;
      }
      else {
        fVar23 = fVar11 * -0.5;
      }
    }
    fVar19 = *(float *)((long)param_4 + 0x54);
    bVar2 = *(byte *)((long)param_4 + 0x5b) >> 2 & 3;
    fVar12 = 0.0;
    if ((bVar2 != 1) && (fVar12 = fVar19, bVar2 != 2)) {
      fVar12 = fVar19 * 0.5;
    }
    FUN_003728e0(param_4);
    fVar19 = fVar19 * 0.5;
    fVar21 = extraout_s0_01 * 1.0 + extraout_var_01 * 0.0 + (float)_DAT_041023d0 * extraout_var_05 +
             0.0;
    fVar15 = extraout_s0_01 * 0.0 + extraout_var_01 * 1.0 +
             (float)((ulong)_DAT_041023d0 >> 0x20) * extraout_var_05 + 0.0;
    fVar13 = extraout_s0_01 * 0.0 + extraout_var_01 * 0.0 + (float)_UNK_041023d8 * extraout_var_05 +
             0.0;
    fVar23 = extraout_var_09 +
             (fVar11 * 0.5 + fVar23) * extraout_s0_01 + (fVar12 - fVar19) * extraout_var_01 +
             (float)((ulong)_UNK_041023d8 >> 0x20) * extraout_var_05;
    fVar12 = fVar21 * -(fVar11 * 0.5);
    fVar21 = fVar21 * fVar11 * 0.5;
    fVar24 = fVar23 + fVar12 + fVar15 * fVar19 + fVar13 * 0.0;
    fVar11 = -3.4028235e+38;
    if (-3.4028235e+38 <= fVar24) {
      fVar11 = fVar24;
    }
    fVar16 = 3.4028235e+38;
    if (fVar24 <= 3.4028235e+38) {
      fVar16 = fVar24;
    }
    fVar24 = fVar23 + (fVar21 - fVar15 * fVar19) + fVar13 * 0.0;
    fVar22 = fVar23 + fVar21 + fVar15 * fVar19 + fVar13 * 0.0;
    fVar21 = 0.0;
    fVar23 = fVar23 + (fVar12 - fVar15 * fVar19) + fVar13 * 0.0;
    if (fVar11 <= fVar22) {
      fVar11 = fVar22;
    }
    if (fVar22 <= fVar16) {
      fVar16 = fVar22;
    }
    if (fVar11 <= fVar24) {
      fVar11 = fVar24;
    }
    if (fVar24 <= fVar16) {
      fVar16 = fVar24;
    }
    if (fVar11 <= fVar23) {
      fVar11 = fVar23;
    }
    if (fVar23 <= fVar16) {
      fVar16 = fVar23;
    }
    *param_5 = fVar11 - fVar16;
    bVar2 = *(byte *)((long)param_4 + 0x5b);
    if ((bVar2 & 3) == 0) {
      if ((bVar2 & 0xc) != 0) {
        fVar23 = *(float *)(param_4 + 10);
LAB_00371414:
        fVar21 = fVar23 * -0.5;
        goto LAB_0037141c;
      }
      goto joined_r0x00371220;
    }
    fVar23 = *(float *)(param_4 + 10);
    if ((bVar2 & 3) != 1) {
      if ((bVar2 & 3) != 2) goto LAB_00371414;
      fVar21 = -fVar23;
    }
LAB_0037141c:
    fVar19 = *(float *)((long)param_4 + 0x54);
    fVar11 = 0.0;
    bVar2 = bVar2 >> 2 & 3;
    fVar12 = 0.0;
    if ((bVar2 != 1) && (fVar12 = fVar19, bVar2 != 2)) {
      fVar12 = fVar19 * 0.5;
    }
    FUN_003728e0(param_4);
    param_5[2] = param_5[2] +
                 extraout_s0_02 * (fVar21 + fVar23 * 0.5) +
                 extraout_var_02 * (fVar12 - fVar19 * 0.5) + extraout_var_06 * 0.0 + 0.0;
    if ((bVar1 & 1) == 0) {
      uVar8 = 0;
      goto LAB_003714cc;
    }
LAB_003714a8:
    uVar6 = FUN_0037ed4c(param_4);
    if ((uVar6 & 1) == 0) {
      fVar11 = *(float *)(plVar9 + 0x1b);
    }
    else {
      fVar11 = (float)FUN_0037ee14(*(undefined8 *)(param_5 + 4));
    }
    uVar8 = 1;
  }
LAB_003714cc:
  param_5[1] = fVar11;
  return uVar8;
}

