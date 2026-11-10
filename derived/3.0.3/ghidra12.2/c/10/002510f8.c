
void FUN_002510f8(long param_1)

{
  int *piVar1;
  undefined4 local_40;
  ErrorResultVariant aEStack_3c [12];
  undefined1 auStack_30 [16];
  undefined4 local_14;
  
  FUN_002210f0(*(undefined8 *)(param_1 + 0x60));
  piVar1 = *(int **)(param_1 + 0x58);
  if (piVar1 != (int *)0x0) {
    if (*piVar1 == 1) {
      local_14 = 0;
      local_40 = 0x6c05;
      nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_3c,(Result *)&local_14);
      FUN_002296c4(auStack_30,&local_40);
      FUN_00220ff8(piVar1,auStack_30);
    }
    *(undefined8 *)(param_1 + 0x58) = 0;
  }
  *(undefined4 *)(*(long *)(param_1 + 0x78) + 0x420) = 0;
  *(undefined1 *)(param_1 + 0x68) = 0;
  return;
}

