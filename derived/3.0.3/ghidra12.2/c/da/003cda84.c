
void FUN_003cda84(long param_1)

{
  if (*(char *)(param_1 + 0x219) != '\0') {
    *(undefined1 *)(param_1 + 0x218) = 1;
    FUN_003c98bc();
    FUN_003c9e00();
    thunk_FUN_003cb0a4(param_1 + 8);
    FUN_003cb18c(param_1 + 8);
    *(undefined1 *)(param_1 + 0x219) = 0;
  }
  return;
}

