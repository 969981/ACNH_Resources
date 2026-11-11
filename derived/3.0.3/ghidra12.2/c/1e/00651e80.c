
undefined4 FUN_00651e80(long param_1)

{
  uint uVar1;
  undefined4 uVar2;
  uint uVar3;
  long lVar4;
  byte *pbVar5;
  
  uVar1 = *(uint *)(param_1 + 0x100);
  if ((int)uVar1 < 1) {
    return 0;
  }
  if (uVar1 == 1) {
    lVar4 = 0;
    uVar3 = 0;
  }
  else {
    lVar4 = 0;
    uVar3 = 0;
    pbVar5 = (byte *)(param_1 + 0xc);
    do {
      lVar4 = lVar4 + 2;
      uVar3 = uVar3 + (pbVar5[-8] >> 3 & 1) + (*pbVar5 >> 3 & 1);
      pbVar5 = pbVar5 + 0x10;
    } while ((ulong)uVar1 - ((ulong)uVar1 & 1) != lVar4);
    if ((uVar1 & 1) == 0) {
      uVar2 = 1;
      if (uVar3 != uVar1) {
        uVar2 = 2;
      }
      goto joined_r0x00651eec;
    }
  }
  uVar3 = uVar3 + (*(byte *)(param_1 + lVar4 * 8 + 4) >> 3 & 1);
  uVar2 = 1;
  if (uVar3 != uVar1) {
    uVar2 = 2;
  }
joined_r0x00651eec:
  if (uVar3 == 0) {
    return 0;
  }
  return uVar2;
}

