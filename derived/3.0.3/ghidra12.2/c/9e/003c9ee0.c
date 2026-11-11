
void FUN_003c9ee0(long param_1,undefined8 *param_2)

{
  int *piVar1;
  undefined8 uVar2;
  undefined8 uVar3;
  char cVar4;
  bool bVar5;
  long lVar6;
  undefined8 *puVar7;
  undefined8 uVar8;
  
  nn::os::LockMutex((MutexType *)(param_1 + 0x10));
  for (lVar6 = *(long *)(param_1 + 8); lVar6 != param_1; lVar6 = *(long *)(lVar6 + 8)) {
    piVar1 = (int *)(lVar6 + 0x2c);
    if (*piVar1 < *(int *)(lVar6 + 0x20)) {
      puVar7 = (undefined8 *)(*(long *)(lVar6 + 0x18) + (long)*(int *)(lVar6 + 0x24) * 0x58);
      *(int *)(lVar6 + 0x24) = *(int *)(lVar6 + 0x24) + 1;
      uVar2 = param_2[3];
      uVar8 = param_2[4];
      uVar3 = param_2[6];
      puVar7[5] = param_2[5];
      puVar7[6] = uVar3;
      puVar7[3] = uVar2;
      puVar7[4] = uVar8;
      uVar8 = param_2[2];
      uVar2 = param_2[1];
      *puVar7 = *param_2;
      puVar7[1] = uVar2;
      puVar7[2] = uVar8;
      uVar2 = param_2[7];
      uVar8 = param_2[8];
      uVar3 = param_2[10];
      puVar7[9] = param_2[9];
      puVar7[10] = uVar3;
      puVar7[7] = uVar2;
      puVar7[8] = uVar8;
      if (*(int *)(lVar6 + 0x24) == *(int *)(lVar6 + 0x20)) {
        *(undefined4 *)(lVar6 + 0x24) = 0;
      }
      do {
        cVar4 = '\x01';
        bVar5 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar5) {
          *piVar1 = *piVar1 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
    }
  }
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x10));
  return;
}

