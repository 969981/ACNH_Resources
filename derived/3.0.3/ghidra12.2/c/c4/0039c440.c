
uint FUN_0039c440(long param_1,undefined8 param_2,undefined8 param_3)

{
  ushort uVar1;
  uint uVar2;
  uint uVar3;
  long lVar4;
  
  uVar1 = *(ushort *)(param_1 + 0xdc);
  if ((ulong)uVar1 == 0) {
    uVar3 = 0;
    uVar1 = *(ushort *)(param_1 + 0xe4);
  }
  else {
    lVar4 = 0;
    uVar3 = 0;
    do {
      uVar2 = FUN_0039df40(*(long *)(param_1 + 0x28) + lVar4,param_2,param_3);
      lVar4 = lVar4 + 0x78;
      uVar3 = uVar2 | uVar3;
    } while ((ulong)uVar1 * 0x78 != lVar4);
    uVar1 = *(ushort *)(param_1 + 0xe4);
  }
  if ((ulong)uVar1 != 0) {
    lVar4 = 0;
    do {
      uVar2 = FUN_0039cd00(*(long *)(param_1 + 0x68) + lVar4,param_2,param_3);
      lVar4 = lVar4 + 0x70;
      uVar3 = uVar2 | uVar3;
    } while ((ulong)uVar1 * 0x70 != lVar4);
  }
  return uVar3;
}

