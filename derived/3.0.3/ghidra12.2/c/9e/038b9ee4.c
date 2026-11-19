
void FUN_038b9ee4(undefined8 *param_1,undefined8 param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  
  FUN_038bd40c();
  param_1[0x1e] = 0;
  param_1[0x1f] = 0;
  puVar1 = PTR_DAT_04bd0d40;
  param_1[0x20] = 0;
  param_1[0x21] = 0;
  *param_1 = &PTR_FUN_04b63868;
  plVar5 = param_1 + 0x1a;
  *plVar5 = (long)(puVar1 + 0x10);
  param_1[0x24] = &DAT_0407ebb1;
  param_1[0x22] = plVar5;
  param_1[0x23] = &PTR_LAB_048f9770;
  param_1[0x1b] = 0;
  lVar2 = *(long *)PTR_DAT_04bb2698;
  param_1[0x1c] = 0;
  param_1[0x1d] = 0;
  if (lVar2 != 0) {
    lVar2 = FUN_038cb610(lVar2,plVar5);
    param_1[0x1b] = lVar2;
    if (lVar2 != 0) {
      if ((*(uint *)(lVar2 + 0xd0) & 1) == 0) {
        lVar6 = 0;
      }
      else {
        lVar6 = lVar2 + 0x90;
        nn::os::LockMutex((MutexType *)(lVar2 + 0xb0));
      }
      plVar4 = (long *)(lVar2 + 0x70);
      lVar3 = *plVar4;
      plVar5 = (long *)((long)*(int *)(lVar2 + 0x84) + (long)plVar5);
      *plVar4 = (long)plVar5;
      *plVar5 = lVar3;
      plVar5[1] = (long)plVar4;
      if (lVar3 != 0) {
        *(long **)(lVar3 + 8) = plVar5;
      }
      *(int *)(lVar2 + 0x80) = *(int *)(lVar2 + 0x80) + 1;
      if (lVar6 != 0) {
        nn::os::UnlockMutex((MutexType *)(lVar6 + 0x20));
      }
    }
  }
  puVar1 = PTR_DAT_04bb24a8;
  *(undefined4 *)((long)param_1 + 0x154) = 3;
  param_1[0x25] = &PTR_LAB_04b63930;
  param_1[0x2b] = 0;
  param_1[0x2c] = 0;
  param_1[0x26] = param_1;
  param_1[0x27] = 0xb0;
  param_1[0x1a] = puVar1 + 0x10;
  param_1[0x28] = 1;
  param_1[0x29] = 0;
  if (param_3 != 0) {
    param_1[0x24] = param_3;
  }
  return;
}

