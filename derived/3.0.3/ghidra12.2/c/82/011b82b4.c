
uint FUN_011b82b4(undefined8 param_1,undefined4 param_2)

{
  undefined *puVar1;
  uint uVar2;
  
  puVar1 = PTR_DAT_04bb5c90;
  uVar2 = FUN_011a2d6c(*(long *)PTR_DAT_04bb5c90 + 0x10);
  if ((uVar2 & 1) != 0) {
    FUN_011b74b0(*(long *)puVar1 + 0x920,param_2);
  }
  return uVar2 & 1;
}

