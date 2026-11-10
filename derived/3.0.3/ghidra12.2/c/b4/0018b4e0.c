
uint FUN_0018b4e0(long param_1,long param_2)

{
  uint uVar1;
  
  if (*(char **)(param_1 + 0x18) == *(char **)(param_2 + 0x18)) {
    return 0;
  }
  uVar1 = strcmp(*(char **)(param_1 + 0x18),*(char **)(param_2 + 0x18));
  return uVar1 >> 0x1f;
}

