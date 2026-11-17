
void FUN_030c8aa0(long *param_1)

{
  *param_1 = (long)&PTR_FUN_04afda90;
  FUN_01be9eb8(param_1 + 0x473);
  FUN_01be9eb8(param_1 + 0x3fc);
  FUN_01be9eb8(param_1 + 0x385);
  FUN_01be9eb8(param_1 + 0x30e);
  FUN_01be9eb8(param_1 + 0x297);
  FUN_01be9eb8(param_1 + 0x220);
  FUN_01be9eb8(param_1 + 0x1a9);
  FUN_01be9eb8(param_1 + 0x132);
  FUN_01be9eb8(param_1 + 0xbb);
  FUN_01be9eb8(param_1 + 0x44);
  *param_1 = (long)(PTR_DAT_04bc5668 + 0x10);
  FUN_03ebae78(param_1 + 0x35);
  if ((long *)param_1[0x41] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x41] + 8))();
    param_1[0x41] = 0;
  }
  FUN_03868660(param_1);
  return;
}

