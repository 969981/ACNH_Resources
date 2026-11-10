
undefined8 FUN_00251504(long param_1)

{
  undefined8 uVar1;
  long *plVar2;
  undefined8 uVar3;
  int local_30 [4];
  
  if (*(char *)(*(long *)(param_1 + 0x58) + 0x28) != '\0') {
    if (**(int **)(param_1 + 0x60) == 1) {
      FUN_002210f0();
    }
    *(undefined **)(param_1 + 0x30) = PTR_LAB_04bcd5a8;
    *(undefined8 *)(param_1 + 0x38) = 0;
    *(char **)(param_1 + 0x40) = "LocalHostMigrationJob::WaitForCancel";
    return 0;
  }
  plVar2 = *(long **)(param_1 + 0x78);
  uVar3 = *(undefined8 *)(param_1 + 0x60);
  uVar1 = (**(code **)(*plVar2 + 0x140))(plVar2);
  FUN_0025b8a4(local_30,plVar2,uVar3,uVar1);
  if (local_30[0] == 0) {
    *(undefined8 *)(param_1 + 0x30) = 0x40;
    *(undefined8 *)(param_1 + 0x38) = 1;
    *(char **)(param_1 + 0x40) = "LocalHostMigrationJob::WaitCreateNetwork";
    return 5;
  }
  return 5;
}

