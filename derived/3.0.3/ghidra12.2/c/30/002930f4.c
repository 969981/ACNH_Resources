
void FUN_002930f4(long param_1)

{
  int *piVar1;
  undefined4 local_30;
  ErrorResultVariant aEStack_2c [12];
  undefined4 local_14;
  
  if (*(int **)(param_1 + 0x58) != (int *)0x0) {
    if (**(int **)(param_1 + 0x58) == 1) {
      FUN_00221064();
    }
    *(undefined8 *)(param_1 + 0x58) = 0;
  }
  piVar1 = (int *)(param_1 + 0x60);
  if (*piVar1 == 1) {
    FUN_00221064(piVar1);
  }
  FUN_00220f24(piVar1);
  local_30 = 0;
  local_14 = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_2c,(Result *)&local_14);
  FUN_00229780(param_1 + 0x90,&local_30);
  return;
}

