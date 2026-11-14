
void FUN_01c78698(long param_1)

{
  if (*(char *)(param_1 + 0x3f0) != '\0') {
    FUN_01c79754(param_1 + 0x288);
    *(undefined1 *)(param_1 + 0x3f0) = 0;
  }
  if (*(char *)(param_1 + 0x418) != '\0') {
    if (*(char *)(param_1 + 0x411) != '\0') {
      *(undefined1 *)(param_1 + 0x411) = 0;
    }
    *(undefined1 *)(param_1 + 0x418) = 0;
  }
  if (*(char *)(param_1 + 0x421) == '\0') {
    *(undefined1 *)(param_1 + 0x421) = 1;
  }
  *(undefined1 *)(param_1 + 0x420) = 0;
  return;
}

