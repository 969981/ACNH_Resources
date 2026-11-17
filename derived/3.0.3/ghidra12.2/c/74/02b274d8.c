
void FUN_02b274d8(long param_1,float *param_2,uint param_3)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  float *pfVar5;
  undefined *puVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  short sVar9;
  undefined *puVar10;
  undefined *puVar11;
  undefined4 *puVar12;
  long lVar13;
  int iVar14;
  undefined4 uVar15;
  float fVar16;
  float fVar17;
  float fVar18;
  float fVar19;
  float fVar20;
  float fVar21;
  float fVar22;
  float fVar23;
  undefined4 local_b8 [2];
  undefined *local_b0;
  undefined *puStack_a8;
  int local_a0;
  int iStack_9c;
  undefined *local_98;
  int local_90;
  int iStack_8c;
  undefined4 local_88;
  undefined2 local_84;
  undefined1 local_82;
  undefined8 local_80;
  int local_74;
  
  fVar17 = param_2[2];
  *(uint *)(param_1 + 0x18) = (int)((float)(int)*param_2 / 10.0) - (uint)(*param_2 < 0.0);
  *(uint *)(param_1 + 0x1c) = (int)((float)(int)fVar17 / 10.0) - (uint)(fVar17 < 0.0);
  if (*(uint *)(param_1 + 0xc) < 4) {
    puVar12 = (undefined4 *)(&PTR_DAT_04aa1c08)[(int)*(uint *)(param_1 + 0xc)];
  }
  else {
    puVar12 = (undefined4 *)PTR_DAT_04bb2ce8;
  }
  fVar17 = (float)NEON_ucvtf(*puVar12);
  fVar16 = sinf(fVar17 * 1.4629181e-09);
  fVar17 = cosf(fVar17 * 1.4629181e-09);
  pfVar5 = (float *)(&DAT_0417fa20 + (ulong)param_3 * 2);
  if (7 < param_3) {
    pfVar5 = (float *)&DAT_0417fa20;
  }
  fVar19 = -(fVar16 * pfVar5[1]) + *pfVar5 * fVar17;
  fVar16 = fVar17 * pfVar5[1] + *pfVar5 * fVar16;
  fVar17 = 0.5;
  if (fVar19 < 0.0) {
    fVar17 = -0.5;
  }
  fVar18 = 0.5;
  if (fVar16 < 0.0) {
    fVar18 = -0.5;
  }
  *(int *)(param_1 + 0x18) = *(int *)(param_1 + 0x18) + (int)(fVar19 + fVar17);
  *(int *)(param_1 + 0x1c) = *(int *)(param_1 + 0x1c) + (int)(fVar16 + fVar18);
  if (*(uint *)(param_1 + 0xc) < 4) {
    puVar12 = (undefined4 *)(&PTR_DAT_04aa1c08)[(int)*(uint *)(param_1 + 0xc)];
  }
  else {
    puVar12 = (undefined4 *)PTR_DAT_04bb2ce8;
  }
  fVar17 = (float)NEON_ucvtf(*puVar12);
  fVar16 = sinf(fVar17 * 1.4629181e-09);
  fVar17 = cosf(fVar17 * 1.4629181e-09);
  puVar11 = PTR_DAT_04bbc1a0;
  puVar10 = PTR_DAT_04bb2010;
  fVar20 = fVar16 + fVar17 * 0.0;
  local_80 = 0;
  fVar19 = fVar16 * 4.0 - fVar17;
  fVar18 = fVar17 * -4.0 - fVar16;
  fVar17 = fVar16 * 0.0 - fVar17;
  fVar16 = 0.5;
  if (fVar19 < 0.0) {
    fVar16 = -0.5;
  }
  fVar21 = 0.5;
  if (fVar18 < 0.0) {
    fVar21 = -0.5;
  }
  fVar22 = 0.5;
  if (fVar20 < 0.0) {
    fVar22 = -0.5;
  }
  fVar23 = 0.5;
  if (fVar17 < 0.0) {
    fVar23 = -0.5;
  }
  iVar1 = *(int *)(param_1 + 0x18) + (int)(fVar19 + fVar16);
  iVar2 = *(int *)(param_1 + 0x1c) + (int)(fVar18 + fVar21);
  iVar3 = *(int *)(param_1 + 0x1c) + (int)(fVar17 + fVar23);
  iVar4 = *(int *)(param_1 + 0x18) + (int)(fVar20 + fVar22);
  iVar14 = iVar1;
  if (iVar4 <= iVar1) {
    iVar14 = iVar4;
  }
  if (iVar1 <= iVar4) {
    iVar1 = iVar4;
  }
  iVar4 = iVar2;
  if (iVar2 <= iVar3) {
    iVar4 = iVar3;
  }
  if (iVar3 <= iVar2) {
    iVar2 = iVar3;
  }
  fVar19 = (float)iVar14 * 10.0 + 2.5;
  fVar18 = (float)iVar2 * 10.0 + 2.5;
  fVar17 = (float)iVar1 * 10.0 + 10.0 + -2.5;
  fVar16 = (float)iVar4 * 10.0 + 10.0 + -2.5;
  iVar2 = (int)((float)(int)fVar19 / 5.0) - (uint)(fVar19 < 0.0);
  iVar3 = (int)((float)(int)fVar18 / 5.0) - (uint)(fVar18 < 0.0);
  iVar4 = (int)((float)(int)fVar17 / 5.0) - (uint)(fVar17 < 0.0);
  iVar1 = iVar2;
  if (iVar4 <= iVar2) {
    iVar1 = iVar4;
  }
  if (iVar2 <= iVar4) {
    iVar2 = iVar4;
  }
  local_b0 = PTR_DAT_04bbc1a0 + 0x10;
  iVar14 = (int)((float)(int)fVar16 / 5.0) - (uint)(fVar16 < 0.0);
  iVar4 = iVar3;
  if (iVar14 <= iVar3) {
    iVar4 = iVar14;
  }
  if (iVar3 <= iVar14) {
    iVar3 = iVar14;
  }
  puStack_a8 = PTR_DAT_04bb2010 + 0x10;
  local_b8[0] = 0x1b;
  if (*(uint *)(param_1 + 0xc) < 4) {
    local_74 = (&DAT_04102a20)[(int)*(uint *)(param_1 + 0xc)];
  }
  else {
    local_74 = 1;
  }
  local_84 = 0;
  local_82 = 0;
  local_88 = (undefined4)(long)((float)local_74 * 90.0 * 11930465.0);
  local_a0 = iVar1;
  iStack_9c = iVar4;
  local_98 = puStack_a8;
  local_90 = iVar2;
  iStack_8c = iVar3;
  FUN_02a7bc88(param_1 + 0x20,local_b8);
  sVar9 = *(short *)PTR_DAT_04bb6298;
  if (sVar9 != -1) {
    puVar6 = PTR_DAT_04bc39f8 + (ulong)(uint)(int)sVar9 * 8;
    if (0xff < (uint)(int)sVar9) {
      puVar6 = PTR_DAT_04bc39f8;
    }
    if ((*(uint *)(puVar6 + 4) & 1) != 0) {
      lVar13 = *(long *)PTR_DAT_04bb5008;
      if (*(uint *)(param_1 + 0xc) < 4) {
        iVar14 = (&DAT_04102a20)[(int)*(uint *)(param_1 + 0xc)];
      }
      else {
        iVar14 = 1;
      }
      uVar7 = *(undefined4 *)(param_1 + 0x18);
      uVar8 = *(undefined4 *)(param_1 + 0x1c);
      uVar15 = (undefined4)(long)((float)iVar14 * 90.0 * 11930465.0);
      if (*(char *)(lVar13 + 0x26848) == '\0') {
        *(int *)(lVar13 + 0x26818) = iVar1;
        *(int *)(lVar13 + 0x2681c) = iVar4;
        *(undefined **)(lVar13 + 0x26808) = puVar11 + 0x10;
        *(undefined **)(lVar13 + 0x26810) = puVar10 + 0x10;
        *(int *)(lVar13 + 0x26828) = iVar2;
        *(int *)(lVar13 + 0x2682c) = iVar3;
        *(undefined **)(lVar13 + 0x26820) = puVar10 + 0x10;
        *(undefined4 *)(lVar13 + 0x26830) = uVar15;
        *(undefined4 *)(lVar13 + 0x26840) = uVar7;
        *(undefined4 *)(lVar13 + 0x26844) = uVar8;
        *(undefined **)(lVar13 + 0x26838) = PTR_DAT_04bb2018 + 0x10;
        *(undefined1 *)(lVar13 + 0x26848) = 1;
      }
      else {
        *(int *)(lVar13 + 0x26818) = iVar1;
        *(int *)(lVar13 + 0x2681c) = iVar4;
        *(int *)(lVar13 + 0x26828) = iVar2;
        *(int *)(lVar13 + 0x2682c) = iVar3;
        *(undefined4 *)(lVar13 + 0x26830) = uVar15;
        *(undefined4 *)(lVar13 + 0x26840) = uVar7;
        *(undefined4 *)(lVar13 + 0x26844) = uVar8;
      }
    }
  }
  return;
}

