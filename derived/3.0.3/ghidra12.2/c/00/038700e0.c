
void FUN_038700e0(long *param_1,float *param_2,float *param_3,float *param_4,float *param_5)

{
  undefined *puVar1;
  float *pfVar2;
  undefined *puVar3;
  undefined4 uVar4;
  int iVar5;
  float *pfVar6;
  undefined8 *puVar7;
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
  undefined8 local_d0;
  undefined8 uStack_c8;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  undefined8 local_b0;
  undefined8 uStack_a8;
  undefined8 local_a0;
  uint local_98;
  
  puVar3 = PTR_DAT_04bc0cb8;
  if (param_1 == (long *)0x0) {
    return;
  }
  if (param_1[1] == 0) {
    return;
  }
  uStack_c8._0_4_ = 0xb;
  puVar1 = PTR_DAT_04bc0cb8 + 0x10;
  local_d0 = puVar1;
  (**(code **)(*param_1 + 0x20))(param_1,&local_d0);
  pfVar6 = (float *)(**(code **)(param_1[3] + 0xd0))(param_1[1]);
  fVar14 = *pfVar6;
  fVar16 = pfVar6[1];
  uStack_c8._0_4_ = 0x2b;
  local_d0 = puVar1;
  (**(code **)(*param_1 + 0x20))(param_1,&local_d0);
  (**(code **)(param_1[3] + 0x2d0))(&local_d0,param_1[1]);
  uStack_c8._0_4_ = 0xc;
  fVar16 = fVar16 * local_d0._4_4_;
  fVar14 = fVar14 * (float)local_d0;
  local_d0 = puVar1;
  (**(code **)(*param_1 + 0x20))(param_1,&local_d0);
  uVar4 = (**(code **)(param_1[3] + 0xe0))(param_1[1]);
  local_a0 = (undefined *)CONCAT44(local_a0._4_4_,uVar4);
  uStack_c8._0_4_ = 0xd;
  local_d0 = puVar1;
  (**(code **)(*param_1 + 0x20))(param_1,&local_d0);
  iVar5 = (**(code **)(param_1[3] + 0xf0))(param_1[1]);
  fVar15 = 0.0;
  if ((float)local_a0 == 2.8026e-45) {
    fVar15 = fVar14 * -0.5 + 0.0;
  }
  else if ((float)local_a0 == 1.4013e-45) {
    fVar15 = fVar14 * 0.5 + 0.0;
  }
  else if (((float)local_a0 == 0.0) && (fVar18 = 0.0, iVar5 == 0)) goto LAB_03870280;
  fVar18 = 0.0;
  if (iVar5 == 1) {
    fVar18 = fVar16 * -0.5 + 0.0;
  }
  else if (iVar5 == 2) {
    fVar18 = fVar16 * 0.5 + 0.0;
  }
LAB_03870280:
  fVar17 = fVar15 - fVar14 * 0.5;
  uStack_c8 = CONCAT44(uStack_c8._4_4_,0x11);
  fVar19 = fVar16 * 0.5 + fVar18;
  fVar18 = fVar18 - fVar16 * 0.5;
  fVar15 = fVar14 * 0.5 + fVar15;
  local_d0 = puVar3 + 0x10;
  (**(code **)(*param_1 + 0x20))(param_1,&local_d0);
  puVar7 = (undefined8 *)(**(code **)(param_1[3] + 0x130))(param_1[1]);
  uStack_c8 = puVar7[1];
  local_d0 = (undefined *)*puVar7;
  uStack_b8 = puVar7[3];
  uStack_c0 = puVar7[2];
  local_a0 = (undefined *)0x0;
  local_98 = 0;
  uStack_a8 = puVar7[5];
  local_b0 = puVar7[4];
  FUN_0147cbb4(&local_a0,&local_d0);
  pfVar6 = (float *)(PTR_DAT_04bb2d00 + ((ulong)((uint)(float)local_a0 >> 0x14) & 0xff0));
  fVar14 = (float)((uint)(float)local_a0 & 0xffffff) * 5.9604645e-08;
  fVar8 = *pfVar6 + fVar14 * pfVar6[1];
  fVar14 = pfVar6[2] + fVar14 * pfVar6[3];
  pfVar6 = (float *)(PTR_DAT_04bb2d00 + ((ulong)((uint)local_a0._4_4_ >> 0x14) & 0xff0));
  fVar16 = (float)((uint)local_a0._4_4_ & 0xffffff) * 5.9604645e-08;
  fVar10 = *pfVar6 + fVar16 * pfVar6[1];
  pfVar2 = (float *)(PTR_DAT_04bb2d00 + ((ulong)(local_98 >> 0x14) & 0xff0));
  fVar9 = pfVar6[2] + fVar16 * pfVar6[3];
  fVar16 = (float)(local_98 & 0xffffff) * 5.9604645e-08;
  fVar11 = *pfVar2 + fVar16 * pfVar2[1];
  local_98 = 0x29;
  fVar16 = pfVar2[2] + fVar16 * pfVar2[3];
  fVar12 = fVar14 * fVar16;
  fVar14 = fVar14 * fVar11;
  fVar21 = fVar8 * fVar10 * fVar16 - fVar14;
  fVar20 = fVar9 * fVar16;
  fVar9 = fVar9 * fVar11;
  fVar13 = fVar12 + fVar11 * fVar8 * fVar10;
  fVar11 = fVar8 * fVar11 + fVar10 * fVar12;
  fVar14 = -(fVar8 * fVar16) + fVar10 * fVar14;
  fVar16 = fVar19 * fVar21;
  fVar21 = fVar18 * fVar21;
  fVar19 = fVar19 * fVar13;
  fVar18 = fVar18 * fVar13;
  local_a0 = puVar3 + 0x10;
  (**(code **)(*param_1 + 0x20))(param_1,&local_a0);
  (**(code **)(param_1[3] + 0x2b0))(&local_a0,param_1[1]);
  *param_2 = fVar16 + fVar17 * fVar20 + fVar11 * 0.0 + (float)local_a0;
  param_2[1] = fVar19 + fVar17 * fVar9 + fVar14 * 0.0 + local_a0._4_4_;
  *param_3 = fVar21 + fVar17 * fVar20 + fVar11 * 0.0 + (float)local_a0;
  param_3[1] = fVar18 + fVar17 * fVar9 + fVar14 * 0.0 + local_a0._4_4_;
  *param_4 = fVar21 + fVar15 * fVar20 + fVar11 * 0.0 + (float)local_a0;
  param_4[1] = fVar18 + fVar15 * fVar9 + fVar14 * 0.0 + local_a0._4_4_;
  *param_5 = fVar16 + fVar15 * fVar20 + fVar11 * 0.0 + (float)local_a0;
  param_5[1] = fVar19 + fVar15 * fVar9 + fVar14 * 0.0 + local_a0._4_4_;
  return;
}

