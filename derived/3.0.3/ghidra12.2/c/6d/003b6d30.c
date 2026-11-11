
void FUN_003b6d30(long param_1,long param_2)

{
  long *plVar1;
  
  *(undefined8 *)(param_2 + 0x38) = 0;
  *(undefined4 *)(param_2 + 0x34) = 1;
  plVar1 = (long *)(param_1 + 200);
  if (*(long *)(param_1 + 0xd0) != 0) {
    plVar1 = (long *)(*(long *)(param_1 + 0xd0) + 0x38);
  }
  *plVar1 = param_2;
  *(long *)(param_1 + 0xd0) = param_2;
  return;
}

