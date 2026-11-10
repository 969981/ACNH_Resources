
undefined8 FUN_002683e8(long param_1)

{
  int iVar1;
  undefined *puVar2;
  long lVar3;
  
  lVar3 = *(long *)(*(long *)PTR_DAT_04bcd350 + 0x38);
  iVar1 = *(int *)(*(long *)PTR_DAT_04bcd350 + 0xa8);
  if (*(char *)(lVar3 + 0x84) == '\0') {
    if (iVar1 == 2) {
      *(undefined1 **)(param_1 + 0x30) = &LAB_0026868c;
      *(undefined8 *)(param_1 + 0x38) = 0;
      *(char **)(param_1 + 0x40) = "LeaveWithHostMigrationJob::SendStartMultiMigrationMessage";
      return 0;
    }
    *(undefined1 **)(param_1 + 0x30) = &LAB_00268700;
    *(undefined8 *)(param_1 + 0x38) = 0;
    *(char **)(param_1 + 0x40) = "LeaveWithHostMigrationJob::SendStartMigrationMessage";
    return 0;
  }
  if (iVar1 == 2) {
    FUN_00279f24(lVar3);
    puVar2 = PTR_FUN_04bcdab8;
    *(undefined1 *)(lVar3 + 0x48) = 1;
    *(undefined **)(param_1 + 0x30) = puVar2;
    *(undefined8 *)(param_1 + 0x38) = 0;
    *(char **)(param_1 + 0x40) = "LeaveWithHostMigrationJob::StartDisconnectStations";
    return 0;
  }
  *(undefined1 **)(param_1 + 0x30) = &LAB_00268610;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(char **)(param_1 + 0x40) = "LeaveWithHostMigrationJob::WaitHostMigrationProcess";
  return 0;
}

