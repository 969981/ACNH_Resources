
void FUN_0026820c(long param_1)

{
  int *piVar1;
  undefined1 auStack_50 [16];
  undefined4 local_40;
  ErrorResultVariant aEStack_3c [12];
  undefined1 auStack_30 [16];
  undefined4 local_14;
  
  piVar1 = *(int **)(param_1 + 0x68);
  *(undefined1 *)(param_1 + 0x7c) = 0;
  *(undefined8 *)(param_1 + 0x58) = 0;
  if (piVar1 != (int *)0x0) {
    if (*piVar1 == 1) {
      local_40 = 0;
      local_14 = 0;
      nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_3c,(Result *)&local_14);
      FUN_002296c4(auStack_30,&local_40);
      FUN_00220f8c(piVar1,auStack_30);
    }
    *(undefined8 *)(param_1 + 0x68) = 0;
  }
  piVar1 = *(int **)(param_1 + 0x70);
  if (piVar1 != (int *)0x0) {
    if (*piVar1 == 1) {
      local_40 = 0;
      local_14 = 0;
      nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_3c,(Result *)&local_14);
      FUN_002296c4(auStack_50,&local_40);
      FUN_00220f8c(piVar1,auStack_50);
    }
    *(undefined8 *)(param_1 + 0x70) = 0;
  }
  return;
}

