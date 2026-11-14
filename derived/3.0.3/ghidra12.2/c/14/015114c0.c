
bool FUN_015114c0(float param_1,undefined8 *param_2,long param_3,float *param_4,uint *param_5,
                 float *param_6)

{
  int iVar1;
  int iVar2;
  int iVar3;
  float fVar4;
  long lVar5;
  bool bVar6;
  uint uVar7;
  ulong uVar8;
  long lVar9;
  ulong uVar10;
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
  undefined **local_b8;
  undefined8 *local_b0;
  undefined8 local_a8;
  undefined8 *local_a0;
  int local_98;
  int iStack_94;
  
  uVar8 = (ulong)(*param_5 >> 0x14) & 0xff0;
  fVar11 = (float)(*param_5 & 0xffffff) * 5.9604645e-08;
  fVar12 = *param_4;
  fVar21 = (*(float *)((long)&DAT_04199798 + uVar8) +
           fVar11 * *(float *)((long)&DAT_0419979c + uVar8)) * param_1 + fVar12;
  fVar13 = param_4[2];
  fVar11 = (*(float *)((long)&DAT_041997a0 + uVar8) +
           fVar11 * *(float *)((long)&DAT_041997a4 + uVar8)) * param_1 + fVar13;
  if (param_6 != (float *)0x0) {
    fVar12 = param_4[1];
    param_6[2] = fVar11;
    *param_6 = fVar21;
    param_6[1] = fVar12 + 0.0;
    fVar12 = *param_4;
    fVar13 = param_4[2];
  }
  local_b8 = (undefined **)(PTR_DAT_04bbc1a0 + 0x10);
  local_98 = (int)((float)(int)fVar12 / 5.0) - (uint)(fVar12 < 0.0);
  iStack_94 = (int)((float)(int)fVar13 / 5.0) - (uint)(fVar13 < 0.0);
  iVar2 = (int)((float)(int)fVar21 / 5.0) - (uint)(fVar21 < 0.0);
  iVar3 = (int)((float)(int)fVar11 / 5.0) - (uint)(fVar11 < 0.0);
  local_b0 = &DAT_048f9750;
  local_a0 = &DAT_048f9750;
  iVar1 = local_98;
  if (iVar2 <= local_98) {
    iVar1 = iVar2;
  }
  if (local_98 <= iVar2) {
    local_98 = iVar2;
  }
  iVar2 = iStack_94;
  if (iVar3 <= iStack_94) {
    iVar2 = iVar3;
  }
  if (iStack_94 <= iVar3) {
    iStack_94 = iVar3;
  }
  local_a8 = CONCAT44(iVar2,iVar1);
  if (((DAT_04cfae30 != 0) && (*(long *)(DAT_04cfae30 + 0xa8) != 0)) &&
     (uVar8 = FUN_009721a0(*(long *)(DAT_04cfae30 + 0xa8),&local_b8,0), (uVar8 & 1) != 0)) {
    return false;
  }
  lVar9 = DAT_053274a0;
  iVar1 = (*(int *)(param_3 + 0x24) - *(int *)(param_3 + 0x14)) + 1;
  fVar13 = (float)*(int *)(param_3 + 0x10) * 5.0 + 1.0;
  fVar14 = (float)*(int *)(param_3 + 0x14) * 5.0 + 1.0;
  fVar15 = (float)*(int *)(param_3 + 0x20) * 5.0 + 5.0 + -1.0;
  fVar17 = (float)*(int *)(param_3 + 0x24) * 5.0 + 5.0 + -1.0;
  fVar12 = fVar14 + -1.6666666;
  if (1 < iVar1) {
    fVar12 = fVar14;
  }
  fVar14 = fVar17 + 1.6666666;
  if (1 < iVar1) {
    fVar14 = fVar17;
  }
  fVar17 = fVar15 + 1.6666666;
  fVar4 = fVar13 + -1.6666666;
  if (1 < (*(int *)(param_3 + 0x20) - *(int *)(param_3 + 0x10)) + 1) {
    fVar17 = fVar15;
    fVar4 = fVar13;
  }
  uVar7 = FUN_0277d6c4(param_2);
  lVar5 = DAT_053274a0;
  if (DAT_053274a0 != 0) {
    lVar9 = *(long *)(lVar9 + 0x57e58);
    uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
    if ((uVar7 < *(uint *)(lVar9 + 0x1d8)) &&
       (*(long *)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar7 * 8) != 0)) {
      local_a8 = 0;
      local_b0 = (undefined8 *)*param_2;
      local_b8 = &PTR_FUN_04a36b50;
      uVar7 = FUN_0277d6c4(&local_b0);
      if (DAT_053274a0 != 0) {
        lVar9 = *(long *)(lVar5 + 0x57e58);
        uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
        if ((uVar7 < *(uint *)(lVar9 + 0x1d8)) &&
           (*(long *)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar7 * 8) != 0)) {
          lVar9 = *(long *)PTR_DAT_04bc0428;
          uVar7 = FUN_0277d6c4(param_2);
          uVar7 = (uVar7 & 0xffff) - (uint)*(ushort *)(lVar9 + 0x1f8);
          if ((uVar7 < *(uint *)(lVar9 + 0x1d8)) &&
             (lVar9 = *(long *)(*(long *)(lVar9 + 0x1e0) + (long)(int)uVar7 * 8), lVar9 != 0)) {
            local_a8 = lVar9;
          }
        }
      }
      uVar7 = FUN_01ae7550(&local_b8);
      if ((uVar7 & 0xfffffffe) == 8) {
        uVar10 = (ulong)((float)(*param_5 + 0x20000000 >> 0x1e) * 90.0 * 11930465.0);
        uVar8 = uVar10 >> 0x18 & 0xff;
        fVar13 = (float)((uint)uVar10 & 0xffffff) * 5.9604645e-08;
        fVar15 = *param_4 +
                 ((float)(&DAT_04199798)[uVar8 * 4] + fVar13 * (float)(&DAT_0419979c)[uVar8 * 4]) *
                 param_1;
        fVar13 = param_4[2] +
                 ((float)(&DAT_041997a0)[uVar8 * 4] + fVar13 * (float)(&DAT_041997a4)[uVar8 * 4]) *
                 param_1;
        fVar18 = (float)*(int *)(param_3 + 0x10) * 5.0;
        fVar19 = (float)*(int *)(param_3 + 0x14) * 5.0;
        fVar20 = (float)*(int *)(param_3 + 0x24) * 5.0 + 5.0;
        fVar16 = (float)*(int *)(param_3 + 0x20) * 5.0 + 5.0;
        if (uVar7 == 8) {
          if ((*(int *)(param_3 + 0x20) - *(int *)(param_3 + 0x10)) + 1 <
              (*(int *)(param_3 + 0x24) - *(int *)(param_3 + 0x14)) + 1) {
            fVar20 = fVar20 + -10.0;
            bVar6 = false;
            if ((fVar19 + 10.0 < fVar13) && (bVar6 = false, !NAN(fVar13) && !NAN(fVar20))) {
              bVar6 = fVar13 < fVar20;
            }
            if (bVar6) {
              return false;
            }
          }
          else {
            fVar16 = fVar16 + -10.0;
            bVar6 = false;
            if ((fVar18 + 10.0 < fVar15) && (bVar6 = false, !NAN(fVar15) && !NAN(fVar16))) {
              bVar6 = fVar15 < fVar16;
            }
            if (bVar6) {
              return false;
            }
          }
        }
        else {
          fVar20 = fVar20 + -10.0;
          bVar6 = false;
          if ((fVar19 + 10.0 < fVar13) && (bVar6 = false, !NAN(fVar13) && !NAN(fVar20))) {
            bVar6 = fVar13 < fVar20;
          }
          if (bVar6) {
            return false;
          }
          if ((fVar18 + 10.0 < fVar15) && (fVar15 < fVar16 + -10.0)) {
            return false;
          }
        }
      }
    }
  }
  return fVar11 <= fVar14 && (fVar12 <= fVar11 && (fVar21 <= fVar17 && fVar4 <= fVar21));
}

