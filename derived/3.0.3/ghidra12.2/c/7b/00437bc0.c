
void FUN_00437bc0(undefined8 *param_1,undefined8 *param_2,undefined8 *param_3)

{
  float fVar1;
  undefined8 uVar2;
  float fVar3;
  
  fVar3 = (float)DAT_0413f410 * (float)*param_3;
  fVar1 = sinf(fVar3);
  fVar3 = cosf(fVar3);
  uVar2 = *param_2;
  param_1[1] = CONCAT44(fVar3,(float)param_2[1] * fVar1);
  *param_1 = CONCAT44((float)((ulong)uVar2 >> 0x20) * fVar1,(float)uVar2 * fVar1);
  return;
}

