
void FUN_00437c30(float param_1,undefined8 *param_2,undefined8 *param_3)

{
  float fVar1;
  float fVar2;
  undefined8 uVar3;
  
  param_1 = (float)DAT_0413f410 * param_1;
  fVar1 = sinf(param_1);
  fVar2 = cosf(param_1);
  uVar3 = *param_3;
  param_2[1] = CONCAT44(fVar2,(float)param_3[1] * fVar1);
  *param_2 = CONCAT44((float)((ulong)uVar3 >> 0x20) * fVar1,(float)uVar3 * fVar1);
  return;
}

