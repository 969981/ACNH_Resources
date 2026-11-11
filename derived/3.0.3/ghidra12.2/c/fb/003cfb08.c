
void FUN_003cfb08(float param_1,long param_2,undefined4 param_3)

{
  float fVar1;
  
  if (*(int *)(param_2 + 0x14c) < *(int *)(param_2 + 0x148)) {
    fVar1 = *(float *)(param_2 + 0x140) +
            ((*(float *)(param_2 + 0x144) - *(float *)(param_2 + 0x140)) *
            (float)*(int *)(param_2 + 0x14c)) / (float)*(int *)(param_2 + 0x148);
  }
  else {
    fVar1 = *(float *)(param_2 + 0x144);
  }
  *(float *)(param_2 + 0x140) = fVar1;
  *(undefined4 *)(param_2 + 0x148) = param_3;
  fVar1 = 0.0;
  if (0.0 <= param_1) {
    fVar1 = param_1;
  }
  *(undefined4 *)(param_2 + 0x14c) = 0;
  *(float *)(param_2 + 0x144) = fVar1;
  return;
}

