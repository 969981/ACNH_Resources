
void FUN_00194554(long *param_1)

{
  *param_1 = (long)(PTR_DAT_04bcc020 + 0x10);
  if ((long *)param_1[0xd] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0xd] + 8))();
  }
  FUN_00196ce0(param_1 + 0x1f);
  FUN_00196ce0(param_1 + 0x15);
  FUN_00196ce0(param_1 + 0xe);
  *param_1 = (long)&PTR_LAB_04838fe8;
  return;
}

