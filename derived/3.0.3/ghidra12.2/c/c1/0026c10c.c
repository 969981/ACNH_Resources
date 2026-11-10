
undefined8 FUN_0026c10c(long param_1)

{
  undefined8 uVar1;
  
  if (DAT_04c61168 == 0) {
    return 0xfffffffffffffffd;
  }
  if (*(long *)(param_1 + 0x90) == 0) {
    return 0xfffffffffffffffe;
  }
  uVar1 = FUN_00284178(*(long *)(param_1 + 0x90) + 0x50);
  return uVar1;
}

