
long FUN_036f9e68(long param_1,uint param_2)

{
  uint uVar1;
  undefined *puVar2;
  uint *puVar3;
  int iVar4;
  
  if (param_2 == 0xffffffff) {
    return 0;
  }
  if (0xf < (int)param_2) {
    return 0;
  }
  puVar2 = &DAT_0545b240 + (ulong)param_2 * 0x118;
  if (0xf < param_2) {
    puVar2 = &DAT_0545b240;
  }
  if (puVar2[0x8c] != '\0') {
    uVar1 = *(uint *)(puVar2 + 0xa8);
    if ((int)*(uint *)(param_1 + 0x1c0) < 1) {
      if ((((*(long *)(param_1 + 0xb0) != 0) &&
           (puVar3 = *(uint **)(*(long *)(param_1 + 0xb0) + 8), puVar3 != (uint *)0x0)) &&
          ((*(uint *)(param_1 + 200) <= uVar1 ||
           (*(char *)(*(long *)(param_1 + 0xd0) + (long)(int)uVar1) != '\0')))) &&
         (((uVar1 < *puVar3 && (puVar3[1] != 0)) && ((ushort)puVar3[2] != 0)))) {
        iVar4 = 0xc;
        if (*(char *)((long)puVar3 + 10) != '\0') {
          iVar4 = 0x1c;
        }
        return (ulong)(puVar3[1] * uVar1 + (uint)(ushort)puVar3[2] * 8 + iVar4) + (long)puVar3;
      }
    }
    else if (uVar1 < *(uint *)(param_1 + 0x1c0)) {
      if (*(uint *)(param_1 + 0x1b0) <= uVar1) {
        uVar1 = 0;
      }
      return *(long *)(*(long *)(param_1 + 0x1b8) + (ulong)uVar1 * 8);
    }
  }
  return 0;
}

