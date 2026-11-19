
void FUN_038f4580(long param_1)

{
  int *piVar1;
  MutexType *pMVar2;
  char cVar3;
  bool bVar4;
  undefined *puVar5;
  undefined4 uVar6;
  undefined8 uVar7;
  long lVar8;
  byte bVar9;
  undefined8 uVar10;
  long lVar11;
  
  lVar11 = *(long *)(param_1 + 0xe8);
  uVar10 = *(undefined8 *)(*(long *)(lVar11 + 0x30) + 0xb8);
  uVar7 = (**(code **)PTR_DAT_04bcf108)(uVar10);
  *(undefined8 *)(lVar11 + 0x250) = uVar7;
  uVar6 = (**(code **)PTR_DAT_04bcfce8)(uVar10);
  *(undefined4 *)(lVar11 + 0x24c) = uVar6;
  lVar8 = (**(code **)PTR_DAT_04bcfcd0)(uVar10);
  if ((lVar8 == 0) && (*(int *)(lVar11 + 0x24c) == 0)) {
    bVar9 = *(byte *)(lVar11 + 600) & 0xfe;
  }
  else {
    bVar9 = *(byte *)(lVar11 + 600) | 1;
  }
  *(byte *)(lVar11 + 600) = bVar9;
  *(int *)(lVar11 + 0x24) = (int)lVar8;
  puVar5 = PTR_DAT_04bc1010;
  lVar8 = *(long *)PTR_DAT_04bc1010;
  (**(code **)PTR_DAT_04bcf0e8)(uVar10);
  piVar1 = (int *)(lVar8 + 0x644);
  do {
    cVar3 = '\x01';
    bVar4 = (bool)ExclusiveMonitorPass(piVar1,0x10);
    if (bVar4) {
      *piVar1 = *piVar1 + -1;
      cVar3 = ExclusiveMonitorsStatus();
    }
  } while (cVar3 != '\0');
  *(byte *)(lVar11 + 600) = *(byte *)(lVar11 + 600) & 0xfb | 2;
  lVar8 = *(long *)(param_1 + 0xe8);
  if ((*(byte *)(lVar8 + 600) & 1) != 0) {
    uVar7 = *(undefined8 *)(*(long *)PTR_DAT_04bbd7c0 + 0x38);
    pMVar2 = (MutexType *)(*(long *)PTR_DAT_04bbd7c0 + 0x118);
    nn::os::LockMutex(pMVar2);
    (**(code **)PTR_DAT_04bcf4f8)(uVar7,1,lVar8 + 0x250);
    (**(code **)PTR_DAT_04bcf500)(uVar7);
    nn::os::UnlockMutex(pMVar2);
  }
  bVar9 = *(byte *)(param_1 + 0xf8);
  if ((bVar9 & 1) != 0) {
    nn::os::UnlockMutex((MutexType *)(*(long *)puVar5 + 0x98));
    bVar9 = *(byte *)(param_1 + 0xf8);
  }
  *(byte *)(param_1 + 0xf8) = bVar9 & 0xfe;
  return;
}

