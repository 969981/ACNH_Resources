
void FUN_018acdf4(long param_1,float *param_2,uint *param_3,int *param_4,float *param_5,
                 float *param_6)

{
  uint uVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  float fVar6;
  float fVar7;
  
  uVar1 = FUN_006f0400(*(float *)(param_1 + 0x2b0) - *(float *)(param_1 + 0x2a4),
                       *(float *)(param_1 + 0x2b8) - *(float *)(param_1 + 0x2ac));
  uVar2 = FUN_006f0400(*param_6 - *(float *)(param_1 + 0x2a4),
                       param_6[2] - *(float *)(param_1 + 0x2ac));
  uVar3 = uVar1 - uVar2;
  if (uVar3 == 0) {
    iVar5 = 0;
  }
  else {
    if (uVar1 <= uVar2) {
      uVar3 = uVar2 - uVar1;
    }
    if (uVar3 < 0x80000001) {
      iVar4 = -1;
    }
    else {
      uVar3 = -uVar3;
      iVar4 = 1;
    }
    iVar5 = -iVar4;
    if (uVar2 < uVar1) {
      iVar5 = iVar4;
    }
  }
  fVar7 = *param_5 * (float)uVar3 * 1.4629181e-09 * (float)iVar5;
  fVar6 = param_6[1] - *(float *)(param_1 + 0x2a8);
  if (param_2 != (float *)0x0) {
    *param_2 = fVar7;
    param_2[1] = fVar6;
    param_2[2] = 0.0;
  }
  if (param_3 != (uint *)0x0) {
    *param_3 = uVar2;
  }
  if (param_4 != (int *)0x0) {
    if (fVar7 <= 0.0) {
      if (0.0 <= fVar7) {
        iVar4 = (uint)(fVar6 < 0.0) << 0x1f;
      }
      else {
        iVar4 = 0x40000000;
      }
    }
    else {
      iVar4 = -0x40000000;
    }
    *param_4 = iVar4;
  }
  return;
}

