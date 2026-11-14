
undefined8 FUN_01ca4874(long param_1,undefined8 param_2)

{
  *(undefined8 *)(param_1 + 0xf68) = param_2;
  *(undefined4 *)(param_1 + 0x1cd0) = 0;
  if ((*(int *)(param_1 + 0x38) == 0) ||
     ((*(int *)(param_1 + 0x38) == 1 && (*(char *)(param_1 + 0x2079) == '\0')))) {
    *(undefined1 *)(param_1 + 0x207e) = 0;
  }
  FUN_03ebb160(param_1 + 0x30,0x21);
  *(undefined4 *)(param_1 + 0xf64) = 0x18;
  return 1;
}

