
void FUN_017069d0(float param_1,long *param_2)

{
  uint uVar1;
  float fVar2;
  
  fVar2 = 0.001;
  if (0.001 <= param_1) {
    fVar2 = param_1;
  }
  *(float *)((long)param_2 + 0x160c) = fVar2;
  *(float *)(param_2 + 0x2c2) = fVar2;
  (**(code **)(*param_2 + 0x4e0))((int)param_2[0x2c1],param_2);
  if (*(float *)((long)param_2 + 0x160c) == 0.001) {
    uVar1 = *(uint *)((long)param_2 + 0x15f4) | 0x10;
  }
  else {
    uVar1 = *(uint *)((long)param_2 + 0x15f4) & 0xffffffef;
  }
  *(uint *)((long)param_2 + 0x15f4) = uVar1;
  return;
}

