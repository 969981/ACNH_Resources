
void FUN_03f2f3b8(undefined4 param_1,undefined8 *param_2,undefined4 param_3)

{
  long *plVar1;
  undefined *puVar2;
  long lVar3;
  long lVar4;
  long *plVar5;
  long lVar6;
  
  param_2[4] = 0;
  param_2[5] = 0;
  param_2[6] = param_2;
  param_2[7] = 0;
  param_2[2] = 0;
  param_2[3] = 0;
  *param_2 = &PTR_FUN_04b64428;
  param_2[1] = 0;
  if (DAT_05ae7600 != 0) {
    lVar3 = FUN_038cb610(DAT_05ae7600,param_2);
    param_2[1] = lVar3;
    if (lVar3 != 0) {
      if ((*(uint *)(lVar3 + 0xd0) & 1) == 0) {
        lVar6 = 0;
      }
      else {
        lVar6 = lVar3 + 0x90;
        nn::os::LockMutex((MutexType *)(lVar3 + 0xb0));
      }
      plVar5 = (long *)(lVar3 + 0x70);
      lVar4 = *plVar5;
      plVar1 = (long *)((long)*(int *)(lVar3 + 0x84) + (long)param_2);
      *plVar5 = (long)plVar1;
      *plVar1 = lVar4;
      plVar1[1] = (long)plVar5;
      if (lVar4 != 0) {
        *(long **)(lVar4 + 8) = plVar1;
      }
      *(int *)(lVar3 + 0x80) = *(int *)(lVar3 + 0x80) + 1;
      if (lVar6 != 0) {
        nn::os::UnlockMutex((MutexType *)(lVar6 + 0x20));
      }
    }
  }
  *(undefined1 *)((long)param_2 + 0x73) = 0;
  *(undefined1 *)((long)param_2 + 0x54) = 0;
  puVar2 = PTR_DAT_04bb2028;
  *(undefined4 *)(param_2 + 10) = 0x20;
  *param_2 = &PTR_LAB_04ba8af8;
  *(undefined4 *)(param_2 + 0xf) = param_1;
  *(undefined4 *)((long)param_2 + 0x7c) = param_3;
  param_2[8] = puVar2 + 0x10;
  param_2[9] = (undefined1 *)((long)param_2 + 0x54);
  return;
}

