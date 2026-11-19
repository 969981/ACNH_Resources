
uint FUN_03853b94(uint *param_1)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  uint *puVar4;
  
  uVar3 = *param_1;
  if (uVar3 != 0 && param_1 != (uint *)(ulong)uVar3) {
    puVar4 = (uint *)((long)param_1 - (long)(ulong)uVar3);
    if (((*puVar4 != 0) && (uVar3 = puVar4[1], uVar3 != 0)) && ((ulong)(ushort)puVar4[2] != 0)) {
      lVar1 = 0xc;
      if (*(char *)((long)puVar4 + 10) != '\0') {
        lVar1 = 0x1c;
      }
      lVar1 = (long)puVar4 + lVar1 + (ulong)(ushort)puVar4[2] * 8;
      if (lVar1 != 0) {
        uVar2 = 0;
        if ((ulong)uVar3 != 0) {
          uVar2 = (uint)((ulong)((long)param_1 - lVar1) / (ulong)uVar3);
        }
        if (*puVar4 <= uVar2) {
          uVar2 = 0xffffffff;
        }
        return uVar2;
      }
    }
  }
  return 0xffffffff;
}

