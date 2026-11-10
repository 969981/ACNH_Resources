
undefined8 FUN_0025e750(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_40 [16];
  undefined1 auStack_30 [16];
  
  uVar1 = *(undefined8 *)(param_1 + 0x60);
  if (*(int *)(param_1 + 0x9c) == 0) {
    FUN_002296c4(auStack_30);
    FUN_00220f8c(uVar1,auStack_30);
    *(undefined8 *)(param_1 + 0x60) = 0;
    return 1;
  }
  FUN_002296c4(auStack_40);
  FUN_00220ff8(uVar1,auStack_40);
  *(undefined8 *)(param_1 + 0x60) = 0;
  return 1;
}

