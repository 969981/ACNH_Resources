
undefined8 FUN_002647e0(long param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  undefined8 uVar3;
  ulong uVar4;
  
  puVar1 = PTR_DAT_04bcd350;
  uVar3 = FUN_0026c894(*(undefined8 *)PTR_DAT_04bcd350);
  uVar4 = FUN_00284080(uVar3,*(undefined4 *)(param_1 + 0x68));
  puVar2 = PTR_FUN_04bcda30;
  if ((uVar4 & 1) == 0) {
    *(undefined4 *)(param_1 + 0x68) = 0;
    *(undefined **)(param_1 + 0x30) = puVar2;
    *(undefined8 *)(param_1 + 0x38) = 0;
    *(char **)(param_1 + 0x40) = "JoinMeshJob::WaitJoinResponse";
    return 0;
  }
  uVar4 = FUN_00263ba8(param_1);
  if ((((uVar4 & 1) != 0) || (uVar4 = FUN_00264418(param_1), (uVar4 & 1) != 0)) ||
     (uVar4 = FUN_002648d4(param_1), (uVar4 & 1) != 0)) {
    uVar3 = FUN_0026c894(*(undefined8 *)puVar1);
    FUN_002840f0(uVar3,*(undefined4 *)(param_1 + 0x68));
    *(undefined4 *)(param_1 + 0x68) = 0;
    *(undefined4 *)(param_1 + 0x88) = 0;
    return 1;
  }
  if (*(char *)(param_1 + 0x88) == '\0') {
    uVar3 = FUN_0026c894(*(undefined8 *)puVar1);
    FUN_002840f0(uVar3,*(undefined4 *)(param_1 + 0x68));
    puVar1 = PTR_FUN_04bcda38;
    *(undefined4 *)(param_1 + 0x68) = 0;
    *(undefined **)(param_1 + 0x30) = puVar1;
    *(undefined8 *)(param_1 + 0x38) = 0;
    *(char **)(param_1 + 0x40) = "JoinMeshJob::AnalyzeJoinResponse";
    return 0;
  }
  return 5;
}

