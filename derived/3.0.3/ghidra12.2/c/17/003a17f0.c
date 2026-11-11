
void FUN_003a17f0(undefined4 param_1,long param_2,long param_3)

{
  long lVar1;
  uint uVar2;
  byte bVar3;
  long lVar4;
  undefined4 uVar5;
  undefined4 local_5c [3];
  
  bVar3 = *(byte *)(param_2 + 0x2e);
  if ((ulong)bVar3 != 0) {
    lVar4 = 0;
    do {
      lVar1 = *(long *)(param_2 + 8) + lVar4;
      uVar2 = *(uint *)(lVar1 + 0x14);
      local_5c[0] = 0x7f800000;
      uVar5 = FUN_0039dbd4(param_1,lVar1,local_5c);
      lVar4 = lVar4 + 0x30;
      *(undefined4 *)(param_3 + (ulong)uVar2) = uVar5;
    } while ((ulong)bVar3 * 0x30 != lVar4);
  }
  return;
}

