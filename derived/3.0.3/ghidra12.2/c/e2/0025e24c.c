
undefined8 FUN_0025e24c(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_60 [16];
  undefined4 local_50;
  ErrorResultVariant aEStack_4c [12];
  undefined1 auStack_40 [16];
  int local_30 [4];
  undefined4 local_14;
  
  (**(code **)(**(long **)(param_1 + 0x88) + 0x108))
            (local_30,*(long **)(param_1 + 0x88),param_1 + 0x68);
  uVar1 = *(undefined8 *)(param_1 + 0x58);
  if (local_30[0] == 0) {
    local_50 = 0;
    local_14 = 0;
    nn::err::ErrorResultVariant::ErrorResultVariant(aEStack_4c,(Result *)&local_14);
    FUN_002296c4(auStack_40,&local_50);
    FUN_00220f8c(uVar1,auStack_40);
    *(undefined8 *)(param_1 + 0x58) = 0;
    return 1;
  }
  FUN_002296c4(auStack_60,local_30);
  FUN_00220ff8(uVar1,auStack_60);
  *(undefined8 *)(param_1 + 0x58) = 0;
  return 1;
}

