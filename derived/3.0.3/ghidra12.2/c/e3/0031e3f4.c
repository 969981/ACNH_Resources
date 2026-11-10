
undefined8 FUN_0031e3f4(long param_1)

{
  byte bVar1;
  
  bVar1 = *(byte *)(*(long *)(param_1 + 0xa0) + 0x880);
  if ((bVar1 < 0xe && (1 << (ulong)(bVar1 & 0x1f) & 0x2064U) != 0) &&
     (*(int *)(*(long *)(param_1 + 0xa0) + 0x8bc) == 0)) {
    return 1;
  }
  return 0;
}

