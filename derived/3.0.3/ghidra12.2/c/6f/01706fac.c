
void FUN_01706fac(long param_1,float *param_2,float *param_3)

{
  uint uVar1;
  long *plVar2;
  uint uVar3;
  long lVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  
  lVar4 = *(long *)(*(long *)(param_1 + 0x48) + 0x68);
  fVar5 = *param_2 - *(float *)(lVar4 + 0x278);
  fVar6 = param_2[2] - *(float *)(lVar4 + 0x280);
  fVar6 = SQRT(fVar6 * fVar6 + fVar5 * fVar5);
  fVar5 = -fVar6;
  if (0.0 <= fVar6) {
    fVar5 = fVar6;
  }
  if (fVar5 <= 0.1) {
    uVar3 = *(uint *)(lVar4 + 0x2b4);
    uVar1 = uVar3;
  }
  else {
    uVar1 = FUN_006f0400();
    uVar3 = *(uint *)(lVar4 + 0x2b4);
  }
  fVar5 = (float)uVar3 * 8.381903e-08;
  fVar7 = (float)uVar1 * 8.381903e-08;
  if (fVar5 <= 360.0) {
    if (fVar5 < 0.0) {
      fVar9 = fVar5 / 360.0 + -1.0;
      goto LAB_01707074;
    }
  }
  else {
    fVar9 = fVar5 / 360.0;
LAB_01707074:
    fVar5 = fVar5 - (float)(int)fVar9 * 360.0;
  }
  if (fVar7 <= 360.0) {
    if (fVar7 < 0.0) {
      fVar9 = fVar7 / 360.0 + -1.0;
      goto LAB_017070b0;
    }
  }
  else {
    fVar9 = fVar7 / 360.0;
LAB_017070b0:
    fVar7 = fVar7 - (float)(int)fVar9 * 360.0;
  }
  fVar9 = 0.0;
  if (fVar5 != fVar7) {
    fVar8 = fVar5 - fVar7;
    fVar9 = fVar8;
    if (fVar5 <= fVar7) {
      fVar9 = fVar7 - fVar5;
    }
    if (fVar9 <= 180.0) {
      fVar9 = fVar7 - fVar5;
      if (fVar7 < fVar5) goto LAB_0170710c;
    }
    else {
      fVar8 = 360.0 - fVar9;
      fVar9 = fVar8;
      if (fVar5 <= fVar7) {
LAB_0170710c:
        fVar9 = -fVar8;
      }
    }
  }
  lVar4 = *(long *)(param_1 + 0x1138);
  if (lVar4 != 0) {
    if ((*(long *)(lVar4 + 0x78) == 0) ||
       (plVar2 = *(long **)(*(long *)(lVar4 + 0x78) + 0x48), plVar2 == (long *)0x0)) {
      lVar4 = *(long *)(lVar4 + 0x78);
    }
    else {
      (**(code **)(*plVar2 + 0x30))(fVar9,plVar2,PTR_DAT_04bbde58);
      if (*(long *)(param_1 + 0x1138) == 0) goto LAB_01707198;
      lVar4 = *(long *)(*(long *)(param_1 + 0x1138) + 0x78);
    }
    if (lVar4 != 0) {
      plVar2 = *(long **)(lVar4 + 0x48);
      if (plVar2 != (long *)0x0) {
        (**(code **)(*plVar2 + 0x30))(fVar6 * 10.0,plVar2,PTR_DAT_04bbde50);
      }
    }
  }
LAB_01707198:
  if (param_3 != (float *)0x0) {
    *param_3 = fVar9;
    param_3[1] = fVar6 * 10.0;
  }
  return;
}

