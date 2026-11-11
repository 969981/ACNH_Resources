
uint FUN_005d4680(long param_1)

{
  if (*(uint *)(param_1 + 0x28) == 0) {
    return (uint)*(byte *)(*(long *)(*(long *)(param_1 + 0x18) + 0x50) +
                           (long)*(int *)(param_1 + 0x24) * 0x30 + 0x28);
  }
  return *(uint *)(param_1 + 0x28);
}

