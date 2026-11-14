
ulong FUN_01af4c7c(undefined8 param_1)

{
  ulong uVar1;
  ushort *puVar2;
  
  uVar1 = FUN_01afcfa0();
  if (((int)uVar1 != 0) &&
     (puVar2 = (ushort *)FUN_01afd600(param_1), uVar1 = 0, puVar2 != (ushort *)0x0)) {
    uVar1 = (ulong)((*puVar2 & 0x18) == 0x10);
  }
  return uVar1;
}

