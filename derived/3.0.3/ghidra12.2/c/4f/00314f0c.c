
long FUN_00314f0c(long param_1,long param_2)

{
  *(undefined1 *)(param_1 + 8) = *(undefined1 *)(param_2 + 8);
  if (param_2 != param_1) {
    FUN_00202290(param_1 + 0x10,*(undefined8 *)(param_2 + 0x10),param_2 + 0x18);
  }
  return param_1;
}

