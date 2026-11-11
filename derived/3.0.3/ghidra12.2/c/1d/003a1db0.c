
void FUN_003a1db0(long *param_1,undefined8 param_2)

{
  byte bVar1;
  uint uVar2;
  undefined8 local_30;
  undefined8 uStack_28;
  
  bVar1 = *(byte *)(*param_1 + 0xf3);
  if ((char)bVar1 < '\0') {
    uVar2 = 0;
  }
  else {
    uVar2 = (uint)*(ushort *)(*(long *)(*param_1 + 0x58) + (ulong)bVar1 * 0x20 + 0x1a);
  }
  local_30 = 0;
  uStack_28 = 0;
  FUN_0034fb50(&local_30);
  local_30 = CONCAT44(0x10,uVar2);
  FUN_00347a58(param_2,&local_30);
  return;
}

