
void FUN_01c814b0(long *param_1)

{
  undefined8 *puVar1;
  long *plVar2;
  undefined *puVar3;
  long lVar4;
  long lVar5;
  undefined1 *puVar6;
  long *plVar7;
  long lVar8;
  
  puVar3 = PTR_DAT_04bd0d40;
  puVar1 = (undefined8 *)((long)param_1 + 0x1f74);
  param_1[2] = 0;
  param_1[3] = 0;
  *param_1 = (long)(puVar3 + 0x10);
  param_1[1] = 0;
  if (DAT_05ae7600 != 0) {
    lVar4 = FUN_038cb610(DAT_05ae7600,param_1);
    param_1[1] = lVar4;
    if (lVar4 != 0) {
      if ((*(uint *)(lVar4 + 0xd0) & 1) == 0) {
        lVar8 = 0;
      }
      else {
        lVar8 = lVar4 + 0x90;
        nn::os::LockMutex((MutexType *)(lVar4 + 0xb0));
      }
      plVar7 = (long *)(lVar4 + 0x70);
      lVar5 = *plVar7;
      plVar2 = (long *)((long)*(int *)(lVar4 + 0x84) + (long)param_1);
      *plVar7 = (long)plVar2;
      *plVar2 = lVar5;
      plVar2[1] = (long)plVar7;
      if (lVar5 != 0) {
        *(long **)(lVar5 + 8) = plVar2;
      }
      *(int *)(lVar4 + 0x80) = *(int *)(lVar4 + 0x80) + 1;
      if (lVar8 != 0) {
        nn::os::UnlockMutex((MutexType *)(lVar8 + 0x20));
      }
    }
  }
  puVar6 = (undefined1 *)((long)param_1 + 0xa3);
  *param_1 = (long)&PTR_FUN_04a43d20;
  lVar4 = 100;
  do {
    *(undefined4 *)(puVar6 + -0x73) = 0x20;
    lVar4 = lVar4 + -2;
    puVar6[-0x6f] = 0;
    *(undefined1 **)(puVar6 + -0x7b) = puVar6 + -0x6f;
    puVar6[-0x50] = 0;
    puVar6[-0x1f] = 0;
    *(undefined ***)(puVar6 + -0x83) = &PTR_LAB_048f9700;
    *(undefined1 **)(puVar6 + -0x2b) = puVar6 + -0x1f;
    *(undefined4 *)(puVar6 + -0x23) = 0x20;
    *puVar6 = 0;
    *(undefined ***)(puVar6 + -0x33) = &PTR_LAB_048f9700;
    puVar6 = puVar6 + 0xa0;
  } while (lVar4 != 0);
  param_1[0x3ed] = (long)puVar1;
  *(undefined1 *)((long)param_1 + 0x2073) = 0;
  *(undefined4 *)(param_1 + 0x3ee) = 0x100;
  if (puVar1 != &DAT_0407ebb1) {
    *(undefined1 *)puVar1 = 0;
  }
  *(undefined4 *)(param_1 + 0x40f) = 0;
  param_1[0x3ec] = (long)&PTR_LAB_048f9a70;
  return;
}

