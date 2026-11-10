
void FUN_001b9a50(undefined8 param_1,long param_2)

{
  if (*(char *)(param_2 + 0x69) == '\0') {
    FUN_001b88c0(param_2);
    FUN_00186ea0(param_1,*(undefined8 *)(param_2 + 0x60));
    return;
  }
  FUN_00186ea0(param_1,*(undefined8 *)(param_2 + 0x60));
  return;
}

