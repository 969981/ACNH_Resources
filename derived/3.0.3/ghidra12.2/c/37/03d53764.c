
void FUN_03d53764(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_04b8f488;
  (**(code **)(**(long **)PTR_DAT_04bb26b8 + 0xd8))(*(long **)PTR_DAT_04bb26b8,param_1[2]);
  if ((long *)param_1[1] == (long *)0x0) {
    return;
  }
                    /* WARNING: Could not recover jumptable at 0x03d537b4. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*(long *)param_1[1] + 0x18))();
  return;
}

