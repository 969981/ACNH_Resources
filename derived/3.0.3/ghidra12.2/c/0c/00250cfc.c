
undefined8 FUN_00250cfc(long param_1)

{
  long lVar1;
  undefined8 uVar2;
  undefined1 auStack_50 [16];
  int local_40;
  ErrorResultVariant aEStack_3c [12];
  undefined1 auStack_30 [16];
  undefined4 local_14;
  
  lVar1 = *(long *)(param_1 + 0x58);
  if (*(char *)(lVar1 + 0x28) == '\0') {
    if (*(int *)(*(long *)(param_1 + 0x60) + 0x420) != 0) {
      return 5;
    }
    local_40 = 0;
    local_14 = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_3c,(Result *)&local_14);
    FUN_002296c4(auStack_30,&local_40);
    FUN_00220f8c(lVar1,auStack_30);
    FUN_0025a620(&local_40,*(undefined8 *)(param_1 + 0x60),*(undefined8 *)(param_1 + 0x58));
    if (local_40 != 0) {
      FUN_00220f24(*(undefined8 *)(param_1 + 0x58));
      FUN_00220f78(*(undefined8 *)(param_1 + 0x58));
      uVar2 = *(undefined8 *)(param_1 + 0x58);
      FUN_002296c4(auStack_50,&local_40);
      FUN_00220ff8(uVar2,auStack_50);
      *(undefined8 *)(param_1 + 0x58) = 0;
      return 1;
    }
  }
  else {
    FUN_00221064(lVar1);
  }
  *(undefined8 *)(param_1 + 0x58) = 0;
  return 1;
}

