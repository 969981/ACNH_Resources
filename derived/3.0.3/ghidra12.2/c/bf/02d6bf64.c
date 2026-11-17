
void FUN_02d6bf64(long param_1,long param_2)

{
  undefined4 local_24;
  
  if (((param_2 != 0) && (FUN_02d6bfe0(param_1,param_2,8,3), *(int *)(param_1 + 0x1f0) == -1)) &&
     (*(int *)(param_1 + 500) == -1)) {
    local_24 = *(undefined4 *)(param_1 + 0x26c8);
    FUN_02d6db1c(param_1,&local_24);
    if (*(int *)(param_1 + 0x1f0 + (ulong)*(byte *)(param_1 + 0x200) * 4) == -1) {
      *(undefined4 *)(param_1 + 0x1f0 + (ulong)*(byte *)(param_1 + 0x200) * 4) = local_24;
    }
  }
  return;
}

