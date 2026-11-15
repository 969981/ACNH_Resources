
void FUN_02219944(long param_1)

{
  int iVar1;
  
  if (*(int *)(param_1 + 4) == 0) {
    *(undefined8 *)(param_1 + 0x5c) = 0;
  }
  else if (*(int *)(param_1 + 0x60) < 3) {
    *(undefined2 *)(param_1 + 0xc) = 0xffff;
    *(undefined8 *)(param_1 + 4) = 0;
    iVar1 = 0;
    if (*(int *)(param_1 + 0x5c) == *(int *)(param_1 + 8) || *(int *)(param_1 + 0x5c) == 0) {
      iVar1 = *(int *)(param_1 + 0x60) + 1;
    }
    *(int *)(param_1 + 0x5c) = *(int *)(param_1 + 8);
    *(int *)(param_1 + 0x60) = iVar1;
  }
  else {
    iVar1 = *(int *)(param_1 + 4);
    if ((((iVar1 == 3) || (iVar1 == 2)) || (iVar1 == 1)) && (*(int *)(param_1 + 0x18) != iVar1)) {
      FUN_03ebb160(param_1 + 0x10);
    }
  }
  return;
}

