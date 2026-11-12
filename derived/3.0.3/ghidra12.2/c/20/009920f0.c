
void FUN_009920f0(long param_1,long param_2)

{
  uint uVar1;
  ulong uVar2;
  byte *pbVar3;
  ulong uVar4;
  
  uVar2 = 0;
  pbVar3 = (byte *)(param_2 + 9);
  do {
    uVar4 = uVar2 >> 3 & 0x1fffffff;
    uVar1 = 1 << (ulong)((uint)uVar2 & 7);
    if ((uVar1 & *(byte *)(param_1 + 0x24 + uVar4)) != 0) {
      *pbVar3 = *pbVar3 | 1;
    }
    if ((uVar1 & *(byte *)(param_1 + 0x48 + uVar4)) != 0) {
      *pbVar3 = *pbVar3 | 2;
    }
    if ((uVar1 & *(byte *)(param_1 + 0x6c + uVar4)) != 0) {
      *pbVar3 = *pbVar3 | 4;
    }
    if ((uVar1 & *(byte *)(param_1 + 0x90 + uVar4)) != 0) {
      *pbVar3 = *pbVar3 | 8;
    }
    if ((uVar1 & *(byte *)(param_1 + 0xb4 + uVar4)) != 0) {
      *pbVar3 = *pbVar3 | 0x10;
    }
    uVar2 = uVar2 + 1;
    pbVar3 = pbVar3 + 3;
  } while (uVar2 != 0x120);
  return;
}

