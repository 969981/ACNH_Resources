
void FUN_03af0290(long *param_1,long param_2)

{
  uint *puVar1;
  int iVar2;
  ushort uVar3;
  char cVar4;
  uint uVar5;
  ulong uVar6;
  bool bVar7;
  long lVar8;
  long lVar9;
  
  if (*(int *)((long)param_1 + 0x1c) != 0) {
    uVar5 = 0;
    do {
      lVar8 = (long)(int)uVar5;
      uVar5 = uVar5 + 1;
      *(undefined4 *)(*(long *)(**(long **)(*(long *)(*param_1 + 0x38) + lVar8 * 8) + 0x10) + 0x1c)
           = 0;
    } while (uVar5 < *(uint *)((long)param_1 + 0x1c));
  }
  if ((int)param_1[4] != 0) {
    uVar6 = 0;
    bVar7 = false;
    do {
      while( true ) {
        uVar3 = *(ushort *)(param_1[2] + uVar6 * 2);
        uVar5 = uVar3 & 0xfff;
        lVar8 = *(long *)(param_1[6] + ((ulong)(uVar3 >> 9) & 0x78));
        nn::os::LockMutex((MutexType *)(param_2 + 0x88));
        iVar2 = *(int *)(param_2 + 4);
        lVar9 = *(long *)(param_2 + 0x20);
        nn::os::UnlockMutex((MutexType *)(param_2 + 0x88));
        if ((int)uVar5 < iVar2 && lVar9 != 0) break;
        uVar6 = uVar6 + 1;
        if (*(uint *)(param_1 + 4) <= uVar6) {
          if (!bVar7) {
            return;
          }
          goto LAB_03af038c;
        }
      }
      lVar8 = *(long *)(lVar8 + 0x10);
      uVar6 = uVar6 + 1;
      bVar7 = true;
      iVar2 = *(int *)(lVar8 + 0x1c);
      *(int *)(lVar8 + 0x1c) = iVar2 + 1;
      *(ulong *)(*(long *)(lVar8 + 0x10) + (long)iVar2 * 8) = lVar9 + (ulong)uVar5 * 0x138;
    } while (uVar6 < *(uint *)(param_1 + 4));
LAB_03af038c:
    lVar8 = *param_1;
    if (((*(byte *)(lVar8 + 0x281) & 3) == 0) &&
       (lVar9 = *(long *)(lVar8 + 0x70), (*(byte *)(lVar9 + 0x5599) & 1) != 0)) {
      puVar1 = (uint *)(lVar9 + 0x4e58);
      do {
        uVar5 = *puVar1;
        cVar4 = '\x01';
        bVar7 = (bool)ExclusiveMonitorPass(puVar1,0x10);
        if (bVar7) {
          *puVar1 = uVar5 + 1;
          cVar4 = ExclusiveMonitorsStatus();
        }
      } while (cVar4 != '\0');
      *(long *)(*(long *)(lVar9 + 0x4e60) +
               (-(ulong)(uVar5 >> 0x1f) & 0xfffffff800000000 | (ulong)uVar5 << 3)) = lVar8;
      *(byte *)(lVar8 + 0x281) = *(byte *)(lVar8 + 0x281) | 2;
    }
  }
  return;
}

