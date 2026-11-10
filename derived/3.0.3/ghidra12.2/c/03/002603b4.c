
undefined8 FUN_002603b4(long param_1)

{
  long lVar1;
  int *piVar2;
  undefined4 local_40;
  ErrorResultVariant aEStack_3c [12];
  undefined1 auStack_30 [16];
  undefined4 local_14;
  
  lVar1 = *(long *)(param_1 + 0x70);
  if ((lVar1 != 0) && (*(int *)(lVar1 + 0x4c) == 4)) {
    *(undefined4 *)(lVar1 + 0x4c) = 7;
  }
  piVar2 = *(int **)(param_1 + 0x68);
  if ((piVar2 != (int *)0x0) && (2 < *piVar2 - 2U)) {
    local_14 = 0;
    local_40 = 0xc24;
    nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_3c,(Result *)&local_14);
    FUN_002296c4(auStack_30,&local_40);
    FUN_00220ff8(piVar2,auStack_30);
  }
  *(undefined8 *)(param_1 + 0x68) = 0;
  return 1;
}

