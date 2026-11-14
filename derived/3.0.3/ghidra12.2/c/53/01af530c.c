
bool FUN_01af530c(long param_1,uint param_2)

{
  long lVar1;
  uint uVar2;
  ushort uVar3;
  uint uVar4;
  uint *puVar5;
  uint *puVar6;
  
  puVar5 = *(uint **)(param_1 + 0x10);
  if (puVar5 == (uint *)0x0) {
    uVar4 = 0x4f;
  }
  else {
    uVar4 = *puVar5;
    if (uVar4 != 0 && puVar5 != (uint *)(ulong)uVar4) {
      puVar6 = (uint *)((long)puVar5 - (long)(ulong)uVar4);
      if (((*puVar6 != 0) && (uVar4 = puVar6[1], uVar4 != 0)) && ((ulong)(ushort)puVar6[2] != 0)) {
        lVar1 = 0xc;
        if (*(char *)((long)puVar6 + 10) != '\0') {
          lVar1 = 0x1c;
        }
        lVar1 = (long)puVar6 + lVar1 + (ulong)(ushort)puVar6[2] * 8;
        if (lVar1 != 0) {
          uVar2 = 0;
          if ((ulong)uVar4 != 0) {
            uVar2 = (uint)((ulong)((long)puVar5 - lVar1) / (ulong)uVar4);
          }
          if (*puVar6 <= uVar2) {
            uVar2 = 0xffffffff;
          }
          if ((uVar2 < DAT_05326f28) &&
             (uVar3 = *(ushort *)(DAT_05326f30 + (long)(int)uVar2 * 2), uVar4 = (uint)uVar3,
             uVar3 < 0x100)) goto LAB_01af53ac;
        }
      }
    }
    uVar4 = 0;
  }
LAB_01af53ac:
  return uVar4 == param_2;
}

