
void FUN_038faca0(long param_1)

{
  long lVar1;
  int *piVar2;
  undefined8 *puVar3;
  byte bVar4;
  int iVar5;
  char cVar6;
  bool bVar7;
  undefined *puVar8;
  long lVar9;
  undefined8 *puVar10;
  int *piVar11;
  long *plVar12;
  
  nn::os::LockMutex((MutexType *)(param_1 + 0x348));
  bVar4 = 0;
  if ((*(char *)(param_1 + 0x3d8) + 1U & 0xfe) == 0) {
    bVar4 = *(char *)(param_1 + 0x3d8) + 1;
  }
  lVar1 = param_1 + (ulong)bVar4 * 0x10;
  *(byte *)(param_1 + 0x3d8) = bVar4;
  puVar8 = PTR_DAT_04bcf0c0;
  if (*(int *)(lVar1 + 0x378) != 0) {
    puVar10 = *(undefined8 **)(lVar1 + 0x380);
    puVar3 = puVar10 + *(int *)(lVar1 + 0x378);
    do {
      piVar11 = (int *)*puVar10;
      plVar12 = *(long **)(piVar11 + 4);
      if (plVar12 != (long *)0x0) {
        if (*(int *)(param_1 + 0x3a8) < *(int *)(param_1 + 0x3ac)) {
          *(long **)(*(long *)(param_1 + 0x3b0) + (long)*(int *)(param_1 + 0x3a8) * 8) = plVar12;
          *(int *)(param_1 + 0x3a8) = *(int *)(param_1 + 0x3a8) + 1;
          plVar12 = *(long **)(piVar11 + 4);
        }
        piVar2 = (int *)(*plVar12 + 0x80);
        do {
          iVar5 = *piVar2;
          cVar6 = '\x01';
          bVar7 = (bool)ExclusiveMonitorPass(piVar2,0x10);
          if (bVar7) {
            *piVar2 = iVar5 + -1;
            cVar6 = ExclusiveMonitorsStatus();
          }
          lVar9 = DAT_05ae78f0;
        } while (cVar6 != '\0');
        if (iVar5 == 1) {
          (**(code **)puVar8)();
          piVar2 = (int *)(lVar9 + 0x648);
          do {
            cVar6 = '\x01';
            bVar7 = (bool)ExclusiveMonitorPass(piVar2,0x10);
            if (bVar7) {
              *piVar2 = *piVar2 + -1;
              cVar6 = ExclusiveMonitorsStatus();
            }
          } while (cVar6 != '\0');
          if (*(int *)(param_1 + 0x3c8) < *(int *)(param_1 + 0x3cc)) {
            *(long *)(*(long *)(param_1 + 0x3d0) + (long)*(int *)(param_1 + 0x3c8) * 8) = *plVar12;
            *(int *)(param_1 + 0x3c8) = *(int *)(param_1 + 0x3c8) + 1;
          }
        }
        *plVar12 = 0;
        piVar11[4] = 0;
        piVar11[5] = 0;
      }
      do {
        if (*piVar11 != 0) break;
        cVar6 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(piVar11,0x10);
        if (bVar7) {
          *piVar11 = -1;
          cVar6 = ExclusiveMonitorsStatus();
        }
      } while (cVar6 != '\0');
      puVar10 = puVar10 + 1;
    } while (puVar10 != puVar3);
  }
  *(undefined4 *)(lVar1 + 0x378) = 0;
  nn::os::UnlockMutex((MutexType *)(param_1 + 0x348));
  return;
}

