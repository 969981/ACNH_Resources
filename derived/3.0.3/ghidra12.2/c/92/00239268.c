
undefined8 FUN_00239268(long *param_1)

{
  char *pcVar1;
  undefined *puVar2;
  undefined *puVar3;
  char *pcVar4;
  int iVar5;
  ulong uVar6;
  
  *(undefined4 *)(param_1 + 0x22) = 1;
  uVar6 = (**(code **)(*param_1 + 0x30))();
  if ((uVar6 & 1) == 0) {
    param_1[6] = (long)PTR_LAB_04bcd478;
    param_1[7] = 0;
    param_1[8] = (long)"LanProcessHostMigrationJob::HostMigrationFailure";
    return 0;
  }
  iVar5 = FUN_00278ea4(param_1);
  pcVar1 = "LanProcessHostMigrationJob::HostMigrationFailure";
  puVar2 = PTR_LAB_04bcd478;
  if (iVar5 == 2) {
    pcVar1 = "LanProcessHostMigrationJob::WaitNewHostGreeting";
    puVar2 = PTR_LAB_04bcd480;
  }
  puVar3 = PTR_LAB_04bcd3f8;
  if (iVar5 != 1) {
    puVar3 = puVar2;
  }
  pcVar4 = "LanProcessHostMigrationJob::LanPrepareForBecomingHost";
  if (iVar5 != 1) {
    pcVar4 = pcVar1;
  }
  param_1[6] = (long)puVar3;
  param_1[7] = 0;
  param_1[8] = (long)pcVar4;
  return 0;
}

