
void FUN_039a9950(long param_1,ushort param_2,uint param_3)

{
  uint uVar1;
  long lVar2;
  uint uVar3;
  long lVar4;
  
  uVar1 = *(uint *)(param_1 + 0x20);
  if ((uint)*(ushort *)(param_1 + 0x284) <= *(uint *)(param_1 + 0x20)) {
    uVar1 = (uint)*(ushort *)(param_1 + 0x284);
  }
  if (uVar1 != 0) {
    lVar2 = *(long *)(param_1 + 0x28);
    if ((param_3 & 1) == 0) {
      uVar3 = 0;
      do {
        lVar4 = *(long *)(lVar2 + (long)(int)uVar3 * 0x38);
        *(ushort *)(lVar4 + 0xac) = *(ushort *)(lVar4 + 0xac) & ~param_2;
        uVar3 = uVar3 + 1;
      } while (uVar1 != uVar3);
    }
    else {
      uVar3 = 0;
      do {
        lVar4 = *(long *)(lVar2 + (long)(int)uVar3 * 0x38);
        *(ushort *)(lVar4 + 0xac) = *(ushort *)(lVar4 + 0xac) | param_2;
        uVar3 = uVar3 + 1;
      } while (uVar1 != uVar3);
    }
  }
  return;
}

