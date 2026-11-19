
void FUN_03a0f48c(long *param_1)

{
  undefined *puVar1;
  undefined *puVar2;
  long *plVar3;
  short sVar4;
  uint uVar5;
  long lVar6;
  long lVar7;
  
  *param_1 = (long)&PTR_FUN_04b6c360;
  puVar2 = PTR_DAT_04bbd510;
  if (param_1[0x3b] != 0) {
    FUN_039499cc(*(undefined8 *)PTR_DAT_04bbd510);
    param_1[0x3b] = 0;
  }
  if (param_1[0x58] != 0) {
    FUN_039499cc(*(undefined8 *)puVar2);
    param_1[0x58] = 0;
  }
  if (param_1[0x75] != 0) {
    FUN_039499cc(*(undefined8 *)puVar2);
    param_1[0x75] = 0;
  }
  if (param_1[0x92] != 0) {
    FUN_039499cc(*(undefined8 *)puVar2);
    param_1[0x92] = 0;
  }
  lVar6 = param_1[0x12d];
  param_1[300] = (long)(PTR_DAT_04bd0d40 + 0x10);
  if (lVar6 != 0) {
    if (lVar6 == 1) goto LAB_03a0f590;
    if ((*(uint *)(lVar6 + 0xd0) & 1) == 0) {
      lVar7 = 0;
    }
    else {
      lVar7 = lVar6 + 0x90;
      nn::os::LockMutex((MutexType *)(lVar6 + 0xb0));
    }
    plVar3 = (long *)((long)param_1 + (long)*(int *)(lVar6 + 0x84) + 0x960);
    if (*plVar3 != 0) {
      *(long *)(*plVar3 + 8) = plVar3[1];
    }
    if ((long *)plVar3[1] != (long *)0x0) {
      *(long *)plVar3[1] = *plVar3;
    }
    *plVar3 = 0;
    plVar3[1] = 0;
    *(int *)(lVar6 + 0x80) = *(int *)(lVar6 + 0x80) + -1;
    if (lVar7 != 0) {
      nn::os::UnlockMutex((MutexType *)(lVar7 + 0x20));
    }
  }
  param_1[0x12d] = 1;
LAB_03a0f590:
  puVar2 = PTR_DAT_04bc1010;
  if (*(short *)((long)param_1 + 0x95a) != -1) {
    lVar6 = *(long *)PTR_DAT_04bc1010;
    nn::os::LockMutex((MutexType *)(lVar6 + 0x580));
    uVar5 = (int)*(short *)((long)param_1 + 0x95a) - (uint)*(ushort *)(lVar6 + 0x5c0);
    if (*(uint *)(lVar6 + 0x5a0) <= uVar5) {
      uVar5 = 0;
    }
    lVar7 = *(long *)(lVar6 + 0x5a8) + (long)(int)uVar5 * 0x80;
    sVar4 = *(short *)(lVar7 + 0x76) + -1;
    *(short *)(lVar7 + 0x76) = sVar4;
    if (sVar4 == 0) {
      *(short *)(lVar6 + 0x5c4) = *(short *)(lVar6 + 0x5c4) + -1;
    }
    nn::os::UnlockMutex((MutexType *)(lVar6 + 0x580));
    *(undefined2 *)((long)param_1 + 0x95a) = 0xffff;
  }
  FUN_038fd0e0(param_1 + 0x11a);
  puVar1 = PTR_DAT_04bbd500 + 0x10;
  param_1[0xf4] = (long)puVar1;
  FUN_038fd0e0(param_1 + 0xff);
  param_1[0xd8] = (long)(PTR_DAT_04bbd508 + 0x10);
  FUN_038fd0e0(param_1 + 0xe3);
  param_1[0xaf] = (long)puVar1;
  FUN_038fd0e0(param_1 + 0xba);
  if (*(short *)((long)param_1 + 0x572) != -1) {
    lVar6 = *(long *)puVar2;
    nn::os::LockMutex((MutexType *)(lVar6 + 0x580));
    uVar5 = (int)*(short *)((long)param_1 + 0x572) - (uint)*(ushort *)(lVar6 + 0x5c0);
    if (*(uint *)(lVar6 + 0x5a0) <= uVar5) {
      uVar5 = 0;
    }
    lVar7 = *(long *)(lVar6 + 0x5a8) + (long)(int)uVar5 * 0x80;
    sVar4 = *(short *)(lVar7 + 0x76) + -1;
    *(short *)(lVar7 + 0x76) = sVar4;
    if (sVar4 == 0) {
      *(short *)(lVar6 + 0x5c4) = *(short *)(lVar6 + 0x5c4) + -1;
    }
    nn::os::UnlockMutex((MutexType *)(lVar6 + 0x580));
    *(undefined2 *)((long)param_1 + 0x572) = 0xffff;
  }
  FUN_038fd0e0(param_1 + 0x9d);
  if (*(short *)((long)param_1 + 0x48a) != -1) {
    lVar6 = *(long *)puVar2;
    nn::os::LockMutex((MutexType *)(lVar6 + 0x580));
    uVar5 = (int)*(short *)((long)param_1 + 0x48a) - (uint)*(ushort *)(lVar6 + 0x5c0);
    if (*(uint *)(lVar6 + 0x5a0) <= uVar5) {
      uVar5 = 0;
    }
    lVar7 = *(long *)(lVar6 + 0x5a8) + (long)(int)uVar5 * 0x80;
    sVar4 = *(short *)(lVar7 + 0x76) + -1;
    *(short *)(lVar7 + 0x76) = sVar4;
    if (sVar4 == 0) {
      *(short *)(lVar6 + 0x5c4) = *(short *)(lVar6 + 0x5c4) + -1;
    }
    nn::os::UnlockMutex((MutexType *)(lVar6 + 0x580));
    *(undefined2 *)((long)param_1 + 0x48a) = 0xffff;
  }
  FUN_038fd0e0(param_1 + 0x80);
  if (*(short *)((long)param_1 + 0x3a2) != -1) {
    lVar6 = *(long *)puVar2;
    nn::os::LockMutex((MutexType *)(lVar6 + 0x580));
    uVar5 = (int)*(short *)((long)param_1 + 0x3a2) - (uint)*(ushort *)(lVar6 + 0x5c0);
    if (*(uint *)(lVar6 + 0x5a0) <= uVar5) {
      uVar5 = 0;
    }
    lVar7 = *(long *)(lVar6 + 0x5a8) + (long)(int)uVar5 * 0x80;
    sVar4 = *(short *)(lVar7 + 0x76) + -1;
    *(short *)(lVar7 + 0x76) = sVar4;
    if (sVar4 == 0) {
      *(short *)(lVar6 + 0x5c4) = *(short *)(lVar6 + 0x5c4) + -1;
    }
    nn::os::UnlockMutex((MutexType *)(lVar6 + 0x580));
    *(undefined2 *)((long)param_1 + 0x3a2) = 0xffff;
  }
  FUN_038fd0e0(param_1 + 99);
  if (*(short *)((long)param_1 + 0x2ba) != -1) {
    lVar6 = *(long *)puVar2;
    nn::os::LockMutex((MutexType *)(lVar6 + 0x580));
    uVar5 = (int)*(short *)((long)param_1 + 0x2ba) - (uint)*(ushort *)(lVar6 + 0x5c0);
    if (*(uint *)(lVar6 + 0x5a0) <= uVar5) {
      uVar5 = 0;
    }
    lVar7 = *(long *)(lVar6 + 0x5a8) + (long)(int)uVar5 * 0x80;
    sVar4 = *(short *)(lVar7 + 0x76) + -1;
    *(short *)(lVar7 + 0x76) = sVar4;
    if (sVar4 == 0) {
      *(short *)(lVar6 + 0x5c4) = *(short *)(lVar6 + 0x5c4) + -1;
    }
    nn::os::UnlockMutex((MutexType *)(lVar6 + 0x580));
    *(undefined2 *)((long)param_1 + 0x2ba) = 0xffff;
  }
  FUN_038fd0e0(param_1 + 0x46);
  puVar2 = PTR_DAT_04bbd578 + 0x10;
  param_1[0x36] = (long)puVar2;
  param_1[0x32] = (long)puVar2;
  param_1[0x2e] = (long)puVar2;
  param_1[0x2a] = (long)puVar2;
  param_1[0x26] = (long)puVar2;
  param_1[0x22] = (long)puVar2;
  param_1[0x1e] = (long)puVar2;
  param_1[0x1a] = (long)puVar2;
  param_1[0x16] = (long)puVar2;
  param_1[0x12] = (long)puVar2;
  param_1[0xe] = (long)puVar2;
  param_1[10] = (long)puVar2;
  puVar1 = PTR_DAT_04bd1068;
  param_1[6] = (long)puVar2;
  *param_1 = (long)(puVar1 + 0x10);
  return;
}

