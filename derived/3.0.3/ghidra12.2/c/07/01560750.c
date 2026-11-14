
void FUN_01560750(long *param_1,undefined4 *param_2,uint param_3,uint param_4)

{
  uint *puVar1;
  long lVar2;
  long lVar3;
  undefined4 uVar4;
  char cVar5;
  bool bVar6;
  long lVar7;
  
  *(undefined4 *)(param_1 + 1) = *param_2;
  *(undefined4 *)((long)param_1 + 0xc) = param_2[1];
  param_1[2] = *(long *)(param_2 + 2);
  param_1[3] = *(long *)(param_2 + 4);
  *(undefined4 *)(param_1 + 4) = param_2[6];
  *(undefined4 *)((long)param_1 + 0x24) = param_2[7];
  param_1[5] = *(long *)(param_2 + 8);
  param_1[6] = *(long *)(param_2 + 10);
  lVar7 = *(long *)(param_2 + 0x10);
  lVar2 = *(long *)(param_2 + 0xc);
  lVar3 = *(long *)(param_2 + 0xe);
  *(undefined8 *)((long)param_1 + 0x4f) = *(undefined8 *)((long)param_2 + 0x47);
  param_1[8] = lVar3;
  param_1[9] = lVar7;
  param_1[7] = lVar2;
  FUN_038fd1e0(param_1 + 0xb);
  FUN_038fd2f0(param_1 + 0xb,param_2 + 0x14);
  uVar4 = param_2[0x26];
  param_1[0x13] = *(long *)(param_2 + 0x24);
  puVar1 = (uint *)(param_1 + 0x17);
  *(undefined4 *)(param_1 + 0x14) = uVar4;
  do {
    cVar5 = '\x01';
    bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar6) {
      *puVar1 = *puVar1 & 0xfffffffb | 4;
      cVar5 = ExclusiveMonitorsStatus();
    }
  } while (cVar5 != '\0');
  if (*(ushort *)((long)param_1 + 0xbc) != param_4) {
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar6) {
        *puVar1 = *puVar1 & 0xfffffffd | 2;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    *(short *)((long)param_1 + 0xbc) = (short)param_4;
  }
  if (*(byte *)((long)param_1 + 0xbe) != param_3) {
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar6) {
        *puVar1 = *puVar1 | 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    *(char *)((long)param_1 + 0xbe) = (char)param_3;
  }
                    /* WARNING: Could not recover jumptable at 0x01560884. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*param_1 + 0x10))(param_1);
  return;
}

