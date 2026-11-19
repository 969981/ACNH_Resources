
void FUN_03941294(long *param_1)

{
  undefined8 *puVar1;
  undefined *puVar2;
  long *plVar3;
  long lVar4;
  long lVar5;
  long *plVar6;
  long lVar7;
  
  puVar2 = PTR_DAT_04bd0d40;
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = (long)(puVar2 + 0x10);
  param_1[1] = 0;
  if (*(long *)PTR_DAT_04bb2698 != 0) {
    lVar4 = FUN_038cb610(*(long *)PTR_DAT_04bb2698,param_1);
    param_1[1] = lVar4;
    if (lVar4 != 0) {
      if ((*(uint *)(lVar4 + 0xd0) & 1) == 0) {
        lVar7 = 0;
      }
      else {
        lVar7 = lVar4 + 0x90;
        nn::os::LockMutex((MutexType *)(lVar4 + 0xb0));
      }
      plVar6 = (long *)(lVar4 + 0x70);
      lVar5 = *plVar6;
      plVar3 = (long *)((long)*(int *)(lVar4 + 0x84) + (long)param_1);
      *plVar6 = (long)plVar3;
      *plVar3 = lVar5;
      plVar3[1] = (long)plVar6;
      if (lVar5 != 0) {
        *(long **)(lVar5 + 8) = plVar3;
      }
      *(int *)(lVar4 + 0x80) = *(int *)(lVar4 + 0x80) + 1;
      if (lVar7 != 0) {
        nn::os::UnlockMutex((MutexType *)(lVar7 + 0x20));
      }
    }
  }
  puVar2 = PTR_DAT_04bbd630;
  puVar1 = (undefined8 *)((long)param_1 + 0x54);
  param_1[9] = (long)puVar1;
  *(undefined4 *)(param_1 + 10) = 0x80;
  param_1[4] = 0;
  param_1[5] = 0;
  param_1[6] = (long)param_1;
  param_1[7] = 0;
  *(undefined1 *)((long)param_1 + 0xd3) = 0;
  *param_1 = (long)(puVar2 + 0x10);
  if (puVar1 != &DAT_0407ebb1) {
    *(undefined1 *)puVar1 = 0;
  }
  *(undefined1 *)((long)param_1 + 0xec) = 0;
  param_1[0x1c] = (long)param_1 + 0xec;
  puVar2 = PTR_DAT_04bb2d88;
  *(undefined4 *)(param_1 + 0x1d) = 0x80;
  *(undefined4 *)(param_1 + 0x30) = 0x80;
  puVar2 = puVar2 + 0x10;
  *(undefined1 *)((long)param_1 + 0x184) = 0;
  param_1[0x43] = 0;
  *(undefined1 *)((long)param_1 + 0x16b) = 0;
  param_1[0x2f] = (long)param_1 + 0x184;
  *(undefined1 *)((long)param_1 + 0x203) = 0;
  *(undefined1 *)(param_1 + 0x41) = 0;
  param_1[8] = (long)puVar2;
  param_1[0x1b] = (long)puVar2;
  param_1[0x2e] = (long)puVar2;
  *(undefined8 *)((long)param_1 + 0x20c) = 0;
  *(undefined2 *)(param_1 + 0x44) = 1;
  *(undefined1 *)((long)param_1 + 0x222) = 0;
  *(undefined8 *)((long)param_1 + 0x224) = 0;
  param_1[0x46] = 0;
  return;
}

