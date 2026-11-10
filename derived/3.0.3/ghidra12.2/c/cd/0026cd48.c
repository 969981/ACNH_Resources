
void FUN_0026cd48(long param_1)

{
  int *piVar1;
  undefined4 local_40;
  ErrorResultVariant aEStack_3c [12];
  undefined1 auStack_30 [16];
  undefined4 local_14;
  
  piVar1 = *(int **)(param_1 + 0x58);
  *(undefined8 *)(param_1 + 0x60) = 0;
  if ((piVar1 != (int *)0x0) && (*piVar1 == 1)) {
    local_40 = 0;
    local_14 = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_3c,(Result *)&local_14);
    FUN_002296c4(auStack_30,&local_40);
    FUN_00220f8c(piVar1,auStack_30);
  }
  *(undefined8 *)(param_1 + 0x58) = 0;
  memset((void *)(param_1 + 0x6c),0,0x20);
  *(undefined2 *)(param_1 + 0x8c) = 0;
  *(undefined1 *)(param_1 + 0x8e) = 0;
  return;
}

