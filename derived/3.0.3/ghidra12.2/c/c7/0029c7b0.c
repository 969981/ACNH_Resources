
undefined8 FUN_0029c7b0(void)

{
  undefined8 uVar1;
  
  if (*(code **)(DAT_04c60f48 + 0xb0) == (code *)0x0) {
    return 1;
  }
                    /* WARNING: Could not recover jumptable at 0x0029c7c4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(DAT_04c60f48 + 0xb0))();
  return uVar1;
}

