
short * FUN_00a8c18c(long param_1)

{
  uint *puVar1;
  int *piVar2;
  undefined *puVar3;
  ulong uVar4;
  
  uVar4 = (ulong)(short)DAT_04c487d4;
  if (uVar4 == 0xffffffffffffffff) {
LAB_00a8c268:
    if (*(short *)(param_1 + 0x651c8) == 0) {
      return (short *)(*(long *)PTR_DAT_04bb32e8 + 0x4060);
    }
    return (short *)(param_1 + 0x651c8);
  }
  puVar1 = (uint *)(PTR_DAT_04bc39f8 + (ulong)(uint)(int)(short)DAT_04c487d4 * 8);
  if (0xff < (uint)(int)(short)DAT_04c487d4) {
    puVar1 = (uint *)PTR_DAT_04bc39f8;
  }
  if ((*puVar1 >> 0x19 & 1) == 0) {
    piVar2 = (int *)(PTR_DAT_04bc39f8 + (uVar4 & 0xffffffff) * 8);
    if (0xff < DAT_04c487d4) {
      piVar2 = (int *)PTR_DAT_04bc39f8;
    }
    if (-1 < *piVar2) {
      puVar3 = PTR_DAT_04bc39f8 + (uVar4 & 0xffffffff) * 8;
      if (0xff < DAT_04c487d4) {
        puVar3 = PTR_DAT_04bc39f8;
      }
      if ((*(uint *)(puVar3 + 4) & 1) == 0) goto LAB_00a8c268;
    }
  }
  return (short *)(param_1 + 0x651e0);
}

