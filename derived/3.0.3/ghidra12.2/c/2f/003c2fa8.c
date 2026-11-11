
undefined8 FUN_003c2fa8(long param_1)

{
  if (*(long *)(param_1 + 0xd8) == 0) {
    return 0;
  }
  return *(undefined8 *)(*(long *)(param_1 + 0xd8) + 0xb8);
}

