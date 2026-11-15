
void FUN_020475d0(long param_1)

{
  long *plVar1;
  int iVar2;
  long *plVar3;
  undefined *puVar4;
  long lVar5;
  long lVar6;
  long *plVar7;
  long lVar8;
  undefined8 *puVar9;
  
  puVar4 = PTR_DAT_04bb3350;
  lVar6 = *(long *)(param_1 + 0x2b8);
  if (lVar6 == 0) {
    lVar8 = 1;
    iVar2 = *(int *)(param_1 + 0x2c0);
    plVar3 = (long *)PTR_DAT_04bb27c8;
  }
  else {
    lVar5 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)PTR_DAT_04bb3350 + 0x68));
    lVar8 = *(long *)(lVar5 + 0xa8);
    *(long *)(lVar5 + 0xa8) = lVar6;
    iVar2 = *(int *)(param_1 + 0x2c0);
    plVar3 = (long *)PTR_DAT_04bb27c8;
  }
  PTR_DAT_04bb27c8 = (undefined *)plVar3;
  if (iVar2 != 0) {
    puVar9 = *(undefined8 **)(param_1 + 0x2c8);
    lVar6 = (long)iVar2 << 3;
    do {
      plVar7 = (long *)*puVar9;
      lVar5 = *plVar3;
      if (lVar5 != 0) {
        if ((plVar7 != (long *)0x0) && (plVar7[2] != 0 || plVar7[1] != 0)) {
          nn::os::LockMutex((MutexType *)(lVar5 + 0x50));
          plVar1 = (long *)((long)*(int *)(lVar5 + 0x84) + (long)plVar7);
          if (*plVar1 != 0) {
            *(long *)(*plVar1 + 8) = plVar1[1];
          }
          if ((long *)plVar1[1] != (long *)0x0) {
            *(long *)plVar1[1] = *plVar1;
          }
          *plVar1 = 0;
          plVar1[1] = 0;
          *(int *)(lVar5 + 0x80) = *(int *)(lVar5 + 0x80) + -1;
          nn::os::UnlockMutex((MutexType *)(lVar5 + 0x50));
        }
        (**(code **)(*plVar7 + 0x20))(plVar7);
        plVar7 = (long *)*puVar9;
      }
      if (plVar7 != (long *)0x0) {
        (**(code **)(*plVar7 + 0x18))(plVar7);
      }
      puVar9 = puVar9 + 1;
      lVar6 = lVar6 + -8;
    } while (lVar6 != 0);
  }
  *(undefined4 *)(param_1 + 0x2c0) = 0;
  if (lVar8 != 1) {
    lVar6 = nn::os::GetTlsValue(*(undefined4 *)(*(long *)puVar4 + 0x68));
    *(long *)(lVar6 + 0xa8) = lVar8;
  }
  return;
}

