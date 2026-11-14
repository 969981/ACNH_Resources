
uint FUN_01b0a5cc(long param_1)

{
  long lVar1;
  uint uVar2;
  uint uVar3;
  ushort uVar4;
  uint *puVar5;
  uint *puVar6;
  
  puVar5 = *(uint **)(param_1 + 0x10);
  if (puVar5 == (uint *)0x0) {
    uVar4 = 0xbc;
  }
  else {
    uVar3 = *puVar5;
    if (uVar3 != 0 && puVar5 != (uint *)(ulong)uVar3) {
      puVar6 = (uint *)((long)puVar5 - (long)(ulong)uVar3);
      if (((*puVar6 != 0) && (uVar3 = puVar6[1], uVar3 != 0)) && ((ulong)(ushort)puVar6[2] != 0)) {
        lVar1 = 0xc;
        if (*(char *)((long)puVar6 + 10) != '\0') {
          lVar1 = 0x1c;
        }
        lVar1 = (long)puVar6 + lVar1 + (ulong)(ushort)puVar6[2] * 8;
        if (lVar1 != 0) {
          uVar2 = 0;
          if ((ulong)uVar3 != 0) {
            uVar2 = (uint)((ulong)((long)puVar5 - lVar1) / (ulong)uVar3);
          }
          if (*puVar6 <= uVar2) {
            uVar2 = 0xffffffff;
          }
          if ((uVar2 < DAT_05326ec0) &&
             (uVar4 = *(ushort *)(DAT_05326ec8 + (long)(int)uVar2 * 2), uVar4 < 0xbd))
          goto LAB_01b0a670;
        }
      }
    }
    uVar4 = 0;
  }
LAB_01b0a670:
  uVar3 = *(uint *)(param_1 + 0xc) & 0xf;
  if (uVar4 != 0x2c) {
    uVar3 = 0;
  }
  return uVar3;
}

