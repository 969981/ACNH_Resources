
bool FUN_01673550(long param_1,long param_2,uint param_3,long param_4,ulong param_5)

{
  uint *puVar1;
  int iVar2;
  uint uVar3;
  char cVar4;
  bool bVar5;
  long lVar6;
  undefined4 *puVar7;
  undefined4 *puVar8;
  int iVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 local_1050;
  undefined8 local_104c;
  undefined8 local_1044;
  undefined8 local_103c;
  undefined4 local_1034 [1017];
  
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
    iVar9 = (int)param_5;
    if (0 < iVar9) {
      if (iVar9 == 1) {
        lVar6 = 0;
      }
      else {
        lVar6 = 0;
        puVar7 = (undefined4 *)(param_4 + 4);
        puVar8 = (undefined4 *)((long)&local_1044 + 4);
        do {
          uVar10 = puVar7[-1];
          uVar11 = *puVar7;
          lVar6 = lVar6 + -2;
          *(undefined8 *)(puVar8 + -3) = 0;
          puVar8[-1] = 0;
          puVar7 = puVar7 + 2;
          *(undefined8 *)(puVar8 + 1) = 0;
          puVar8[3] = 0;
          puVar8[-4] = uVar10;
          *puVar8 = uVar11;
          puVar8 = puVar8 + 8;
        } while (-lVar6 != (param_5 & 0xfffffffe));
        lVar6 = -lVar6;
      }
      if ((param_5 & 1) != 0) {
        uVar10 = *(undefined4 *)(param_4 + lVar6 * 4);
        (&local_1044)[lVar6 * 2 + -1] = 0;
        *(undefined4 *)(&local_1044 + lVar6 * 2) = 0;
        *(undefined4 *)((long)&local_1044 + (lVar6 * 4 + -3) * 4) = uVar10;
      }
    }
    uVar3 = iVar9 << 2;
    if (iVar9 == 1) {
      uVar3 = 1;
    }
    (**(code **)PTR_DAT_04bcf2e0)
              (*(undefined8 *)(param_2 + 0xb8),*(undefined8 *)(*(long *)PTR_DAT_04bd0fc8 + 0x70),
               *(undefined8 *)(*(long *)PTR_DAT_04bd0fc8 + 0x18),(long)iVar2,(ulong)uVar3 << 2,
               &local_1050);
  }
  return iVar2 != -1;
}

