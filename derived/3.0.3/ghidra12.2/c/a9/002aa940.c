
void FUN_002aa940(long param_1,long param_2)

{
  if (*(long *)(param_1 + 0x30) != param_2) {
    *(long *)(param_1 + 0x30) = param_2;
  }
  return;
}

