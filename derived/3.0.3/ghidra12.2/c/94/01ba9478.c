
void FUN_01ba9478(undefined8 *param_1)

{
  *param_1 = &PTR_FUN_04a3a408;
  if (DAT_0533a030 != (long *)0x0) {
    (**(code **)(*DAT_0533a030 + 0x20))();
    DAT_0533a030 = (long *)0x0;
  }
  FUN_03b0dca0(param_1);
  return;
}

