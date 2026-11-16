
undefined4 FUN_025835f4(undefined8 param_1,undefined8 param_2)

{
  uint uVar1;
  
  uVar1 = FUN_02582d8c(param_2,1);
  if ((uVar1 < 8) && (*(char *)(*(long *)PTR_DAT_04bb4fb8 + (ulong)uVar1 * 0x13f0 + 0x13d4) != '\0')
     ) {
    return *(undefined4 *)(*(long *)PTR_DAT_04bb4fb8 + (ulong)uVar1 * 0x13f0 + 0x13d8);
  }
  return 0xffffffff;
}

