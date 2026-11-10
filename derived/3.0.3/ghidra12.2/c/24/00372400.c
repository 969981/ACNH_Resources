
/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void FUN_00372400(float param_1,undefined1 param_2 [16],float param_3,float param_4,float param_5,
                 float param_6,float *param_7,long *param_8)

{
  byte bVar1;
  undefined *puVar2;
  int iVar3;
  undefined8 *puVar4;
  float extraout_s0;
  float fVar5;
  float fVar6;
  float extraout_var;
  float extraout_var_00;
  float extraout_var_01;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  
  fVar14 = param_2._12_4_;
  fVar7 = param_2._8_4_;
  fVar6 = param_2._4_4_;
  fVar8 = param_2._0_4_;
  FUN_003728e0(param_8);
  fVar17 = param_5 * 0.5;
  fVar20 = -(param_5 * 0.5);
  fVar9 = param_6 * 0.5;
  fVar15 = -(param_6 * 0.5);
  if ((*PTR_DAT_04bc8f58 & 1) == 0) {
    iVar3 = __cxa_guard_acquire(PTR_DAT_04bc8f58);
    puVar2 = PTR_DAT_04bc8f30;
    if (iVar3 != 0) {
      if (((*PTR_DAT_04bc8f38 & 1) == 0) &&
         (iVar3 = __cxa_guard_acquire(PTR_DAT_04bc8f38), iVar3 != 0)) {
        *(undefined8 *)puVar2 = 0;
        __cxa_guard_release(PTR_DAT_04bc8f38);
      }
      *(undefined **)PTR_DAT_04bc8f50 = puVar2;
      __cxa_guard_release(PTR_DAT_04bc8f58);
    }
  }
  fVar22 = param_2._0_4_ * 0.5;
  param_1 = param_1 * 0.5;
  fVar16 = fVar9;
  fVar5 = fVar15;
  if (param_8 != (long *)0x0) {
    puVar4 = (undefined8 *)(**(code **)(*param_8 + 0x10))(param_8);
    if (puVar4 != (undefined8 *)PTR_DAT_04bc8f50) {
      do {
        puVar4 = (undefined8 *)*puVar4;
      } while (puVar4 != (undefined8 *)PTR_DAT_04bc8f50 && puVar4 != (undefined8 *)0x0);
      if (puVar4 == (undefined8 *)0x0) goto LAB_00372664;
    }
    bVar1 = *(byte *)((long)param_8 + 0x116) & 3;
    if (bVar1 == 2) {
      fVar20 = (param_1 - fVar17) - fVar17;
      fVar17 = (param_1 - fVar17) + fVar17;
    }
    else if (bVar1 == 1) {
      fVar20 = fVar20 - (param_1 - fVar17);
      fVar17 = fVar17 - (param_1 - fVar17);
    }
    bVar1 = *(byte *)((long)param_8 + 0x116) >> 2 & 3;
    if ((*(ushort *)((long)param_8 + 0x114) & 0x1000) != 0) {
      bVar1 = 0;
    }
    if (bVar1 == 2) {
      fVar10 = fVar22 - fVar9;
      fVar16 = fVar9 - fVar10;
      fVar18 = fVar15 - fVar10;
      fVar5 = fVar15 - fVar10;
      fVar9 = fVar9 - fVar10;
    }
    else {
      if (bVar1 != 1) goto LAB_00372664;
      fVar10 = fVar22 - fVar9;
      fVar16 = fVar10 + fVar9;
      fVar18 = fVar10 + fVar15;
      fVar5 = fVar10 + fVar15;
      fVar9 = fVar10 + fVar9;
    }
    fVar15 = fVar18;
  }
LAB_00372664:
  fVar10 = (float)((ulong)_DAT_041023d0 >> 0x20);
  fVar19 = (float)((ulong)_UNK_041023d8 >> 0x20);
  fVar11 = fVar8 * 1.0 + fVar6 * 0.0 + (float)_DAT_041023d0 * fVar7 + 0.0;
  fVar12 = fVar8 * 0.0 + fVar6 * 1.0 + fVar10 * fVar7 + 0.0;
  fVar13 = fVar8 * 0.0 + fVar6 * 0.0 + (float)_UNK_041023d8 * fVar7 + 0.0;
  fVar14 = fVar14 + (param_1 + param_3) * fVar8 + (param_4 - fVar22) * fVar6 + fVar19 * fVar7;
  fVar6 = extraout_s0 * 1.0 + extraout_var * 0.0 + (float)_DAT_041023d0 * extraout_var_00 + 0.0;
  fVar10 = extraout_s0 * 0.0 + extraout_var * 1.0 + fVar10 * extraout_var_00 + 0.0;
  fVar18 = extraout_s0 * 0.0 + extraout_var * 0.0 + (float)_UNK_041023d8 * extraout_var_00 + 0.0;
  fVar7 = extraout_var_01 +
          (param_1 + param_3) * extraout_s0 + (param_4 - fVar22) * extraout_var +
          fVar19 * extraout_var_00;
  fVar22 = fVar7 + fVar6 * fVar20 + fVar10 * fVar9 + fVar18 * 0.0;
  fVar9 = fVar14 + fVar11 * fVar20 + fVar12 * fVar9 + fVar13 * 0.0;
  fVar19 = fVar7 + fVar6 * fVar17 + fVar10 * fVar16 + fVar18 * 0.0;
  fVar16 = fVar14 + fVar11 * fVar17 + fVar12 * fVar16 + fVar13 * 0.0;
  fVar21 = fVar7 + fVar6 * fVar17 + fVar10 * fVar15 + fVar18 * 0.0;
  fVar15 = fVar14 + fVar11 * fVar17 + fVar12 * fVar15 + fVar13 * 0.0;
  fVar8 = -3.4028235e+38;
  if (-3.4028235e+38 <= fVar22) {
    fVar8 = fVar22;
  }
  fVar7 = fVar7 + fVar6 * fVar20 + fVar10 * fVar5 + fVar18 * 0.0;
  fVar14 = fVar14 + fVar11 * fVar20 + fVar12 * fVar5 + fVar13 * 0.0;
  fVar17 = -3.4028235e+38;
  if (-3.4028235e+38 <= fVar9) {
    fVar17 = fVar9;
  }
  fVar6 = 3.4028235e+38;
  if (fVar22 <= 3.4028235e+38) {
    fVar6 = fVar22;
  }
  fVar20 = 3.4028235e+38;
  if (fVar9 <= 3.4028235e+38) {
    fVar20 = fVar9;
  }
  if (fVar8 <= fVar19) {
    fVar8 = fVar19;
  }
  if (fVar17 <= fVar16) {
    fVar17 = fVar16;
  }
  if (fVar19 <= fVar6) {
    fVar6 = fVar19;
  }
  if (fVar16 <= fVar20) {
    fVar20 = fVar16;
  }
  if (fVar8 <= fVar21) {
    fVar8 = fVar21;
  }
  if (fVar17 <= fVar15) {
    fVar17 = fVar15;
  }
  if (fVar21 <= fVar6) {
    fVar6 = fVar21;
  }
  if (fVar15 <= fVar20) {
    fVar20 = fVar15;
  }
  if (fVar8 <= fVar7) {
    fVar8 = fVar7;
  }
  if (fVar17 <= fVar14) {
    fVar17 = fVar14;
  }
  if (fVar7 <= fVar6) {
    fVar6 = fVar7;
  }
  if (fVar14 <= fVar20) {
    fVar20 = fVar14;
  }
  *param_7 = fVar6;
  param_7[1] = fVar17;
  param_7[2] = fVar8;
  param_7[3] = fVar20;
  return;
}

