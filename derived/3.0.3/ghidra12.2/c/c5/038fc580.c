
int FUN_038fc580(long param_1,undefined4 *param_2,undefined8 param_3,undefined8 param_4,
                undefined8 param_5)

{
  int *piVar1;
  char cVar2;
  bool bVar3;
  undefined *puVar4;
  int iVar5;
  uint uVar6;
  long *plVar7;
  long lVar8;
  int iVar9;
  ulong uVar10;
  long lVar11;
  undefined1 auStack_c8 [132];
  undefined4 local_44;
  
  local_44 = 0xffffffff;
  plVar7 = (long *)FUN_038fc3a0(param_1,&local_44);
  FUN_038f8f90(param_3,auStack_c8);
  (**(code **)PTR_DAT_04bcf0a8)(auStack_c8,*(undefined8 *)(param_2 + 2),*param_2);
  (**(code **)PTR_DAT_04bcf740)(auStack_c8);
  (**(code **)PTR_DAT_04bcf0b8)(*plVar7,auStack_c8);
  (**(code **)PTR_DAT_04bcf868)(*plVar7,param_5);
  iVar5 = FUN_038fc7f0(param_1,*plVar7,param_4);
  if (iVar5 == -1) {
    nn::os::LockMutex((MutexType *)(param_1 + 0x348));
    piVar1 = (int *)(*plVar7 + 0x80);
    do {
      iVar9 = *piVar1;
      cVar2 = '\x01';
      bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
      if (bVar3) {
        *piVar1 = iVar9 + -1;
        cVar2 = ExclusiveMonitorsStatus();
      }
      lVar11 = DAT_05ae78f0;
    } while (cVar2 != '\0');
    if (iVar9 == 1) {
      (*DAT_04c622f8)();
      piVar1 = (int *)(lVar11 + 0x648);
      do {
        cVar2 = '\x01';
        bVar3 = (bool)ExclusiveMonitorPass(piVar1,0x10);
        if (bVar3) {
          *piVar1 = *piVar1 + -1;
          cVar2 = ExclusiveMonitorsStatus();
        }
      } while (cVar2 != '\0');
      if (*(int *)(param_1 + 0x3c8) < *(int *)(param_1 + 0x3cc)) {
        *(long *)(*(long *)(param_1 + 0x3d0) + (long)*(int *)(param_1 + 0x3c8) * 8) = *plVar7;
        *(int *)(param_1 + 0x3c8) = *(int *)(param_1 + 0x3c8) + 1;
      }
    }
    *plVar7 = 0;
    if (*(int *)(param_1 + 0x3a8) < *(int *)(param_1 + 0x3ac)) {
      *(long **)(*(long *)(param_1 + 0x3b0) + (long)*(int *)(param_1 + 0x3a8) * 8) = plVar7;
      *(int *)(param_1 + 0x3a8) = *(int *)(param_1 + 0x3a8) + 1;
    }
    nn::os::UnlockMutex((MutexType *)(param_1 + 0x348));
  }
  else {
    uVar6 = iVar5 - (uint)*(ushort *)(param_1 + 0x3da);
    if (*(uint *)(param_1 + 0x368) <= uVar6) {
      uVar6 = 0;
    }
    *(long **)(*(long *)(param_1 + 0x370) + (long)(int)uVar6 * 0x20 + 0x10) = plVar7;
    puVar4 = PTR_DAT_04bcf030;
    lVar11 = *(long *)(param_1 + 0x5e8);
    iVar9 = 0;
    if (*(long *)(param_1 + 0x5f0) != 0) {
      iVar9 = *(int *)(param_1 + 0x5d8) - *(int *)(*(long *)(param_1 + 0x5f0) + 0x10);
    }
    uVar10 = (ulong)(iVar9 + (uint)*(ushort *)(*plVar7 + 0x84) * 0x20);
    if ((lVar11 != 0) && (uVar6 = (**(code **)PTR_DAT_04bcf030)(lVar11), (uVar6 >> 2 & 1) != 0)) {
      (**(code **)PTR_DAT_04bcf358)(lVar11,uVar10,0x10);
    }
    lVar8 = (**(code **)PTR_DAT_04bb2cd8)(lVar11);
    *(undefined8 *)(lVar8 + uVar10) = 1;
    uVar6 = (**(code **)puVar4)(lVar11);
    if ((uVar6 >> 2 & 1) != 0) {
      (**(code **)PTR_DAT_04bcf350)(lVar11,uVar10,0x10);
    }
  }
  return iVar5;
}

