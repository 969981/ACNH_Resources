
uint FUN_017ba18c(long param_1,uint param_2,float *param_3)

{
  int iVar1;
  bool bVar2;
  bool bVar3;
  uint uVar4;
  long lVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  undefined *local_20;
  int local_18;
  int iStack_14;
  
  if (DAT_05292338 == 0) {
    fVar6 = 0.0;
    fVar9 = 0.0;
    fVar8 = 85.0;
    fVar7 = 85.0;
  }
  else {
    fVar9 = (float)*(int *)(DAT_05292338 + 0xd88) * 5.0;
    fVar6 = (float)*(int *)(DAT_05292338 + 0xd8c) * 5.0;
    fVar8 = (float)*(int *)(DAT_05292338 + 0xd98) * 5.0 + 5.0;
    fVar7 = (float)*(int *)(DAT_05292338 + 0xd9c) * 5.0 + 5.0;
  }
  if (param_2 < 8) {
    uVar4 = 1 << (ulong)(param_2 & 0x1f);
    if ((uVar4 & 0xc3) == 0) {
      if ((uVar4 & 0x14) == 0) goto LAB_017ba2f4;
      fVar6 = param_3[1];
      if (((fVar6 < 0.0) || (40.0 < fVar6)) ||
         ((fVar7 = *param_3, fVar7 < fVar9 || (fVar8 < fVar7)))) goto LAB_017ba3b8;
      if (*(char *)(param_1 + 0xee4) == '\0') goto LAB_017ba238;
      lVar5 = (ulong)(param_2 != 4) << 1;
      iVar1 = (int)((float)(int)fVar7 / 5.0) - (uint)(fVar7 < 0.0);
      iStack_14 = (int)((float)(int)fVar6 / 5.0) - (uint)(fVar6 < 0.0);
      local_18 = 0x29 - iVar1;
      if (param_2 != 4) {
        local_18 = iVar1 + -0x16;
      }
      goto LAB_017ba3a8;
    }
    fVar10 = *param_3;
    bVar2 = false;
    bVar3 = true;
    if (fVar9 <= fVar10) {
      bVar2 = false;
      bVar3 = true;
      if (!NAN(fVar10) && !NAN(fVar8)) {
        bVar2 = fVar10 == fVar8;
        bVar3 = fVar8 <= fVar10;
      }
    }
    if (((!bVar3 || bVar2) && (fVar6 <= param_3[2])) && (param_3[2] <= fVar7)) {
LAB_017ba238:
      uVar4 = 1;
      goto LAB_017ba3bc;
    }
  }
  else {
LAB_017ba2f4:
    if ((((param_2 == 5) || (param_2 == 3)) && (fVar8 = param_3[1], 0.0 <= fVar8)) &&
       (((fVar8 <= 40.0 && (fVar9 = param_3[2], fVar6 <= fVar9)) && (fVar9 <= fVar7)))) {
      if (*(char *)(param_1 + 0xee4) == '\0') goto LAB_017ba238;
      iVar1 = (int)((float)(int)fVar9 / 5.0) - (uint)(fVar9 < 0.0);
      iStack_14 = (int)((float)(int)fVar8 / 5.0) - (uint)(fVar8 < 0.0);
      local_18 = 0x29 - iVar1;
      if (param_2 != 3) {
        local_18 = iVar1 + -0x16;
      }
      lVar5 = 3;
      if (param_2 != 3) {
        lVar5 = 1;
      }
LAB_017ba3a8:
      local_20 = PTR_DAT_04bb2010 + 0x10;
      uVar4 = FUN_017f90e0(param_1 + 0xda0,lVar5,&local_20);
      goto LAB_017ba3bc;
    }
  }
LAB_017ba3b8:
  uVar4 = 0;
LAB_017ba3bc:
  return uVar4 & 1;
}

