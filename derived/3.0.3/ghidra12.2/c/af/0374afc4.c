
long FUN_0374afc4(long param_1,uint *param_2)

{
  uint uVar1;
  uint *puVar2;
  int iVar3;
  
  uVar1 = *param_2;
  if ((int)*(uint *)(param_1 + 0x3c0) < 1) {
    if ((((*(long *)(param_1 + 0x2b0) != 0) &&
         (puVar2 = *(uint **)(*(long *)(param_1 + 0x2b0) + 8), puVar2 != (uint *)0x0)) &&
        ((*(uint *)(param_1 + 0x2c8) <= uVar1 ||
         (*(char *)(*(long *)(param_1 + 0x2d0) + (long)(int)uVar1) != '\0')))) &&
       (((uVar1 < *puVar2 && (puVar2[1] != 0)) && ((ushort)puVar2[2] != 0)))) {
      iVar3 = 0xc;
      if (*(char *)((long)puVar2 + 10) != '\0') {
        iVar3 = 0x1c;
      }
      return (ulong)(puVar2[1] * uVar1 + (uint)(ushort)puVar2[2] * 8 + iVar3) + (long)puVar2;
    }
  }
  else if (uVar1 < *(uint *)(param_1 + 0x3c0)) {
    if (*(uint *)(param_1 + 0x3b0) <= uVar1) {
      uVar1 = 0;
    }
    return *(long *)(*(long *)(param_1 + 0x3b8) + (ulong)uVar1 * 8);
  }
  return 0;
}

