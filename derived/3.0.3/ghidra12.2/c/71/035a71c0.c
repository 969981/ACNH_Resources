
/* WARNING: Type propagation algorithm not settling */

void FUN_035a71c0(undefined8 param_1,undefined8 param_2,ulong param_3)

{
  undefined *puVar1;
  byte bVar2;
  long lVar3;
  ulong uVar4;
  
  uVar4 = 0;
  puVar1 = &UNK_0418f48b;
  if ((param_3 & 1) == 0) {
    puVar1 = &DAT_0418f493;
  }
  do {
    lVar3 = FUN_035a4ae8(param_1,param_2,uVar4 & 0xffffffff);
    if (lVar3 != 0) {
      bVar2 = puVar1[uVar4];
      if ((bVar2 & 1) != 0) {
        *(byte *)(lVar3 + 5) = *(byte *)(lVar3 + 5) | 1;
      }
      if ((bVar2 >> 1 & 1) != 0) {
        *(byte *)(lVar3 + 5) = *(byte *)(lVar3 + 5) | 2;
      }
      if ((bVar2 >> 2 & 1) != 0) {
        *(byte *)(lVar3 + 5) = *(byte *)(lVar3 + 5) | 4;
      }
      if ((bVar2 >> 3 & 1) != 0) {
        *(byte *)(lVar3 + 5) = *(byte *)(lVar3 + 5) | 8;
      }
      if ((bVar2 >> 4 & 1) != 0) {
        *(byte *)(lVar3 + 5) = *(byte *)(lVar3 + 5) | 0x10;
      }
      if ((bVar2 >> 5 & 1) != 0) {
        *(byte *)(lVar3 + 5) = *(byte *)(lVar3 + 5) | 0x20;
      }
      if ((bVar2 >> 6 & 1) != 0) {
        *(byte *)(lVar3 + 5) = *(byte *)(lVar3 + 5) | 0x40;
      }
      if ((char)bVar2 < '\0') {
        *(byte *)(lVar3 + 5) = *(byte *)(lVar3 + 5) | 0x80;
      }
    }
    uVar4 = uVar4 + 1;
  } while (uVar4 != 8);
  return;
}

