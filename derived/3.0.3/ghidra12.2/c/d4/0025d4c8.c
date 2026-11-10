
undefined8 FUN_0025d4c8(long param_1)

{
  long lVar1;
  int *piVar2;
  undefined8 uVar3;
  ulong uVar4;
  undefined1 *puVar5;
  undefined1 auStack_40 [16];
  undefined1 auStack_30 [16];
  
  puVar5 = auStack_40;
  lVar1 = *(long *)(param_1 + 0x58);
  piVar2 = *(int **)(param_1 + 0x60);
  if (*(char *)(lVar1 + 0x28) != '\0') {
    if (*piVar2 == 1) {
      FUN_002210f0(piVar2);
    }
    uVar3 = 0;
    *(undefined **)(param_1 + 0x30) = PTR_LAB_04bcd638;
    *(undefined8 *)(param_1 + 0x38) = 0;
    *(char **)(param_1 + 0x40) = "LocalConnectNetworkJob::WaitForCancel";
switchD_0025d548_caseD_1:
    return uVar3;
  }
  uVar3 = 5;
  switch(*piVar2) {
  case 1:
    goto switchD_0025d548_caseD_1;
  case 2:
    uVar4 = FUN_002212e4(*(undefined8 *)(*(long *)(param_1 + 0x68) + 0x408));
    if ((uVar4 & 1) == 0) {
      *(undefined **)(param_1 + 0x30) = PTR_LAB_04bcd640;
      *(undefined8 *)(param_1 + 0x38) = 0;
      *(char **)(param_1 + 0x40) = "LocalConnectNetworkJob::ProcessSucceeded";
      return 0;
    }
    return 5;
  case 3:
    FUN_002296c4(auStack_30,piVar2 + 1);
    puVar5 = auStack_30;
    break;
  case 4:
    FUN_002296c4(auStack_40,piVar2 + 1);
    break;
  default:
    goto switchD_0025d548_default;
  }
  FUN_00220ff8(lVar1,puVar5);
  *(undefined8 *)(param_1 + 0x58) = 0;
switchD_0025d548_default:
  return 1;
}

