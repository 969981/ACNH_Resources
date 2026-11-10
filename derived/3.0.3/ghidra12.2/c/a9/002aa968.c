
void FUN_002aa968(long param_1,long param_2)

{
  if (*(long *)(param_1 + 0x40) != param_2) {
    *(long *)(param_1 + 0x40) = param_2;
  }
  return;
}

