
ulong FUN_01ae39f8(undefined8 param_1)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  ushort *puVar4;
  
  uVar3 = FUN_01ad7260();
  if (((int)uVar3 != 0) &&
     (puVar4 = (ushort *)FUN_01afd600(param_1), uVar3 = 0, puVar4 != (ushort *)0x0)) {
    uVar1 = *puVar4 & 7;
    uVar2 = FUN_01ad7260(param_1);
    if (uVar2 <= uVar1) {
      uVar1 = 0;
    }
    uVar3 = (ulong)uVar1;
  }
  return uVar3;
}

