
byte FUN_034e7e14(long param_1)

{
  byte bVar1;
  ulong uVar2;
  
  uVar2 = FUN_01d77c78(param_1 + 8);
  if (((uVar2 & 1) == 0) || (*(char *)(param_1 + 0x14) != '\0')) {
    bVar1 = 1;
  }
  else {
    bVar1 = FUN_01e06398(*(undefined8 *)PTR_DAT_04bb7bc0,param_1 + 0x15,param_1 + 8);
    *(byte *)(param_1 + 0x14) = bVar1 & 1;
  }
  return bVar1 & 1;
}

