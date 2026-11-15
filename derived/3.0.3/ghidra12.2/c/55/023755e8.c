
void FUN_023755e8(long param_1,int param_2,undefined4 param_3)

{
  if (*(int *)(param_1 + 0x178) == 0) {
    FUN_023752f4();
    return;
  }
  *(uint *)(param_1 + 0x17cc) = *(uint *)(param_1 + 0x17cc) | 8;
  if (param_2 == 1) {
    FUN_0231b68c(param_1,param_3);
    return;
  }
  FUN_023164ec(param_1,param_3);
  return;
}

