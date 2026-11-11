
void FUN_003e5b90(long param_1,uint param_2)

{
  long lVar1;
  
  FUN_003e5d88();
  if ((param_2 & 1) != 0) {
    FUN_003e5d90(param_1,*(undefined8 *)(param_1 + 0x10),
                 *(int *)(param_1 + 0x40) - (int)*(undefined8 *)(param_1 + 0x10));
    *(undefined8 *)(param_1 + 0x50) = 0;
    *(undefined8 *)(param_1 + 0x40) = *(undefined8 *)(param_1 + 0x10);
  }
  if ((param_2 >> 1 & 1) == 0) {
    FUN_003e5d8c(param_1);
    return;
  }
  FUN_003e5d90(param_1,*(undefined8 *)(param_1 + 0x48),
               *(int *)(param_1 + 0x18) - (int)*(undefined8 *)(param_1 + 0x48));
  for (lVar1 = *(long *)(param_1 + 0x50); lVar1 != 0; lVar1 = *(long *)(lVar1 + 0x18)) {
    *(undefined8 *)(lVar1 + 0x10) = *(undefined8 *)(param_1 + 0x18);
  }
  *(undefined8 *)(param_1 + 0x48) = *(undefined8 *)(param_1 + 0x18);
  FUN_003e5d8c(param_1);
  return;
}

