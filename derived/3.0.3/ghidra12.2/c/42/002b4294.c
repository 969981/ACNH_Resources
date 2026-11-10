
undefined8 FUN_002b4294(long param_1,long param_2)

{
  ulong uVar1;
  
  uVar1 = FUN_002200e4(param_1 + 8,param_2 + 8);
  if (((((((uVar1 & 1) == 0) ||
         (uVar1 = FUN_002200e4(param_1 + 0x28,param_2 + 0x28), (uVar1 & 1) == 0)) ||
        (uVar1 = FUN_002200e4(param_1 + 0x48,param_2 + 0x48), (uVar1 & 1) == 0)) ||
       ((*(long *)(param_1 + 0x68) != *(long *)(param_2 + 0x68) ||
        (*(int *)(param_1 + 0x70) != *(int *)(param_2 + 0x70))))) ||
      ((*(int *)(param_1 + 0x74) != *(int *)(param_2 + 0x74) ||
       ((*(char *)(param_1 + 0x78) != *(char *)(param_2 + 0x78) ||
        (((*(byte *)(param_2 + 0x79) ^ *(byte *)(param_1 + 0x79)) & 0x7f) != 0)))))) ||
     ((*(char *)(param_1 + 0x7a) != *(char *)(param_2 + 0x7a) ||
      (*(char *)(param_1 + 0x7b) != *(char *)(param_2 + 0x7b))))) {
    return 1;
  }
  return 0;
}

