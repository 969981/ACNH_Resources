
undefined8 FUN_00260444(long *param_1)

{
  int *piVar1;
  ulong uVar2;
  undefined4 local_40;
  ErrorResultVariant aEStack_3c [12];
  undefined1 auStack_30 [16];
  undefined4 local_14;
  
  piVar1 = (int *)param_1[0xd];
  if ((piVar1 == (int *)0x0) || ((char)piVar1[10] == '\0')) {
    uVar2 = (**(code **)(*param_1 + 0x40))(param_1);
    if ((uVar2 & 1) != 0) {
      param_1[6] = (long)PTR_FUN_04bcd978;
      param_1[7] = 0;
      param_1[8] = (long)"ConnectStationJob::ConnectionFailed";
      return 0;
    }
    if (*(byte *)(param_1[0xe] + 0x38) < 0x20) {
      FUN_002ba5a4(DAT_04c61168);
    }
    piVar1 = (int *)param_1[0xd];
    if ((piVar1 != (int *)0x0) && (2 < *piVar1 - 2U)) {
      local_40 = 0;
      local_14 = 0;
      nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_3c,(Result *)&local_14);
      FUN_002296c4(auStack_30,&local_40);
      FUN_00220f8c(piVar1,auStack_30);
    }
  }
  else if (2 < *piVar1 - 2U) {
    FUN_00221064();
    param_1[0xd] = 0;
    return 1;
  }
  param_1[0xd] = 0;
  return 1;
}

