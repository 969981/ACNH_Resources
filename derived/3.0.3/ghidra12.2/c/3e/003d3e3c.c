
undefined8 FUN_003d3e3c(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  if (*(long *)(param_1 + 0x88) == 0) {
    lVar1 = FUN_003ce690(*(undefined8 *)(param_1 + 0x58));
    *(long *)(param_1 + 0x88) = lVar1;
    if (lVar1 == 0) {
      return 0;
    }
  }
  if (*(int *)(param_1 + 0x40) - 3U < 2) {
    return 1;
  }
  if (*(int *)(param_1 + 0x40) == 0) {
    uVar2 = FUN_003c98bc();
    FUN_003c9a08(uVar2,param_1,1);
  }
  return 0;
}

