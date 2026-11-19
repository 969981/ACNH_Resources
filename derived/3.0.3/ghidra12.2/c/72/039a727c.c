
void FUN_039a727c(undefined8 *param_1)

{
  long *plVar1;
  undefined8 uVar2;
  undefined *puVar3;
  undefined8 uVar4;
  undefined8 uVar5;
  long lVar6;
  long lVar7;
  undefined4 *puVar8;
  
  *param_1 = &PTR_FUN_04b6a3a0;
  if (param_1[0x2d] != 0) {
    FUN_039499cc(DAT_05ae90c0);
    puVar3 = PTR_DAT_04bb31c8;
    param_1[0x2d] = 0;
    puVar8 = *(undefined4 **)(*(long *)puVar3 + 0x18);
    *(undefined4 *)(param_1 + 0x88) = *puVar8;
    *(undefined4 *)((long)param_1 + 0x444) = puVar8[1];
    param_1[0x89] = *(undefined8 *)(puVar8 + 2);
    param_1[0x8a] = *(undefined8 *)(puVar8 + 4);
    *(undefined4 *)(param_1 + 0x8b) = puVar8[6];
    *(undefined4 *)((long)param_1 + 0x45c) = puVar8[7];
    param_1[0x8c] = *(undefined8 *)(puVar8 + 8);
    param_1[0x8d] = *(undefined8 *)(puVar8 + 10);
    uVar4 = *(undefined8 *)(puVar8 + 0xe);
    uVar2 = *(undefined8 *)(puVar8 + 0x10);
    uVar5 = *(undefined8 *)(puVar8 + 0xc);
    *(undefined8 *)((long)param_1 + 0x487) = *(undefined8 *)((long)puVar8 + 0x47);
    param_1[0x8f] = uVar4;
    param_1[0x90] = uVar2;
    param_1[0x8e] = uVar5;
    FUN_038fd1e0(param_1 + 0x92);
    FUN_038fd2f0(param_1 + 0x92,puVar8 + 0x14);
    uVar4 = *(undefined8 *)(puVar8 + 0x24);
    *(undefined4 *)(param_1 + 0x9b) = puVar8[0x26];
    param_1[0x9a] = uVar4;
  }
  FUN_038fd0e0(param_1 + 0x92);
  puVar3 = PTR_DAT_04bd1408;
  param_1[0x87] = 0;
  param_1[0x2e] = puVar3 + 0x10;
  FUN_0034f82c(param_1 + 0x7f);
  FUN_0034f6d0(param_1 + 100);
  param_1[0x11] = PTR_DAT_04bbd508 + 0x10;
  FUN_038fd0e0(param_1 + 0x1c);
  lVar6 = param_1[1];
  *param_1 = &PTR_FUN_04b64428;
  if (lVar6 != 0) {
    if (lVar6 == 1) {
      return;
    }
    if ((*(uint *)(lVar6 + 0xd0) & 1) == 0) {
      lVar7 = 0;
    }
    else {
      lVar7 = lVar6 + 0x90;
      nn::os::LockMutex((MutexType *)(lVar6 + 0xb0));
    }
    plVar1 = (long *)((long)*(int *)(lVar6 + 0x84) + (long)param_1);
    if (*plVar1 != 0) {
      *(long *)(*plVar1 + 8) = plVar1[1];
    }
    if ((long *)plVar1[1] != (long *)0x0) {
      *(long *)plVar1[1] = *plVar1;
    }
    *plVar1 = 0;
    plVar1[1] = 0;
    *(int *)(lVar6 + 0x80) = *(int *)(lVar6 + 0x80) + -1;
    if (lVar7 != 0) {
      nn::os::UnlockMutex((MutexType *)(lVar7 + 0x20));
    }
  }
  param_1[1] = 1;
  return;
}

