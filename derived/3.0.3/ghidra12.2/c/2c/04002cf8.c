
void FUN_04002cf8(undefined8 *param_1)

{
  *param_1 = &PTR_LAB_04bb1ba0;
  FUN_04002c24();
                    /* WARNING: Could not recover jumptable at 0x04002d30. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1[0x4d] + 0x18))((long *)param_1[0x4d],param_1);
  return;
}

