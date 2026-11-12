
long FUN_0089ef98(long param_1,uint param_2)

{
  uint *puVar1;
  int iVar2;
  
  if ((int)*(uint *)(param_1 + 0x1c0) < 1) {
    if ((((*(long *)(param_1 + 0xb0) != 0) &&
         (puVar1 = *(uint **)(*(long *)(param_1 + 0xb0) + 8), puVar1 != (uint *)0x0)) &&
        ((*(uint *)(param_1 + 200) <= param_2 ||
         (*(char *)(*(long *)(param_1 + 0xd0) + (long)(int)param_2) != '\0')))) &&
       (((param_2 < *puVar1 && (puVar1[1] != 0)) && ((ushort)puVar1[2] != 0)))) {
      iVar2 = 0xc;
      if (*(char *)((long)puVar1 + 10) != '\0') {
        iVar2 = 0x1c;
      }
      return (ulong)(puVar1[1] * param_2 + (uint)(ushort)puVar1[2] * 8 + iVar2) + (long)puVar1;
    }
  }
  else if (param_2 < *(uint *)(param_1 + 0x1c0)) {
    if (*(uint *)(param_1 + 0x1b0) <= param_2) {
      param_2 = 0;
    }
    return *(long *)(*(long *)(param_1 + 0x1b8) + (ulong)param_2 * 8);
  }
  return 0;
}

