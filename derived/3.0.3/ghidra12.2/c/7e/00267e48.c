
undefined8 FUN_00267e48(long param_1)

{
  int iVar1;
  long lVar2;
  long *plVar3;
  
  lVar2 = DAT_04c5fbb0;
  if (*(char *)(param_1 + 0x7c) != '\0') {
    if (*(ulong *)(DAT_04c5fbb0 + 0x30) < *(ulong *)(param_1 + 0x58)) {
      lVar2 = FUN_002ba790(DAT_04c61168);
      if (*(long *)(lVar2 + 0x98) != 0) {
        return 5;
      }
    }
    else {
      iVar1 = *(int *)(param_1 + 0x60);
      plVar3 = (long *)FUN_00228380();
      *(long *)(param_1 + 0x58) = *(long *)(lVar2 + 0x30) + *plVar3 * (long)iVar1;
    }
    *(undefined1 *)(param_1 + 0x7c) = 0;
  }
  *(undefined **)(param_1 + 0x30) = PTR_LAB_04bcda90;
  *(undefined8 *)(param_1 + 0x38) = 0;
  *(char **)(param_1 + 0x40) = "LeaveMeshJob::StartDisconnectStations";
  return 0;
}

