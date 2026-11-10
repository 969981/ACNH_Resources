
void FUN_0024e454(long *param_1)

{
  int *piVar1;
  undefined4 local_40;
  ErrorResultVariant aEStack_3c [12];
  undefined1 auStack_30 [16];
  undefined4 local_14;
  
  piVar1 = (int *)param_1[0xb];
  if (piVar1 != (int *)0x0) {
    if (*piVar1 == 1) {
      local_14 = 0;
      local_40 = 0x6c05;
      nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_3c,(Result *)&local_14);
      FUN_002296c4(auStack_30,&local_40);
      FUN_00220ff8(piVar1,auStack_30);
    }
    param_1[0xb] = 0;
  }
  *(undefined2 *)((long)param_1 + 100) = 0;
  *(undefined4 *)(param_1 + 0xc) = 10;
  (**(code **)(*param_1 + 0x48))(param_1);
  return;
}

