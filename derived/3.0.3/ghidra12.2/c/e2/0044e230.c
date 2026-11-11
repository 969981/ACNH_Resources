
void FUN_0044e230(undefined8 param_1,undefined8 param_2)

{
  undefined8 *puVar1;
  
  puVar1 = (undefined8 *)FUN_00426e00(param_2,0x80000);
                    /* WARNING: Could not recover jumptable at 0x0044e26c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)*puVar1 + 0x20))((long *)*puVar1,param_1,param_2);
  return;
}

