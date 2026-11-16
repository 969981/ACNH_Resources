
void FUN_0260ccac(undefined8 *param_1)

{
  long *plVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long *plVar6;
  long lVar7;
  undefined1 auStack_40 [16];
  
  puVar2 = PTR_DAT_04bd0d40;
  param_1[5] = 0;
  *param_1 = &PTR_FUN_04a86e50;
  param_1[1] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  *(undefined4 *)(param_1 + 6) = 0;
  param_1[8] = 0;
  plVar6 = param_1 + 7;
  *plVar6 = (long)(puVar2 + 0x10);
  lVar3 = *(long *)PTR_DAT_04bb2698;
  param_1[9] = 0;
  param_1[10] = 0;
  if (lVar3 != 0) {
    lVar3 = FUN_038cb610(lVar3,plVar6);
    param_1[8] = lVar3;
    if (lVar3 != 0) {
      if ((*(uint *)(lVar3 + 0xd0) & 1) == 0) {
        lVar7 = 0;
      }
      else {
        lVar7 = lVar3 + 0x90;
        nn::os::LockMutex((MutexType *)(lVar3 + 0xb0));
      }
      plVar5 = (long *)(lVar3 + 0x70);
      lVar4 = *plVar5;
      plVar1 = (long *)((long)*(int *)(lVar3 + 0x84) + (long)plVar6);
      *plVar5 = (long)plVar1;
      *plVar1 = lVar4;
      plVar1[1] = (long)plVar5;
      if (lVar4 != 0) {
        *(long **)(lVar4 + 8) = plVar1;
      }
      *(int *)(lVar3 + 0x80) = *(int *)(lVar3 + 0x80) + 1;
      if (lVar7 != 0) {
        nn::os::UnlockMutex((MutexType *)(lVar7 + 0x20));
      }
    }
  }
  param_1[0x17] = 0;
  param_1[7] = &PTR_FUN_04a86e70;
  param_1[0xf] = &PTR_LAB_04a86e90;
  param_1[0x10] = param_1;
  param_1[0x15] = 0;
  *(undefined2 *)(param_1 + 0x16) = 0;
  *(undefined8 *)((long)param_1 + 0xc4) = 0;
  *(undefined8 *)((long)param_1 + 0xcc) = 0;
  *(undefined8 *)((long)param_1 + 0xd4) = 0;
  *(undefined8 *)((long)param_1 + 0xdc) = 0;
  *(undefined8 *)((long)param_1 + 0xe4) = 0;
  *(undefined8 *)((long)param_1 + 0xec) = 0;
  *(undefined4 *)(param_1 + 0x18) = 0;
  param_1[0x11] = &LAB_0260cde8;
  param_1[0x12] = 0;
  param_1[0xb] = 0;
  param_1[0xc] = 0;
  param_1[0xd] = plVar6;
  param_1[0xe] = 0;
  param_1[0x13] = 0;
  param_1[0x14] = 0;
  FUN_0260cdfc(auStack_40);
  return;
}

