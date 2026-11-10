
void FUN_001f7910(long param_1,long param_2)

{
  long lVar1;
  long lVar2;
  ulong uVar3;
  ulong uVar4;
  
  uVar4 = *(ulong *)(param_1 + 0x18);
  lVar1 = FUN_001abe40();
  uVar3 = *(ulong *)(lVar1 + 0x18);
  *(undefined8 *)(param_2 + 0x18) = 0;
  *(undefined8 *)(param_2 + 0x28) = 0;
  lVar1 = uVar3 - uVar4;
  *(undefined2 *)(param_2 + 0x31) = 0;
  *(byte *)(param_2 + 0x30) = *(byte *)(param_2 + 0x30) & 4;
  if (uVar4 <= uVar3 && lVar1 != 0) {
    lVar2 = FUN_001abe40(param_1);
    FUN_00193030(param_2,*(long *)(lVar2 + 0x10) + *(long *)(lVar2 + 0x28) +
                         *(long *)(param_1 + 0x18),lVar1,0xffffffffffffffff);
    uVar3 = *(long *)(param_1 + 0x18) + lVar1;
    if (uVar3 <= *(ulong *)(*(long *)(param_1 + 0x10) + 0x18)) {
      *(ulong *)(param_1 + 0x18) = uVar3;
    }
  }
  return;
}

