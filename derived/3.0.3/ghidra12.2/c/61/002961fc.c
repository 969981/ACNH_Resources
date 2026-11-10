
undefined8 FUN_002961fc(long *param_1)

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
    param_1[6] = (long)PTR_FUN_04bcdf28;
    param_1[7] = 0;
    param_1[8] = (long)"nn::pia::session::LeaveSessionJob::SendMonitoringData";
    return 0;
  }
  if ((*(long *)(lVar4 + 0x70) != 0) && (uVar3 = FUN_002212e4(), (uVar3 & 1) != 0)) {
    return 5;
  }
  if (*(long *)(lVar4 + 0x10) != 0) {
    uVar3 = FUN_002212e4();
    if (((uVar3 & 1) != 0) && (iVar2 = FUN_002212bc(*(undefined8 *)(lVar4 + 0x10)), iVar2 != 2)) {
      return 5;
    }
    FUN_002a43a8(*(undefined8 *)(lVar4 + 0x10));
  }
  uVar3 = FUN_0029b7b0(lVar4);
  if ((((uVar3 & 1) == 0) || (uVar3 = FUN_0029b71c(lVar4), (uVar3 & 1) == 0)) ||
     (*(int *)(lVar4 + 0xd4) != 4)) {
    param_1[6] = (long)PTR_FUN_04bcdf30;
    param_1[7] = 0;
    param_1[8] = (long)"LeaveSessionJob::LeaveMesh";
    return 0;
  }
  (**(code **)(*param_1 + 0x30))(param_1);
  return 0;
}

