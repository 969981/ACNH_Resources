
undefined8 FUN_00250de0(long param_1)

{
  ulong uVar1;
  undefined8 uVar2;
  undefined4 local_40;
  ErrorResultVariant aEStack_3c [12];
  undefined1 auStack_30 [16];
  undefined4 local_14;
  
  if (*(char *)(*(long *)(param_1 + 0x58) + 0x28) != '\0') {
    FUN_00221064();
    *(undefined8 *)(param_1 + 0x58) = 0;
    return 1;
  }
  uVar1 = FUN_002586b0(*(undefined8 *)(param_1 + 0x60));
  if ((uVar1 & 1) == 0) {
    uVar2 = *(undefined8 *)(param_1 + 0x58);
    local_40 = 0;
    local_14 = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_3c,(Result *)&local_14);
    FUN_002296c4(auStack_30,&local_40);
    FUN_00220f8c(uVar2,auStack_30);
    *(undefined8 *)(param_1 + 0x58) = 0;
    return 1;
  }
  return 5;
}

