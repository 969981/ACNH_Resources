
void FUN_01ca483c(long param_1,undefined8 param_2,undefined4 *param_3)

{
  *(undefined4 *)(param_1 + 0x1cd0) = 0;
  *(undefined4 *)(param_1 + 0x78) = *param_3;
  if ((*(int *)(param_1 + 0x38) == 0) ||
     ((*(int *)(param_1 + 0x38) == 1 && (*(char *)(param_1 + 0x2079) == '\0')))) {
    *(undefined1 *)(param_1 + 0x207e) = 0;
  }
  FUN_03ebb160(param_1 + 0x30);
  return;
}

