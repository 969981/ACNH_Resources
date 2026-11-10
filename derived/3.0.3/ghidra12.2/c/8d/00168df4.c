
undefined8 FUN_00168df4(long param_1,ulong param_2)

{
  if (1 < *(uint *)(param_1 + 0xe4)) {
    return 0xfffffdf9;
  }
  if (param_2 < *(ulong *)(param_1 + 0x30)) {
    *(undefined4 *)(param_1 + 0xe4) = 0;
    *(ulong *)(param_1 + 0xd0) = param_2;
  }
  *(ulong *)(param_1 + 200) = param_2;
  *(ulong *)(param_1 + 0x30) = param_2;
  FUN_00168d10(param_1,0);
  return 0;
}

