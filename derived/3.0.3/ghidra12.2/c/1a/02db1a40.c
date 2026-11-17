
void FUN_02db1a40(long *param_1)

{
  FUN_01be9eb8(param_1 + 0x461);
  param_1[0x432] = (long)&PTR_LAB_048fc7e8;
  FUN_01be9eb8(param_1 + 0x3ba);
  param_1[0x38b] = (long)&PTR_LAB_048fc7e8;
  FUN_01be9eb8(param_1 + 0x313);
  param_1[0x2e4] = (long)&PTR_LAB_048fc7e8;
  FUN_01be9eb8(param_1 + 0x26c);
  param_1[0x23d] = (long)&PTR_LAB_048fc7e8;
  FUN_01be9eb8(param_1 + 0x1c5);
  param_1[0x196] = (long)&PTR_LAB_048fc7e8;
  FUN_01be9eb8(param_1 + 0x11e);
  param_1[0xef] = (long)&PTR_LAB_048fc7e8;
  FUN_01be9eb8(param_1 + 0x77);
  param_1[0x48] = (long)&PTR_LAB_048fc7e8;
  *param_1 = (long)(PTR_DAT_04bc5668 + 0x10);
  FUN_03ebae78(param_1 + 0x35);
  if ((long *)param_1[0x41] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x41] + 8))();
    param_1[0x41] = 0;
  }
  FUN_03868660(param_1);
  return;
}

