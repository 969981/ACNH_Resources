
void FUN_021f4b30(float *param_1,float *param_2,undefined4 *param_3,undefined8 *param_4,long param_5
                 ,byte *param_6)

{
  float *pfVar1;
  byte bVar2;
  undefined *puVar3;
  uint uVar4;
  int iVar5;
  ulong uVar6;
  long lVar7;
  long lVar8;
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
  undefined8 local_c8;
  float local_c0;
  undefined **local_b8;
  undefined4 local_b0;
  undefined4 uStack_ac;
  long local_a8;
  
  puVar3 = PTR_DAT_04bb43c0;
  lVar8 = *(long *)PTR_DAT_04bb43c0;
  uVar4 = FUN_0277d6c4(param_3);
  lVar7 = *(long *)puVar3;
  if (lVar7 == 0) {
    return;
  }
  lVar8 = *(long *)(lVar8 + 0x57e58);
  uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar8 + 0x1f8);
  if (*(uint *)(lVar8 + 0x1d8) <= uVar4) {
    return;
  }
  if (*(long *)(*(long *)(lVar8 + 0x1e0) + (long)(int)uVar4 * 8) == 0) {
    return;
  }
  local_a8 = 0;
  local_b0 = *param_3;
  uStack_ac = param_3[1];
  local_b8 = &PTR_FUN_04a36b50;
  uVar4 = FUN_0277d6c4(&local_b0);
  if (*(long *)puVar3 != 0) {
    lVar7 = *(long *)(lVar7 + 0x57e58);
    uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar7 + 0x1f8);
    if ((uVar4 < *(uint *)(lVar7 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar7 + 0x1e0) + (long)(int)uVar4 * 8) != 0)) {
      lVar7 = *(long *)PTR_DAT_04bc0428;
      uVar4 = FUN_0277d6c4(param_3);
      uVar4 = (uVar4 & 0xffff) - (uint)*(ushort *)(lVar7 + 0x1f8);
      if ((uVar4 < *(uint *)(lVar7 + 0x1d8)) &&
         (lVar7 = *(long *)(*(long *)(lVar7 + 0x1e0) + (long)(int)uVar4 * 8), lVar7 != 0)) {
        local_a8 = lVar7;
      }
    }
  }
  local_c8 = *param_4;
  local_c0 = *(float *)(param_4 + 1);
  if (((DAT_04cfae30 == 0) || (*(long *)(DAT_04cfae30 + 0xa8) == 0)) ||
     (*(char *)(DAT_04cfae30 + 0x11c8) != '\0')) {
    fVar9 = -500.0;
  }
  else {
    fVar9 = (float)FUN_0093a950(DAT_04cfae30 + 0x28,&local_c8,0);
  }
  if ((*(int *)(param_5 + 0x20) - *(int *)(param_5 + 0x10)) + 1 < 4) {
    fVar11 = 10.0;
  }
  else {
    fVar11 = 10.0;
    if (3 < (*(int *)(param_5 + 0x24) - *(int *)(param_5 + 0x14)) + 1) {
      fVar11 = 15.0;
    }
  }
  local_c8._4_4_ = fVar9;
  iVar5 = FUN_01ae98d0(&local_b8);
  puVar3 = PTR_DAT_04bb2d00;
  uVar6 = (ulong)((float)iVar5 * 90.0 * 11930465.0);
  pfVar1 = (float *)(PTR_DAT_04bb2d00 + (uVar6 >> 0x19 & 0x7f) * 0x10);
  fVar9 = (float)((uint)uVar6 >> 1 & 0xffffff) * 5.9604645e-08;
  fVar10 = *pfVar1 + fVar9 * pfVar1[1];
  fVar9 = pfVar1[2] + fVar9 * pfVar1[3];
  fVar12 = fVar10 * 0.0;
  fVar14 = fVar10 * (fVar10 + fVar10);
  fVar9 = fVar9 + fVar9;
  fVar13 = (fVar10 + fVar10) * fVar12;
  fVar16 = fVar12 * (fVar12 + fVar12);
  fVar15 = fVar10 * (fVar12 + fVar12);
  fVar12 = fVar9 * fVar12;
  fVar10 = fVar10 * fVar9;
  fVar17 = (fVar15 - fVar12) * 0.0 + ((1.0 - fVar14) - fVar16) * 0.0 + fVar11 * (fVar10 + fVar16);
  fVar19 = ((1.0 - fVar16) - fVar16) * 0.0 + (fVar12 + fVar15) * 0.0 + fVar11 * (fVar13 - fVar12);
  fVar18 = (fVar12 + fVar13) * 0.0 + (fVar16 - fVar10) * 0.0 + fVar11 * ((1.0 - fVar16) - fVar14);
  iVar5 = FUN_01ae98d0(&local_b8);
  uVar6 = (ulong)((float)iVar5 * 90.0 * 11930465.0);
  pfVar1 = (float *)(puVar3 + (uVar6 >> 0x19 & 0x7f) * 0x10);
  fVar9 = (float)((uint)uVar6 >> 1 & 0xffffff) * 5.9604645e-08;
  fVar11 = *pfVar1 + fVar9 * pfVar1[1];
  fVar9 = pfVar1[2] + fVar9 * pfVar1[3];
  fVar12 = fVar11 * 0.0;
  fVar15 = fVar11 * (fVar11 + fVar11);
  fVar9 = fVar9 + fVar9;
  fVar14 = (fVar11 + fVar11) * fVar12;
  fVar16 = fVar12 * (fVar12 + fVar12);
  fVar13 = fVar11 * (fVar12 + fVar12);
  fVar12 = fVar9 * fVar12;
  fVar11 = fVar11 * fVar9;
  fVar10 = (float)local_c8 +
           (fVar13 - fVar12) * 0.0 + ((1.0 - fVar15) - fVar16) * 5.0 + (fVar11 + fVar16) * 0.0;
  fVar13 = local_c8._4_4_ +
           ((1.0 - fVar16) - fVar16) * 0.0 + (fVar12 + fVar13) * 5.0 + (fVar14 - fVar12) * 0.0;
  fVar20 = fVar17 + fVar10;
  fVar10 = fVar10 - fVar17;
  fVar9 = local_c0 +
          (fVar12 + fVar14) * 0.0 + (fVar16 - fVar11) * 5.0 + ((1.0 - fVar16) - fVar15) * 0.0;
  fVar11 = fVar18 + fVar9;
  fVar9 = fVar9 - fVar18;
  FUN_01ae98d0(&local_b8);
  bVar2 = *param_6;
  uVar4 = (uint)bVar2 - (bVar2 >> 1 & 0x55555555);
  uVar4 = (uVar4 >> 2 & 0x33333333) + (uVar4 & 0x33333333);
  uVar4 = uVar4 + (uVar4 >> 4) & 0xf0f0f0f;
  uVar4 = uVar4 + (uVar4 >> 8);
  uVar4 = uVar4 + (uVar4 >> 0x10) & 0x3f;
  if (uVar4 == 1) {
    if ((bVar2 & 1) == 0) {
      if ((bVar2 >> 2 & 1) == 0) {
        return;
      }
      goto LAB_021f4f2c;
    }
  }
  else {
    if (uVar4 != 2) {
      return;
    }
    fVar14 = *param_2 - fVar20;
    fVar16 = param_2[2] - fVar11;
    fVar12 = *param_2 - fVar10;
    fVar15 = param_2[2] - fVar9;
    if (fVar15 * fVar15 + fVar12 * fVar12 <= fVar16 * fVar16 + fVar14 * fVar14) {
LAB_021f4f2c:
      *param_1 = fVar10;
      param_1[1] = fVar13 - fVar19;
      param_1[2] = fVar9;
      return;
    }
  }
  *param_1 = fVar20;
  param_1[1] = fVar19 + fVar13;
  param_1[2] = fVar11;
  return;
}

