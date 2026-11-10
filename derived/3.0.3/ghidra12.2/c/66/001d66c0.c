
void FUN_001d66c0(long param_1)

{
  if (*(long *)(param_1 + 0x40) != 0) {
    *(long *)(param_1 + 0x48) = *(long *)(param_1 + 0x40);
    FUN_00187e4c();
  }
  FUN_001dc9fc(param_1 + 0x20,*(undefined8 *)(param_1 + 0x28));
  FUN_001dca38(param_1 + 8,*(undefined8 *)(param_1 + 0x10));
  return;
}

