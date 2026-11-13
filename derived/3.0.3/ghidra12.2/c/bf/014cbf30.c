
undefined8 FUN_014cbf30(long param_1)

{
  long *plVar1;
  undefined8 uVar2;
  
  if ((((*(int *)(param_1 + 0xb58) == 0) || ((*(byte *)(param_1 + 0xa2c) >> 4 & 1) == 0)) ||
      (*(int *)(param_1 + 0xb58) != 3)) ||
     (plVar1 = (long *)FUN_014e7558(param_1,*(undefined4 *)(param_1 + 0xbcc)), plVar1 == (long *)0x0
     )) {
    return 0;
  }
                    /* WARNING: Could not recover jumptable at 0x014cbf6c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (**(code **)(*plVar1 + 0x3f8))();
  return uVar2;
}

