
undefined8 FUN_002933f4(long param_1)

{
  undefined *puVar1;
  int iVar2;
  ulong uVar3;
  long lVar4;
  
  puVar1 = PTR_DAT_04bcb8b8;
  iVar2 = FUN_0029b330(*(undefined8 *)PTR_DAT_04bcb8b8);
  lVar4 = *(long *)puVar1;
  if (iVar2 - 5U < 5) {
    (**(code **)(**(long **)(lVar4 + 8) + 0x28))();
    *(undefined **)(param_1 + 0x30) = PTR_FUN_04bcd3c8;
    *(undefined8 *)(param_1 + 0x38) = 0;
    *(char **)(param_1 + 0x40) = "nn::pia::session::DestroySessionJob::SendMonitoringData";
    return 0;
  }
  if ((*(long *)(lVar4 + 0x70) != 0) && (uVar3 = FUN_002212e4(), (uVar3 & 1) != 0)) {
    *(undefined1 *)(param_1 + 0x98) = 1;
    return 5;
  }
  if (*(long *)(lVar4 + 0x10) != 0) {
    uVar3 = FUN_002212e4();
    if (((uVar3 & 1) != 0) && (iVar2 = FUN_002212bc(*(undefined8 *)(lVar4 + 0x10)), iVar2 != 2)) {
      return 5;
    }
    FUN_002a43a8(*(undefined8 *)(lVar4 + 0x10));
  }
  *(undefined **)(param_1 + 0x30) = PTR_FUN_04bcdea0;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(char **)(param_1 + 0x40) = "DestroySessionJob::DestroyMesh";
  return 0;
}

