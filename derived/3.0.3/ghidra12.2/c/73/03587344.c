
void FUN_03587344(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  
  FUN_03407504((long)param_1 + 0x193c);
  puVar1 = PTR_DAT_04bc0d10 + 0x10;
  param_1[0x2f0] = (long)puVar1;
  puVar2 = PTR_DAT_04bb2df8;
  param_1[0x2c3] = (long)puVar1;
  param_1[0x296] = (long)puVar1;
  param_1[0x269] = (long)puVar1;
  param_1[0x23c] = (long)puVar1;
  param_1[0x20f] = (long)puVar1;
  param_1[0x1e2] = (long)puVar1;
  param_1[0x1b5] = (long)puVar1;
  puVar2 = puVar2 + 0x10;
  param_1[0x188] = (long)puVar1;
  param_1[0x15b] = (long)puVar1;
  param_1[0x12e] = (long)puVar1;
  param_1[0x101] = (long)puVar1;
  param_1[0xd4] = (long)puVar1;
  param_1[0xa7] = (long)puVar1;
  param_1[0x7a] = (long)puVar1;
  param_1[0x4d] = (long)puVar1;
  param_1[0x2f1] = (long)puVar2;
  param_1[0x2c4] = (long)puVar2;
  param_1[0x297] = (long)puVar2;
  param_1[0x26a] = (long)puVar2;
  param_1[0x23d] = (long)puVar2;
  param_1[0x210] = (long)puVar2;
  param_1[0x1e3] = (long)puVar2;
  param_1[0x1b6] = (long)puVar2;
  param_1[0x189] = (long)puVar2;
  param_1[0x15c] = (long)puVar2;
  param_1[0x12f] = (long)puVar2;
  param_1[0x102] = (long)puVar2;
  param_1[0xd5] = (long)puVar2;
  param_1[0xa8] = (long)puVar2;
  param_1[0x7b] = (long)puVar2;
  param_1[0x4e] = (long)puVar2;
  *param_1 = (long)(PTR_DAT_04bc5668 + 0x10);
  FUN_03ebae78(param_1 + 0x35);
  if ((long *)param_1[0x41] != (long *)0x0) {
    (**(code **)(*(long *)param_1[0x41] + 8))();
    param_1[0x41] = 0;
  }
  FUN_03868660(param_1);
  return;
}

