
long * FUN_002a8480(long *param_1,undefined4 *param_2)

{
  *(undefined4 *)(param_1 + 0x18) = *param_2;
  (**(code **)(*param_1 + 0x78))();
  return param_1 + 0x1a;
}

