
int FUN_038fcb50(long param_1,undefined8 param_2,undefined8 param_3,undefined8 param_4)

{
  int *piVar1;
  int iVar2;
  char cVar3;
  bool bVar4;
  uint uVar5;
  long lVar6;
  int iVar7;
  long *plVar8;
  
  plVar8 = (long *)FUN_038fc3a0();
  iVar7 = FUN_038fc7f0(param_1,*plVar8,param_3,param_4,0);
  if (iVar7 == -1) {
    nn::os::LockMutex((MutexType *)(param_1 + 0x348));
    piVar1 = (int *)(*plVar8 + 0x80);
    do {
      iVar2 = *piVar1;
      cVar3 = '\x01';
      bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar4) {
        *piVar1 = iVar2 + -1;
        cVar3 = ExclusiveMonitorsStatus();
      }
      lVar6 = DAT_05ae78f0;
    } while (cVar3 != '\0');
    if (iVar2 == 1) {
      (*DAT_04c622f8)();
      piVar1 = (int *)(lVar6 + 0x648);
      do {
        cVar3 = '\x01';
        bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar4) {
          *piVar1 = *piVar1 + -1;
          cVar3 = ExclusiveMonitorsStatus();
        }
      } while (cVar3 != '\0');
      if (*(int *)(param_1 + 0x3c8) < *(int *)(param_1 + 0x3cc)) {
        *(long *)(*(long *)(param_1 + 0x3d0) + (long)*(int *)(param_1 + 0x3c8) * 8) = *plVar8;
        *(int *)(param_1 + 0x3c8) = *(int *)(param_1 + 0x3c8) + 1;
      }
    }
    *plVar8 = 0;
    if (*(int *)(param_1 + 0x3a8) < *(int *)(param_1 + 0x3ac)) {
      *(long **)(*(long *)(param_1 + 0x3b0) + (long)*(int *)(param_1 + 0x3a8) * 8) = plVar8;
      *(int *)(param_1 + 0x3a8) = *(int *)(param_1 + 0x3a8) + 1;
    }
    nn::os::UnlockMutex((MutexType *)(param_1 + 0x348));
  }
  else {
    uVar5 = iVar7 - (uint)*(ushort *)(param_1 + 0x3da);
    if (*(uint *)(param_1 + 0x368) <= uVar5) {
      uVar5 = 0;
    }
    *(long **)(*(long *)(param_1 + 0x370) + (long)(int)uVar5 * 0x20 + 0x10) = plVar8;
  }
  return iVar7;
}

