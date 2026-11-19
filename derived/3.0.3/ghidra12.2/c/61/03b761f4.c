
void FUN_03b761f4(float param_1,float param_2,long param_3)

{
  long lVar1;
  float fVar2;
  
  if (param_2 < 0.0) {
    return;
  }
  *(float *)(param_3 + 0x10) = param_1;
  lVar1 = DAT_05aebb78;
  if ((param_2 == 0.0) || (fVar2 = *(float *)(param_3 + 8), fVar2 == param_1)) {
    *(float *)(param_3 + 8) = param_1;
    *(float *)(param_3 + 0xc) = param_1;
    *(undefined4 *)(param_3 + 0x14) = 0;
    return;
  }
  param_2 = (param_1 - fVar2) / param_2;
  *(float *)(param_3 + 0x14) = param_2;
  fVar2 = fVar2 + *(float *)(*(long *)(lVar1 + 0x10) + 0x1c) * param_2;
  if (0.0 <= param_2) {
    if (fVar2 <= param_1) goto LAB_03b76248;
  }
  else if (param_1 <= fVar2) goto LAB_03b76248;
  fVar2 = param_1;
LAB_03b76248:
  *(float *)(param_3 + 0xc) = fVar2;
  return;
}

