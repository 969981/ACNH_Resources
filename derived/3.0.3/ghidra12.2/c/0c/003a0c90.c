
void FUN_003a0c90(long param_1,uint param_2)

{
  long lVar1;
  byte bVar2;
  ulong uVar3;
  long lVar4;
  long lVar5;
  
  bVar2 = *(byte *)(param_1 + 0x4d);
  if (bVar2 != 0) {
    if (bVar2 == 1) {
      uVar3 = 0;
    }
    else {
      uVar3 = 0;
      lVar4 = 0x48;
      do {
        lVar5 = uVar3 * 8;
        uVar3 = uVar3 + 2;
        *(long *)(*(long *)(param_1 + 0x28) + lVar5) = *(long *)(param_1 + 0x20) + lVar4 + -0x48;
        lVar1 = *(long *)(param_1 + 0x20) + lVar4;
        lVar4 = lVar4 + 0x90;
        *(long *)(*(long *)(param_1 + 0x28) + lVar5 + 8) = lVar1;
      } while (((ulong)bVar2 & 0xfe) != uVar3);
    }
    if ((bVar2 & 1) != 0) {
      *(ulong *)(*(long *)(param_1 + 0x28) + uVar3 * 8) = *(long *)(param_1 + 0x20) + uVar3 * 0x48;
    }
  }
  if ((param_2 & 1) == 0) {
    *(undefined8 *)(param_1 + 0x40) = 0;
  }
  if ((param_2 >> 1 & 1) == 0) {
    bVar2 = *(byte *)(param_1 + 0x4c);
    if (bVar2 != 0) {
      if (bVar2 == 1) {
        uVar3 = 0;
      }
      else {
        lVar4 = 0;
        uVar3 = 0;
        do {
          uVar3 = uVar3 + 2;
          lVar1 = *(long *)(param_1 + 8) + lVar4;
          *(byte *)(lVar1 + 0xf) = *(byte *)(lVar1 + 0xf) & 0xfe;
          lVar1 = *(long *)(param_1 + 8) + lVar4;
          lVar4 = lVar4 + 0x20;
          *(byte *)(lVar1 + 0x1f) = *(byte *)(lVar1 + 0x1f) & 0xfe;
        } while (((ulong)bVar2 & 0xfe) != uVar3);
      }
      if ((bVar2 & 1) != 0) {
        lVar4 = *(long *)(param_1 + 8) + uVar3 * 0x10;
        *(byte *)(lVar4 + 0xf) = *(byte *)(lVar4 + 0xf) & 0xfe;
      }
    }
  }
  return;
}

