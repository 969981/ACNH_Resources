
void FUN_01b06ea0(long param_1,uint param_2)

{
  byte bVar1;
  long lVar2;
  uint uVar3;
  uint uVar4;
  ushort uVar5;
  uint *puVar6;
  uint *puVar7;
  
  puVar6 = *(uint **)(param_1 + 0x10);
  if (puVar6 == (uint *)0x0) {
    uVar5 = 0xbc;
  }
  else {
    uVar4 = *puVar6;
    if (uVar4 != 0 && puVar6 != (uint *)(ulong)uVar4) {
      puVar7 = (uint *)((long)puVar6 - (long)(ulong)uVar4);
      if (((*puVar7 != 0) && (uVar4 = puVar7[1], uVar4 != 0)) && ((ulong)(ushort)puVar7[2] != 0)) {
        lVar2 = 0xc;
        if (*(char *)((long)puVar7 + 10) != '\0') {
          lVar2 = 0x1c;
        }
        lVar2 = (long)puVar7 + lVar2 + (ulong)(ushort)puVar7[2] * 8;
        if (lVar2 != 0) {
          uVar3 = 0;
          if ((ulong)uVar4 != 0) {
            uVar3 = (uint)((ulong)((long)puVar6 - lVar2) / (ulong)uVar4);
          }
          if (*puVar7 <= uVar3) {
            uVar3 = 0xffffffff;
          }
          if ((uVar3 < DAT_05326ec0) &&
             (uVar5 = *(ushort *)(DAT_05326ec8 + (long)(int)uVar3 * 2), uVar5 < 0xbd))
          goto LAB_01b06f44;
        }
      }
    }
    uVar5 = 0;
  }
LAB_01b06f44:
  if (uVar5 == 0x8d) {
    bVar1 = 4;
    if ((param_2 & 1) == 0) {
      bVar1 = 0;
    }
    *(byte *)(param_1 + 0xb) = *(byte *)(param_1 + 0xb) & 0xfb | bVar1;
  }
  return;
}

