
void FUN_002831d0(long param_1)

{
  long lVar1;
  uint uVar2;
  byte bVar3;
  uint uVar4;
  uint uVar5;
  ulong uVar6;
  
  uVar2 = (uint)*(ushort *)(param_1 + 0x3c);
  if (*(ushort *)(param_1 + 0x3c) != 0) {
    uVar4 = 0;
    bVar3 = 0;
    do {
      uVar6 = 0;
      uVar5 = 0;
      do {
        uVar5 = uVar5 + 1;
        lVar1 = uVar2 * uVar4 + uVar6;
        uVar6 = (ulong)(uVar5 & 0xff);
        *(byte *)(*(long *)(param_1 + 8) + lVar1) = bVar3;
        uVar2 = (uint)*(ushort *)(param_1 + 0x3c);
      } while ((uVar5 & 0xff) < uVar2);
      bVar3 = bVar3 + 1;
      uVar4 = (uint)bVar3;
    } while (uVar4 < uVar2);
  }
  *(undefined8 *)(param_1 + 0x44) = 0;
  *(undefined8 *)(param_1 + 0x34) = 0;
  return;
}

