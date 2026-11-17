
void FUN_031becc8(long *param_1)

{
  FUN_01be9eb8(param_1 + 0x82a);
  FUN_01be9eb8(param_1 + 0x7b3);
  FUN_01be9eb8(param_1 + 0x73c);
  FUN_01be9eb8(param_1 + 0x6c5);
  FUN_01be9eb8(param_1 + 0x64e);
  FUN_01be9eb8(param_1 + 0x5d7);
  FUN_01be9eb8(param_1 + 0x560);
  FUN_01be9eb8(param_1 + 0x4e9);
  FUN_01be9eb8(param_1 + 0x472);
  FUN_01be9eb8(param_1 + 0x3fb);
  FUN_01be9eb8(param_1 + 900);
  FUN_01be9eb8(param_1 + 0x30d);
  FUN_01be9eb8(param_1 + 0x296);
  FUN_01be9eb8(param_1 + 0x21f);
  FUN_01be9eb8(param_1 + 0x1a8);
  FUN_01be9eb8(param_1 + 0x131);
  FUN_01be9eb8(param_1 + 0xba);
  FUN_01be9eb8(param_1 + 0x43);
  *param_1 = (long)(PTR_DAT_04bc5668 + 0x10);
  FUN_03ebae78(param_1 + 0x35);
  if ((long *)param_1[0x41] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x41] + 8))();
    param_1[0x41] = 0;
  }
  FUN_03868660(param_1);
  return;
}

