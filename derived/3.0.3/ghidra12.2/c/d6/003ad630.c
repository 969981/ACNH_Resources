
void FUN_003ad630(long param_1)

{
  long lVar1;
  ushort uVar2;
  long lVar3;
  ulong uVar4;
  
  uVar2 = *(ushort *)(param_1 + 0x30);
  if (uVar2 != 0) {
    if (uVar2 == 1) {
      uVar4 = 0;
    }
    else {
      lVar3 = 0;
      uVar4 = 0;
      do {
        uVar4 = uVar4 + 2;
        lVar1 = *(long *)(param_1 + 0x40) + lVar3;
        *(uint *)(lVar1 + 8) = *(uint *)(lVar1 + 8) | 8;
        lVar1 = *(long *)(param_1 + 0x40) + lVar3;
        lVar3 = lVar3 + 0xe0;
        *(uint *)(lVar1 + 0x78) = *(uint *)(lVar1 + 0x78) | 8;
      } while (((ulong)uVar2 & 0xfffe) != uVar4);
    }
    if ((uVar2 & 1) != 0) {
      lVar3 = *(long *)(param_1 + 0x40) + uVar4 * 0x70;
      *(uint *)(lVar3 + 8) = *(uint *)(lVar3 + 8) | 8;
    }
  }
  return;
}

