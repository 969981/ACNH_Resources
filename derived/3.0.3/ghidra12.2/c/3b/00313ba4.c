
void FUN_00313ba4(long param_1,long *param_2)

{
  if ((long *)(param_1 + 0x88) == param_2) {
    return;
  }
  FUN_001a2ac0((long *)(param_1 + 0x88),*param_2,param_2[1],param_2[1] - *param_2);
  return;
}

