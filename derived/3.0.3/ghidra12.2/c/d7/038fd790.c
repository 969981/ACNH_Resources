
void FUN_038fd790(int *param_1,int *param_2)

{
  int *piVar1;
  int *piVar2;
  char cVar3;
  bool bVar4;
  uint uVar5;
  undefined *puVar6;
  int iVar7;
  long lVar8;
  int local_58;
  int iStack_54;
  undefined8 local_50;
  undefined8 uStack_48;
  
  puVar6 = PTR_DAT_04bc1010;
  if (*param_1 != -1) {
    lVar8 = *(long *)PTR_DAT_04bc1010;
    uVar5 = *param_1 - (uint)*(ushort *)(lVar8 + 0x3da);
    if (*(uint *)(lVar8 + 0x368) <= uVar5) {
      uVar5 = 0;
    }
    piVar2 = (int *)(*(long *)(lVar8 + 0x370) + (long)(int)uVar5 * 0x20);
    do {
      iVar7 = *piVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar4) {
        *piVar2 = iVar7 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar7 == 1) {
      piVar1 = (int *)(lVar8 + 0x3e0);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = *piVar1 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      nn::os::LockMutex((MutexType *)(lVar8 + 0x348));
      piVar1 = (int *)(lVar8 + 0x378) + (ulong)*(byte *)(lVar8 + 0x3d8) * 4;
      if (1 < *(byte *)(lVar8 + 0x3d8)) {
        piVar1 = (int *)(lVar8 + 0x378);
      }
      if (*piVar1 < piVar1[1]) {
        *(int **)(*(long *)(piVar1 + 2) + (long)*piVar1 * 8) = piVar2;
        *piVar1 = *piVar1 + 1;
      }
      nn::os::UnlockMutex((MutexType *)(lVar8 + 0x348));
    }
    param_1[2] = 0;
    *param_1 = -1;
    param_1[4] = 0;
    param_1[5] = 0;
    param_1[6] = 0;
    param_1[7] = 0;
    param_1[8] = 0;
    param_1[9] = 0;
    param_1[10] = 0;
    param_1[0xb] = 0;
    param_1[0xc] = 0;
    param_1[0xd] = 0;
    param_1[0xe] = 0;
    param_1[0xf] = 0;
  }
  iVar7 = *param_2;
  *param_1 = iVar7;
  if (iVar7 != -1) {
    lVar8 = *(long *)puVar6;
    uVar5 = iVar7 - (uint)*(ushort *)(lVar8 + 0x3da);
    if (*(uint *)(lVar8 + 0x368) <= uVar5) {
      uVar5 = 0;
    }
    piVar2 = (int *)(*(long *)(lVar8 + 0x370) + (long)(int)uVar5 * 0x20);
    do {
      iVar7 = *piVar2;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
      if (bVar4) {
        *piVar2 = iVar7 + 1;
        cVar3 = ExclusiveMonitorsStatus();
      }
    } while (cVar3 != '\0');
    if (iVar7 == 0) {
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar2,0x10);
        if (bVar4) {
          *piVar2 = 0;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      local_58 = param_1[2];
      iStack_54 = param_1[3];
      local_50 = *(undefined8 *)(param_1 + 4);
      uStack_48 = *(undefined8 *)(param_1 + 6);
      iVar7 = FUN_038fc580(*(undefined8 *)puVar6,&local_58,param_1 + 8,0,"countup",0);
      *param_1 = iVar7;
    }
  }
  return;
}

