
undefined8 FUN_0025104c(long param_1)

{
  ulong uVar1;
  int local_20 [4];
  
  if (*(char *)(*(long *)(param_1 + 0x58) + 0x28) == '\0') {
    if (*(char *)(*(long *)(param_1 + 0x78) + 0x478) == '\0') {
      uVar1 = FUN_0025a610();
      if (((uVar1 & 1) == 0) &&
         (FUN_0025a620(local_20,*(undefined8 *)(param_1 + 0x78),*(undefined8 *)(param_1 + 0x60)),
         local_20[0] == 0)) {
        *(undefined1 **)(param_1 + 0x30) = &LAB_002511b4;
        *(undefined8 *)(param_1 + 0x38) = 0;
        *(char **)(param_1 + 0x40) = "LocalHostMigrationJob::WaitDisconnectNetwork";
      }
      return 5;
    }
  }
  else if (**(int **)(param_1 + 0x60) == 1) {
    FUN_002210f0();
  }
  *(undefined **)(param_1 + 0x30) = PTR_LAB_04bcd5a8;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(char **)(param_1 + 0x40) = "LocalHostMigrationJob::WaitForCancel";
  return 0;
}

