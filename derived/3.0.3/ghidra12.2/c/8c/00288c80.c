
void FUN_00288c80(long *param_1,long param_2,long param_3,long param_4,long param_5,
                 undefined4 param_6,ushort param_7)

{
  long *plVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  undefined *puVar6;
  long lVar7;
  
  FUN_00289f74(param_1,param_3,1);
  puVar5 = PTR_DAT_04bccec0;
  param_1[6] = param_4;
  param_1[7] = param_5;
  puVar6 = PTR_DAT_04bcdcf8;
  lVar7 = *(long *)(param_2 + 8);
  plVar1 = param_1 + 0x12;
  param_1[10] = (long)(param_1 + 9);
  param_1[0xb] = -0x100000000;
  *(undefined4 *)(param_1 + 0x11) = param_6;
  param_1[8] = param_3;
  param_1[9] = (long)(param_1 + 9);
  *param_1 = (long)(puVar6 + 0x10);
  param_1[4] = (long)(puVar5 + 0x10);
  param_1[5] = lVar7;
  param_1[0xe] = (long)(param_1 + 0xe);
  param_1[0xc] = 0;
  param_1[0xd] = 0;
  param_1[0xf] = (long)(param_1 + 0xe);
  param_1[0x10] = -0x100000000;
  FUN_002903c4(plVar1,param_3);
  *(undefined2 *)(param_1 + 0x1a) = 4;
  puVar5 = PTR_DAT_04bcdd00;
  do {
    iVar2 = *(int *)puVar5;
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(puVar5,0x10);
    if (bVar4) {
      *(int *)puVar5 = iVar2 + 1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  *(short *)((long)param_1 + 0xd2) = (short)iVar2;
  *(ushort *)(param_1 + 0x1a) = *(ushort *)(param_1 + 0x1a) & 0xfffe | param_7 & 1;
  if ((param_7 & 1) == 0) {
    *(undefined4 *)((long)param_1 + 0x5c) = 0x60;
    *(undefined4 *)((long)param_1 + 0x84) = 0x10;
    return;
  }
  FUN_00290438(plVar1);
  *(undefined4 *)((long)param_1 + 0x5c) = 0x60;
  *(undefined4 *)((long)param_1 + 0x84) = 0x10;
  FUN_00290440(plVar1);
  return;
}

