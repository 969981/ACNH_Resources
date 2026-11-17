
void FUN_030b25f0(long param_1,long param_2,long param_3,long *param_4,long param_5,uint param_6)

{
  uint *puVar1;
  ushort uVar2;
  short sVar3;
  ushort uVar4;
  char cVar5;
  bool bVar6;
  ushort uVar7;
  
  if ((((param_1 == 0) || (param_2 == 0)) || (param_3 == 0)) ||
     ((param_4 == (long *)0x0 || (param_5 == 0)))) {
    return;
  }
  sVar3 = *(short *)(param_2 + 0x3a);
  uVar7 = *(ushort *)(param_2 + 0x30) >> (ulong)(param_6 & 0x1f);
  uVar4 = *(ushort *)(param_2 + 0x32);
  param_4[2] = 0;
  if (uVar7 < 2) {
    uVar7 = 1;
  }
  uVar2 = uVar4;
  if (sVar3 != 3) {
    uVar2 = 1;
  }
  uVar4 = uVar4 >> (ulong)(param_6 & 0x1f);
  if (uVar2 <= uVar4) {
    uVar2 = uVar4;
  }
  *(float *)(param_4 + 3) = (float)uVar7;
  *(float *)((long)param_4 + 0x1c) = (float)uVar2;
  *(float *)(param_4 + 1) = (float)uVar7;
  *(float *)((long)param_4 + 0xc) = (float)uVar2;
  FUN_01560750(param_3,param_2,*(undefined1 *)(param_3 + 0xbe),*(undefined2 *)(param_3 + 0xbc));
  if (*(byte *)(param_3 + 0xbe) != param_6) {
    puVar1 = (uint *)(param_3 + 0xb8);
    do {
      cVar5 = '\x01';
      bVar6 = (bool)ExclusiveMonitorPass(puVar1,0x10);
      if (bVar6) {
        *puVar1 = *puVar1 | 1;
        cVar5 = ExclusiveMonitorsStatus();
      }
    } while (cVar5 != '\0');
    *(char *)(param_3 + 0xbe) = (char)param_6;
  }
  param_4[0xb] = 0;
  param_4[0xc] = 0;
  param_4[4] = param_3;
  param_4[9] = 0;
  param_4[10] = 0;
  param_4[7] = 0;
  param_4[8] = 0;
  param_4[5] = 0;
  param_4[6] = 0;
  (**(code **)(*param_4 + 0x38))(param_4,param_1);
  *(int *)(param_5 + 8) = (int)param_4[2];
  *(undefined4 *)(param_5 + 0xc) = *(undefined4 *)((long)param_4 + 0x14);
  *(int *)(param_5 + 0x10) = (int)param_4[3];
  *(undefined4 *)(param_5 + 0x14) = *(undefined4 *)((long)param_4 + 0x1c);
  FUN_038e77e4(param_5,param_1,param_4);
  return;
}

