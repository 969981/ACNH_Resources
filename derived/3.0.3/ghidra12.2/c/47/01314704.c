
ushort switchD_01313694::caseD_1(uint *param_1)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  ushort uVar4;
  uint *puVar5;
  
  uVar3 = *param_1;
  if (uVar3 != 0 && param_1 != (uint *)(ulong)uVar3) {
    puVar5 = (uint *)((long)param_1 - (long)(ulong)uVar3);
    if (((*puVar5 != 0) && (uVar3 = puVar5[1], uVar3 != 0)) && ((ulong)(ushort)puVar5[2] != 0)) {
      lVar1 = 0xc;
      if (*(char *)((long)puVar5 + 10) != '\0') {
        lVar1 = 0x1c;
      }
      lVar1 = (long)puVar5 + lVar1 + (ulong)(ushort)puVar5[2] * 8;
      if (lVar1 != 0) {
        uVar2 = 0;
        if ((ulong)uVar3 != 0) {
          uVar2 = (uint)((ulong)((long)param_1 - lVar1) / (ulong)uVar3);
        }
        if (*puVar5 <= uVar2) {
          uVar2 = 0xffffffff;
        }
        if ((uVar2 < DAT_05160318) &&
           (uVar4 = *(ushort *)(DAT_05160320 + (long)(int)uVar2 * 2), uVar4 < 0xd)) {
          return uVar4;
        }
      }
    }
  }
  return 0;
}

