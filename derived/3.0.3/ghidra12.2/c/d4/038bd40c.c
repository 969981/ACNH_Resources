
void FUN_038bd40c(long *param_1,undefined8 *param_2,long param_3)

{
  undefined *puVar1;
  long lVar2;
  long lVar3;
  long *plVar4;
  long *plVar5;
  long lVar6;
  
  param_1[6] = 0;
  param_1[7] = 0;
  param_1[4] = 0;
  param_1[5] = 0;
  puVar1 = PTR_DAT_04bd0d40 + 0x10;
  param_1[8] = (long)param_1;
  *param_1 = (long)puVar1;
  param_1[1] = 0;
  puVar1 = PTR_DAT_04bb2698;
  param_1[2] = 0;
  param_1[3] = 0;
  if (*(long *)puVar1 != 0) {
    lVar2 = FUN_038cb610(*(long *)puVar1,param_1);
    param_1[1] = lVar2;
    if (lVar2 != 0) {
      if ((*(uint *)(lVar2 + 0xd0) & 1) == 0) {
        lVar6 = 0;
      }
      else {
        lVar6 = lVar2 + 0x90;
        nn::os::LockMutex((MutexType *)(lVar2 + 0xb0));
      }
      plVar5 = (long *)(lVar2 + 0x70);
      lVar3 = *plVar5;
      plVar4 = (long *)((long)*(int *)(lVar2 + 0x84) + (long)param_1);
      *plVar5 = (long)plVar4;
      *plVar4 = lVar3;
      plVar4[1] = (long)plVar5;
      if (lVar3 != 0) {
        *(long **)(lVar3 + 8) = plVar4;
      }
      *(int *)(lVar2 + 0x80) = *(int *)(lVar2 + 0x80) + 1;
      if (lVar6 != 0) {
        nn::os::UnlockMutex((MutexType *)(lVar6 + 0x20));
      }
    }
  }
  param_1[9] = (long)(PTR_DAT_04bb2020 + 0x10);
  param_1[10] = (long)&DAT_0407ebb1;
  *param_1 = (long)&PTR_FUN_04b63be8;
  lVar2 = param_2[2];
  *(undefined4 *)(param_1 + 0xc) = 0;
  param_1[0xd] = 0;
  param_1[0xe] = 0;
  param_1[0xf] = (long)param_1;
  param_1[0x10] = 0;
  param_1[0xb] = lVar2;
  plVar4 = (long *)*param_2;
  param_1[0x11] = *plVar4;
  lVar2 = plVar4[1];
  lVar6 = plVar4[2];
  lVar3 = plVar4[4];
  param_1[0x14] = plVar4[3];
  param_1[0x15] = lVar3;
  param_1[0x12] = lVar2;
  param_1[0x13] = lVar6;
  lVar2 = param_2[1];
  *(undefined4 *)(param_1 + 0x18) = 0;
  param_1[0x19] = 0;
  *(undefined4 *)(param_1 + 0xc) = 0;
  param_1[10] = param_3;
  param_1[0x16] = lVar2;
  param_1[0x17] = 0x100000000;
  return;
}

