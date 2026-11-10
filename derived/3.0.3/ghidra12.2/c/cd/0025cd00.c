
void FUN_0025cd00(long param_1)

{
  long lVar1;
  int *piVar2;
  undefined4 local_40;
  ErrorResultVariant aEStack_3c [12];
  undefined1 auStack_30 [16];
  undefined4 local_14;
  
  FUN_002210f0(*(undefined8 *)(param_1 + 0x60));
  piVar2 = *(int **)(param_1 + 0x58);
  if (piVar2 != (int *)0x0) {
    if (*piVar2 == 1) {
      local_14 = 0;
      local_40 = 0x6c05;
      nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_3c,(Result *)&local_14);
      FUN_002296c4(auStack_30,&local_40);
      FUN_00220ff8(piVar2,auStack_30);
    }
    *(undefined8 *)(param_1 + 0x58) = 0;
  }
  if ((*(char *)(param_1 + 0x80) != '\0') && (lVar1 = *(long *)(param_1 + 0x88), lVar1 != 0)) {
    *(undefined4 *)(lVar1 + 0x420) = 0;
    *(undefined1 *)(lVar1 + 0x470) = 0;
  }
  return;
}

