
undefined8 FUN_002391ec(long param_1,uint param_2,undefined1 param_3)

{
  undefined1 uVar1;
  
  if ((param_2 & 1) == 0) {
    *(undefined **)(param_1 + 0x30) = PTR_LAB_04bcd3f0;
    *(undefined8 *)(param_1 + 0x38) = 0;
    *(char **)(param_1 + 0x40) = "LanProcessHostMigrationJob::LanDecideNextHost";
    return 1;
  }
  uVar1 = FUN_0026be6c(*(undefined8 *)PTR_DAT_04bcd350);
  *(undefined1 *)(param_1 + 0x86) = uVar1;
  *(undefined1 *)(param_1 + 0x90) = param_3;
  *(undefined **)(param_1 + 0x30) = PTR_FUN_04bcd3e8;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(char **)(param_1 + 0x40) = "LanProcessHostMigrationJob::LanCleanupOldHostInfo";
  return 1;
}

