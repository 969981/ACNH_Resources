
void FUN_003c67c8(long param_1,int param_2,int param_3)

{
  if (*(char *)(param_1 + 0x38) != '\0') {
    if (param_2 == 1) {
      *(float *)(param_1 + 0x104) = *(float *)(param_1 + 0x104) + (float)param_3;
    }
    else if (param_2 == 0) {
      *(int *)(param_1 + 0x100) = *(int *)(param_1 + 0x100) + param_3;
      return;
    }
  }
  return;
}

