
undefined8 FUN_002787d4(long param_1)

{
  undefined *puVar1;
  uint uVar2;
  undefined8 uVar3;
  ulong uVar4;
  
  puVar1 = PTR_DAT_04bcd350;
  uVar2 = FUN_0026be6c(*(undefined8 *)PTR_DAT_04bcd350);
  if ((uVar2 & 0xff) < 0x20) {
    uVar3 = FUN_0026c420(*(undefined8 *)puVar1);
    uVar4 = FUN_002722d4(uVar3,uVar2);
    if (((uVar4 & 1) == 0) && (*(ulong *)(DAT_04c5fbb0 + 0x30) < *(ulong *)(param_1 + 0x58))) {
      return 5;
    }
  }
  *(undefined1 **)(param_1 + 0x30) = &LAB_00278860;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(char **)(param_1 + 0x40) = "ProcessDestroyMeshJob::CleanupMesh";
  return 5;
}

