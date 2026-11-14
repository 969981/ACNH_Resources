
ulong FUN_01ae3a40(undefined8 param_1)

{
  uint uVar1;
  uint uVar2;
  ulong uVar3;
  ushort *puVar4;
  
  uVar3 = FUN_01afcfa0();
  if (((int)uVar3 != 0) &&
     (puVar4 = (ushort *)FUN_01afd600(param_1), uVar3 = 0, puVar4 != (ushort *)0x0)) {
    uVar2 = *puVar4 >> 3 & 3;
    uVar1 = 0;
    if (uVar2 != 3) {
      uVar1 = uVar2;
    }
    uVar3 = (ulong)uVar1;
  }
  return uVar3;
}

