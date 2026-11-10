
void FUN_00185b80(undefined8 *param_1,long param_2)

{
  undefined *puVar1;
  
  puVar1 = PTR_DAT_04bc0ec8 + 0x10;
  *(undefined1 *)(param_1 + 4) = 0;
  param_1[3] = puVar1;
  param_1[2] = 0;
  *param_1 = &PTR_FUN_048389d8;
  param_1[1] = 0;
  param_1[6] = param_1 + 4;
  param_1[7] = 0x10;
  FUN_0018b070(param_1 + 3,*(undefined8 *)(param_2 + 0x18),0xffffffffffffffff);
  param_1[8] = 0xffffffff;
  param_1[9] = 0;
  puVar1 = PTR_DAT_04bcbc68;
  param_1[10] = 0;
  param_1[0xb] = 0;
  (**(code **)(*(long *)puVar1 + 0x10))(puVar1);
  if (DAT_04c57de0 == DAT_04c57df0) {
    DAT_04c57de0 = param_1;
  }
  else {
    *(undefined8 **)((long)DAT_04c57de8 + 8) = param_1;
    param_1[2] = DAT_04c57de8;
  }
  DAT_04c57df8 = DAT_04c57df8 + 1;
  DAT_04c57de8 = param_1;
                    /* WARNING: Could not recover jumptable at 0x00185c44. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)puVar1 + 0x20))(puVar1);
  return;
}

