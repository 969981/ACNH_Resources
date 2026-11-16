
void FUN_029bb0c0(long param_1)

{
  long lVar1;
  
  FUN_03838610(param_1 + 0x69ff0);
  FUN_03838610(param_1 + 0x69fc0);
  FUN_03838610(param_1 + 0x69f90);
  FUN_03838610(param_1 + 0x69f60);
  FUN_03838610(param_1 + 0x69f30);
  FUN_03838610(param_1 + 0x69f00);
  FUN_03838610(param_1 + 0x69ed0);
  FUN_03838610(param_1 + 0x69ea0);
  FUN_03838610(param_1 + 0x69e70);
  FUN_038e1a84(param_1 + 0x5bd28);
  lVar1 = param_1 + 0x5cf0;
  do {
    lVar1 = *(long *)(lVar1 + 8);
  } while (lVar1 != param_1 + 0x5cf0);
  *(undefined ***)(param_1 + 0x3b80) = &PTR_LAB_04ba92f0;
  if (*(int *)(param_1 + 0x3bc0) != 7) {
    if (*(long *)(param_1 + 0x3ba0) != 0) {
      FUN_03f42ca4(*(long *)(param_1 + 0x3ba0),param_1 + 0x3b80,1);
    }
    *(undefined8 *)(param_1 + 0x3ba0) = 0;
    *(undefined8 *)(param_1 + 0x3b98) = 0;
    *(undefined8 *)(param_1 + 0x3bb0) = 0;
    *(undefined8 *)(param_1 + 0x3bb8) = 0;
    *(undefined4 *)(param_1 + 0x3bc0) = 7;
  }
  FUN_038e1c80(param_1 + 0x3bd8);
  FUN_038e1a84(param_1 + 0x1b00);
  return;
}

