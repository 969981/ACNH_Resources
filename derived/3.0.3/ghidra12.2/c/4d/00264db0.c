
undefined8 FUN_00264db0(long param_1)

{
  ulong uVar1;
  
  if (*(char *)(param_1 + 0x88) == '\0') {
    *(undefined **)(param_1 + 0x30) = PTR_FUN_04bcda38;
    *(undefined8 *)(param_1 + 0x38) = 0;
    *(char **)(param_1 + 0x40) = "JoinMeshJob::AnalyzeJoinResponse";
    return 0;
  }
  uVar1 = FUN_00263ba8(param_1);
  if ((((uVar1 & 1) == 0) && (uVar1 = FUN_00264418(param_1), (uVar1 & 1) == 0)) &&
     (uVar1 = FUN_002648d4(param_1), (uVar1 & 1) == 0)) {
    return 5;
  }
  *(undefined1 *)(param_1 + 0x88) = 0;
  return 1;
}

