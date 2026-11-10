
void FUN_002b4018(long *param_1,long param_2)

{
  *param_1 = (long)(PTR_DAT_04bce150 + 0x10);
  FUN_0021f4e0(param_1 + 1);
  FUN_0021f4e0(param_1 + 5);
  FUN_0021f4e0(param_1 + 9);
  FUN_0021f54c(param_1 + 1,param_2 + 8);
  FUN_0021f54c(param_1 + 5,param_2 + 0x28);
  FUN_0021f54c(param_1 + 9,param_2 + 0x48);
  param_1[0xd] = *(long *)(param_2 + 0x68);
  param_1[0xe] = *(long *)(param_2 + 0x70);
  *(undefined4 *)(param_1 + 0xf) = *(undefined4 *)(param_2 + 0x78);
  return;
}

