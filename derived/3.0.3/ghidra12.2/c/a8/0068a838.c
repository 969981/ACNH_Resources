
void FUN_0068a838(long param_1)

{
  long lVar1;
  
  if ((*(long *)(param_1 + 0x10) == 0) ||
     (lVar1 = *(long *)(*(long *)(param_1 + 0x10) + 0x38) + (long)*(int *)(param_1 + 0x18) * 0x20,
     *(int *)(lVar1 + 0x10) != *(int *)(param_1 + 0x1c))) {
    return;
  }
  *(undefined1 *)(lVar1 + 0x1a) = 4;
  FUN_0068d1f0(*(undefined8 *)(param_1 + 0x10));
  return;
}

