
void FUN_002c5390(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  
  if ((*(int **)(param_1 + 0x58) != (int *)0x0) && (**(int **)(param_1 + 0x58) == 1)) {
    FUN_00221064();
  }
  (**(code **)(**(long **)(param_1 + 0x68) + 0x10))();
  *(undefined8 *)(param_1 + 0x68) = 0;
  lVar1 = FUN_0022033c();
  if (lVar1 == 0) {
    return;
  }
  uVar2 = FUN_0022033c();
  FUN_00220b40(uVar2,0);
  return;
}

