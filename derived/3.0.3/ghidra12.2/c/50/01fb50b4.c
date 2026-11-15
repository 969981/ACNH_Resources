
undefined8 FUN_01fb50b4(long *param_1)

{
  *(uint *)(param_1 + 0x15f6) = *(uint *)(param_1 + 0x15f6) | 0x4000000;
  *(undefined4 *)((long)param_1 + 0xaf34) = 4;
  (**(code **)(*param_1 + 0x38))(param_1,0x3a,0,0);
  return 1;
}

