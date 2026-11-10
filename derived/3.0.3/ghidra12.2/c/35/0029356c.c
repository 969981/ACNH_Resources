
undefined8 FUN_0029356c(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  int iVar3;
  int local_30 [4];
  
  puVar1 = PTR_DAT_04bcb8b8;
  iVar3 = FUN_0029b330(*(undefined8 *)PTR_DAT_04bcb8b8);
  puVar2 = PTR_DAT_04bcd350;
  if (iVar3 - 5U < 5) {
    (**(code **)(**(long **)(*(long *)puVar1 + 8) + 0x28))();
    param_1[6] = (long)PTR_FUN_04bcd3c8;
    param_1[7] = 0;
    param_1[8] = (long)"nn::pia::session::DestroySessionJob::SendMonitoringData";
    return 0;
  }
  FUN_0026c25c(*(undefined8 *)PTR_DAT_04bcd350,1);
  if (((char)param_1[0x13] == '\0') &&
     (FUN_0026a910(local_30,*(undefined8 *)puVar2,param_1 + 0xc,2), puVar1 = PTR_LAB_04bcdeb0,
     local_30[0] == 0)) {
    param_1[8] = (long)"DestroySessionJob::WaitDestroyMesh";
    param_1[6] = (long)puVar1;
    param_1[7] = 0;
    return 5;
  }
  (**(code **)(*param_1 + 0x40))(param_1);
  return 0;
}

