
undefined8 FUN_002963a0(long *param_1)

{
  undefined *puVar1;
  short sVar2;
  int iVar3;
  ulong uVar4;
  undefined *puVar5;
  char *pcVar6;
  int local_30 [4];
  
  puVar5 = PTR_DAT_04bcb8b8;
  iVar3 = FUN_0029b330(*(undefined8 *)PTR_DAT_04bcb8b8);
  puVar1 = PTR_DAT_04bcd350;
  if (iVar3 - 5U < 5) {
    (**(code **)(**(long **)(*(long *)puVar5 + 8) + 0x28))();
    param_1[6] = (long)PTR_FUN_04bcdf28;
    param_1[7] = 0;
    param_1[8] = (long)"nn::pia::session::LeaveSessionJob::SendMonitoringData";
    return 0;
  }
  FUN_0026c25c(*(undefined8 *)PTR_DAT_04bcd350,1);
  uVar4 = FUN_0026c070(*(undefined8 *)puVar1);
  if (((uVar4 & 1) == 0) || (uVar4 = FUN_0029b7b0(*(undefined8 *)puVar5), (uVar4 & 1) == 0)) {
    FUN_0026b890(local_30,*(undefined8 *)puVar1,param_1 + 0xc,2);
    if (*(char *)(*(long *)puVar5 + 0x15d) != '\0') {
      *(undefined1 *)(*(long *)puVar5 + 0x15d) = 0;
    }
    if (local_30[0] != 0) goto LAB_002964ac;
    pcVar6 = "LeaveSessionJob::WaitLeaveMesh";
    puVar5 = PTR_LAB_04bcdf48;
  }
  else {
    sVar2 = FUN_0029b360(*(undefined8 *)puVar5);
    if (sVar2 == 1) {
      *(undefined1 *)(param_1 + 0x13) = 1;
    }
    FUN_0026aea4(local_30,*(undefined8 *)puVar1,param_1 + 0xc,2);
    if (local_30[0] != 0) {
LAB_002964ac:
      (**(code **)(*param_1 + 0x38))(param_1);
      return 0;
    }
    pcVar6 = "LeaveSessionJob::WaitLeaveMeshWithHostMigration";
    puVar5 = PTR_LAB_04bcdf40;
  }
  param_1[6] = (long)puVar5;
  param_1[7] = 0;
  param_1[8] = (long)pcVar6;
  return 5;
}

