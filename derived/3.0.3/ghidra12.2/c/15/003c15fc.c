
void FUN_003c15fc(float param_1,long param_2,uint param_3)

{
  float fVar1;
  float fVar2;
  
  fVar2 = 0.0;
  if (0.0 <= param_1) {
    fVar2 = param_1;
  }
  fVar1 = 1.0;
  if (param_1 <= 1.0) {
    fVar1 = fVar2;
  }
  if (*(byte *)(param_2 + 0x1ea) == param_3) {
    if (fVar1 == *(float *)(param_2 + 0x200)) {
      return;
    }
  }
  else {
    *(char *)(param_2 + 0x1ea) = (char)param_3;
    if (fVar1 == *(float *)(param_2 + 0x200)) goto LAB_003c1648;
  }
  *(float *)(param_2 + 0x200) = fVar1;
LAB_003c1648:
  *(ushort *)(param_2 + 0x1e8) = *(ushort *)(param_2 + 0x1e8) | 0x20;
  return;
}

