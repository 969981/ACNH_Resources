
undefined8 FUN_0026079c(long param_1)

{
  int iVar1;
  int *piVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  
  piVar2 = *(int **)(param_1 + 0x68);
  if ((piVar2 == (int *)0x0) || ((char)piVar2[10] == '\0')) {
    uVar3 = FUN_00260868(param_1);
    if ((uVar3 & 1) != 0) {
      iVar1 = *(int *)(param_1 + 0x60);
      *(undefined1 *)(param_1 + 0x78) = 0;
      lVar5 = DAT_04c5fbb0;
      plVar4 = (long *)FUN_00228380();
      *(long *)(param_1 + 0x58) = *(long *)(lVar5 + 0x30) + *plVar4 * (long)iVar1;
      *(char **)(param_1 + 0x40) = "ConnectStationJob::WaitRequestAck";
      *(code **)(param_1 + 0x30) = FUN_00260070;
      *(undefined8 *)(param_1 + 0x38) = 0;
    }
    return 5;
  }
  if (2 < *piVar2 - 2U) {
    FUN_00221064();
  }
  lVar5 = *(long *)(param_1 + 0x70);
  *(undefined8 *)(param_1 + 0x68) = 0;
  if ((lVar5 == 0) || (*(int *)(lVar5 + 0x4c) != 4)) {
    return 1;
  }
  *(undefined4 *)(lVar5 + 0x4c) = 7;
  return 1;
}

