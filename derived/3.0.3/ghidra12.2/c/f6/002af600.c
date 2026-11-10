
uint FUN_002af600(undefined8 param_1,long param_2,uint param_3)

{
  if (*(char *)(param_2 + 0x10) == '\0') {
    return 1;
  }
  return *(uint *)(param_2 + (ulong)(param_3 >> 5 & 7) * 4 + 0x14) >> (ulong)(param_3 & 0x1f) & 1;
}

