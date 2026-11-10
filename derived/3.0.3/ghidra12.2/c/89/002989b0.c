
void FUN_002989b0(long param_1)

{
  undefined8 uVar1;
  
  if (*(char *)(param_1 + 0x68) == '\0') {
    *(undefined **)(param_1 + 0x30) = PTR_LAB_04bcdfe0;
    *(undefined8 *)(param_1 + 0x38) = 0;
    *(char **)(param_1 + 0x40) = "RandomMatchmakeJob::GetStationConnection";
    return;
  }
  uVar1 = FUN_0026c89c(*(undefined8 *)PTR_DAT_04bcd350);
  FUN_00261144(uVar1,*(undefined2 *)
                      (*(long *)PTR_DAT_04bcb8b8 +
                       (ulong)*(byte *)(*(long *)PTR_DAT_04bcb8b8 + 0x162) * 2 + 0x15e));
  *(undefined **)(param_1 + 0x30) = PTR_LAB_04bcdfd0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(char **)(param_1 + 0x40) = "RandomMatchmakeJob::CreateMesh";
  return;
}

