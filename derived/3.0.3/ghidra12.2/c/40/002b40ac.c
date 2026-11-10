
void FUN_002b40ac(long param_1,long param_2)

{
  FUN_0021f54c(param_1 + 8,param_2 + 8);
  FUN_0021f54c(param_1 + 0x28,param_2 + 0x28);
  FUN_0021f54c(param_1 + 0x48,param_2 + 0x48);
  *(undefined8 *)(param_1 + 0x68) = *(undefined8 *)(param_2 + 0x68);
  *(undefined8 *)(param_1 + 0x70) = *(undefined8 *)(param_2 + 0x70);
  *(undefined4 *)(param_1 + 0x78) = *(undefined4 *)(param_2 + 0x78);
  return;
}

