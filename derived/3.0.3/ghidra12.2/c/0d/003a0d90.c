
void FUN_003a0d90(long param_1,undefined8 *param_2)

{
  long lVar1;
  byte bVar2;
  byte bVar3;
  long lVar4;
  ulong uVar5;
  
  param_2[2] = 0;
  param_2[3] = 0;
  *param_2 = 0;
  param_2[1] = 0;
  bVar2 = *(byte *)(param_1 + 0x4c);
  if ((ulong)bVar2 != 0) {
    lVar4 = 0;
    do {
      lVar1 = *(long *)(param_1 + 8) + lVar4;
      if ((*(byte *)(lVar1 + 0xf) & 1) != 0) {
        bVar3 = *(byte *)(lVar1 + 0xe);
        uVar5 = (ulong)(bVar3 >> 3) & 0x18;
        *(ulong *)((long)param_2 + uVar5) =
             1L << ((ulong)bVar3 & 0x3f) | *(ulong *)((long)param_2 + uVar5);
      }
      lVar4 = lVar4 + 0x10;
    } while ((ulong)bVar2 * 0x10 != lVar4);
  }
  return;
}

