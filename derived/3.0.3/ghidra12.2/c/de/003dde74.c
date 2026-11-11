
bool FUN_003dde74(long param_1,undefined4 param_2)

{
  if (*(char *)(param_1 + 0x30) == '\0') {
    *(undefined4 *)(param_1 + 0x28) = param_2;
    return true;
  }
  return *(char *)(param_1 + 0x30) == '\0';
}

