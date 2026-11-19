
void FUN_03a320e0(long param_1,undefined8 param_2,float *param_3,float *param_4)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  char cVar4;
  bool bVar5;
  long lVar6;
  long lVar7;
  float local_b4;
  float fStack_b0;
  float local_ac;
  float fStack_a8;
  float local_a4;
  float fStack_a0;
  undefined4 local_8c;
  
  lVar7 = *(long *)(*(long *)(*(long *)(*(long *)(*(long *)PTR_DAT_04bbdd18 + 0x10) + 0x200) + 8) +
                   0x18);
  FUN_03907810(lVar7,param_1);
  puVar1 = (uint *)(lVar7 + 0x14);
  fStack_a8 = param_3[3];
  fStack_b0 = fStack_a8 * param_3[1];
  local_b4 = *param_3 * fStack_a8;
  local_ac = fStack_a8 * param_3[2];
  do {
    uVar3 = *puVar1;
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar5) {
      *puVar1 = uVar3 | 0x80000000;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  if ((uVar3 & 0x7fffffff) != 0) {
    if ((int)uVar3 < 0) {
      if ((int)*puVar1 < 0) {
        lVar6 = *(long *)PTR_DAT_04bb29d0;
        do {
          nn::os::ConvertToTimeSpan(lVar6 / 1000000);
          nn::os::SleepThread();
        } while ((int)*puVar1 < 0);
      }
    }
    else {
      FUN_03907b80(lVar7);
    }
  }
  do {
    cVar4 = '\x01';
    bVar5 = (bool)ExclusiveMonitorPass(puVar1,0x10);
    if (bVar5) {
      *puVar1 = 0;
      cVar4 = ExclusiveMonitorsStatus();
    }
  } while (cVar4 != '\0');
  lVar6 = 0x78;
  if (*(uint *)(lVar7 + 0x30) < 6) {
    lVar6 = 0;
  }
  iVar2 = *(int *)(*(long *)(lVar7 + 0x38) + lVar6);
  if (iVar2 != -1) {
    (*DAT_04c62af0)(*(undefined8 *)(param_1 + 0xb8),
                    *(undefined8 *)(*(long *)PTR_DAT_04bd0fc8 + 0x70),
                    *(undefined8 *)(*(long *)PTR_DAT_04bd0fc8 + 0x18),(long)iVar2,0x10,&local_b4);
  }
  FUN_038e4cec(&local_b4);
  fStack_a0 = param_4[3];
  local_b4 = (float)((uint)local_b4 & 0xffff0000);
  local_8c = 0x61610202;
  fStack_a8 = fStack_a0 * param_4[1];
  local_ac = *param_4 * fStack_a0;
  local_a4 = fStack_a0 * param_4[2];
  FUN_038e4d90(&local_b4,param_1);
  FUN_03a31520(param_1,lVar7,param_2);
  return;
}

