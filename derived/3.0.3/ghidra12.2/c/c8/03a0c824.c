
void FUN_03a0c824(undefined8 *param_1)

{
  long *plVar1;
  undefined *puVar2;
  long lVar3;
  undefined8 uVar4;
  long lVar5;
  long *plVar6;
  long *plVar7;
  long lVar8;
  
  puVar2 = PTR_DAT_04bd0d40;
  param_1[3] = 0;
  param_1[4] = 0;
  param_1[2] = 0;
  plVar7 = param_1 + 1;
  *plVar7 = (long)(puVar2 + 0x10);
  *param_1 = &PTR_FUN_04b6c240;
  if (DAT_05ae7600 != 0) {
    lVar3 = FUN_038cb610(DAT_05ae7600,plVar7);
    param_1[2] = lVar3;
    if (lVar3 != 0) {
      if ((*(uint *)(lVar3 + 0xd0) & 1) == 0) {
        lVar8 = 0;
      }
      else {
        lVar8 = lVar3 + 0x90;
        nn::os::LockMutex((MutexType *)(lVar3 + 0xb0));
      }
      plVar6 = (long *)(lVar3 + 0x70);
      lVar5 = *plVar6;
      plVar1 = (long *)((long)*(int *)(lVar3 + 0x84) + (long)plVar7);
      *plVar6 = (long)plVar1;
      *plVar1 = lVar5;
      plVar1[1] = (long)plVar6;
      if (lVar5 != 0) {
        *(long **)(lVar5 + 8) = plVar1;
      }
      *(int *)(lVar3 + 0x80) = *(int *)(lVar3 + 0x80) + 1;
      if (lVar8 != 0) {
        nn::os::UnlockMutex((MutexType *)(lVar8 + 0x20));
      }
    }
  }
  *(undefined4 *)(param_1 + 0xd) = 0;
  param_1[1] = &PTR_FUN_04b6c268;
  param_1[0xe] = 0;
  param_1[5] = 0;
  param_1[6] = 0;
  *(undefined4 *)(param_1 + 0xf) = 0;
  *(undefined4 *)(param_1 + 0x12) = 0;
  param_1[0x10] = 0;
  *(undefined8 *)((long)param_1 + 0x86) = 0;
  param_1[7] = plVar7;
  param_1[8] = 0;
  param_1[9] = &PTR_LAB_04b6c288;
  param_1[10] = param_1;
  param_1[0xb] = &LAB_03a0c938;
  param_1[0xc] = 0;
  uVar4 = nn::os::GetSystemTick();
  param_1[0x13] = uVar4;
  return;
}

