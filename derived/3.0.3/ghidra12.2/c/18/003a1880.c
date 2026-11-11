
void FUN_003a1880(undefined4 param_1,long param_2,long param_3,long param_4)

{
  long lVar1;
  uint uVar2;
  byte bVar3;
  long lVar4;
  undefined4 uVar5;
  
  bVar3 = *(byte *)(param_2 + 0x2e);
  if ((ulong)bVar3 != 0) {
    lVar4 = 0;
    do {
      lVar1 = *(long *)(param_2 + 8) + lVar4;
      uVar2 = *(uint *)(lVar1 + 0x14);
      uVar5 = FUN_0039dbd4(param_1,lVar1,param_4);
      lVar4 = lVar4 + 0x30;
      param_4 = param_4 + 0xc;
      *(undefined4 *)(param_3 + (ulong)uVar2) = uVar5;
    } while ((ulong)bVar3 * 0x30 != lVar4);
  }
  return;
}

