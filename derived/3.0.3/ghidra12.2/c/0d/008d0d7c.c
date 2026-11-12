
float FUN_008d0d7c(long param_1,long param_2,undefined8 param_3,uint param_4,uint param_5)

{
  int *piVar1;
  int iVar2;
  bool bVar3;
  bool bVar4;
  uint uVar5;
  long lVar6;
  float *pfVar7;
  ulong uVar8;
  ulong uVar9;
  long lVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float __x;
  float local_4c;
  float local_48;
  float fStack_44;
  
  fVar13 = 0.0;
  uVar8 = (ulong)(param_4 | param_5 ^ 0xffffffff) & 1;
  param_2 = param_2 + uVar8 * 8;
  __x = *(float *)(param_2 + 0x98);
  fVar12 = *(float *)(param_2 + 0x9c);
  fVar11 = SQRT(fVar12 * fVar12 + __x * __x);
  if (DAT_04ced028 < fVar11) {
    if (DAT_04ced02c <= fVar11) {
      fVar13 = 1.0;
    }
    else {
      fVar13 = (fVar11 - DAT_04ced028) / (DAT_04ced02c - DAT_04ced028) + 0.0;
    }
  }
  fVar12 = -fVar12;
  if (0.0 < fVar11) {
    __x = __x * (fVar13 / fVar11);
    fVar12 = (fVar13 / fVar11) * fVar12;
  }
  local_4c = __x;
  uVar5 = FUN_02582d8c(param_3,1);
  if ((uVar5 < 8) && (*(char *)(*(long *)PTR_DAT_04bb4fb8 + (ulong)uVar5 * 0x13f0 + 0x13d4) != '\0')
     ) {
    uVar5 = *(uint *)(*(long *)PTR_DAT_04bb4fb8 + (ulong)uVar5 * 0x13f0 + 0x13d8);
    uVar9 = (ulong)uVar5;
    lVar6 = DAT_04d02f58 + 0x10 + (ulong)uVar5 * 0x10;
    if (3 < uVar5) {
      lVar6 = DAT_04d02f58 + 0x10;
    }
    lVar10 = DAT_04d02f58;
  }
  else {
    uVar9 = 0xffffffff;
    lVar10 = *(long *)PTR_DAT_04bb3960;
    lVar6 = lVar10 + 0x10;
  }
  if (*(int *)(lVar6 + uVar8 * 8) != 0) {
    lVar6 = lVar10 + 0x10 + uVar9 * 0x10;
    if (3 < (uint)uVar9) {
      lVar6 = lVar10 + 0x10;
    }
    iVar2 = *(int *)(lVar6 + uVar8 * 8);
    pfVar7 = &local_4c;
    if (iVar2 != 1) {
      if (iVar2 != 0) {
        pfVar7 = (float *)PTR_DAT_04bb2f48;
      }
    }
    goto LAB_008d1004;
  }
  if (*(char *)(param_1 + 0x30850) != '\0') {
    if ((((-1.1920929e-07 <= __x) && (__x <= 1.1920929e-07)) && (-1.1920929e-07 <= fVar12)) &&
       (fVar12 <= 1.1920929e-07)) {
      *(undefined4 *)(param_1 + 0x30848) = 0xffffffff;
      pfVar7 = (float *)&DAT_0419b55c;
      goto LAB_008d1004;
    }
    fStack_44 = atan2f(fVar12,__x);
    fVar11 = fStack_44 * 0.15915494;
    uVar5 = 0;
    if (fVar11 != (float)(int)fVar11) {
      uVar5 = (uint)(fVar11 < 0.0);
    }
    fStack_44 = fStack_44 + (float)(int)((int)fVar11 - uVar5) * -6.2831855;
    bVar3 = false;
    bVar4 = false;
    if (fStack_44 < 6.2831855) {
      bVar3 = false;
      bVar4 = true;
      if (!NAN(fStack_44)) {
        bVar3 = fStack_44 == 0.0;
        bVar4 = 0.0 <= fStack_44;
      }
    }
    if (!bVar4 || bVar3) {
      fStack_44 = 0.0;
    }
    local_48 = SQRT(fVar12 * fVar12 + __x * __x);
    uVar5 = FUN_03858470(param_1 + 0x30818,&fStack_44,&local_48);
    if ((uVar5 & 0xfffffffe) != 2) {
      pfVar7 = (float *)PTR_DAT_04bb2f48;
      goto LAB_008d1004;
    }
    lVar6 = lVar10 + 0x10 + uVar9 * 0x10;
    if (3 < (uint)uVar9) {
      lVar6 = lVar10 + 0x10;
    }
    piVar1 = (int *)(lVar6 + uVar8 * 8);
    if (*piVar1 == 0) {
      *piVar1 = 1;
      piVar1[1] = 5;
    }
  }
  pfVar7 = &local_4c;
LAB_008d1004:
  return *pfVar7;
}

