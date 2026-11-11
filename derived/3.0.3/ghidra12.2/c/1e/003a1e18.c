
long FUN_003a1e18(long *param_1,undefined8 param_2)

{
  ushort uVar1;
  byte bVar2;
  long lVar3;
  undefined8 local_40;
  undefined8 uStack_38;
  
  bVar2 = *(byte *)(*param_1 + 0xf3);
  if ((char)bVar2 < '\0') {
    return 0;
  }
  uVar1 = *(ushort *)(*(long *)(*param_1 + 0x58) + (ulong)bVar2 * 0x20 + 0x1a);
  local_40 = 0;
  uStack_38 = 0;
  FUN_0034fb50(&local_40);
  local_40 = CONCAT44(0x10,(uint)uVar1);
  lVar3 = FUN_00347a58(param_2,&local_40);
  return (((ulong)uVar1 + lVar3) - 1 & -lVar3) * (ulong)*(byte *)(param_1 + 10);
}

