
void FUN_0023094c(long param_1,void *param_2,ulong param_3)

{
  *(undefined1 *)(param_1 + 0x2000) = 1;
  memcpy((void *)(param_1 + 0x54),param_2,param_3 & 0xffffffff);
  FUN_00240b90(param_1 + 0x1718);
  FUN_00240d34(param_1 + 0x1718,param_1 + 0x18);
  return;
}

