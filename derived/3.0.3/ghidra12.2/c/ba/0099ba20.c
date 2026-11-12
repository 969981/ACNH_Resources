
void FUN_0099ba20(float param_1,float param_2,float param_3,long param_4,undefined4 *param_5,
                 int *param_6,byte *param_7,uint param_8)

{
  int iVar1;
  long lVar2;
  float *pfVar3;
  int iVar4;
  int iVar5;
  int iVar6;
  int iVar7;
  int iVar8;
  long *plVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  
  fVar10 = 0.0;
  if ((*param_7 < 8) && (lVar2 = FUN_0251bdc4(param_7,0), lVar2 != 0)) {
    fVar10 = (float)NEON_ucvtf(*(undefined4 *)(lVar2 + 4));
    fVar10 = fVar10 * 1.4629181e-09;
  }
  *(undefined4 *)(param_4 + 0x280) = *param_5;
  *(undefined4 *)(param_4 + 0x284) = param_5[1];
  *(undefined4 *)(param_4 + 0x288) = param_5[2];
  lVar2 = FUN_00996914(param_4);
  pfVar3 = (float *)(**(code **)(*(long *)(lVar2 + 0x30) + 0xf0))();
  fVar12 = pfVar3[1];
  fVar13 = *pfVar3 * param_1 * param_3;
  fVar14 = pfVar3[2] * param_1 * param_3;
  fVar11 = cosf(fVar10);
  fVar10 = sinf(fVar10);
  *(float *)(param_4 + 0x284) = fVar12 * param_1 * param_3 + *(float *)(param_4 + 0x284);
  *(float *)(param_4 + 0x280) = *(float *)(param_4 + 0x280) + fVar10 * fVar14 + fVar13 * fVar11;
  *(float *)(param_4 + 0x288) = (fVar11 * fVar14 - fVar13 * fVar10) + *(float *)(param_4 + 0x288);
  lVar2 = FUN_00996914(param_4);
  plVar9 = (long *)(lVar2 + 0x68);
  pfVar3 = (float *)(**(code **)(*plVar9 + 0xf0))(plVar9);
  iVar6 = (int)(long)(*pfVar3 * 11930465.0);
  lVar2 = (**(code **)(*plVar9 + 0xf0))(plVar9);
  iVar8 = (int)(long)(*(float *)(lVar2 + 4) * 11930465.0);
  lVar2 = (**(code **)(*plVar9 + 0xf0))(plVar9);
  iVar7 = (int)(long)(*(float *)(lVar2 + 8) * 11930465.0);
  if (*(char *)(param_4 + 0x2b0) != '\0') {
    if ((param_8 & 1) == 0) {
      fVar10 = param_2 * 90.0 + -90.0;
    }
    else {
      fVar10 = param_2 * 80.0 + -80.0;
      lVar2 = FUN_00996914(param_4);
      plVar9 = (long *)(lVar2 + 0x68);
      pfVar3 = (float *)(**(code **)(*plVar9 + 0xf0))(plVar9);
      fVar11 = *pfVar3;
      (**(code **)(*plVar9 + 0xf0))(plVar9);
      (**(code **)(*plVar9 + 0xf0))(plVar9);
      iVar8 = -0x80000000;
      iVar6 = (int)(long)((float)((long)(fVar11 * 11930465.0) & 0xffffffff) * -8.381903e-08 *
                         11930465.0);
    }
    iVar7 = (int)(long)(fVar10 * 11930465.0) + iVar7;
  }
  iVar4 = (int)(float)(iVar6 - *(int *)(param_4 + 0x28c));
  iVar6 = 0x7fffffff;
  if (iVar4 < 1) {
    iVar6 = 0;
  }
  iVar5 = 0;
  if (iVar4 < 1) {
    iVar5 = -0x7fffffff;
  }
  iVar1 = iVar4;
  if (iVar6 <= iVar4) {
    iVar1 = iVar6;
  }
  if (iVar5 <= iVar4) {
    iVar5 = iVar1;
  }
  iVar5 = iVar5 + *(int *)(param_4 + 0x28c);
  *(int *)(param_4 + 0x28c) = iVar5;
  iVar6 = (int)(float)(iVar8 - *(int *)(param_4 + 0x290));
  iVar8 = 0x7fffffff;
  if (iVar6 < 1) {
    iVar8 = 0;
  }
  iVar4 = 0;
  if (iVar6 < 1) {
    iVar4 = -0x7fffffff;
  }
  iVar1 = iVar6;
  if (iVar8 <= iVar6) {
    iVar1 = iVar8;
  }
  if (iVar4 <= iVar6) {
    iVar4 = iVar1;
  }
  iVar4 = iVar4 + *(int *)(param_4 + 0x290);
  *(int *)(param_4 + 0x290) = iVar4;
  iVar8 = (int)((float)(iVar7 - *(int *)(param_4 + 0x294)) * param_2);
  iVar7 = 0x7fffffff;
  if (iVar8 < 1) {
    iVar7 = 0;
  }
  iVar6 = 0;
  if (iVar8 < 1) {
    iVar6 = -0x7fffffff;
  }
  iVar1 = iVar8;
  if (iVar7 <= iVar8) {
    iVar1 = iVar7;
  }
  if (iVar6 <= iVar8) {
    iVar6 = iVar1;
  }
  iVar6 = iVar6 + *(int *)(param_4 + 0x294);
  *(int *)(param_4 + 0x294) = iVar6;
  *(int *)(param_4 + 0x28c) = iVar5 + *param_6;
  *(int *)(param_4 + 0x290) = iVar4 + param_6[1];
  *(int *)(param_4 + 0x294) = iVar6 + param_6[2];
  lVar2 = FUN_00996914(param_4);
  pfVar3 = (float *)(**(code **)(*(long *)(lVar2 + 0xa0) + 0xf0))();
  *(float *)(param_4 + 0x298) = *pfVar3 * param_1;
  return;
}

