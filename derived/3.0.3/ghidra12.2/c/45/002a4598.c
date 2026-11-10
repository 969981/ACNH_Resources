
undefined8 FUN_002a4598(long param_1)

{
  undefined8 uVar1;
  undefined4 local_40;
  ErrorResultVariant aEStack_3c [12];
  undefined1 auStack_30 [16];
  undefined4 local_14;
  
  uVar1 = *(undefined8 *)(param_1 + 0x58);
  local_40 = 0;
  local_14 = 0;
  nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_3c,(Result *)&local_14);
  FUN_002296c4(auStack_30,&local_40);
  FUN_00220f8c(uVar1,auStack_30);
  *(undefined8 *)(param_1 + 0x58) = 0;
  return 1;
}

