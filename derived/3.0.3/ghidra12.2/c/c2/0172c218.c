
void FUN_0172c218(float *param_1,int param_2,long param_3)

{
  float *pfVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  undefined1 auStack_8c [8];
  float local_84;
  float local_80;
  float local_64;
  float local_60;
  undefined1 auStack_5c [4];
  float local_58;
  
  FUN_016ff8c0(param_3,8,auStack_5c);
  FUN_016ff740(param_3,4,auStack_8c);
  fVar2 = 0.0;
  fVar3 = SQRT(local_84 * local_84 + 0.0 + local_64 * local_64);
  if (fVar3 <= 0.0) {
    fVar7 = 0.0;
    fVar6 = local_64;
    fVar3 = local_84;
  }
  else {
    fVar3 = 1.0 / fVar3;
    fVar7 = fVar3 * 0.0;
    fVar6 = local_64 * fVar3;
    fVar3 = local_84 * fVar3;
  }
  if (param_2 == 3) {
    fVar4 = -1.5;
    fVar5 = 2.0;
  }
  else {
    pfVar1 = (float *)(**(code **)(*(long *)(param_3 + 0x5a78) + 0xf0))(param_3 + 0x5a78);
    fVar4 = *pfVar1 + 0.0;
    fVar2 = pfVar1[1] + 0.0;
    fVar5 = pfVar1[2] + 5.0;
  }
  *param_1 = local_80 + fVar2 * 0.0 + fVar4 * fVar3 + fVar5 * (fVar7 * 0.0 - fVar6);
  param_1[1] = local_58 + fVar2 + fVar4 * fVar7 + fVar5 * (fVar3 * -0.0 + fVar6 * 0.0) + 0.0;
  param_1[2] = local_60 + fVar2 * 0.0 + fVar4 * fVar6 + fVar5 * (fVar3 + fVar7 * -0.0);
  return;
}

