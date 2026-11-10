
void FUN_0025e658(long param_1)

{
  long lVar1;
  int *piVar2;
  undefined4 local_40;
  ErrorResultVariant aEStack_3c [12];
  undefined1 auStack_30 [16];
  undefined4 local_14;
  
  lVar1 = *(long *)(param_1 + 0x58);
  if (lVar1 != 0) {
    *(undefined1 *)(lVar1 + 0x48) = 1;
    FUN_00227860(lVar1,2);
    FUN_0025ea4c(*(undefined8 *)(param_1 + 0x58));
  }
  piVar2 = *(int **)(param_1 + 0x60);
  if (piVar2 != (int *)0x0) {
    if (*piVar2 == 1) {
      local_14 = 0;
      local_40 = 0x6c05;
      nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_3c,(Result *)&local_14);
      FUN_002296c4(auStack_30,&local_40);
      FUN_00220ff8(piVar2,auStack_30);
    }
    *(undefined8 *)(param_1 + 0x60) = 0;
  }
  *(undefined4 *)(param_1 + 0x98) = 0;
  local_40 = 0;
  local_14 = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_3c,(Result *)&local_14);
  FUN_00229780(param_1 + 0x9c,&local_40);
  return;
}

