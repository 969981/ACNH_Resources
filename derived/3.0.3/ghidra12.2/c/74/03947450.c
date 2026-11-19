
bool FUN_03947450(long param_1,long param_2,uint param_3,long param_4,uint param_5)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  char cVar4;
  bool bVar5;
  long lVar6;
  ulong uVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined8 uVar10;
  undefined8 local_1050;
  undefined4 local_1048 [1022];
  
  puVar1 = (uint *)(param_1 + 0x14);
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
      FUN_03907b80(param_1);
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
  if (*(uint *)(param_1 + 0x30) <= param_3) {
    param_3 = 0;
  }
  iVar2 = *(int *)(*(long *)(param_1 + 0x38) + (long)(int)param_3 * 0x18);
  if (iVar2 != -1) {
    if (0 < (int)param_5) {
      uVar7 = (ulong)param_5;
      puVar9 = local_1048;
      puVar8 = (undefined4 *)(param_4 + 8);
      do {
        uVar10 = *(undefined8 *)(puVar8 + -2);
        uVar7 = uVar7 - 1;
        puVar9[1] = 0;
        *puVar9 = *puVar8;
        *(undefined8 *)(puVar9 + -2) = uVar10;
        puVar9 = puVar9 + 4;
        puVar8 = puVar8 + 3;
      } while (uVar7 != 0);
    }
    uVar3 = 3;
    if (param_5 != 1) {
      uVar3 = param_5 << 2;
    }
    (**(code **)PTR_DAT_04bcf2e0)
              (*(undefined8 *)(param_2 + 0xb8),*(undefined8 *)(DAT_05ae7920 + 0x70),
               *(undefined8 *)(DAT_05ae7920 + 0x18),(long)iVar2,(ulong)uVar3 << 2,&local_1050);
  }
  return iVar2 != -1;
}

