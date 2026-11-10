
undefined8 FUN_0025d888(long param_1)

{
  undefined8 uVar1;
  undefined1 auStack_50 [16];
  undefined1 auStack_40 [16];
  int local_30 [4];
  
  if (*(char *)(*(long *)(param_1 + 0x58) + 0x28) != '\0') {
    if (**(int **)(param_1 + 0x60) == 1) {
      FUN_002210f0();
    }
    *(undefined **)(param_1 + 0x30) = PTR_LAB_04bcd6b0;
    *(undefined8 *)(param_1 + 0x38) = 0;
    *(char **)(param_1 + 0x40) = "LocalDisconnectNetworkJob::WaitForCancel";
    return 0;
  }
  FUN_0024e700(local_30,*(undefined8 *)(*(long *)(param_1 + 0x68) + 0x408));
  if (local_30[0] != 0) {
    return 5;
  }
  FUN_0024e7a4(auStack_40,*(undefined8 *)(*(long *)(param_1 + 0x68) + 0x408),
               *(undefined8 *)(param_1 + 0x60));
  FUN_00229780(local_30,auStack_40);
  if (local_30[0] == 0) {
    FUN_002211bc(*(undefined8 *)(*(long *)(param_1 + 0x68) + 0x408),1);
    *(undefined **)(param_1 + 0x30) = PTR_LAB_04bcd6b8;
    *(undefined8 *)(param_1 + 0x38) = 0;
    *(char **)(param_1 + 0x40) = "LocalDisconnectNetworkJob::WaitDisconnectNetwork";
    return 0;
  }
  uVar1 = *(undefined8 *)(param_1 + 0x58);
  FUN_002296c4(auStack_50,*(long *)(param_1 + 0x60) + 4);
  FUN_00220ff8(uVar1,auStack_50);
  *(undefined8 *)(param_1 + 0x58) = 0;
  return 1;
}

