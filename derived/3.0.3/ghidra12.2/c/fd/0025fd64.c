
undefined8 FUN_0025fd64(long *param_1)

{
  long lVar1;
  int *piVar2;
  ulong uVar3;
  long *plVar4;
  long lVar5;
  
  piVar2 = (int *)param_1[0xd];
  if ((piVar2 == (int *)0x0) || ((char)piVar2[10] == '\0')) {
    uVar3 = (**(code **)(*param_1 + 0x40))(param_1);
    if (((uVar3 & 1) != 0) || (uVar3 = FUN_0025fe90(param_1), (uVar3 & 1) == 0)) {
      param_1[6] = (long)PTR_FUN_04bcd978;
      param_1[7] = 0;
      param_1[8] = (long)"ConnectStationJob::ConnectionFailed";
      return 0;
    }
    if (0x1f < *(byte *)(param_1[0xe] + 0x38)) {
      *(undefined8 *)(param_1[0xe] + 0x78) = *DAT_04c61168;
    }
    lVar5 = param_1[0xc];
    *(undefined1 *)(param_1 + 0xf) = 0;
    lVar1 = DAT_04c5fbb0;
    plVar4 = (long *)FUN_00228380();
    param_1[0xb] = *(long *)(lVar1 + 0x30) + *plVar4 * (long)(int)lVar5;
    param_1[8] = (long)"ConnectStationJob::WaitRequestAck";
    param_1[6] = (long)FUN_00260070;
    param_1[7] = 0;
    return 5;
  }
  if (2 < *piVar2 - 2U) {
    FUN_00221064();
  }
  lVar5 = param_1[0xe];
  param_1[0xd] = 0;
  if ((lVar5 == 0) || (*(int *)(lVar5 + 0x4c) != 4)) {
    return 1;
  }
  *(undefined4 *)(lVar5 + 0x4c) = 7;
  return 1;
}

