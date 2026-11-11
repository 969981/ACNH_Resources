
void FUN_003cb240(undefined1 *param_1)

{
  *param_1 = 0;
  *(undefined1 **)(param_1 + 8) = param_1 + 8;
  *(undefined1 **)(param_1 + 0x10) = param_1 + 8;
  *(undefined1 **)(param_1 + 0x18) = param_1 + 0x18;
  *(undefined1 **)(param_1 + 0x20) = param_1 + 0x18;
  return;
}

