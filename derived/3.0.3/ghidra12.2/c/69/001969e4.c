
void FUN_001969e4(undefined8 param_1,long param_2)

{
  FUN_001968b4(param_1,*(undefined8 *)(param_2 + 0x10));
  *(long *)(param_2 + 0x28) = *(long *)(*(long *)(param_2 + 0x10) + 0x18) << 3;
  return;
}

