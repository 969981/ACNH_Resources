
undefined8 FUN_01664f54(long param_1,undefined8 param_2)

{
  undefined8 uVar1;
  
  if (*(code **)(param_1 + 8) == (code *)0x0) {
    return 0;
  }
                    /* WARNING: Could not recover jumptable at 0x01664f60. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar1 = (**(code **)(param_1 + 8))(param_2);
  return uVar1;
}

