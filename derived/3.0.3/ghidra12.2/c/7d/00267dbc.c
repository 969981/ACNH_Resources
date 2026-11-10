
undefined8 FUN_00267dbc(long param_1)

{
  undefined *puVar1;
  ulong uVar2;
  undefined8 uVar3;
  
  puVar1 = PTR_DAT_04bcd350;
  FUN_0026c420(*(undefined8 *)PTR_DAT_04bcd350);
  uVar2 = FUN_00271ee0();
  if ((uVar2 & 1) == 0) {
    *(undefined **)(param_1 + 0x30) = PTR_LAB_04bcda90;
    *(undefined8 *)(param_1 + 0x38) = 0;
    *(char **)(param_1 + 0x40) = "LeaveMeshJob::StartDisconnectStations";
    return 0;
  }
  uVar3 = FUN_0026c420(*(undefined8 *)puVar1);
  FUN_00273a14(uVar3,param_1);
  *(undefined1 *)(param_1 + 0x7c) = 1;
  *(undefined **)(param_1 + 0x30) = PTR_FUN_04bcda88;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(char **)(param_1 + 0x40) = "LeaveMeshJob::WaitLeaveResponse";
  return 5;
}

