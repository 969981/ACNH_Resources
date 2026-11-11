
void FUN_0054e870(float param_1,long param_2)

{
  long local_20 [2];
  
  if (*(int *)(param_2 + 0x40) == 3) {
    param_1 = *(float *)(param_2 + 0x28) + param_1;
    local_20[0] = *(long *)(param_2 + 0x30);
    *(float *)(param_2 + 0x28) = param_1;
    if (param_1 <= *(float *)(local_20[0] + 0x44)) {
      return;
    }
    local_20[1] = 3;
    *(undefined4 *)(param_2 + 0x40) = 0;
  }
  else {
    if (*(int *)(param_2 + 0x40) != 2) {
      return;
    }
    param_1 = *(float *)(param_2 + 0x28) + param_1;
    local_20[0] = *(long *)(param_2 + 0x30);
    *(float *)(param_2 + 0x28) = param_1;
    if (param_1 <= *(float *)(local_20[0] + 0x3c)) {
      return;
    }
    local_20[1] = 0x100000002;
    *(undefined4 *)(param_2 + 0x40) = 1;
  }
  FUN_0054e510(*(long *)(*(long *)(param_2 + 0x38) + 0x270) + 0x128,*(long *)(param_2 + 0x38),
               local_20);
  return;
}

