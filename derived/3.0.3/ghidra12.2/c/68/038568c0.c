
void FUN_038568c0(long param_1)

{
  ulong uVar1;
  int *piVar2;
  undefined8 *puVar3;
  int iVar4;
  char cVar5;
  bool bVar6;
  int iVar7;
  long lVar8;
  ulong uVar9;
  int *piVar10;
  
  lVar8 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
  if (*(int *)(param_1 + 8) != 0) {
    uVar9 = 0;
    do {
      if (*(long *)(*(long *)(param_1 + 0x10) + (-(uVar9 >> 0x1f) & 0xfffffff000000000 | uVar9 << 4)
                   ) == lVar8) {
        puVar3 = (undefined8 *)(*(long *)(param_1 + 0x10) + (long)(int)uVar9 * 0x10);
        piVar10 = (int *)((long)puVar3 + 0xc);
        iVar4 = *piVar10;
        iVar7 = iVar4 + -1;
        *piVar10 = iVar7;
        if (iVar7 != 0 && 0 < iVar4) {
          return;
        }
        piVar2 = (int *)(param_1 + 0x58);
        if (*(char *)(puVar3 + 1) == '\0') {
          FUN_038e3040();
        }
        else {
          do {
            iVar4 = *piVar2;
            cVar5 = '\x01';
            bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
            if (bVar6) {
              *piVar2 = iVar4 + -1;
              cVar5 = ExclusiveMonitorsStatus();
            }
          } while (cVar5 != '\0');
          if (iVar4 == 1) {
            piVar2 = (int *)(param_1 + 0xf8);
            do {
              iVar4 = *piVar2;
              cVar5 = '\x01';
              bVar6 = (bool)ExclusiveMonitorPass(piVar2,0x10);
              if (bVar6) {
                *piVar2 = iVar4 + -1;
                cVar5 = ExclusiveMonitorsStatus();
              }
            } while (cVar5 != '\0');
            if (iVar4 != 1) {
              nn::os::ReleaseSemaphore((SemaphoreType *)(param_1 + 0xd0));
            }
          }
        }
        *piVar10 = -0x53535354;
        DataMemoryBarrier(2,3);
        *puVar3 = 0;
        return;
      }
      uVar1 = uVar9 + 1;
      uVar9 = uVar1 & 0xffffffff;
    } while (*(int *)(param_1 + 8) != (int)uVar1);
  }
  return;
}

