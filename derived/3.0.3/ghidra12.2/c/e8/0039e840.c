
void FUN_0039e840(long param_1)

{
  byte bVar1;
  ulong uVar2;
  long lVar3;
  
  bVar1 = *(byte *)(param_1 + 0x9c);
  if (bVar1 != 0) {
    uVar2 = 0;
    if (bVar1 != 1) {
      do {
        lVar3 = uVar2 * 8;
        uVar2 = uVar2 + 2;
        *(undefined8 *)(*(long *)(param_1 + 0x28) + lVar3) = 0;
        *(undefined8 *)(*(long *)(param_1 + 0x90) + lVar3) = 0xffffffffffffffff;
        *(undefined8 *)(*(long *)(param_1 + 0x28) + lVar3 + 8) = 0;
        *(undefined8 *)(*(long *)(param_1 + 0x90) + lVar3 + 8) = 0xffffffffffffffff;
      } while (((ulong)bVar1 & 0xfe) != uVar2);
    }
    if ((bVar1 & 1) != 0) {
      *(undefined8 *)(*(long *)(param_1 + 0x28) + uVar2 * 8) = 0;
      *(undefined8 *)(*(long *)(param_1 + 0x90) + uVar2 * 8) = 0xffffffffffffffff;
    }
  }
  return;
}

