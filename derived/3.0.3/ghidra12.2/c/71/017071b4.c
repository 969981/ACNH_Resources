
void FUN_017071b4(long param_1,undefined4 *param_2,float *param_3)

{
  long *plVar1;
  long lVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  
  fVar4 = (float)NEON_ucvtf(*param_2);
  fVar3 = (float)NEON_ucvtf(*(undefined4 *)(*(long *)(*(long *)(param_1 + 0x48) + 0x68) + 0x2b4));
  fVar3 = fVar3 * 8.381903e-08;
  fVar4 = fVar4 * 8.381903e-08;
  if (fVar3 <= 360.0) {
    if (fVar3 < 0.0) {
      fVar6 = fVar3 / 360.0 + -1.0;
      goto LAB_01707224;
    }
  }
  else {
    fVar6 = fVar3 / 360.0;
LAB_01707224:
    fVar3 = fVar3 - (float)(int)fVar6 * 360.0;
  }
  if (fVar4 <= 360.0) {
    if (fVar4 < 0.0) {
      fVar6 = fVar4 / 360.0 + -1.0;
      goto LAB_01707260;
    }
  }
  else {
    fVar6 = fVar4 / 360.0;
LAB_01707260:
    fVar4 = fVar4 - (float)(int)fVar6 * 360.0;
  }
  fVar6 = 0.0;
  if (fVar3 != fVar4) {
    fVar5 = fVar3 - fVar4;
    fVar6 = fVar5;
    if (fVar3 <= fVar4) {
      fVar6 = fVar4 - fVar3;
    }
    if (fVar6 <= 180.0) {
      fVar6 = fVar4 - fVar3;
      if (fVar3 <= fVar4) goto LAB_017072c0;
    }
    else {
      fVar5 = 360.0 - fVar6;
      fVar6 = fVar5;
      if (fVar4 < fVar3) goto LAB_017072c0;
    }
    fVar6 = -fVar5;
  }
LAB_017072c0:
  if (((*(long *)(param_1 + 0x1138) != 0) &&
      (lVar2 = *(long *)(*(long *)(param_1 + 0x1138) + 0x78), lVar2 != 0)) &&
     (plVar1 = *(long **)(lVar2 + 0x48), plVar1 != (long *)0x0)) {
    (**(code **)(*plVar1 + 0x30))(fVar6,plVar1,PTR_DAT_04bbde60);
  }
  if (param_3 != (float *)0x0) {
    *param_3 = fVar6;
  }
  return;
}

